## CSCI 340 	 	             Assignment 1                            Fall 2019 

## (40 points) 
 
# Randomly Generated Integers 
 
For this computer assignment, you are to write a C++ program to generate random integers in the range [ LOW = 1, HIGH = 10000 ] and to store them in a vector < int >. Then, sort the contents of the vector (in ascending order) and display it on standard output. 
 
The main () routine is already provided for you. sort( ) function from the STL is used to sort the contents of the vector. You are required to implement the following routines in your program: 
 
•	void genRndNums ( vector < int >& v, int vec_size, int seed ) : This routine generates vec_size random integers and puts them in vector v. Initializes the random number generator (RNG) by calling the function srand ( ) with the seed value seed, and generates random integers by calling the function rand ( ). To use srand and rand, you need the header <cstdlib>. 
 
•	void printVec ( const vector < int >& v, int vec_size 
) : This routine displays the contents of vector v (with size vec_size) on standard output, printing exactly NO_ITEMS = 12 numbers on a single line, except perhaps the last line. The sorted numbers need to be properly aligned on the output. For each printed number, allocate ITEM_W = 5 spaces on standard output. 
 
Programming Notes: 
 
•	This assignment only requires one source file “assignment1.cc”. This program only contains three functions: genRndNums, printVec, and main. main is already implemented. You can obtain the partially implemented assignment1.cc from the directory 
https://github.com/lschoeneman1/csc340-assignment-1/tree/master. 

You can download the files, or you can use git if you know how.  If you don’t, I would highly suggest taking a minute to learn the basics.  Here is a quick tutorial.
https://www.freecodecamp.org/news/learn-the-basics-of-git-in-under-10-minutes-da548267cc91/
Git isn’t required, just a suggestion.

You need to include any necessary headers and add necessary global constants, namespace references, etc.
  
•	You are not allowed to use any I/O functions from the C library, such as scanf or printf. Instead, use the I/O functions from the C++ library, such as cin or cout. 
 
•	Execute the srand ( ) function only once before generating the first random integer with the given seed value SEED. The rand ( ) function generates a random integer in the range [ 0, RAND_MAX ], where the constant value RAND_MAX is the largest random integer returned by the rand ( ) function and its value is system dependent. To normalize the return value to a value in the 
range [ LOW, HIGH ], execute: rand ( ) % ( HIGH – LOW + 1 ) + LOW.  
•	To compile the source file, execute “ g++ -Wall assignment1.cc –o assignment1.exe”.  This will create the executable file assignment1.exe. To test your program, execute “./assignment1.exe &> 
assignment1.out”, which will put the output (including any error messages) in file assignment1.out. You can find the correct output of this program in file assignment1.out in the directory shown in the last page. 
 
•	Add documentation to your source file. 
 
•	Prepare your Makefile so that the TA only needs to invoke the command “make” to compile your source file and produce the executable file.  
 
•	When your program is ready, submit your source file and Makefile to your TA by following the Assignment Submission Instructions located in blackboard and here https://github.com/lschoeneman1/csc340-assignment-1/blob/master/Assignment%20Submission.pdf
