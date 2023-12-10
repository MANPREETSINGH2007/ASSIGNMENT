#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int productOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

void checkHitOrMiss(int num) {
    int sum = sumOfDigits(num);
    int product = productOfDigits(num);

    if (num % sum == 0 || num % product == 0) {
        printf("%d is a Hit number.\n", num);
    } else {
        printf("%d is a Miss number.\n", num);
    }
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    checkHitOrMiss(number);

    return 0;
}