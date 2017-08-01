//
//  main.cpp
//  Assignment_5b
//
//  Created by reuben on 10/25/16.
//  Copyright (c) 2016 reuben. All rights reserved.
//
/*
#include <iostream>
#include <cstring>
using namespace std;

class BankAccount
{
private:
    string customerName;
    string customerID;
    double customerBalance;

public:
    BankAccount (string, string, double);
    string getCustomerName (string);
    string getCustomerID (string);
    double getCustomerBalance ();
    void withdraw (double);
    void deposit (double);

};

BankAccount::BankAccount (string cn, string cid, double bx)
{
    customerName = cn;
    customerID = cid;
    customerBalance = bx;
}

void BankAccount::withdraw (double wx)
{
    customerBalance = customerBalance - wx;
}

void BankAccount::deposit (double dx)

{
    customerBalance = customerBalance + dx;
}

double BankAccount::getCustomerBalance ()
{
    return customerBalance;
}


#include "BankAccount.cpp"

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
