#include <stdio.h>
int isPrime(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));
    
    return 0;
}
