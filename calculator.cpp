#include <iostream>
using namespace std;

double add(double num1, double num2) {
        return num1 + num2;
}

double subtract(double num1, double num2) {
        return num1 - num2;
}

double multiply(double num1, double num2) {
        return num1 * num2;
}

double divide(double num1, double num2) {
        if (num2 == 0) {
                cout << "Error: Cannot divide by zero" << endl;
                return NAN;
        } else {
                return num1 / num2;
        }
}

int main() {
        char operation, again;
        double num1, num2, result;

        do {
                cout << "Enter first number: " << endl;
                cin >> num1;
                cout << "Enter an operation (+, -, *, /): ";
                cin >> operation;
                cout << "Enter second number: ";
                cin >> num2;

                switch (operation) {
                        case '+':
                                result = add(num1, num2);
                                break;
                        case '-':
                                result = subtract(num1, num2);
                                break;
                        case '*':
                                result = multiply(num1, num2);
                                break;
                        case '/':
                                result = divide(num1, num2);
                                break;
                        default:
                                cout << "Error: Invalid an operation" << endl;
                                continue;
                }

                cout << "Result: " << result << endl;
                cout << "Would you like to perform another calculation? y/n: ";
                cin >> again;
        } while (again == 'y' | again == 'Y');
        return 0;
}
