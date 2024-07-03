#include <stdio.h>

// Function prototype for the divide function
// It takes two integers as parameters and returns a float
float divide(int num1, int num2);

int main() {
    int dividend, divisor; // Declares variables to store the dividend and divisor
    float result; // Declares variable to store the result of the division

    printf("Enter the dividend: "); // Prompts the user to enter the dividend
    scanf("%d", &dividend); // Read the dividend from the user input
    printf("Enter the divisor: "); // Prompt the user to enter the divisor
    scanf("%d", &divisor); // Read the divisor from the user input

    // Call the divide function with the entered dividend and divisor
    result = divide(dividend, divisor);

    // Check if the result is 0.0, which indicates a division by zero error
    if(result == 0.0) {
        printf("Error! Division by zero is not allowed.\n"); // Inform the user about the error
    } else {
        printf("Result: %.2f\n", result); // Display the result of the division
    }

    return 0; // End of the main function
}

// Function definition for the divide function
// It checks if the divisor is zero and prints an error message if so
// Returns 0.0 to indicate an error or performs the division and casts the result to float otherwise
float divide(int num1, int num2) {
    if(num2 == 0) {
        printf("Error! Division by zero is not allowed.\n"); // Print an error message
        return 0.0; // Return a special value indicating an error
    }
    return (float)num1 / num2; // Perform the division and cast the result to float
}
