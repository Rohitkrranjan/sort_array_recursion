#include<bits/stdc++.h>
using namespace std;
void sortArray(int *arr , int n)
{
	// base case
	if(n==0 || n==1)
	 return ;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i] > arr[i+1])
		 swap(arr[i],arr[i+1]);
	}
	
	// recursive call
	sortArray(arr,n-1);
}

void print(int arr[] , int n)
{
	for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
	}


int main(){
   int arr[7]={2,5,1,6,9,0,4};
   
 sortArray(arr,7);
 for(int i=0;i<7;i++)
  cout<<arr[i]<<" ";

 
 
}
