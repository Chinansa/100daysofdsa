#include <stdio.h>

int main() {
    int p, q, i, j, k;

    // Input size of first log
    scanf("%d", &p);
    int a[p];

    // Input elements of first log
    for(i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second log
    scanf("%d", &q);
    int b[q];

    // Input elements of second log
    for(i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    int result[p + q];
    i = 0; j = 0; k = 0;

    // Merge both sorted arrays
    while(i < p && j < q) {
        if(a[i] <= b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    // Copy remaining elements of first array
    while(i < p) {
        result[k++] = a[i++];
    }

    // Copy remaining elements of second array
    while(j < q) {
        result[k++] = b[j++];
    }

    // Print merged array
    for(i = 0; i < p + q; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
