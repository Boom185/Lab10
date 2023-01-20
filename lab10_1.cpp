#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan, interest, payment;
    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> interest;
    cout << "Enter amount you can pay per year: ";
    cin >> payment;

    interest = interest / 100;  // converting interest rate to decimal

    //use 'setw' to set width of table and 'left' to set left-alignment
    //you can change input argument of 'setw()' to see the effect
    //Try to change from 'left' to 'right' and see the effect
    cout << setw(13) << left << "EndOfYear#"; 
    cout << setw(13) << left << "PrevBalance"; 
    cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";
    
    //use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
    //you can change input argument of 'setprecision()' to see the effect
    cout << fixed << setprecision(2); 
    int year = 1;
    double interest_amount, total_amount, new_balance;
    while(loan > 0){
        interest_amount = loan * interest;
        total_amount = interest_amount + loan;
        if(total_amount < payment){
            payment = total_amount;
        }
        new_balance = total_amount - payment;
        cout << setw(13) << left << year; 
        cout << setw(13) << left << loan;
        cout << setw(13) << left << interest_amount;
        cout << setw(13) << left << total_amount;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << new_balance;
        cout << "\n";
        loan = new_balance;
        year++;
    }
    return 0;
}
