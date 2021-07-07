/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.

*******************************************************************************/


// Program is taking 3 inputs from user 1. array size 2. array values 3.key to search.
// Program output is index of array[] at which key is found.
// Time complexity is O(n) execution time increases as no. of inputs n  

#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for(int i=0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,key;
    
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cin >> key ;

   cout << linearSearch(arr, n, key );
    return 0;
}
