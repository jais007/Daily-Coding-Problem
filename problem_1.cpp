#include<bits/stdc++.h>
using namespace std;

bool FindSum(int arr[],int n,int k)
{
	unordered_set<int> st;
	st.insert(arr[0]);
	for(int i=1;i<n;i++)
	{
		if(st.find(k-arr[i])!=st.end())
		  return true;
		st.insert(k-arr[i]);
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) 
	cin>>arr[i];
	int k;
	cin>>k;
	if(FindSum(arr,n,k))
	  cout<<"true";
	else
	 cout<<"false";
}
