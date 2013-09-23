// mkmk.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;
double fac(double x,int y)
{
	if(y==0)
		return 1.0;
	else
		return fac(x,y-1)*x;
}
int main()
{
	int y;
	double x;
	cin>>x>>y;
	cout<<fac(x,y)<<endl;
}

