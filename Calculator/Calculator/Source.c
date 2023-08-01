#include <stdio.h> // Include the standard input-output library

int main() { // Our main function where the program execution starts
    char operator; // To store the operator (+, -, *, /)
    double num1, num2, result; // To store the two numbers and the result

    printf("Enter an operator (+, -, *, /): "); // Ask the user to enter an operator
    scanf_s("%c", &operator); // Read the operator from the user

    printf("Enter two numbers: "); // Ask the user to enter two numbers
    scanf_s("%lf %lf", &num1, &num2); // Read the two numbers from the user

    switch (operator) { // Use a switch statement to perform the corresponding operation
    case '+':
        result = num1 + num2; // Addition
        break;
    case '-':
        result = num1 - num2; // Subtraction
        break;
    case '*':
        result = num1 * num2; // Multiplication
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2; // Division
        }
        else {
            printf("Error: Cannot divide by zero!\n"); // Display an error message if dividing by zero
            return 1; // Exit the program with an error code
        }
        break;
    default:
        printf("Error: Invalid operator!\n"); // Display an error message for an invalid operator
        return 1; // Exit the program with an error code
    }

    printf("Result: %.2lf\n", result); // Display the result with two decimal places
    return 0; // Exit the program successfully
}
