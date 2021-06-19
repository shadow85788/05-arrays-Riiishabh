/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int min(int arr[], int n)
{
  int min =arr[0];
  for (int i=1; i<n;i++)
  {
    if (arr[i]<min)
      min=arr[i];   
  }
  return min;
}

int max(int arr[], int n)
{
  int max =arr[0];
  for (int i=1; i<n;i++)
  {
    if (arr[i]>max)
      max=arr[i];   
  }
  return max;
}

float average(int arr[], int n)
{
  float avg=0;
  for (int i=0; i<n;i++)
    {avg+=arr[i];}
  avg=(float)avg/(float)n;
  return avg;
}


int mode (int arr[], int n)
{
  int max1=max(arr,n);
  int ar[max1]={0};
  for (int i=0; i<n; i++)
  {
    ar[arr[i]]++;
  }
  int maxxx=ar[0];
  int j=0;
  for (int k=1; k<max1;k++)
  { 
    if(ar[k]>maxxx)
    {
      maxxx=ar[k];
      j=k;
    }
  }
  return j;
}

int factors(int n , int a[])
{
	int count=0;
	for(int i=0;i<100;i++)
	{
		while (n%2 == 0) 
    { 
        a[i]=2;
		count++;
		i=i+1; 
        n = n/2; 
    }  
    for (int j = 3; j<=sqrt(n); j=j+2) 
    { 
        while (n%j == 0) 
        { 
           a[i]=j;
           count++;
           i++;
            n = n/j; 
        } 
    } 
    if (n > 2)
    {
        a[i]=n;
        count++;
        break;
	}
}
	return count;
}
  
  
