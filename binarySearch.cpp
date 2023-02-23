#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1 ;

   // int mid = (start + end)/2;
      int mid = start + (end - start)/2;   // Optimised Code (for being in INTERGER RANGE)

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        if(key<arr[mid])
        {
            end = mid-1;
        }
        else
        {
        start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    return -1 ;
}
    int main()
    {
        int n;
        cout<<" Enter the array size\n";
        cin>>n;
        
        int key;
        cout<<"Enter the key\n";
        cin>>key;
        
        int arr[n];
        cout<<"enter the array\n";
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }

        int index = BinarySearch(arr, n, key);
        cout<<"\nindex of key: "<<index<<endl;
    }


