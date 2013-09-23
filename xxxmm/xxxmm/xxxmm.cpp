// xxxmm.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
using namespace std;
int fac(int m,int n )
{
	 int x=m;
	 int y=n;
	 int x1=m;
	 int y1=n;
	 for(int i=1;i<n;i++)
	 {
		 x=x*(x1-1);
		 y=y*(y1-1);
		 x1=x1-1;
		 y1=y1-1;
	 }
	 return x/y;
}
	 int main()
	 {
		 int a;
		 int b;
		 cout<<"请输入m和n"endl;
		 cin>>a>>b;
		 if(a<b)
			 cout<<"输入错误！"endl;
	 
	 else
	 
		 cout<<fac(a,b)<<endl;
		 return 0;
	 }


