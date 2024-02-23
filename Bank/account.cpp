#include <stdio.h>
#include "account.h"

using namespace std;

Account::Account()
{
    cout << "Created empty account " << endl;
}

Account::Account(int account_number,string name, double deposit):
    account_number{account_number},
    account_holder_name(name),
    amount_of_account(deposit)
{
        cout << "\nCreated account "<< endl;
        cout << "\nThe account number : "<< this->account_number <<endl;
        cout << "\nAccount holder name: "<< account_holder_name <<endl;
        cout << "\nThe amount of account : " << amount_of_account << endl;

}

void Account::set_account_number(<#int account_number#>)
{
    auto accountNumber = make_unique<Account>() ;
    accountNumber->account_number = account_number ;
    
}

void Account::add_to_account(double deposit){
    amount_of_account = deposit ;
}

Deposit::Deposit(double deposit):amount_deposit(deposit)
{
    cout << "\nYou deposited : "<< amount_deposit << "USD" <<endl;
//    Account::amount_of_account
//    void add_to_account(){
//        
//    }
}
