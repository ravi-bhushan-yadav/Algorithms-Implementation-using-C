#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key greater, ignore left half
        if (arr[mid] < key)
            low = mid + 1;

        // If key is smaller, ignore right half
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int key = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, n, key);
    if(result == -1) printf("Element is not present in array");
    else printf("Element is present at index %d",result);

}