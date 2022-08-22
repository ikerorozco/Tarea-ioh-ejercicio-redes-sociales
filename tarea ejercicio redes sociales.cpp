#include <sstream>
#include<stdio.h> 
#include<iostream> 
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<list>
#include<fstream>
#include <string>
#include<conio.h>
#define NOMBRE_ARCHIVO "presenciaredes.csv"
using namespace std;

class Datos{ 

private:
string redSocialClase,conceptoClase;
int anioClase,mesClaseEnero,mesClaseFebrero,mesClaseMarzo,mesClaseAbril,mesClaseMayo,mesClaseJunio,mesClaseJulio,mesClaseAgosto,mesClaseSeptiembre,mesClaseOctubre,mesClaseNoviembre,mesClaseDiciembre;
public:
void asignarRedSocial(string);
void mostrarRedSocial();
void asignarConceptoClase(string);
void asignarAnioClase(int);
void asignarMesClaseEnero(int);
int returnEnero();
void asignarMesClaseFebrero(int);
int returnFebrero();
void asignarMesClaseMarzo(int);
int returnMarzo();
void asignarMesClaseAbril(int);
int returnAbril();
void asignarMesClaseMayo(int);
int returnMayo();
void asignarMesClaseJunio(int);
int returnJunio();
void asignarMesClaseJulio(int);
int returnJulio();
void asignarMesClaseAgosto(int);
void asignarMesClaseSeptiembre(int);
void asignarMesClaseOctubre(int);
void asignarMesClaseNovimbre(int);
void asignarMesClaseDiciembre(int);

}prueba[18];
 
void Datos::asignarRedSocial(string nombre){
	
	redSocialClase = nombre;

 }
 
 void  Datos::mostrarRedSocial(){
 	
 	cout<<redSocialClase<<"    ";
 	cout<<conceptoClase<<"    ";
 	cout<<anioClase<<"   ";
 	cout<<mesClaseEnero<<'\n';
 	
 }
 
 void Datos::asignarConceptoClase(string nombre){
	
	conceptoClase = nombre;

 }
 
  void Datos::asignarAnioClase(int i){
	
	anioClase = i;

 }
 
  void Datos::asignarMesClaseEnero(int i){
	
	mesClaseEnero = i;

 }
 
 int Datos::returnEnero(){
 	
 	return mesClaseEnero;
 	
 }
 
  void Datos::asignarMesClaseFebrero(int i){
	
	mesClaseFebrero = i;

 } 
 
  int Datos::returnFebrero(){
 	
 	return mesClaseFebrero;
 	
 }
 
  void Datos::asignarMesClaseMarzo(int i){
	
	mesClaseMarzo = i;

 } 
 
  int Datos::returnMarzo(){
 	
 	return mesClaseMarzo;
 	
 }
 
  void Datos::asignarMesClaseAbril(int i){
	
	mesClaseAbril = i;

 }
 
  int Datos::returnAbril(){
 	
 	return mesClaseAbril;
 	
 }
 
  void Datos::asignarMesClaseMayo(int i){
	
	mesClaseMayo = i;

 } 
 
  int Datos::returnMayo(){
 	
 	return mesClaseMayo;
 	
 }
 
  void Datos::asignarMesClaseJunio(int i){
	
	mesClaseJunio = i;

 } 
 
  int Datos::returnJunio(){
 	
 	return mesClaseJunio;
 	
 }

  void Datos::asignarMesClaseJulio(int i){
	
	mesClaseJulio = i;

 }
 
 int Datos::returnJulio(){
 	
 	return mesClaseJulio;
 	
 }
 
  void Datos::asignarMesClaseAgosto(int i){
	
	mesClaseAgosto = i;

 } 
 
  void Datos::asignarMesClaseSeptiembre(int i){
	
	mesClaseSeptiembre = i;

 } 
 
  void Datos::asignarMesClaseOctubre(int i){
	
	mesClaseOctubre = i;

 } 
 
  void Datos::asignarMesClaseNovimbre(int i){
	
	mesClaseNoviembre = i;

 } 
 
  void Datos::asignarMesClaseDiciembre(int i){
	
	mesClaseDiciembre = i;

 } 
 
void moverPersonaje(int,int);
void pintarLimites();
void menu(Datos arreglo[18]);
int paraIntegrar(string);

int main(){
	
	pintarLimites();
	Datos arreglo[18];
	int i=0,numStrAInt;
	ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    getline(archivo, linea);
    while (getline(archivo, linea))
    {

        stringstream stream(linea);
        string redSocial, concepto, anio, enero, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre, octubre, noviembre, diciembre;
        getline(stream, redSocial, delimitador);
        arreglo[i].asignarRedSocial(redSocial);
        
        getline(stream, concepto, delimitador);
        arreglo[i].asignarConceptoClase(concepto);
        
        getline(stream, anio, delimitador);
        if(istringstream(anio)>>numStrAInt){

        arreglo[i].asignarAnioClase(numStrAInt);
			
        }
          
        getline(stream, enero, delimitador);
        if(istringstream(enero)>>numStrAInt){

        arreglo[i].asignarMesClaseEnero(numStrAInt);
			
        }
        
        getline(stream, febrero, delimitador);
        if(istringstream(febrero)>>numStrAInt){

        arreglo[i].asignarMesClaseFebrero(numStrAInt);
			
        }        
        getline(stream, marzo, delimitador);
        if(istringstream(marzo)>>numStrAInt){

        arreglo[i].asignarMesClaseMarzo(numStrAInt);
			
        }
        
        getline(stream, abril, delimitador);
        if(istringstream(abril)>>numStrAInt){

        arreglo[i].asignarMesClaseAbril(numStrAInt);
			
        }
        
        getline(stream, mayo, delimitador);
        if(istringstream(mayo)>>numStrAInt){

        arreglo[i].asignarMesClaseMayo(numStrAInt);
			
        }
        
        getline(stream, junio, delimitador);
        if(istringstream(junio)>>numStrAInt){

        arreglo[i].asignarMesClaseJunio(numStrAInt);
			
        }
        
        getline(stream, julio, delimitador);
        if(istringstream(julio)>>numStrAInt){

        arreglo[i].asignarMesClaseJulio(numStrAInt);
			
        }
        
        getline(stream, agosto, delimitador);
        if(istringstream(agosto)>>numStrAInt){

        arreglo[i].asignarMesClaseAgosto(numStrAInt);
			
        }
        
        getline(stream, septiembre, delimitador);
        if(istringstream(septiembre)>>numStrAInt){

        arreglo[i].asignarMesClaseSeptiembre(numStrAInt);
			
        }
        
        getline(stream, octubre, delimitador);
        if(istringstream(octubre)>>numStrAInt){

        arreglo[i].asignarMesClaseOctubre(numStrAInt);
			
        }
        
        getline(stream, noviembre, delimitador);
        if(istringstream(noviembre)>>numStrAInt){

        arreglo[i].asignarMesClaseNovimbre(numStrAInt);
			
        }
        
        getline(stream, diciembre, delimitador);
        if(istringstream(diciembre)>>numStrAInt){

        arreglo[i].asignarMesClaseDiciembre(numStrAInt);
			
        }
        
		i=i+1;													        
    }

    archivo.close();
	for(int i=0;i>=18;i++){
			prueba[i].mostrarRedSocial();
	}
	menu(arreglo);
	return 0;
	
}
 

void pintarLimites(){ 
for(int i = 2;i<78;i++){
moverPersonaje(i,3);
printf("%c",205);
moverPersonaje(i,33);
printf("%c",205);
}
for(int i=4;i<33;i++){ 
moverPersonaje(2,i);
printf("%c",186);
moverPersonaje(77,i);
printf("%c",186); 
}
moverPersonaje(2,3);
printf("%c",201);
moverPersonaje(2,33);
printf("%c",200);
moverPersonaje(77,3);
printf("%c",187);
moverPersonaje(77,33);
printf("%c",188);


}

void moverPersonaje(int x,int y){ 
HANDLE hCon;
hCon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X = x;
dwPos.Y = y;
SetConsoleCursorPosition(hCon, dwPos);
}

void menu(Datos arreglo[]){
	
	int respuesta;
	int enero;
	moverPersonaje(5,5);
	cout<<".-Menu de lectura del archivo presenciaredes.csv-."; 
	
	moverPersonaje(5,6);
	cout<<"Seleccione la opcion que quiera"; 
	
	moverPersonaje(5,8);
	cout<<"1.-Sacar la diferencia de followers de Twitter entre Enero y Junio"; 
	
	moverPersonaje(5,9);
	cout<<"2.-Calcular la diferencia de vistas de Youtube entre los Meses de Enero";
	moverPersonaje(5,10);
	cout<<"y Junio"; 
		
	moverPersonaje(5,11);
	cout<<"3.-Sacar el promedio de crecimiento de Twitter y Facebook entre Enero";
	moverPersonaje(5,12);
	cout<<"y Junio";

	moverPersonaje(5,13);	
	cin>>respuesta;
	
	switch(respuesta){
		
		case 1:system("cls");
		int numenero, numjulio;
		pintarLimites();
		moverPersonaje(5,8);
		cout<<".-La diferencia de followers en twitter entre los meses de:";
		moverPersonaje(5,9);
		cout<<"enero";
		moverPersonaje(5,10);
		cout<<"a";
		moverPersonaje(5,11);
		cout<<"Julio es:";
		moverPersonaje(5,13);
		numenero = arreglo[7].returnEnero();
		numjulio = arreglo[7].returnJulio();
		cout<<numenero-numjulio;
		break;
		
		case 2:system("cls");
		int numesc1, numesc2,numsumar1,numsumar2;
		pintarLimites();
		moverPersonaje(5,8);
		cout<<".-La diferencia de visualizaciones en youtube entre los meses de:";
		moverPersonaje(5,9);
		cout<<"1.-enero";
		moverPersonaje(5,10);
		cout<<"2.-febrero";
		moverPersonaje(5,11);
		cout<<"3.-marzo";
		moverPersonaje(5,12);
		cout<<"4.-abril";
		moverPersonaje(5,13);
		cout<<"5.-mayo";
		moverPersonaje(5,14);
		cout<<"6.-junio";
		moverPersonaje(5,16);
		cout<<"eliga su primer numero";	
		moverPersonaje(5,17);
		cin>>numesc1;	
		switch(numesc1){
			
			case 1:numsumar1 = arreglo[15].returnEnero();
			break;
			case 2:numsumar1 = arreglo[15].returnFebrero();
			break;
			case 3:numsumar1 = arreglo[15].returnMarzo();
			break;
			case 4:numsumar1 = arreglo[15].returnAbril();
			break;
			case 5:numsumar1 = arreglo[15].returnMayo();
			break;
			case 6:numsumar1 = arreglo[15].returnJunio();
			break;
			
		}
		moverPersonaje(5,19);
		cout<<"eliga su segundo numero";
		moverPersonaje(5,20);
		cin>>numesc2;
		switch(numesc2){
			
			case 1:numsumar2 = arreglo[15].returnEnero();
			break;
			case 2:numsumar2 = arreglo[15].returnFebrero();
			break;
			case 3:numsumar2 = arreglo[15].returnMarzo();
			break;
			case 4:numsumar2 = arreglo[15].returnAbril();
			break;
			case 5:numsumar2 = arreglo[15].returnMayo();
			break;
			case 6:numsumar2 = arreglo[15].returnJunio();
			break;
			
		}
		

		
		moverPersonaje(5,22);
		cout<<"la respuesta es: "<<numsumar1-numsumar2;
		break;
		
		case 3:system("cls");
		double numface, numtwitter;
		pintarLimites();
		moverPersonaje(5,8);
		cout<<".-Promedio de crecimiento de twitter entre enero y junio es-.";
		moverPersonaje(5,9);
		cout<<"enero";
		moverPersonaje(5,10);
		cout<<"a";
		moverPersonaje(5,11);
		cout<<"Julio es:";		
		
		numface=((arreglo[2].returnEnero()/100)+arreglo[2].returnFebrero()+arreglo[2].returnMarzo()+arreglo[2].returnAbril()+arreglo[2].returnMayo()+arreglo[2].returnJunio())/6;

		numtwitter = (arreglo[9].returnEnero()+arreglo[9].returnFebrero()+arreglo[9].returnMarzo()+arreglo[9].returnAbril()+arreglo[9].returnMayo()+arreglo[9].returnJunio())/6;

	    moverPersonaje(5,13);
	    cout<<"Face: "<<numface;

	    moverPersonaje(5,15);
	    cout<<"Twitter: "<<numtwitter;
	
		break;
	}
	
}


