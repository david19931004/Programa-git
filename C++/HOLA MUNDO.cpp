//TABLA DE MULTIPLICAR DE UN NUMERO 

#include <iostream>    //libreria donde ios significa entrada y salida de datos 
#include<stdlib.h>     //ponemos dicha libreria para agregar el (system pause) y que el compilador no se nos cierre
using namespace std;  // indicacion estandar de c++ donde vamos a poner flujo de entrada y salidad de manera sencilla 

int main ()           //funcion principal, siempre debe ir 
{
int numero;          // variable y dato que se va a progresar 

do{                 //condicional para que se tenga un criterio y poder realziar un proceso que se ordena 
cout<< " ingresa numero que deseas ver su tabla de multiplicar ";
cin>> numero ;    	//valor a ingresar para dar dicha tabla de multiplicar 
}
while ((numero<1) || (numero>100)); //si el valor ingresado es menor a 1 y mayor a 10 el programa vuelve y pregunta hasta que se 
					 // ingrese un dato en el rango fuera de este, si se cumple la condion continua con el ciclo for

for (int i=1;i<=20;i++) //en este ciclo for se arranca desde 1, hasta multiplicar dicho numero hasta el 20 y de 1 en 1 (i++)
{
	cout<< numero<< " * "<<i<< " = "<<numero+i<<endl;
}
cout<< "\n\n";
system("pause"); // con este argumento el proceso queda pausado y se puede reflejar en pantalla sin salir 
return 0;
}


