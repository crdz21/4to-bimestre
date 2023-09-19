#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	int a[5];
	int dato;
	char band = 'F';
	
	for(int i=0; i<5; i++){
		cout<<"Ingrese un numero: ";
		cin>>a[i];
	}
	cout<<"Ingrese el numero a buscar: "<<endl;
	cin>>dato;
	
	int j;
	while((band == 'F')&&(j<5)){
		if(a[j]==dato){
			band ='V';
	}
	j++;
			}
		if(band == 'F'){
			cout<<"El numero a buscar no existe en el vector"<<endl;
		}
		else if(band=='V'){
			cout<<"El numero "<<dato<<" fue encontrado en la posicion "<<j;
		}
	return 0;
	getch();
}
