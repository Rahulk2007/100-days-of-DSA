#include <stdio.h>

int main() {
    int n, k;
    int a[1000];
    int comparisons = 0;
    int foundIndex = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        comparisons++;              // one comparison with key
        if (a[i] == k) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
        printf("Found at index %d\n", foundIndex);
    else
        printf("Not Found\n");

    printf("Comparisons = %d", comparisons);

    return 0;
}
