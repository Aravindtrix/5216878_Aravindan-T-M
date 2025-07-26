
#include <stdio.h>


void welcome() {
    printf(" Git practice.\n");
}


int factorial(int num) {
    if (num < 0) return -1;
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int input;
    welcome();

    printf("Enter a positive integer: ");
    scanf("%d", &input);

    int fact = factorial(input);
    if (fact == -1) {
        printf("Invalid input. Please enter a non-negative number.\n");
    } else {
        printf("Factorial of %d is %d\n", input, fact);
    }

    printf("Program ended.\n");
    return 0;
}

int reverse_number(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

