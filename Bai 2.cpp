#include<bits/stdc++.h>
using namespace std;
int *a, n;
void sinh_khong_trung_nhau(int *&a, int n)
{
	a=new int[n];
	int spt=0;
	while(spt<n);
	{
		int j, x=rand();
		for(j=0; j<spt; j++)
		if(a[j]==x)
		break;
		if(j==spt)
		{
			a[j]=x; spt++;
		}
	}
}
void dem_cap(int *a, int n, int k)
{
	int dem= 0;
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
		if(a[i] + a[j]== k) dem++;
		cout<<"\n co "<<dem<<" cap trong mang co tong = "<<k;
}
void in(int *a, int n)
{
	cout<<"\n Noi dung mang: ";
	for(int i=0; i<n-1; i++)
	cout<<a[i]<<" ";
}
int main()
{
	n= 10;
	sinh_khong_trung_nhau(a, n);
	in(a, n);
}
