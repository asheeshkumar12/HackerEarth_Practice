#include<iostream>
using namespace std;
void rotate(int *arr,int &n,int k)
{
  int arr2[n];
  for(int i=0;i<n;i++)
  {
  arr2[(i+k)%n]=arr[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr2[i]<<" ";
  }
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    rotate(arr,n,k);
    
    cout<<endl;
  }
  return 0;
}
