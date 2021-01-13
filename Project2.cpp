#include<iostream>

# define N 9

using namespace std;

bool searchEmptyposition(int mat[N][N],int &row,int &col)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(mat[i][j]==0)
			{
				row=i;
				col=j;
				return true;
			}
		}
	}
	return false;
}

bool ifsaferow(int mat[N][N], int row,int num){
	int i,j;
	for(i=0;i<N;i++)
	{
		if(mat[row][i]==num){
			return false;
		}
	}
	return true;
}

bool ifsafecol(int mat[N][N],int col,int num)
{
    int i,j;
	for(i=0;i<N;i++)
	{
		if(mat[i][col]==num)
		{
			return false;
		}
	}
	return true;
}

bool ifsafebox(int mat[N][N],int row,int col,int num){
   int i,j;
   	int topleftrow=row-(row%3);
	int toprightcol=col-(col%3);
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	    {
   		if(mat[i+topleftrow][j+toprightcol]==num){
		   
   		  return false;
   	}
   }
}
     return true;
   		
}

bool ifsafe(int mat[N][N],int row,int col,int num){
	if(ifsaferow(mat,row,num)&& ifsafecol(mat,col,num)&&ifsafebox(mat,row,col,num)){
		return 1;
	}
	return 0;
}

bool solve_sudoku(int mat[N][N]){
	int row,col,i,j;
	if(!searchEmptyposition(mat,row,col)){
		return true;
	}
	for(i=1;i<=N;i++){
		if(ifsafe(mat,row,col,i)){
			mat[row][col]=i;
			if(solve_sudoku(mat)){
				return true;
			}
			mat[row][col]=0;
		}
	}
	return false;
}


int main()
{
	int mat[N][N];
	int i,j;
	cout<<"|||||||||||||SUDOKU SOLVER|||||||||||||";
	for(i=0;i<N;i++)
	{
		string s;
		cin>>s;
		for(j=0;j<s.length();j++)
		{
			mat[i][j]=s[j]-'0';
		}
	}
	
	solve_sudoku(mat);
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
