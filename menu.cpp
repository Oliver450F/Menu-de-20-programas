#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include <cstdlib>
void gotoxy (int x, int y){
	HANDLE hcon;
	 hcon  = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwpos;
	dwpos.X = x;
	dwpos.Y = y;
	SetConsoleCursorPosition(hcon, dwpos);
	
}
using namespace std;
int main(){
	int opcioo;
	cout<<" ----------Elija que programa desea utilizar-------------"<<endl;
	cout<<" 1.  Suma resta multiplicacion y division de dos numeros "<<endl;
	cout<<" 2.  Determinar si un numero es par o impar "<<endl;
	cout<<" 3.  Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos "<<endl;
	cout<<" 4.  Determinar si una palabra o un numero es palndromo "<<endl;
	cout<<" 5.  Conversion de numeros arabigos a romanos (minimo 1,000) "<<endl;
	cout<<" 6.  Conversion de numeros enteros a letras "<<endl;
	cout<<" 7.  Una tabla de multiplicar "<<endl;
	cout<<" 8.  Todas las tablas de multiplicar del 1 al 10 "<<endl;
	cout<<" 9.  Convertir un numero dedimal a binario "<<endl;
	cout<<" 10. Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<" 11. Mover un punto en varios lados de la pantalla "<<endl;
	cout<<" 12. Cajero automatico "<<endl;
	cout<<" 13. Calcular la hipotenusa"<<endl;
	cout<<" 14. Mostrar numeros pares del 0 al 200 "<<endl;
	cout<<" 15. Calcular los divisores de un numero "<<endl;
	cout<<" 16. Calcular el promedio de 4 calificaciones"<<endl;
	cout<<" 17. calcular el area de un cuadrado "<<endl;
	cout<<" 18. Mostrar la moneda con mas valor"<<endl;
	cin>> opcioo;
	
	switch ( opcioo ){
		case 1:
			#include <iostream>
using namespace std;
	float a,b, suma, resta, multiplicacion, division;
	cout<<"ingrese dos numeros : "<<endl;
	cin>> a;
	cin>> b;
	// operaciones del programa
	suma=a+b;
	resta=a-b;
	multiplicacion=a*b;
	division=a/b;
	cout<<" la suma es de : "<<suma<<endl;
	cout<<" la resta es de : "<<resta<<endl;
	cout<<" la multiplicacion es de : "<<multiplicacion<<endl;
	cout<<" la division es de : "<<division<<endl;
	
	break;

		
   case 2:
   	#include<iostream>
using namespace std;

	int numero;
	cout<<" ingrese un numero : "<<endl;
	cin>> numero;
	if (numero==0){
		cout<<" el numero es 0 "<<endl;
	}
	else if (numero%2==0){
		cout<<" el numero es par  ";
		
	}
	else{
			cout<<" el numero es impar  ";
		}
	
   	break;
   	
   	case 3:
   		#include <iostream>
using namespace std;

	// Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos
	float kilometros, millas, metros, pulgadas, libras, kilos;
	int opcion;
	cout<<" ingrese una opcion : "<<endl;
	cout<<"1. kilometros a millas "<<endl;
	cout<<"2. metros a pulgadas "<<endl;
	cout<<"3. libras a kilos "<<endl;
	cin>> opcion;
	switch (opcion){
		
		case 1:
			cout<<" ---- kilometros a millas -----"<<endl;
			cout<<" ingrese la cantidad de kilometros a convertir "<<endl;
			cin>> kilometros;
			millas= kilometros*0.6213;
			cout<< kilometros <<" kilometros "<<"equivalen a : "<<millas<<" millas "<<endl;
			break;
			
		case 2:
			cout<<"----- metros a pulgadas ------"<<endl;
			cout<<" ingrese la cantidad de metros a convertir "<<endl;
			cin>> metros;
			pulgadas=metros*39.37;
			cout<<metros <<" metros "<<" equivalen a : "<<pulgadas<< " pulgadas "<<endl;
			break;
			
			
			
		case 3:
			cout<<"----- libras a kilos ----- "<<endl;
			cout<<" ingrese la cantidad de libras a convertir "<<endl;
			cin>>libras;
			kilos=libras*0.45;
			cout<<libras<< " libras "<< " equivalen a : "<<kilos<< " kilos"<<endl;
			break;
			
 }
 
 
		case 4:{
			using namespace std;
{

    string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo!! :D" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo!! :D" << endl;
       	
    }
			break;
		}
			
case 5:{
	#include<iostream>

using namespace std;


	int numero,unidades,decenas,centenas,millar; 
	
	cout<<"Digite un numero: "; 
	cin>>numero; 

	unidades = numero%10; numero /= 10;
	decenas = numero%10; numero /= 10; 
	centenas = numero % 10; numero /= 10; 
	millar = numero % 10 ; numero /= 10; 
	
	
	switch(millar){
		case 1: cout<<"M";break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM";break;
	}
	
	switch(centenas){
		case 1: cout<<"C";break;
		case 2: cout<<"CC";break;
		case 3: cout<<"CCC";break;
		case 4: cout<<"CD";break;
		case 5: cout<<"D";break;
		case 6: cout<<"DC";break;
		case 7: cout<<"DCC";break;
		case 8: cout<<"DCCC";break;
		case 9: cout<<"CM";break;
	}
	
	switch(decenas){
		case 1: cout<<"X";break;
		case 2: cout<<"XX";break;
		case 3: cout<<"XXX";break;
		case 4: cout<<"XL";break;
		case 5: cout<<"L";break;
		case 6: cout<<"LX";break;
		case 7: cout<<"LXX";break;
		case 8: cout<<"LXXX";break;
		case 9: cout<<"XC";break;
	}
	
	switch(unidades){
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"IX";break;
	}
	

	break;
	
	case 6:{

 
using namespace std;
 

 
   int numero, n1, n2, n3, n4, n5;
   cout<<"Escribe un numero de uno a diez mil (numeros): "; cin>>numero;
   n1 = numero / 10000;
   n2 = (numero / 1000) % 10;
   n3 = (numero / 100) % 10;
   n4 = (numero / 10) % 10;
   n5 = (numero % 10);
 
   cout<<"\n"<<n1<<" -> Decenas de mil"<<endl;
   cout<<n2<<" -> Unidades de mil"<<endl;
   cout<<n3<<" -> Centenas"<<endl;
   cout<<n4<<" -> Decenas"<<endl;
   cout<<n5<<" -> Unidades \n"<<endl; 
   if(numero > 10000){
      cout<<"El numero ingresado excede el rango de valores";
   }else{
      if(n1 == 1){
      cout<<"Diez mil";
      }
      //Sentencia para determinar los miles
      if(n2 == 1){
         cout<<"MIL ";
      }else if(n2 == 2){
         cout<<"DOS MIL ";
      }else if(n2 == 3){
         cout<<"TRES MIL ";
      }else if(n2 == 4){
         cout<<"CUATRO MIL ";
      }else if(n2 == 5){
         cout<<"CINCO MIL ";
      }else if(n2 == 6){
        cout<<"SEIS MIL ";
      }else if(n2 == 7){
         cout<<"SIETE MIL ";
      }else if(n2 == 8){
         cout<<"OCHO MIL ";
      }else if(n2 == 9){
         cout<<"NUEVE MIL ";
      }
      //Setencia para determinar los cientos
      if(n3 == 1 && n4 == 0 && n5 == 0){
         cout<<"CIEN";
      }else if(n3 == 1){
         cout<<"CIENTO ";
      }else if(n3 == 2){
         cout<<"DOSCIENTOS ";
      }else if(n3 == 3){
         cout<<"TRESCIENTOS ";
      }else if(n3 == 4){
         cout<<"CUATROCIENTOS ";
      }else if(n3 == 5){
         cout<<"QUINIENTOS ";
      }else if(n3 == 6){
         cout<<"SEISCIENTOS ";
      }else if(n3 == 7){
         cout<<"SETECIENTOS ";
      }else if(n3 == 8){
         cout<<"OCHOCIENTOS ";
      }else if(n3 == 9){
         cout<<"NOVECIENTOS ";
      }
      //Setencia para determinar las decenas
      if(n4 == 1 && n5 == 0){
         cout<<"Diez";
      }else if(n4 == 1 && n5 == 1){
         cout<<"ONCE";
      }else if(n4 == 1 && n5 == 2){
         cout<<"DOCE";
      }else if(n4 == 1 && n5 == 3){
         cout<<"TRECE";
      }else if(n4 == 1 && n5 == 4){
         cout<<"CATORCE";
      }else if(n4 == 1 && n5 == 5){
         cout<<"QUINCE";
      }else if(n4 == 1){
         cout<<"DIECI";
      }
      if(n4 == 2 && n5 == 0){
         cout<<"VEINTE";
      }else if(n4 == 2){
         cout<<"VEINTI";
      }else if(n4 == 3 && n5 == 0){
         cout<<"TREINTA";
      }else if(n4 == 3){
         cout<<"TREINTA Y ";
      }else if(n4 == 4 && n5 == 0){
         cout<<"CUARENTA";
      }else if(n4 == 4){
         cout<<"CUARENTA Y ";
      }else if(n4 == 5 && n5 == 0){
         cout<<"CINCUENTA";
      }else if(n4 == 5){
         cout<<"CINCUENTA Y ";
      }else if(n4 == 6 && n5 == 0){
         cout<<"SESENTA";
      }else if(n4 == 6){
         cout<<"SESENTA Y ";
      }else if(n4 == 7 && n5 == 0){
         cout<<"SETENTA";
      }else if(n4 == 7){
         cout<<"SETENTA Y ";
      }else if(n4 == 8 && n5 == 0){
         cout<<"OCHENTA";
      }else if(n4 == 8){
         cout<<"OCHENTA Y ";
      }else if(n4 == 9 && n5 == 0){
         cout<<"NOVENTA";
      }
      else if(n4 == 9){
         cout<<"NOVENTA Y ";
      }
      //Sentencia para determinar las unidades 
      if(n5 == 1 && n4 > 1){
         cout<<"UNO";
      }else if(n5 == 1 && n4 == 0){
         cout<<"UNO"; 
      }else if(n5 == 2 && n4 > 1){
         cout<<"DOS";
      }else if(n5 == 2 && n4 == 0){
         cout<<"DOS";
      }else if(n5 == 3 && n4 > 1){
         cout<<"TRES";
      }else if(n5 == 3 && n4 == 0){
         cout<<"TRES"; 
      }else if(n5 == 4 && n4 > 1){
         cout<<"CUATRO";
      }else if(n5 == 4 && n4 == 0){
         cout<<"CUATRO"; 
      }else if(n5 == 5 && n4 > 1){
         cout<<"CINCO";
      }else if(n5 == 5 && n4 == 0){
         cout<<"CINCO";
      }else if(n5 == 6){
         cout<<"SEIS";
      }else if(n5 == 7){
         cout<<"SIETE";
      }else if(n5 == 8){
         cout<<"OCHO";
      }else if(n5 == 9){
         cout<<"NUEVE";
      }
   }


		
		
		
		break;
		
		case 7:{
			#include<iostream>
using namespace std;
	int numero;
	
	do{
		cout<<" ingrese un numero : ";
		cin>>numero;
	}while ((numero<1) || (numero>10));
	
	for(int i=1;i<=10;i++)
	cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	

			
			break;
			case 8:{


	
system ("cls");
for(int a=1; a<=10;a++){

for(int b=1; b<=10; b++)
{printf("\n %i x %i= %i",a,b,a*b);}
printf("\n");
}
printf("\n");
system("pause");

				
				break;
				
				case 9:{
					#include <string>
#include <iostream>

using namespace std;


    cout << "Ingrese un numero entero positivo: \n";
    int numero;
    string binario = "";
    cin >> numero;
    if (numero > 0) {
        while (numero > 0) {
            if (numero%2 == 0) {
                binario = "0"+binario;
            } else {
                binario = "1"+binario;
            }
            numero = (int) numero/2;
        }
    } else if (numero == 0) {
        binario = "0";
    } else {
        binario = "No se puede realizar la conversión. Ingrese solo numeros positivos";
    }
    cout << "El resultado de la conversion es: " << binario;
    return 0;

					break;
					
					
					
				}
				
				case 10:{
					
					#include <iostream>


    long dec;
    int rem;

    std::cout << "ingrese un numero: ";
    std::cin >> dec;

    while (dec > 0) {
        rem = dec % 16;
        if (rem > 9) {
            switch (rem) {
               case 10: std::cout << "A"; break;
               case 11: std::cout << "B"; break;
               case 12: std::cout << "C"; break;
               case 13: std::cout << "D"; break;
               case 14: std::cout << "E"; break;
               case 15: std::cout << "F"; break;
            }
        }
        else {
            std::cout << rem;
        }
        dec = dec / 16;
    }

					break;
				}
				
				case 11:{
					#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
cout<<"          Insstrucciones: para  poder mover de un lugar a otro debemos de presionar las siguientes lestras:"<<endl;
cout<<"                                            s= para arriba "<<endl;
cout<<"                                            r= para derecha "<<endl;
cout<<"                                            a= para abajo "<<endl;
cout<<"                                            i= para izquierda"<<endl;
using namespace  std;



int x=10,y=10;
char opcion;
opcion=getch();

while(opcion!='x')
{
	gotoxy(x,y);cout<<"c++";
	
	opcion=getch();
	switch(opcion)
	{
		case 's':system("color 1d");gotoxy(x,y--);cout<<"c++";break;
		case 'r':system("color 2c"); gotoxy(x++,y);cout<<"c++";break;
		case 'a':system("color 3b"); gotoxy(x,y++);cout<<"c++";break;
		case 'i':system("color 6a"); gotoxy(x--,y);cout<<"c++";break;
		Sleep(50);
		
	}
	



}
return 0;


					
					break;
				}
				
				case 12:{
					#include<iostream>
using namespace std;

	
int saldo_actual= 2000;
float extra, saldo, retiro=0;
int opcii;
cout<<"                         -------------Bienvenido a su cajero virtual------------ "<<endl;
cout<<"                                        elija una opcion : "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
cout<<"                                    1. ingresar direro a su cuenta "<<endl;
cout<<"                                    2. retirar dinero de su cuenta "<<endl;
cout<<"                                    3. salir"<<endl;
cin>>opcii;


switch (opcii){
	
	case 1: 
	cout<<" ingrese la cantidad de dinero que desea ingresar"<<endl;
	cin>>extra;
	saldo= saldo_actual + extra;
	cout<<" cuenta con "<<saldo<<" disponible ";
	break;
	
	case 2:
		cout<<" ingrese la cantidad a retirar : "<<endl;
		cin>>retiro;
		
		if ( retiro<saldo_actual){
			saldo=saldo_actual - retiro;
			
			cout<<" cuenta con "<<saldo<<" diponible";
			
			
		}else {
			cout<<" no tiene esa cantidad de dinero";
		}
		break;
		
		case 3:
			break;
		
		
}


					
					break;
				
			}
			
			case 13:{
				#include<iostream>

using namespace std;


float c1,c2;
double h;

cout<<"Ingrese cateto 1:";
cin>>c1;
cout<<"Ingrese cateto 2:";
cin>>c2;
h=sqrt(c1*c1+c2*c2);
cout<<"La hipotenusa mide: "<<h;
getch();


				break;
			}
			case 14:{
				#include <stdio.h>
#include<iostream>
using namespace std;


         int i=31;

         const int tope=200;

         for(i=0;i<=200;i=i+2){

                   printf("%d\n",i);

         }

         printf("\nHasta pronto");


				break;
			}
			
			case 15:{
				#include <iostream>




using namespace std;



int a=1; 

int numero;

div_t resultado;



cout << "Ingrese un numero para calcular sus divisores" << endl;  
cin >> numero;

cout << "Los divisores de " << numero << " son:" << endl;

while (a<=numero) { 



    resultado=div(numero,a); 
if (resultado.rem==0)

{



    cout << a << endl;

}

else{



    }

    a++; 

}



system("pause");

return 0;



				break;
			}
			
			case 16:{
				#include <conio.h>
#include <stdio.h>




int x,y,z,j,calf;

printf("Dime tu primer calificacion ");
scanf("%d",&x);

printf("Dime tu segunda calificacion ");
scanf("%d",&y);

printf("Dime tu tercer calificacion ");
scanf("%d",&z);

printf("Dime tu cuarta calificacion ");
scanf("%d",&j);

calf=(x+y+z+j)/4; 

printf("tu calificacion final es %d",calf);
getch();
return 0;

				break;
			}
			
			case 17:{
				#include <stdio.h>
#include<iostream>

using namespace std;


         float l,d;

         printf("Bienvenido al programa que calcula areas de cuadrados.\n");

         do{

                   printf("\nIntroduce el lado: ");

                   scanf("%f",&l);

                   d=sqrt(l*l+l*l);

                   printf("\nLa diagonal de este cuadrado es %f\n",d);

         }while(l!=0);


				break;
			}
			
			case 18:{
				#include<iostream>





int a[20],i,mayor=0;

printf("\n\n $$$$$$Programa que Imprime la Moneda de Mayor Valor.$$$$$$\n\n");

for(i=1;i<=20;i++)

{

printf("\nPorfavor inserte el valor de la moneda numero %d: ",i);

scanf("%d",&a[i]);

if(a[i]>mayor)

mayor=a[i];

else

mayor=mayor;

}

printf("\n\nLa moneda mayor es: %d",mayor);





				break;
			}
				
		}
	}
}
   		}	
			
	}
}
		

}





	


