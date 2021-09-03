#include <iostream>
#include <math.h>
using namespace std;

double m = 40;
double n = 40;
double p = 1;

double pi = 3.1415926535897932384626433832795028841971693993751;

double f1 (double x, double y) {

  double der_x = 0.4*x;
  double der_y = -0.4*y;

  return sqrt(der_x*der_x+der_y*der_y+1);
}

double g (double alpha, double beta) {
  double J1 = m*n*alpha;
  return J1*f1(m*alpha*cos(beta), n*alpha*sin(beta));
}

double h (double b, double a) {

  double J2 = p*pi/2.0;
  return J2*g((p/2.0)*(1+a), (b+1)*pi);
}

int main() {

  double integ = ((25.0/81.0)*h(-sqrt(3.0/5.0),-sqrt(3.0/5.0))+(40.0/81.0)*h(0,-sqrt(3.0/5.0))+(25.0/81.0)*h(sqrt(3.0/5.0),-sqrt(3.0/5.0))+(40.0/81.0)*h(-sqrt(3.0/5.0),0)+(64.0/81.0)*h(0,0)+(40.0/81.0)*h(sqrt(3.0/5.0),0)+(25.0/81.0)*h(-sqrt(3.0/5.0),sqrt(3.0/5.0))+(40.0/81.0)*h(0,sqrt(3.0/5.0))+(25.0/81.0)*h(-sqrt(3.0/5.0),sqrt(3.0/5.0)));

  cout << "A área estimada é: " << integ;

}