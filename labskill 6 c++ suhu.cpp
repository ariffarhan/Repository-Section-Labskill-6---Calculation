#include<iostream>
#include<conio.h>
using namespace std;

int main (){
double CELSIUS;
double FAHRENHEIT;
double c1,c2,c3;
double f1,f2,f3;

cout << "\tPLEASE ENTER 3 CELSIUS : " <<endl;
cout << "\t-----------------------\n";
cin >> c1>>c2>>c3;
cout <<"\tPLEASE ENTER 3 FAHRENHEIT : " <<endl;
cout << "\t--------------------------\n";
cin >> f1>>f2>>f3;

double CelFah1=(f1-32)*5/9;
double CelFah2=(f2-32)*5/9;
double CelFah3=(f3-32)*5/9;

double FahCel1=(9.0/5)*c1 + 32;
double FahCel2=(9.0/5)*c2 + 32;
double FahCel3=(9.0/5)*c3 + 32;
cout<<"\t-------------------------------------------\n";
cout<<"\tCELSIUS  FAHRENHEIT |  FAHRENHEIT  CELSIUS  "<<endl;
cout<<"\t   "<<c1<<"    "<<FahCel1<<"        |  "<<f1<<"          "<<CelFah1<<endl;
cout<<"\t   "<<c2<<"    "<<FahCel2<<"      |  "<<f2<<"          "<<CelFah2<<endl;
cout<<"\t   "<<c3<<"    "<<FahCel3<<"       |  "<<f3<<"           "<<CelFah3<<endl;

return 0;
}
