#include <stdio.h>
#include <math.h>
int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);

int max(int a[],int x)
{
  int maxi=a[0];
  for(int i=0;i<x;i++)
  {
    if(a[i]>maxi)
      maxi=a[i];
  }
  return maxi;
}

int min(int a[],int x)
{
	int mini=a[0];
	for(int i=0;i<x;i++)
	{
		if(a[i]<mini)
		mini=a[i];
	}
	return mini;
}

float average(int a[],int x)
{
	int sum=0;
	for(int i=0;i<x;i++)
	{
		sum=sum+a[i];
	}
	float avg=(float) sum/x;
	return avg;
}

int mode(int a[],int x)
{
	int b[x];
    for(int i=0;i<x;i++)
    {
    	int count=0;
    	for(int j=0;j<x;j++)
    	{
    		if(a[i]==a[j])
    		count++;
		}
		b[i]=count;
	}
	int maxi=a[0],flag=b[0];
  for(int i=0;i<x;i++)
  {
    if(b[i]>flag)
      maxi=a[i];
  }
  return maxi;
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
