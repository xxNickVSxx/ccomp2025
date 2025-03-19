#include <iostream>

using namespace std;

int main()
{
    int num1;
    float num2;
    unsigned short numshort = 32765;
    int numint = 10;
    long numlong = 10;
    long long numlonglong = 10;
    char val = 'A';
    int valNum = static_cast<int>(val);


    num1 = 9;
    num2 = 2;

    cout<<(num1+num2)<<endl;
    cout<<(num1-num2)<<endl;
    cout<<(num1*num2)<<endl;
    cout<<(num1/num2)<<endl;
    cout<<"El tamano de una variable tipo short es:"<<sizeof(numshort)<<endl;
    cout<<"El tamano de una variable tipo int es:"<<sizeof(numint)<<endl;
    cout<<"El tamano de una variable tipo long es:"<<sizeof(numlong)<<endl;
    cout<<"El tamano de una variable tipo long long es:"<<sizeof(numlonglong)<<endl;

    //unsigned elimina el signo negativo
    //sizeof sirve para mostrar el tamaño de la variable

    cout<<numshort<<endl;
    numshort = numshort + 1;
    cout<<numshort<<endl;
    numshort = numshort + 1;
    cout<<numshort<<endl;
    numshort = numshort + 1;
    cout<<numshort<<endl;
    numshort = numshort + 1;
    cout<<numshort<<endl;
    numshort = numshort + 1;
    cout<<numshort<<endl;
    numshort = numshort + 1;

    cout<<val<<endl;
    cout<<val<<" Su valor es numero es: "<<valNum<<endl;
}
