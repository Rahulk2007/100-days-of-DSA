#include <stdio.h>

int main() {
    int n, pos;
    int a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &pos);

    // shift elements left from pos to end
    for (int i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    // print updated array (n-1 elements)
    for (int i = 0; i < n - 1; i++) {
        printf("%d", a[i]);
        if (i < n - 2) printf(" ");
    }

    return 0;
}
