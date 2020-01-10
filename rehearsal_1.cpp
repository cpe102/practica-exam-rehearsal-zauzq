#include<iostream>
#include<string>
using namespace std;

int main()
{
    double B;
    string A;
    cout << "What is your name? : ";
    cin >> A;
    cout << "What is your GPA? : ";
    cin >> B;
    if( B >= 3.50){
        cout << A <<" InW Jrim Jrim!!!";
    }
        else
        cout << "Try harder, "<< A <<"!!!";
}
