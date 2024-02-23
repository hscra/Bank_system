#ifndef account_h
#define account_h

#include <iostream>

using namespace std;

class Account
{
    int account_number ;
    string account_holder_name ;
    double amount_of_account;
    
public :
    void printAccountInfo() const
    {
        cout << "\nPrint the account information : " << endl;
        cout << "\nAccount number : " << account_number <<endl;
        cout << "\nAccount name : " << account_holder_name <<endl;
        cout << "\nCurrent deposit : " << amount_of_account <<endl;
        
    }
    
    void add_to_account(double deposit);
    void set_name(string name);
    void set_account_number(int account_number);

    Account();
    Account(int account_number, string name, double deposit);
    ~Account(){}

};

class Deposit
{
    double amount_deposit;
    
public:
    Deposit(double);
    ~Deposit(){}
    
    void deposit_to_account()
    {
       
    }
};



#endif /* account_h */



