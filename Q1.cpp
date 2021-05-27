#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m,i,j;
    cin>>n>>m;
    int arr1[n],arr2[m];
        
    for(i=0;i<n;i++) cin>>arr1[i];
    for(i=0;i<m;i++) cin>>arr2[i];
        
    set<int> unions,intersec;
    for(i=0;i<n;i++) unions.insert(arr1[i]);
    for(i=0;i<m;i++)
    {
        if(unions.find(arr2[i])!=unions.end()) intersec.insert(arr2[i]);
        else unions.insert(arr2[i]);
    }
    for(auto it=unions.begin();it!=unions.end();it++) cout<<*it<<" ";
    cout<<"\n";
     for(auto it=intersec.begin();it!=intersec.end();it++) cout<<*it<<" ";
     cout<<"\n";
    }
}
