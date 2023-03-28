#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;

int main(){
	
	int contador = 0;
	
	while(true){
	system("color 20");
	cout<<"SEMAFORO VERDE"<<endl;
	Sleep(5000);
	system("cls");
	
	while(contador<4){
		
	system("color 20");
	cout<<"SEMAFORO VERDE"<<endl;
    system("cls");
	 Sleep(500);    //on
	 
    system("color 07");
	cout<<"Parpadeo"<<endl;
	Sleep(500); 
	system("cls"); //off

	contador++;
		}
		
	system("cls");
	system("color E0");	
	cout<<"SEMAFORO AMARILLO"<<endl;
	Sleep(3000);
	
	system("cls");
	system("color 40");
	cout<<"SEMAFORO ROJO"<<endl;
	Sleep(5000);
	
	system("cls");
	
	contador = 0;	
}

return 0;
}
