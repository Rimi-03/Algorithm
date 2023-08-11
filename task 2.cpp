//write a program to find the sum of a given array using recursion
#include<iostream>
using namespace std;
int sum(int ar[], int s)
{
    int sum_of_Numbers = 0;
    for(int i = 0; i<s; i++)
    {
        sum_of_Numbers += ar[i];
    }
    return sum_of_Numbers;
}
int main()
{
    int s, ar[s+1];
    cout << "Enter the size of Array : ";
    cin >> s;

    cout << "Enter the elements : ";
    for(int i = 0; i<s; i++)
    {
        cin >> ar[i];
    }

    cout <<"Summation : "<< sum(ar, s) << endl;
}
