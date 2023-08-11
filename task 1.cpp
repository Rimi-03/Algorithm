//write a program to reverse number using recursion
#include<iostream>
#include<math.h>
using namespace std;
int reverse(int num)
{
    if(num)
        return (num%10) * pow(10,(int)log10(num)) + reverse(num/10);
    else
        return 0;

}

int main()
{
    int num, isNegative, reverse_of_a_number;

    cout << "Enter Number : " ;
    cin >> num;

    isNegative = (num < 0);
    if(isNegative)
        num *= -1;
    reverse_of_a_number = reverse(num);
    if(isNegative)
    {
        num *= -1;
        result *= -1;
    }

    cout << "Given Number is : "<< num <<"\t"<< "Reverse Number : " << reverse_of_a_number << endl;

}
