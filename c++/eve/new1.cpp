#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char x;
	while(true)
	{
	
	cout<<"enter number one "<<endl;
	cin>>num1;
	cout<<"enter number two"<<endl;
	cin>>num2;
	cout<<"press a for addition"<<endl;
	cout<<"press b for subtraction"<<endl;
	cout<<"press c for multiplication"<<endl;
	cout<<"press d for dividedation"<<endl;
	cout<<"press e for remainder"<<endl;
	cin>>x;
	if(x=='a')
	{
	cout<<"sum ="<<num1+num2<<endl;
	}
	else if(x=='b')
	{ 
	cout<<"subtraction="<<num1-num2<<endl;
	}
else if(x=='c')
{
cout<<"multiplicatin="<<num1*num2<<endl;
}
else if(x=='d')
{
	cout<<"divide="<<num1/num2<<endl;
}
else if(x=='e')
{
	cout<<"reminder="<<num1%num2<<endl;
}

else {
	cout<<"invalid opration"<<endl;
}





}




return 0;

}
