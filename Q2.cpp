#include <bits/stdc++.h>
using namespace std;

int rotate(int arr[],int d,int n)
{
    int b[n],i;
    for(i=0;i<n;i++)
    {
        int j=(i-d+n)%n;
        b[j]=arr[i];
    }
    for(i=0;i<n;i++) cout<<b[i]<<" ";
}

int main()
{
    int n,i,d;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    rotate(arr,d,n);
}
