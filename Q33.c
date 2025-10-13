/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, digits = 0;
    
    // Read the input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    // Count number of digits
    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }
    
    originalNum = num;  // reset to original number for calculation
    
    // Calculate sum of digits raised to power 'digits'
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }
    
    // Check if number is Armstrong
    if (result == num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}
