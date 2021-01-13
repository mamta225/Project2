# Project2
    SUDOKU SOLVER


CONTENTS OF THIS FILE
 - - - - - - - - - - - - - - - - - - - - -
*Introduction
*Technology used 
*Language used
*Installation
*How can a user run and use this project?
*Functions and methods used 
*Project Status

INTRODUCTION
 - - - - - - - - - - - - - - - - - - - - -

This is a project that is somewhere related to a game Sudoku  .In this project we had to create  a program which  could complete a partially filled Sudoku and display the final complete Sudoku solution by using recursion and backtracking .

Before moving  towards the program let us first look at a  brief explanation of what Sudoku actually is . So , the classic Sudoku game involves a grid of 81 squares. The grid is divided into nine blocks, each containing nine squares. The rules of the game are simple: each of the nine blocks has to contain all the numbers 1-9 within its squares. Each number can only appear once in a row, column or box.
 In other words we can say that a Sudoku is a  a puzzle in which missing numbers are to be filled into a 9 by 9 grid of squares which are subdivided into 3 by 3 boxes so that every row, every column, and every box contains the numbers 1 to 9.

Now moving towards the program , in this program we have made use of recursion and backtracking  . Using backtracking algorithm, we will try to solve Sudoku problem. When some cell is filled with a digit, it checks whether it is valid or not. When it is not valid, it checks for other numbers. If all numbers are checked from 1-9, and no valid digit found to place, it backtracks to previous option.

One algorithm to solve Sudoku puzzles is the backtracking algorithm. Here we essentially  keep trying numbers in empty spots until there aren't any that are possible and then we  backtrack and try different numbers in the previous slots.
In this we  try to fill the Sudoku correctly and find an appropriate solution to our partially filled Sudoku  by filling the empty slots one by one .


 
TECHNOLOGY USED
 - - - - - - - - - - - - - - - - - - - - - - - - -
To create this program the technology that I have used here is very simple and basic . I have made use of a very common C/C++ compiler to compile my program which is DEV C++ . This compiler can be easily downloaded from anywhere around the internet . You can download this compiler from the link given below 

LINK TO DOWNLOAD DEV C++:

https://sourceforge.net/projects/orwelldevcpp/

We can use any other compiler also for compiling our code as a number of other compilers are also available in the internet with various different types of properties  and therefore we can make use of any compiler we prefer to use . 

LANGUAGE USED 
 - - - - - - - - - -- - - - -- -- - - - - - - -

The language that I have used for making this project is C++ . Any other person who wishes to create a Sudoku solver program can use any language of their choise , which they are most habitual to.

INSTALLATION
 - - - - - - - - - - - - - - - - - - - - - - - - -

To make this program work we do not essentially require any other specific kind of application or any other new kind of a technology as this is a simple C++ program which can simply be complied used any complier and since I used DEV C++  which was previously installed in my system so  I did not had to install anything for making this project . 

How can a user run and use this project?
 - - - - - - - -- -- - --- - -- - -- - - -- - - -- - - -- - -- - - - 

Any user can run and use this program very simply by using any compiler . All they need to do is to simply paste this code in the compiler and compile the program , once compiled they need to provide a desired and accurate partially filled Sudoku as  input and as a result they will get a completely filled accurate Sudoku as an output .

FUNCTIONS AND METHODS USED

We have used various different types of  functions and methods in this program . Let us grow through all the functions we have used  one by one :


1 .  main function

        We  have defined N as 9 in this program and in the main function we are running a loop from 0 to N and then we will enter a string and further run a loop from 0 until the length of the string and after that we will convert the string to integer by subtracting character 0 from it .Now we will solve our Sudoku and after solving the Sudoku we will print the elements present in the Sudoku.

2 .  searchEmptyposition function 

       This function traverses the whole matrix and if 0 th position is found it reassigns  rows and columns to that position and then we will return true if 0 is present and if 0 is not present then we will return false

3.   solve_sudoku  function 

        In this we will first of all  declare rows and columns and then we will check if any position is empty or not , if any position is not empty then we will return true and if we get 0 then we will run a loop from i= 1 to N and we will check what value from 1 to 9 can be safely placed at that position and if that I is safe to fill in empty position then we will place that number in that row and column and we simply call recursion that we place a number in a box  and this function will find the next zer or empty position and fill that position and if our sudoku is solved we will return true and if  it is  not solved then we will mark that zero and backtrack,i.e. if we are not able to solve then we will reassign that value and then we will return false at the end. 

    4 .  ifsafe function 

        In this we are passing our matrix , row, column, and the number we are placing      and if that number is safe to place in a row , safe to place in a column as well as safe to place in a box then we can place that number  and we will return true and if not then we will return false.

   5 .  ifsaferow function
   
        In this we are passing matrix , row and the number  to be placed and are
        Simply checking if the same is present somewhere is the same row or not  for this we are traversing the row and if the number that we wish to place is already present in that row then we will return false and if that number is not present in the row then we will return true.

   6 .  ifsafecolumn function
           
        Just like we did for checking if a row is safe or not we will also check if a column is safe or not  .In this we are passing matrix , column and the numberto be  placed and are  simply checking if the same is present somewhere in the same  column or not  for this we are traversing the row and if the number that we wish to place is already present in that column then we will return falseand if that number is not present in the column then we will return true.

    7 . ifsafebox function

       In this function we are  making two variables topleftrow and toprightcol  and we will find the top left position by using the formulas row-(row%3) and col -( col%3) for row and column respectively and after that we will iterate in the box from 0 to 3 as size of the box is 3*3 and then we will check if that element is found in box or not and if found then we will return false else we will return true .   

    PROJECT STATUS
     - - - - -  - - - - - - - - - - - - - - - - -
      
      The project has been successfully completed and has also been checked . Hence, this code can now be used to solve any partially filled Sudoku.  




 





