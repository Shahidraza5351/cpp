#include<iostream>
using namespace std;
class rectangle
{
private:
    float length;
    float width;

public:

rectangle(float a=1.00,float b=1.00)
{
    length=a;
    width=b;
}
void set(float a,float b)
{
    if(a > 0.0 && a < 20.0)
    
    length=a;
    else
    cout<<"plz enter the value between floating point 0.0 and 20.0";
    if(b > 0.0 && b < 20.0)
    width=b;
    else 
    cout<<"plz enter value of width between floatin point 0.0 and 20.0 ";

}

float rectangle_perimeter() 
{
    
   return 2*(length+width);
}
float rectangle_area() 

{
    
    return length*width;
}
void get()
{
    cout<<"area of rectangle :"<<rectangle_area()<<endl;
    cout<<"perimeter of rectaangle :"<<rectangle_perimeter();
}
};
int main()
{

    int a,b;
    cout<<"enter the length of rectangle";
    cin>>a;
    cout<<"enter the width of rectangle";
    cin>>b;
    rectangle rect(a,b);
    rect.get();
return 0;

}