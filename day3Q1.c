#include <stdio.h>

int main() {
    int n, k, i;
    int count = 0;
    int found = 0;

    // Input array size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key to search
    scanf("%d", &k);

    // Linear search
    for(i = 0; i < n; i++) {
        count++;   // one comparison
        if(arr[i] == k) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", count);

    return 0;
}
