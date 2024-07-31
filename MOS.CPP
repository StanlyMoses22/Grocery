#include<iostream.h>
#include<conio.h>
class bcls1
{
public:
int pn,pr;
public:
void fir()
{
cout<<"product no:";
cin>>pn;
cout<<"product rate:";
cin>>pr;
}
void firp()
{
cout<<"\nproduct no:"<<pn<<endl;
cout<<"product rate:"<<pr<<endl;
}
};
class bcls2
{
public:
char pn[10];
int q;
public:
void sec()
{
cout<<"product name:";
cin>>pn;
cout<<"quantity:";
cin>>q;
}
void secp()
{
cout<<"product name:"<<pn<<endl;
cout<<"quantity:"<<q<<endl;
}
};
class bcls3
{
public:
int di,pa;
public:
void thi()
{
cout<<"discount:";
cin>>di;
cout<<"paid amount:";
cin>>pa;
}
void thip()
{
cout<<"discount:"<<di<<endl;
cout<<"paid amount:"<<pa<<endl;
}
};
class dcls:public bcls1,public bcls2,public bcls3
{
public:
int tot,dis,net,ba;
public:
void last()
{
fir();
sec();
thi();
net=pr*q;
dis=net*di/100;
tot=net-dis;
ba=tot-pa;
}
void lastp()
{
firp();
secp();
thip();
cout<<"net amount:"<<net<<endl;
cout<<"discount:"<<dis<<endl;
cout<<"total:"<<tot<<endl;
cout<<"balance:"<<ba<<endl;
}
};
void main()
{
class dcls ob;
clrscr();
ob.last();
ob.lastp();
getch();
}