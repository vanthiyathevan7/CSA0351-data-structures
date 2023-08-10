#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    printf("Enter a 32-bit signed integer: ");
    scanf("%d", &num);

    int reversed = 0;

    while (num != 0) {
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            printf("Reversed integer causes overflow/underflow.\n");
            return 1;
        }

        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed integer: %d\n", reversed);

    return 0;
}

