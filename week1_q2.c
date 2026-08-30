/* Given an array of integers, implement binary search to find the position of a given key. */

#include <stdio.h>

int main() {
    int n, a[100], key, low, high, mid, pos = -1, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            pos = mid;
            break;
        } else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (pos != -1)
        printf("Element found at position %d", pos + 1);
    else
        printf("Element not found");

    return 0;
}
