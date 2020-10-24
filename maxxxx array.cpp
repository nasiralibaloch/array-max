#include<iostream>
using namespace std;
int main()
{
   int arr[5]={23,56,345,34,344};
    int max;
   for(int i=0;i<10;i++)
    {
   	if(arr[i]>max)
  	{
   	max=arr[i];
	}
}
   cout<<"max value is ="<<max<<endl;
	  return 0;
}
