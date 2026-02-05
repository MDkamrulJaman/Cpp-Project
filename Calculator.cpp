#include <stdio.h>
#include <iostream>
using namespace std;

class Calculator
{

public:
  double num1, num2;
  char operation;

    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0; // Return 0 or handle as needed
        }
    }

};



int main(){

cout<<"Calculator Project in C++"<<endl;



// Create an instance of the Calculator class
Calculator calc;

cout << "Enter first number: ";
cin >> calc.num1;

cout << "Enter second number: ";
cin >> calc.num2;

cout << "Enter an operator (+, -, *, /): ";
cin >> calc.operation;




switch(calc.operation){

case '+':
    cout<<"Addition is:"<<calc.add(calc.num1, calc.num2)<<endl;
    break;

case '-':
    cout<<"Subtraction is:"<<calc.subtract(calc.num1, calc.num2)<<endl;   
    break;

case '*':
    cout<<"Multiplication is:"<<calc.multiply(calc.num1, calc.num2)<<endl;   
    break;

case '/':
    cout<<"Division is:"<<calc.divide(calc.num1, calc.num2)<<endl;   
    break;

}

return 0;
}
