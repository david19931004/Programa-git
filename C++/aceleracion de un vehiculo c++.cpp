
//aceleracion de un vehiculo (vf-vi)/t
#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
    float a,v1,v2,t;
    cout<<"ingrese velocidad inicial:(m/s) ";cin>>v1;
    cout<<"ingrese velocidad final: (m/s) ";cin>>v2;
    cout<<"ingrese el tiempo : (segundos) ";cin>>t;
    a=(v2-v1)/t;
    cout<<"la aceleracion del vehiculo es: "<<a<<" m/s2";
    cout<< "\n\n";
    system("pause");
    return 0;
}
