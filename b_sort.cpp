#include<bits/stdc++.h>
using namespace std;
#define endl "\size"
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//transform(s.begin(), s.end(), s.begin(), ::toupper);

void bubble_sort(vector<int> &arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;i<size;j++)
        {
            if( arr[i] > arr[j] )
            {
                swap( arr[i]  , arr[j] );
            }
        }
    }
}

int main()
{
    optimize();

    int size;
    cin>>size;

     vector<int> arr;

    for (int i=0;i<size; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

   bubble_sort( arr , size);

    for(int c : arr)
    {
        cout<<c<<" ";
    }



}
