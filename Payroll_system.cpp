#include <iostream>
using namespace std;

const float OVERTIME_RATE = 20.0f;
string employeeName;
float basicSalary = 0.0f;
int overtimeHours =0;

void getEmployeeDataDetails();
float calculateOvertimePay();
float calculateNetSalary();
void displayPayslip();


int main() {
    cout << "WELCOME TO PAYROLL SYSTEM" << endl;
    getEmployeeDataDetails();

    displayPayslip();
    return 0;
}
void getEmployeeDataDetails() {
    cout << "Enter employee name: ";
    cin >> employeeName;

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}
float calculateOvertimePay() {
    return overtimeHours * OVERTIME_RATE;
}
float calculateNetSalary() {
    return basicSalary + calculateOvertimePay();
}
void displayPayslip() {
    cout << "-----------------------------------" << endl;
    cout << "Total Payslip details for "<< employeeName<< endl;
    cout << "-----------------------------------" << endl;
    cout << "Employee Name: " << employeeName << endl;
    cout << "Basic Salary: $" << basicSalary << endl;
    cout << "Overtime Pay: $" << calculateOvertimePay() << endl;
    cout << "Net Salary: $" << calculateNetSalary() << endl;
    cout << "-----------------------------------" << endl;
}