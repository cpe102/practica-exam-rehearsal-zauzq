#include <iostream>
#include <cmath>
using namespace std;

double sumSqrt(int N){
    double x=0;
  if(N<=0){
      return 0;
  }  
  int i=1;
  while(i <= N){
      x +=pow(pow(i,0.5),-1);
      i++;
  }
  return x;
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
