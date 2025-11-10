#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest, second_smallest;
    if (arr[0] < arr[1]) {
        smallest = arr[0];
        second_smallest = arr[1];
    } else {
        smallest = arr[1];
