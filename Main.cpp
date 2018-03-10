#include <iostream>
using namespace std;
template <typename T>
void myswap(T & a, T & b) {
 T temp = b;
 b = a;
 a = temp;
}
int main() {
 int a,b;
 a = 3;
 b = 6;
 myswap(a, b);
 cout << "a = " << a << " b = " <<b <<"\n";
 float c,d;
 c = 3.14;
 d = 9.36;
 myswap(c, d);
 cout << "c = " << c << " d = " <<d<<"\n";
 double e, f;
 e = c;
 f = d;
 myswap(e, f);
 cout << "e = " << e << " f = " <<f<<"\n";
}
