#include <iostream>
using namespace std;
template <typename T>
void proPrintTemplate(T & a, T & b) {
    T temp = b;
    b = a;
    a = temp;
}
void proPrint(int a,int b){
    cout << "You gave me " << a << " and " <<b <<"\n";
    cout << "Together they make " << a+b << ".\n";
}
void proPrint(double a,double b){
    cout << "You gave me " << a << " and " <<b <<"\n";
    cout << "Together they make " << a+b << ".\n";
}
void proPrint(char a,char b){
    cout << "You gave me " << a << " and " <<b <<"\n";
    char c=a+b;
    cout << "Together they make " << c << ".\n";
}
void proPrint(string a,string b){
    cout << "You gave me " << a << " and " <<b <<"\n";
    cout << "Together they make " << a+b << ".\n";
}

int main() {
    proPrint(2, 1);
    proPrint(2.4,3.9);
    proPrint('A','l');
    string sA = "pro";
    string sB = "Print!";
    proPrint (sA, sB);
    int a=2;
    int b=1;
    proPrintTemplate(a,b);
    cout << "You gave me " << a << " and " <<b <<"\n";
    cout << "Together they make " << a+b << ".\n";
    double c=2.4;
    double d=3.9;
    proPrintTemplate(c,d);
    cout << "You gave me " << c << " and " <<d <<"\n";
    cout << "Together they make " << c+d << ".\n";
    char e='A';
    char f='l';
    proPrintTemplate(e,f);
    cout << "You gave me " << e << " and " <<f <<"\n";
    cout << "Together they make " << e+f << ".\n";
    string g="pro";
    string h="Print!";
    proPrintTemplate(g,h);
    cout << "You gave me " << g << " and " <<h <<"\n";
    cout << "Together they make " << g+h << ".\n";
}
