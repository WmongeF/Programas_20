#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <bitset>
#include <cmath>

using namespace std;

void getSuma();                        
void getResta();                       
void getMultiplicacion();              
void getDivision();                    
void getParImpar();                        
void getKilometros();                 
void getMetrospulgadas();
void getKiloslibras(); 
void getPalindromo();
void getConversion();  
void getConversionletras(); 
void getCondecimales(); 
void getTablamult(); 
void getTablasmultiplicar(); 
void getMultigrafico(); 
void getDecimalbinario(); 
void getDecimalhexadecimal(); 
void getfiguraGeo();
void getpuntopantalla();
void getcajero();
void getHipotenusa();
void getpromedio();
void getvotos();
void getIVA();
void getarea();
void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
} 
main()
{

   int op;
   while(op != 26)
   { 
      cout<<"-----------UMG----------\n"<<endl;
 		cout<<"WALTER ORLANDO MONGE FARFAN"<<endl;
        cout<<" 1)  1.1 Suma."<<endl;
        cout<<" 2)  1.2 Resta."<<endl;
        cout<<" 3)  1.3 Multiplicacion."<<endl;
        cout<<" 4)  1.4 Division."<<endl;
        cout<<" 5)  2   Determinar si un numero es par o impar."<<endl;
        cout<<" 6)  3.1 Convertir de kilometros a millas y de millas a kilometros."<<endl;
        cout<<" 7)  3.2 Conversion de metros a pulgadas y pulgadas a metros."<<endl;
        cout<<" 8)  3.4 Conversion de kilogramos a libras y libras a kilogramos."<<endl;   
        cout<<" 9)  4   Determinar si una palabra o un numero es Palindromo."<<endl;
        cout<<" 10) 5   Conversion de numeros arabigos a romanos."<<endl;
        cout<<" 11) 6   Conversion de numeros enteros a letras."<<endl;
        cout<<" 12) 7   Conversion de numeros enteros con decimal a letras."<<endl;
        cout<<" 13) 8   Una tabla de multiplicar."<<endl;
        cout<<" 14) 9   Todas las tablas de multiplicar del 1 al 10."<<endl;
        cout<<" 15) 10  Multiplicacion de forma grafica."<<endl;
        cout<<" 16) 11  Conversion de numeros decimales a binario."<<endl;
        cout<<" 17) 12  Conversion de numeros decimales a hexadecimales."<<endl;
        cout<<" 18) 13  Crear figura Geometrica Basica."<<endl;
        cout<<" 19) 14  Mover un punto por toda la pantalla."<<endl;
        cout<<" 20) 15  Cajero Automatico."<<endl;
        cout<<" 21) 16  Enontrar la hipotenusa de un triangulo."<<endl;
        cout<<" 22) 17  Promedio"<<endl;
        cout<<" 23) 18  Votos"<<endl;
        cout<<" 24) 19  IVA"<<endl;
        cout<<" 25) 20  Area Triangulo"<<endl;
        cout<<" Digite una opcion: "<<endl;
        cin>>op;
        
        switch(op){
    	
            case 1:{
               system("cls"); 
			   getSuma();              	
        	   system("pause");}
            break;
          
            case 2:
               system("cls"); 
			   getResta();               	
        	   system("pause");
            break;
			
			case 3:
               system("cls");
			   getMultiplicacion();          	
        	   system("pause");
            break;
			
			case 4:
               system("cls");
			   getDivision();              	
        	   system("pause");
            break;
			
			case 5:
               system("cls");
			   getParImpar();          
        	   system("pause");
            break;
			
			case 6:
               system("cls");
			   getKilometros();           	
        	   system("pause");
            break;
			
			case 7:
               system("cls");
			   getMetrospulgadas();        	
        	   system("pause");
            break;
            
            case 8:
               system("cls");
			    getKiloslibras();      	
        	   system("pause");
            break;
			
			case 9:
               system("cls");
			   getPalindromo();          	
        	   system("pause");
            break;
			
			
			case 10:
               system("cls");
			   getConversion();         	
        	   system("pause");
            break;
			
			case 11:
               system("cls");
			   getConversionletras();         	
        	   system("pause");
            break;
			
			case 12:
               system("cls");
               getCondecimales();           	
        	   system("pause");
            break;
			
			case 13:
               system("cls");
			   getTablamult();           	
        	   system("pause");
            break;
			
			case 14:
               system("cls");
			   getTablasmultiplicar();           	
        	   system("pause");
            break;
			
			case 15:
               system("cls");
			   getMultigrafico();              	
        	   system("pause");
            break;
			
			case 16:
               system("cls");
			   getDecimalbinario();         
        	   system("pause");
            break;
			
			case 17:
               system("cls");
			   getDecimalhexadecimal();        	
        	   system("pause");
            break;         
	        case 18:
               system("cls");
			   getfiguraGeo();         	
        	   system("pause");
            break;
            case 19:
               system("cls");
			   getpuntopantalla();         	
        	   system("pause");
            break;
            case 20:
               system("cls");
			   getcajero();         	
        	   system("pause");
            break;
			
			case 21:
               system("cls");
			   getHipotenusa();                         	
        	   system("pause");
            break;
            
			case 22:
               system("cls");
			   getpromedio();                       	
        	   system("pause");
            break; 
			
			case 23:
            system("cls");
			getvotos();                         	
        	system("pause");
            break;
			
			case 24:
            system("cls");
			getIVA();                        	
        	system("pause");
            break;  
			
			case 25:
            system("cls");
			getarea();                        	
        	system("pause");
            break;  
        
         }
         }
	while(op != 26);
 
 
}

void getSuma(){ 
	int x;
	int y;
	float suma;
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>x;
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>y;
	suma=x+y;
	cout<<"El resultado es: "<<suma<<endl;
}

void getResta(){ 
	int x;
	int y;
	float resta;
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>x;
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>y;
	resta=x-y;
	cout<<"El resultado es: "<<resta<<endl;
}

void getMultiplicacion(){ 
	int x;
	int y;
	float multiplicacion;
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>x;
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>x;
	multiplicacion=x*y;
	cout<<"El resultado es: "<<multiplicacion<<endl;
}

void getDivision(){ 
	int x;
	int y;
	float division;
	cout<<"Ingrese el primer valor: "<<endl;
	cin>>x;
	cout<<"Ingrese el segundo valor: "<<endl;
	cin>>y;
	division=x/y;
	cout<<"El resultado es: "<<division<<endl;
}

void getParImpar(){  
int num;
cout<<"Ingrese el valor: "<<endl;
cin>>num;
div_t resultado;

resultado=div(num,2);

    if (resultado.rem>0)

         {

          cout << num << " es impar" << endl;

         }

    else {

          cout << num << " es par" << endl;

         }

cin.get();


}	


void getKilometros(){  

float milla;
float km;
float r;
int x;
	
	
cout<<"Conversiones de Kilometros a milla y viceversa"<<endl;
cout<<"[1] Kilometros a millas"<<endl;
cout<<"[2] Millas a kilometros"<<endl;
cout<<"Elige una opcion: ";
cin>>x;

if (x == 1){
	
    cout<<"Ingrese la cantidad en Kilometros: ";
    cin>>km;
    r = km * 0.62137;
    cout<<"El valor en millas es: "<<r;
	}
else{
	 
	cout<<"Ingrese la cantidad en millas: ";
	cin>>milla;
	r = milla / 0.62137;
	cout<<"El valor en Kilometros es: "<<r;
	   
    }
}
	
	
void getMetrospulgadas(){           
	
	float metros;
float pulgadas;
float r;
int x;
	
cout<<"Conversiones de metros a pulgadas y viceversa"<<endl;
cout<<"[1] Metros a pulgadas."<<endl;
cout<<"[2] Pulgadas a metros."<<endl;
cout<<"Elige una opcion: ";
cin>>x;

if (x == 1){
	
    cout<<"Ingrese la cantidad en metros: ";
    cin>>metros;
    r = metros * 39.370;
    cout<<"El valor en pulgadas es: "<<r;
	}
else{
	 
	cout<<"Ingrese la cantidad en pulgadas: ";
	cin>>pulgadas;
	r = pulgadas / 39.370;
	cout<<"El valor en metros es: "<<r;
	   
    }
    cout<<endl;
	
}	
	
	
void getKiloslibras(){       //numero 8 conversion de kilos alibras
		
float libras;
float kilogramos;
float r;
int x;
	
	
cout<<"Conversiones de Kilogramos a libras y viceversa"<<endl;
cout<<"[1] Kilogramos a libras"<<endl;
cout<<"[2] Libras a kilogramos."<<endl;
cout<<"Elige una opcion: ";
cin>>x;

if (x == 1){
	
    cout<<"Ingrese la cantidad en kilogramos: ";
    cin>>kilogramos;
    r = kilogramos * 2.2046;
    cout<<"El valor en libras es: "<<r;
	}
else{
	 
	cout<<"Ingrese la cantidad en libras: ";
	cin>>libras;
	r = libras / 2.2046;
	cout<<"El valor en Kilogramos es: "<<r;
	   
    }
	cout<<endl;	
}
	

void getPalindromo(){       
	string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra o numero a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra/numero ingresado es palindromo" << endl;
    } else {
        cout << "La palabra/numero ingresado no es palindromo" << endl;
    }
	
}

void getConversion(){
	
int num, c;

cout << "Transformacion de numero arabigos a romanos" << endl;
cout << "Escribe el numero a convertir:" << endl;
cin >> c;
num=c;
while(num!=0)
{

if (num<= 3999 && num>= 1000)
{
cout << "M";
num = num -1000;
}
else if(num <1000 && num>=900)
{
cout << "CM";
num = num - 900;
}
else if(num < 900 && num>500)
{
cout << "D";
num = num - 500;
}
else if (num == 500)
{
cout << "D";
num = num -500;
}
else if (num<500 && num>= 400)
{
cout << "CD";
num = num - 400;
}
else if (num<400 && num >99)
{
cout << "C";
num = num -100;
}
else if (num< 100 && num>89)
{
cout << "XC";
num = num - 90;
}
else if (num< 90 && num>59)
{
cout << "L";
num = num - 50;
}
else if(num<60 && num >50)
{
cout << "L";
num = num - 50;
}
else if (num ==50)
{
cout << "L";
num = num -50;
}
else if(num<50 && num>39)
{
cout << "XL";
num = num - 40;
}
else if(num< 40 && num> 10)
{
cout << "X";
num = num - 10;
}
else if(num == 10)
{
cout << "X";
num = num -10;
}
else if(num==9)
{
cout << "IX";
num = num - 9;
}
else if(num<=8 && num>=6)
{
cout << "V";
num = num - 5;
}
else if (num == 5)
{
cout << "V";
num = num - 5;
}
else if (num == 4)
{
cout << "IV";
num = num - 4;
}
else if (num<= 3 && num>=1)
{
cout << "I";
num = num - 1;
}
}
}
void getConversionletras(){
	
    int f;
    cout<<"Ingrese un numero"<<endl;
    cin>>f;
if((f<1)||(f>999)) cout<<"Ingrese un numero:\n";
else
 
    {
        if(f>=900)   {cout<<"NOVECIENTOS " ;f=f-900;}
       else if(f>=800)   {cout<<"OCHOCIENTOS " ;f=f-800;}
       else if(f>=700)   {cout<<"SETECIENTOS " ;f=f-700;}
       else if(f>=600)   {cout<<"SEISCIENTOS " ;f=f-600;}
       else if(f>=500)   {cout<<"QUINIENTOS "  ;f=f-500;}
       else if(f>=400)   {cout<<"CUATROCIENTOS ";f=f-400;}
       else if(f>=300)   {cout<<"TRESCIENTOS " ;f=f-300;}
       else if(f>=200)   {cout<<"DOSCIENTOS "  ;f=f-200;}
       else if(f>100)    {cout<<"CIENTO "  ;f=f-100;}
       else if(f==100)  {cout<<"CIEN"     ;f=f-100;}
        if(f>90) {cout<<"NOVENTA Y "   ;f=f-90; }
            if(f==90)   {cout<<"NOVENTA";f=f-90; }  
            if(f>80) {cout<<"OCHENTA Y";f=f-80; }
            if(f==80)   {cout<<"OCHENTA"  ;f=f-80; }
            if(f>70) {cout<<"SETENTA Y "   ;f=f-70; }
            if(f==70)   {cout<<"SETENTA"  ;f=f-70; }
            if(f>60) {cout<<"SESENTA Y "   ;f=f-60; }
            if(f==60)   {cout<<"SESENTA"  ;f=f-60; }
            if(f>50) {cout<<"CINCUENTA Y " ;f=f-50; }
            if(f==50)   {cout<<"CINCUENTA" ;f=f-50; }
            if(f>40) {cout<<"CUARENTA Y "  ;f=f-40; }
            if(f==40)   {cout<<"CUARENTA" ;f=f-40; }
            if(f>30) {cout<<"TREINTA Y "   ;f=f-30; }
            if(f==30)   {cout<<"TREINTA"  ;f=f-30; }
            if(f>20) {cout<<"VEINTI"      ;f=f-20; }
            if(f==20)   {cout<<"VEINTE"   ;f=f-20; }
        if(f>=16)    {cout<<"DIECI"        ;f=f-10; }
       else if(f==15)   {cout<<"QUINCE"   ;f=f-15; }
       else if(f==14)   {cout<<"CATORCE"  ;f=f-14; }
       else if(f==13)   {cout<<"TRECE"    ;f=f-13; } 
       else if(f==12)   {cout<<"DOCE"     ;f=f-12; }
       else if(f==11)   {cout<<"ONCE"     ;f=f-11; }
       else if(f==10)   {cout<<"DIEZ"     ;f=f-10; }      
        if(f==9)    {cout<<"NUEVE"        ;f=f-9;  }
        if(f==8)    {cout<<"OCHO"         ;f=f-8;  }
        if(f==7)    {cout<<"SIETE"        ;f=f-7;  }
            if(f==6)    {cout<<"SEIS"     ;f=f-6;  }
       else if(f==5)    {cout<<"CINCO"    ;f=f-5;  }
       else if(f==4)    {cout<<"CUATRO"   ;f=f-4;  }
       else if(f==3)    {cout<<"TRES"     ;f=f-3;  }
       else if(f==2)    {cout<<"DOS"      ;f=f-2;  }
       else if(f==1)    {cout<<"UNO"      ;f=f-1;  }
       }
    cout<<endl;
cin.ignore();
	
}
	
void getCondecimales(){
	double decimal, parteEntera, parteDecimal;
	int valor, valord,unidad,decena,centena,millar,du,dd,dc;
	cout<<"Escriba un numero";
	cin>>decimal;
	parteDecimal = modf(decimal, &parteEntera);
	parteDecimal *= 1000;
	valor = parteEntera;
	valord = parteDecimal;

	unidad = valor%10;
	valor /= 10;
	decena = valor%10;
	valor /= 10;
	centena = valor%10;
	valor /= 10;
	millar = valor%10;
	valor /= 10;
	
	du = valord%10;
	valord /= 10;
	dd = valord%10;
	valord /= 10;
	dc = valord%10;
	valord /= 10;
	
	switch (millar){
		case 1: cout<<"Mil "; break;
		case 2: cout<<"Dos mil "; break;
		case 3: cout<<"Tres mil "; break;
		case 4: cout<<"Cuatro mil "; break;
		case 5: cout<<"Cinco mil "; break;
		case 6: cout<<"Seis mil "; break;
		case 7: cout<<"Siete mil "; break;
		case 8: cout<<"Ocho mil "; break;
		case 9: cout<<"Nueve mil "; break;
	}
	
	switch (centena){
		case 1: 
			if (decena > 0 || unidad > 0){
				cout<<"ciento ";
			}
			else{
				cout<<"cien";
			}
			break;
		case 2: cout<<"doscientos "; break;
		case 3: cout<<"trescientos "; break;
		case 4: cout<<"cuatrocientos "; break;
		case 5: cout<<"quinientos "; break;
		case 6: cout<<"seiscientos "; break;
		case 7: cout<<"setecientos "; break;
		case 8: cout<<"ochocientos "; break;
		case 9: cout<<"novecientos "; break;
	}
	
	switch(decena){
		case 1:
			if (unidad == 1){
				cout<<"once";
			}
			else if (unidad == 2){
				cout<<"doce";
			}
			else if (unidad == 3){
				cout<<"trece";
			}
			else if (unidad == 4){
				cout<<"catorce";
			}
			else if (unidad == 5){
				cout<<"quince";
			}
			else if ((unidad>=6)&&(unidad<=9)){
				cout<<"dieci";
			}
			break;
		case 2:
			if (unidad == 0){
				cout<<"veinte";
			} else{
				cout<<"veinti";
			}
			break;
		case 3:
			cout<<"treinta";
			if (unidad > 0){
				cout<<" y ";
			} 
			break;
		case 4:
			cout<<"cuarenta";
			if (unidad > 0){
				cout<<" y ";
			} 
			break;
		case 5:
			cout<<"cincuenta";
			if (unidad > 0){
				cout<<" y ";
			} 
			break;
		case 6:
			cout<<"sesenta";
			if (unidad > 0){
				cout<<" y ";
			} 
			break;
		case 7:
			cout<<"setenta";
			if (unidad > 0){
				cout<<" y ";
			} 
			break;
		case 8:
			cout<<"ochenta";
			if (unidad > 0){
				cout<<" y ";
			} 
			break;
		case 9:
			cout<<"noventa";
			if (unidad > 0){
				cout<<" y ";
			} 
			break;
	}
	
	switch (unidad){
		case 0: 
			if(decena == 0 && centena == 0 && millar == 0){
				cout<<"cero";
			}
			break;
		case 1: 
			if(decena != 1)
			{
				cout<<"uno";
			}
			break;
		case 2: 
			if(decena != 1)
			{
				cout<<"dos";
			}
			break;
		case 3: 
			if(decena != 1)
			{
				cout<<"tres";
			}
			break;
		case 4: 
			if(decena != 1)
			{
				cout<<"cuatro";
			}
			break;
		case 5: 
			if(decena != 1)
			{
				cout<<"cinco";
			}
			break;
		case 6: cout<<"seis"; break;
		case 7: cout<<"siete"; break;
		case 8: cout<<"ocho"; break;
		case 9: cout<<"nueve"; break;
	}
	
	cout<<" punto ";
	
	switch (dc){
		case 0: cout<<"Cero "; break;
		case 1: 
			if (dd > 0 || du > 0){
				cout<<"ciento ";
			}
			else{
				cout<<"cien";
			}
			break;
		case 2: cout<<"doscientos "; break;
		case 3: cout<<"trescientos "; break;
		case 4: cout<<"cuatrocientos "; break;
		case 5: cout<<"quinientos "; break;
		case 6: cout<<"seiscientos "; break;
		case 7: cout<<"setecientos "; break;
		case 8: cout<<"ochocientos "; break;
		case 9: cout<<"novecientos "; break;
	}
	
	switch(dd){
		case 0: 
			if(dc == 0){
				cout<<"cero ";
			}
			break;
		case 1:
			if (du == 1){
				cout<<"once";
			}
			else if (du == 2){
				cout<<"doce";
			}
			else if (du == 3){
				cout<<"trece";
			}
			else if (du == 4){
				cout<<"catorce";
			}
			else if (du == 5){
				cout<<"quince";
			}
			else if ((du>=6)&&(du<=9)){
				cout<<"dieci";
			}
			break;
		case 2:
			if (du == 0){
				cout<<"veinte";
			} else{
				cout<<"veinti";
			}
			break;
		case 3:
			cout<<"treinta";
			if (du > 0){
				cout<<" y ";
			} 
			break;
		case 4:
			cout<<"cuarenta";
			if (du > 0){
				cout<<" y ";
			} 
			break;
		case 5:
			cout<<"cincuenta";
			if (du > 0){
				cout<<" y ";
			} 
			break;
		case 6:
			cout<<"sesenta";
			if (du > 0){
				cout<<" y ";
			} 
			break;
		case 7:
			cout<<"setenta";
			if (du > 0){
				cout<<" y ";
			} 
			break;
		case 8:
			cout<<"ochenta";
			if (du > 0){
				cout<<" y ";
			} 
			break;
		case 9:
			cout<<"noventa";
			if (du > 0){
				cout<<" y ";
			} 
			break;
	}
	
	switch (du){
		case 0: 
			if(dd == 0 && dc == 0){
				cout<<"cero";
			}
			break;
		case 1: 
			if(dd != 1)
			{
				cout<<"uno";
			}
			break;
		case 2: 
			if(dd != 1)
			{
				cout<<"dos";
			}
			break;
		case 3: 
			if(dd != 1)
			{
				cout<<"tres";
			}
			break;
		case 4: 
			if(dd != 1)
			{
				cout<<"cuatro";
			}
			break;
		case 5: 
			if(dd != 1)
			{
				cout<<"cinco";
			}
			break;
		case 6: cout<<"seis"; break;
		case 7: cout<<"siete"; break;
		case 8: cout<<"ocho"; break;
		case 9: cout<<"nueve"; break;
	}
}

void getTablamult(){  
	
    int number;
    cout<<"Agregue el numero de la tabla que desea ver :"<<endl;
    cin>>number;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * number;
        cout<<number <<" x "<< i <<"="<< multiplicacion <<endl;
    }
	
}

void getTablasmultiplicar(){   
	
	int izquierda=1;
int derecha=1;

cout << "Tablas de multiplicar" << endl;
while (izquierda <= 10){
cout << izquierda << "x" << derecha << "=" << izquierda*derecha << endl;
if (derecha == 10){
cout << endl;
izquierda++;
derecha=0;}
derecha++;
}
cin.get();	
}

void getMultigrafico(){       
 int z,x,a,b,c,d,e,f,p,g,cent1,cent2;
int uni,dec,uni1,dec1,uni2,dec2,uni3,dec3;
gotoxy(20,2);cout<<("Multiplicacion de Dos Digitos:");

gotoxy(20,6);cout<<("Ingrese Cantidad: ");
cin>>a;
gotoxy(20,7);cout<<("Ingrese Cantidad: ");
cin>>b;
int r=a*b;
gotoxy(20,10);cout<<a;
gotoxy(18,12);cout<<("X");gotoxy(20,12);cout<<b;
gotoxy(15,13);cout<<("___________");

	uni = a%10; a /= 10;
	dec = a%10; a /= 10;
    uni1 = b%10; b /= 10;
	dec1 = b%10; b /= 10;

c=uni1*uni;
	uni2 = c%10; c /= 10;
	dec2 = c%10; c /= 10;
	cent1= c%10; c /= 10;
	
d=uni1*dec+dec2;
gotoxy(20,15);cout<<d<<uni2;

e=dec1*uni;
	uni3 = e%10; e /= 10;
	dec3 = e%10; e /= 10;
	
	cent2 = e%10; e /= 10;
	
f=dec1*dec+dec3;
gotoxy(19,16);cout<<f<<uni3;
gotoxy(15,17);cout<<("____________");
gotoxy(19,18);cout<<r<<endl;
gotoxy(19,19);cout<<" ";
}


void getDecimalbinario(){      
	
using std::cout; using std::endl;
using std::string; using std::bitset;
using std::cin;

    int number;
    cout<<"Ingrese el valor a convertir en binario: "<<endl;
    cin>>number;

    bitset<32> bs1(number);
    cout << "binary:  " << bs1 << endl;
    bitset<16> bs2(number);
    cout << "binary:  " << bs2 << endl;
    bitset<8> bs3(number);
    cout << "binary:  " << bs3 << endl;
    bitset<5> bs4(number);
    cout << "binary:  " << bs4 << endl;
    cout << endl;
	
}

void getDecimalhexadecimal(){ 
	
    long dec;
    int rem;
    std::cout << "Ingrese el valor a convertir:  ";
    std::cin >> dec;
    while (dec > 0) {
        rem = dec % 16;
        if (rem > 9) {
            switch (rem) {
               case 10: std::cout << "su valor en hexadecimal es: A"; break;
               case 11: std::cout << "su valor en hexadecimal es: B"; break;
               case 12: std::cout << "su valor en hexadecimal es: C"; break;
               case 13: std::cout << "su valor en hexadecimal es: D"; break;
               case 14: std::cout << "su valor en hexadecimal es: E"; break;
               case 15: std::cout << "su valor en hexadecimal es:F"; break;
            }
        }
        else {
           std::cout<<"Su valor en hexadecimal es: " <<rem;
        }
        cout<<endl;
        dec = dec / 16;
    }
}

void getfiguraGeo(){
	char continuar;
	int op;
	cout<<"Ingrese opcion: "<<endl;
	cout<<"1. Cuadrado."<<endl;
	cin>>op;
	do{
		switch(op){
			case 1:{
					int l;
					cout<<"Ingrese lado: "<<endl;
					cin>>l;
				for(int i = 0; i<l ; i++){
					for(int j = 0; j<l; j++){
					cout<<"*";
				}	
					cout<<endl;
			}	break;
		}
		}
		cout<<"presione s para volver a ejecutar.";
		cin>>continuar;	
	}
	while(continuar=='s');
		
}


void getpuntopantalla(){
	
	char opc;
	int x = 1,y = 1;
	while (opc != 'q')
	{
		if(x < 0)
		{
			x = 150;
		}
		if(x > 150)
		{
			x = 0;
		}
		if(y < 0)
		{
			y = 30;
		}
		if(y > 30)
		{
			y = 0;
		}
		system ("cls");
		gotoxy(x,y);
		cout<<"%%%";
		opc=getch();
		switch(opc)
		{
			case 'i':
				y--;
			break;
			case 'k':
				y++;
			break;
			case 'j':
				x--;
			break;
			case 'l':
				x++;
			break;
		}
	}
	
}

void getcajero(){
	 int saldo=10000;
 int op, monto;
 do{
  printf ("--CAJERO AUTOMATICO--\n");
  printf ("1- Consultar saldo inicial\n");
  printf ("2- Retirar efectivo\n");
  printf ("3- SALIR\n");
  scanf ("%d", &op);
  switch (op){
   case 1:
    printf ("Su saldo inicial es de:%d\n",saldo);
    break;
   case 2:
    printf ("Ingrese monto a retirar\n");
    scanf ("%d", &monto);
    saldo=saldo-monto;
    printf ("Su nuevo saldo es de:%d\n",saldo);
    break;
  }  
 }
 while (op!=3);
}


void getHipotenusa(){ 
	
float x,z,hi=0;
 
  cout << "Digite cateto 1: ";
  cin >> x;
  cout << "Digite cateto 2: ";
  cin >> z;
 
  hi = sqrt(pow(x,2)+pow(z,2));
 
  cout << "La hipotenusa es " << hi << endl;
  cout<<endl;
}
void getpromedio(){
		
		int n,s=0,p=0,c;
	cout<<"Ingrese un numero, 0 para calcular:";
	cin>>n;
	c=0;
	while (n>0)
	{
		s=s+n;
		c=c+1;
		p=s/c;
		cout<<"Ingrese otro numero, 0 para calcular:"<<endl;
		cin>>n;
	}
	cout<<"El promedio es: "<<p<<endl;
}

void getvotos(){
		int voto=0,M=0,J=0,N=0,votantes=0;
	cout<<"Elija el numero de su candidato"<<endl;
	cout<<"1) Voto por MARIO LOPEZ"<<endl;
	cout<<"2) Voto por JUAN CARLOS"<<endl;
	cout<<"3) Voto en blanco"<<endl;
	cout<<"4) Finalizar la votacion"<<endl;

	while(voto!=4)
	{
	cout<<"Ingrese un numero segun sea su criterio: "<<endl;
	cin>>voto;
		if(voto==1)
		{
			M=M+1;
			votantes=votantes+1;
		}
		if(voto==2)
		{
			J=J+1;
			votantes=votantes+1;
		}
		if(voto==3)
		{
			N=N+1;
			votantes=votantes+1;
		}
	}
	cout<<"Votos de MARIO LOPEZ--"<<M<<endl;
	cout<<"Votos de JUAN CARLOS--"<<J<<endl;
	cout<<"Votos NULOS--" <<N<<endl;
	cout<<"Total de votantes--"<<votantes<<endl;
}

void getIVA(){
	double a,b,x, iv=0.12;
	cout<<"Ingrese el precio del producto: ";
	cin>>a;	
	x=a*iv;
	b=a+x;
	cout<<"El IVA del producto es: "<<x<<endl;
	cout<<"El precio total es: "<<b<<endl;
}

void getarea(){
	  int base = 0;
    int altura = 0;
    int area = 0;


    cout <<"Calculo de area de figuras geometricas\n" <<endl;
    cout <<"Triangulo" <<endl;
        cout <<"La formula para el area del triangulo es base*altura/2"<<endl;
        cout <<"LLena los parametros;\n" <<endl;
        cout <<"base: \n" <<endl;
        cin >>base;
        cout <<"Altura:\n " <<endl;
        cin >>altura;
        area = base*altura/2;
        cout <<"El area del triangulo es: \n";
        cout <<area;
}
