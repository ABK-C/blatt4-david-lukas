#include <iostream>
using namespace std;


double zufall(int a, int b, int m)
{
  static int I;
  I=(a*I+b)%m;
  return double(I)/double(m);
}

int main()
{
  double kreis=0;
  double quad=100;  
  for(int i=0; i<quad; ++i)
  //205,29573,139968
  //5, 3, 16
  {
    double x=zufall(205,29573,139968);
    double y=zufall(205,29573,139968);
    if ((x*x+y*y)<1)
    {
      ++kreis;
    }
  }
  double pi=kreis/quad*4;
  cout<< "Pi = "<< pi << "\n";
  cout << "N_in = " << kreis << "\n";
}
