#include <stdio.h>

int linearSearch(int* arr, int n, int key) {

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 10, 50, 30, 70, 80, 60, 20, 90, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter a key element : ");
    scanf("%d",&key);

    // Calling linearSearch() for arr 
    int i = linearSearch(arr, n, key);

    // printing result based on value returned by
    // linearSearch()
    if (i == -1)
        printf("Key Not Found");
    else
        printf("Key Found at Index: %d", i);

    return 0;
}