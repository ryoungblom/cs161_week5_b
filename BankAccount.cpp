/**********************************
 ** Program Filename: BankAccount.cpp
 ** Author: reuben youngblom
 ** Date: October 26th 2016
 ** Description: cpp file for Bank Account program. This program creates a class called BankAccount, which takes two strings (customer name and customer ID) and a double (their account balance).  Then, there are functions for retrieving the current account balance, withdrawing money, and depositing money.  This is the program file, which has the functions and a commented out main that I used for testing.
 ** Input: The class takes three input variables (described above), but they can be predefined or user-input.
 ** Output: The only real output in this program is the account balance at a given time.
 **********************************/

#include "BankAccount.hpp"  //include directive, so it pulls the header file


BankAccount::BankAccount (string cn, string cid, double bx)  //constructor for BankAccount.  Takes three parameters (2 strings and a double) and assigns them to strings "customerName", "customerID", and "customerBalance"
{
    customerName = cn;  //sets cn to customerName
    customerID = cid; //sets cid to customerID
    customerBalance = bx;  //sets bx to customerBalance
}

void BankAccount::withdraw (double wx)   //withdraw function
{
    customerBalance = customerBalance - wx;  //takes wx, and assigns current customerBalance minus withdrawal amount to the "new" customerBalance, which is now the current customerBalance
}

void BankAccount::deposit (double dx)  //deposit function.  this will take the balance and add the deposit amount, and reassign this new total back to customerBalance.

{
    customerBalance = customerBalance + dx;  //adding and reassigning
}

double BankAccount::getCustomerBalance ()  //function to retrieve the balance as it stands when this function is called.
{
    return customerBalance;  //kicks back the current balance
}

//main function
/*
int main() {
    
    
    BankAccount account1("Harry Potter", "K4637", 8032.78);
    account1.withdraw(244.0);
    account1.withdraw(3012.58);
    account1.deposit(1137.54);
    account1.withdraw(1807.12);
    account1.deposit(500.00);
    double finalBalance = account1.getCustomerBalance();
    
    cout << account1.getCustomerBalance() << endl;
    
    return 0;
}
*/
