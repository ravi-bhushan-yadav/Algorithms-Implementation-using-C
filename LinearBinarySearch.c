#include<stdio.h>
int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
   return -1; 
}
int binarySearch(int arr[], int size, int element){
    int high, low, mid;
    low = 0;
    high = size - 1;
    while(low<=high){
    mid = (high+low)/2;
    if(arr[mid] == element){
        return mid;
    }
    if(arr[mid]<element){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
    }
    return -1;
 }

int main(){
    //Unsorted array for linear Search
    //int arr[] = {1,2,3,4,5,6,73,79,70,71,72,74,76,55,566,567};
    //int size = sizeof(arr)/sizeof(int);

    //sorted array for binary Search
    int arr[] = {1,2,3,4,5,6,73,79};
    int size = sizeof(arr)/sizeof(int);
    int element = 73;
    int SearchIndex = binarySearch(arr,size,73);
    printf("The element %d was found at index %d \n", element, SearchIndex);
    return 0;
}