   #include<stdio.h>
#include<math.h>

int isArmstrong(int number) {
    int current_digit, sum = 0, num = number, number_of_digits;
    
    while (num > 0) {
        current_digit = num % 10;
     // Calculating the power of the remainder using pow() and storing in sum.
        sum = sum + pow(current_digit, 3);
        num = num / 10;
    }
    
    // Return 1 if the number is Armstrong else return 0.
    if (sum == number) {
        return 1;
    } else {
        return 0;
    }
}
 
int main() {
    int number = 371, sum=0, isArmstrongNumber;
 
    if (sum == number){
        printf("%d is an Armstrong Number.", number);
    } else {
        printf("%d is not an Armstrong Number.", number);
    }
    
    // Calling the isArmstrong function.
    isArmstrongNumber = isArmstrong(number);
    
    if (isArmstrongNumber == 1) {
        printf("%d is an Armstrong Number.", number);
    } else {
        printf("%d is not an Armstrong Number.", number);
    }
    
    return 0;
}

