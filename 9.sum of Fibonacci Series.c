#include <stdio.h>

int main() {
    int i,n;
    int first = 0, second = 1, next, sum = 0;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);



    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", first);
        sum += first;
        next = first + second;
        first = second;
        second = next;
    }

    printf("\nSum of Fibonacci series: %d\n", sum);

    return 0;
}

