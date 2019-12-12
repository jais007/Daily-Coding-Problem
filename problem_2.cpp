

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
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
           cin>>arr[i];
       int res[n];
       ull prod=arr[0];
       res[0]=1;
       for(int i=1;i<n;i++)
         {
             res[i]=prod;
             prod=prod*arr[i];
         }
         prod=1;
         for(int i=n-1;i>=0;i--)
         {
             res[i]*=prod;
             prod*=arr[i];
         }
       for(int i=0;i<n;i++)
       {
           cout<<res[i]<<" ";
       }
       cout<<endl;
   }
	return 0;
}

//Time : O(n)
//space: O(n)
