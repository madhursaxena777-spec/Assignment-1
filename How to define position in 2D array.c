#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    printf("\nEnter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Enter element at position (%d,%d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nElements with their positions:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element at position (%d,%d) = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
