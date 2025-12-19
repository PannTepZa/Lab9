#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, interestRate, payment;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cin.ignore(1000, '\n'); 
	cout << "Enter interest rate per year (%): ";
	cin >> interestRate;
	cin.ignore(1000, '\n'); 
	cout << "Enter amount you can pay per year: ";
	cin >> payment;
	cin.ignore(1000, '\n'); 

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
	while (true){
		double interest = loan * (interestRate / 100);
		double total = loan + interest;
		double newBalance = total - payment;
		
		if (newBalance <= 0){
			payment = total; 
			newBalance = 0;
		}
		if (newBalance == 0){
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << year; 
			cout << setw(13) << left << loan;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << payment;
			cout << setw(13) << left << newBalance;
			cout << "\n";	
			break;
		}
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newBalance;
		cout << "\n";	
		
		loan = newBalance;
		year ++; 
	}	
	return 0;
}
