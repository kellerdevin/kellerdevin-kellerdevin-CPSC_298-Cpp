#include <iostream>
using namespace std;

int main() 
{
    cout << endl;
    cout << "Enter number of hours worked in a week: ";
    
    float hoursPerWeek;

    double wage = 16.00;
    const double OVERTIME = 1.50 * wage;

    cin >> hoursPerWeek;

    if (hoursPerWeek > 40)
    {
        double hoursOvertime = hoursPerWeek - 40;
        double overtimePay = hoursOvertime * OVERTIME;

        

    }

    const double WAGE = 16.00;

    float grossPay = WAGE * hoursPerWeek;


    cout << "Gross pay: $" << grossPay << endl << endl;

    double socialSecurityTax = 0.06 * grossPay;
    double federalIncomeTax = 0.14 * grossPay;
    double stateIncomeTax = 0.05 * grossPay;
    int medicalInsurance = 10.00;

    cout << "Amount that goes to Social Security: $" << socialSecurityTax << endl;
    cout << "Amount that goes to Federal Income Tax: $" << federalIncomeTax << endl;
    cout << "Amount that goes to State Income Tax: $" << stateIncomeTax << endl;
    cout << "Amount that goes to Medical Insurance: $" << medicalInsurance << endl << endl;

    float takeHomePay = grossPay - socialSecurityTax - federalIncomeTax - stateIncomeTax - medicalInsurance;

    cout << "Net take-home pay for the week: $" << takeHomePay << endl;
    return 0;
}
