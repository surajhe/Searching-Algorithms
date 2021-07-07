/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


// Taking input from user array size, array values and key to search.
// 

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
