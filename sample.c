#include <stdio.h>

// This program prints "Hello, World!" and does basic arithmetic
int main() {
    // Print a message
    printf("Hello, World!\n");

    // Declare two integer variables
    int a = 5;
    int b = 3;

    // Perform some basic arithmetic
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float division = (float)a / b; // Typecasting to float for precise division

    // Print the results
    printf("Sum of %d and %d is: %d\n", a, b, sum);
    printf("Difference between %d and %d is: %d\n", a, b, difference);
    printf("Product of %d and %d is: %d\n", a, b, product);
    printf("Division of %d by %d is: %.2f\n", a, b, division);

    return 0;
}
