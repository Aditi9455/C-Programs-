#include <stdio.h>

int main() {
    int n, sum = 0, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array = %d\n", sum);
    return 0;
}
