

#include <iostream>
#include <conio.h>

// Standard namespace declaration
using namespace std;

// Main Function
int main() {

     double myMoney = 1000.50;  //this should be printed out

     // Standard Ouput Statements
     cout << "Please be sure to correct all syntax errors in this program" << endl;

     cout << "I have corrected all errors for this program." << endl;

     cout << "The total amount of money available is = " + std::to_string(myMoney) <<endl;

     // Wait For Output Screen
     cout << "Press any key to continue" << endl;
     cin.get(); // requires user to press Enter before teermination

     // Main Function return Statement
     return 0;
}
