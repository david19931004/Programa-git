#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
	float notas, suma=0, promedio=0;
	cout<<"Introduce tus 4 calificaciones: "<<endl;
	for (int i=1;i<=6;i++)
	{
		cin>>nota;
		suma+=notas;
	}
	promedio=suma/4;
	cout<<"\nEl promedio de las notas es "<<promedio<<endl;
	if (promedio>3.5){
		cout<<"\nAPROBADO"<<endl;
	}
	else if(promedio >=3 && promedio <=3.4){
  	cout<<"\nEn este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar."<<endl;  
 	}
 	else{
 	 cout<<"\nNO APROBADO."<<endl;
 	}	
	cout<<"\n\n";                                                 
	system("pause");
	return 0;
	}                      ///////// CRISTYAN DAVID RODRIGUEZ RODRIGUEZ /////////////
	
