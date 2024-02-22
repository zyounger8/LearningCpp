//******************************************
// Write a C++ program that implements the following program
// analysis:
// Get quarters, dimes, and nickels, and pennies from the user
// Change in pennies = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies
// Print change in pennies
//******************************************

//header file
#include <iostream>

using namespace std;

int main() {
  
 //declare variables
  int quarters; // variable to hold quantity of quarters given
  int dimes; // variable to hold quantity of dimes given
  int nickels; // variable to hold quantity of nickels given
  int pennies; // variable to hold quantity of pennies given
  int changeInPennies; // variable to hold penny conversion

  //Statements: Step 1 - Step 11
  cout << "Enter the number of quarters you have deposited: "; //Step 1
  cin >> quarters; //Step 2
  cout << endl;

  cout << "You have entered " << quarters << " quarters.\n" << endl; //Step 3

  cout << "Enter the number of dimes you have deposited: "; //Step 4
  cin >> dimes; //Step 5
  cout << endl;

  cout << "You have entered " << dimes << " dimes.\n" << endl; //Step 6
  
  cout << "Enter the number of nickels you have deposited: "; //Step 6
  cin >> nickels; //Step 7
  cout << endl;

  cout << "You have entered "  << nickels << " nickels.\n" << endl; //Step 8

  cout << "Enter the number of pennies you have deposited: "; //Step  9
  cin >> pennies; //Step 10
  cout << endl;

cout << "You have entered " << pennies << " pennies.\n" << endl; // Step 11

  //Calculate change conversion
changeInPennies = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;

  //Print change in pennies
cout << "The number of pennies to be returned is: " 
   << changeInPennies << endl;

  return 0;

}