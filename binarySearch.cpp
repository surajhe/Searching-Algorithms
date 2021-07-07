/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
*******************************************************************************/

// Program is taking 3 inputs from user 1. array size 2. array values 3.key to search.
// here array values need to be inserted in sorted order
// Program output is index of array[] at which key is found.
// Time complexity is O(log n).

#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int low, high, mid;
    low = 0;
    high = size;
    
    while(low <= high)
    {  
    mid = (low + high)/2;
    
    if(arr[mid] == key)
    {
        return mid;
    }
    if(arr[mid] < key)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
    } 
    
    if(high > low)
    {
        return -1;  
    }
}

int main()
{
    int size,key;
    
    cin >> size;
    
    int arr[size];
    
    for(int i=0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cin >> key ;

   cout << binarySearch(arr, size, key );
    return 0;
    
//     int size = 10;
//     int arr[] = {11,23,34,45,56,67,78,89,98,103,112,121};
//     int key = 112;
    

//   cout << binarySearch(arr, size, key );
//     return 0;
}

