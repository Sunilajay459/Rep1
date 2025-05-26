#include <stdio.h>
int main() {
    int number;
    int factorial = 1;    
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error: Cannot calculate factorial of negative numbers!\n");
        return 1;
    }    
    printf("Calculating factorial of %d\n", number);
    
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }    
    printf("Factorial of %d is %d\n", number, factorial);
    printf("KITS WARANGAL\n");
    return 0;
}
