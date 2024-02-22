//******************************************
// Write a C++ program that implements the following program
// analysis:
// Get quarters, dimes, and nickels from the user
// Change in pennies = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies
// Print change in pennies

//header file
#include <iostream>

using namespace std;

int main() {

  //Declare variables
  int quarters;
  int dimes;
  int nickels;
  int pennies;
  int changeInPennies;

//Statements
  
  //Calculate change conversion
changeInPennies = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;

  //Print change in pennies
cout << "The number of pennies to be returned is " << changeInPennies;
}