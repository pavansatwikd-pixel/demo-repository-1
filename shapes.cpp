#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class rectangle : public shapes
{
	public:
		int l,b;
		rectangle()
		{
			l=15;
			b=7;
		}
		void area()
		{
			cout<<"Area of the Rectangle is: "<<l*b<<endl;
		}
};
class square : public shapes
{
	public:
		int a;
	    square()
		{
		   a=8;	
		}	
		void area()
		{
			cout<<"Area of the Square is: "<<a*a<<endl;
		}
};
class triangle : public shapes
{
	public:
		int b,h;
		triangle()
		{
			b=10;
			h=5;
		}
		void area()
		{
			cout<<"Area of the Triangle is: "<<0.5*(b*h)<<endl;
		}
};
class circle : public shapes
{
	public:
		int r;
		float pi;
	circle()
	{
		r=9;
		pi=3.1416;
	}
	void area()
	{
		cout<<"Area of the Circle is: "<<pi*r*r<<endl;
	}
};
int main()
{
	shapes *ptr;
	rectangle r;
	ptr = &r;
	ptr->area();
	square s;
	ptr = &s;
	ptr->area();
	triangle t;
	ptr = &t;
	ptr->area();
	circle c;
	ptr = &c;
	ptr->area();
}
