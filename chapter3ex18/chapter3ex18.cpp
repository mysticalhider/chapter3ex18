/*
File Name: chapter3ex18.cpp
Programmer: Perrin D
Date: 2023/10/03
requirements
- ask for ammount in savings
- ask for interest rate
- ask for times compounded (years)

display intrest rate, times compounded, principal, intrest, and ammount in savinging in a formated list
*/

#include <iostream>
#include <iomanip>
// discoverd i needed cmath for pow
#include <cmath>
using namespace std;

int main() {

	double principal, interestRate, timesCompounded, interest, amountInSavings, years;

	// Get user inputs for all variables
	cout << "Enter the amount in savings: ";
	cin >> principal;
	cout << "Enter the interest rate (as a decimal): ";
	cin >> interestRate;
	cout << "Enter the number of times interest is compounded per year: ";
	cin >> timesCompounded;
	cout << "Enter the number of years: ";
	cin >> years;

	// Calculate the amount in savings 

	amountInSavings = principal * pow((1 + (interestRate / timesCompounded)), (timesCompounded * years)); 
	

	// Calculate the total interest
	interest = amountInSavings - principal ;

	// output the results

	cout << "Intrest Rate: " << interestRate * 100 << "%" << endl;
	cout << "Times Compounded: " << timesCompounded << endl;
	cout << "Principal: $" << fixed << setprecision(2) << principal << endl;
	cout << "Interest: $" << fixed << setprecision(2) << interest << endl;
	cout << "Amount in Savings: $" << fixed << setprecision(2) << amountInSavings << endl;
}