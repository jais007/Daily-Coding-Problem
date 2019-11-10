

 /*  
 This problem was asked by Uber.
 
 Porblem 2: Given an array of integers, return a new array such that each element at index i of the 
new array is the product of all the numbers in the original array except the one at i 
*/

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int arr[n];
       int left[n],right[n];
       left[0]=1;
       right[n-1]=1;
       ull prod=1;
       for(int i=0;i<n;i++)
           cin>>arr[i];
       for(int i=1;i<n;i++)
         {
             prod*=arr[i-1];
             left[i]=prod;
         }
         prod=1;
         for(int i=n-2;i>=0;i--)
         {
             prod*=arr[i+1];
             right[i]=prod;
         }
       int ans[n];
       for(int i=0;i<n;i++)
       {
           ans[i]=left[i]*right[i];
           cout<<ans[i]<<" ";
       }
       cout<<endl;
   }
	return 0;
}

//Time : O(n)
//space: O(n)
