#include <stdio.h>
int binarySearch (int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low<= high)
    {
        int mid = low +(high - low)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int myArr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(myArr) / sizeof(myArr[0]);
    int target = 20;
    int result = binarySearch(myArr, n, target);
    if(result != -1)
    {
        printf("element %d index[%d].\n", target, result);
    }
    else
    {
        printf("element not found !\n");
    }
    return 0;
}