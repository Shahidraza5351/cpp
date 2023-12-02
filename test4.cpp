//Create the equivalent of a four-function calculator. The program should ask the user to enter a number, an operator, and another number. (Use floating point.) It should then carry out the specified arithmetical operation: adding, subtracting, multiplying, or dividing the two numbers. Use a switch statement to select the operation. Finally, display the result. When it finishes the calculation, the program should ask whether the user wants to do another calculation. The response can be y or n.
#include<iostream>
using namespace std;
int main()
{
   double n1,n2,r;
   char oper,cheak;
   do
   {
    
   
   cout<<"enter the first number,operater,second number";
   cin>>n1>>oper>>n2;
   switch (oper)
   {
   case '+':r=n1+n2;
    
    break;
    case '-':r=n1-n2;
    
    break;
    case '*':r=n1*n2;
    
    break;
    case '/':r=n1/n2;
    
    break;
   
   default:r=0;
    
   }
   cout<<r;
   cout<<"do another (enter 'y' or 'n')?";
   cin>>cheak;
   }
   while (cheak != 'n');
   
    return 0;
}
