/**********************************
 ** Program Filename: BankAccount.hpp
 ** Author: reuben youngblom
 ** Date: October 26th 2016
 ** Description: cpp file for Bank Account program. This program creates a class called BankAccount, which takes two strings (customer name and customer ID) and a double (their account balance).  Then, there are functions for retrieving the current account balance, withdrawing money, and depositing money. This file is the header file, which basically contains the class definitions and prototypes.
 ** Input: The class takes three input variables (described above), but they can be predefined or user-input.
 ** Output: The only real output in this program is the account balance at a given time.
 **********************************/

#include <iostream>
#include <cstring>
using namespace std;

class BankAccount  //creates the class
{
private:  //private members, used to create variables
    string customerName;  //for holding customer name
    string customerID;   //for holding ID numbers
    double customerBalance;  //for holding current customer balance
    
public:
    BankAccount (string, string, double);   //prototype for BankAccount and what it can expect as far as parameters
    string getCustomerName (string);  //gets the name, takes a string parameter
    string getCustomerID (string);   //gets the ID, as a string
    double getCustomerBalance ();   //returns the balance as it currently stands when it is called
    void withdraw (double);   //prototype: this function will take the current balance, and subtract the withdrawal amount from it, and reaassign it back to CustomerBalance
    void deposit (double);  //prototype: this will take the balance and add the deposit amount, and reassign this new total back to customerBalance.
    
};


