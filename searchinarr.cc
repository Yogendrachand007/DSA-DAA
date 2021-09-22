// LINEAR SEARCH...
/*
#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for(int  i=0; i<n; i++)
    {
        if (arr[i]==key)
        return i;
    }
     return -1;
}  

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

int key;
cin>>key;
    
    cout<<linearsearch(arr,n,key)<<endl;
}
*/

//BINARY SEARCH...

#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s=0;  //starting point of array
    int e=n;  //ending point of array

    while(s<=e)
    {
    int mid=(s+e)/2;

    if (mid==key){
        return mid;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        e=mid+1;
    }
    }
    return -1;

}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
 int key;
 cin>>key;

 cout<<binarysearch(arr,n,key)<<endl;
 return 0;
}