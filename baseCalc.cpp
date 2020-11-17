# include <iostream>
using namespace std;

int main()
{
   cout >> calc(1,2,'+');
    return 0;
}
int calc(float num1, float num2,char operand){
    switch(operand)
    {
        case '+':
            return num1+num2;
        default:
            return 0
	}
}