// Algorithm Challenge & Problem Solving
// 48 - Monthly Loan Installment

#include <iostream>
using namespace std;

int main()
{
    int loanAmount, durationMonths, monthlyPayment, yearlyPayment;

    // Ask the user for the total loan amount
    cout << "How much loan do you need in $?\n";
    cin >> loanAmount;

    // Ask the user how many months they need to finish the loan
    cout << "How long do you need to finish the loan (in months)?\n";
    cin >> durationMonths;

    // Calculate how much should be paid every month
    monthlyPayment = loanAmount / durationMonths;
    cout << "You should pay " << monthlyPayment << " $ every month.\n";

    // Calculate yearly payment
    yearlyPayment = monthlyPayment * 12;
    cout << "That equals " << yearlyPayment << " $ every year.\n";

    return 0;
}
