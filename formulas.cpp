//testes_formulas_matematicas

#include <iostream>
#include <cmath>
using namespace std;

int main (void){
  float  f,f2,x,x1,d,d2,c,c3,c4,a,b,c2,ah,v,p,r,n,at,vt, m;

  cout << "entre com os valores de c2 e r :";
  cin >> c2 >> r;

  f = sqrt((1/1*c2 - (pow(r,2))/pow (4*c2,2)));
  cout << "seu resultado:"<< f << endl;


  cout << "entre com os valores a, b, c:";
  cin >> a >> b >> c;

  x = a / b - c;
  cout << "seu resultado:" << x << endl;

  cout << "entre com o valor das variáveis m, ah, v: " << endl;
  cin >> m >> ah >> v;

  x1 = m *(ah +(pow(v,2)/2));
  cout << "seu resultado é:" << x1;

  cout << "entre com os valores para d , vt e at" << endl;
  cin >> d >> vt >> at;
  d = vt+ pow(at,2)/2;

  cout << "Seu resultado:" << d;

  cout << "entre com o valor de   p, r, n ";
  cin >> p >> r >> n;
  d2 = p - (r / n);
  cout << "seu resultado é" << d2 << endl;

  cout << "entre com os valores de c3:" ;
  cin >>  c3 ;
  f = (c * 9/5)+32;
  cout  << "seu resultado é:" << f;

  cout << "entre com os valores de f2" ;
  cin >>  f2;
  c4 = (f2-32)* 5/9;
  cout << "seu resultado é:" <<  c4;


 return 0;
}
