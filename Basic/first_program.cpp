#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int age;
    float salary;
    cout << "Enter your age :";
    cin >> age;
    cout << "Enter your Salary :";
    cin >> salary;
    salary = salary + salary * 25 /100;
    cout << endl  << setw(25) << "Age : " << age;
    cout << endl << endl << endl <<  setw(50) << "Updated Salary :" << salary;

    return 0;
}