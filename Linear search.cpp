#include <iostream>
using namespace std;


int main()
{

	int arr[10], i, num, n, flag=0, pos;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter Array Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be search : ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			flag=1;
			pos=i+1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<"Number Found at position "<<pos;
	}
return 0;
}
