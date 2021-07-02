#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  const double PI = 3.14159265358979323846;
  const double LOADFACTOR=0.745;
  double beanLength;
  double beanHeight;
  double jarSize;
  cout<<"Welcome to my bean count program!!"<<endl;
  cout<<"Enter jelly bean length (cm), jelly bean height, and jar size separated by space: ";
  cin>>beanLength>>beanHeight>>jarSize;
  double volumeOfSingleBean=(5*PI*beanLength*pow(beanHeight,2))/24;
  int totalBeans=(jarSize*LOADFACTOR)/volumeOfSingleBean;
  cout<<endl<<"Estimate of jelly beans in the jar: "<<totalBeans<<endl;
}
