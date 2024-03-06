#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    Calculator calc; // Create an instance of the Calculator class

    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << calc.add(num1, num2);
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << calc.subtract(num1, num2);
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << calc.multiply(num1, num2);
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << calc.divide(num1, num2);
            else
                cout << "Error! Division by zero!";
            break;
        default:
            cout << "Error! Invalid operator";
            break;
    }

    return 0;
}
