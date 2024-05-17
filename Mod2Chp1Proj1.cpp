/*Author: Francisco Bumanglag
Project: Employee Salary Records
Assignment: Module 2 Project 1
Course: C++ Santa Ana College
Class: CMPR120 Dr. Tahir Aziz
Date: February 18, 2024*/


#include <iostream> 
using namespace std;

int main()

{
    //declaration
    int id;
    double hours;
    double rate;
    double gross;


    //input
    cout << "Please enter your Employee ID: ";
    cin >> id;

    cout << "Please enter your hours worked: ";
    cin >> hours;

    cout << "Please enter rate per hour: ";
    cin >> rate;

    //processing 
    gross = hours * rate;

    //output 
    cout << "Employee ID: " << id << endl;
    cout << "Hours Worked: " << hours << endl;
    cout << "Rate per Hour: " << rate << endl;
    cout << "Gross Salary: " << gross << " / week" << endl;


    system("pause");
    return 0;

}