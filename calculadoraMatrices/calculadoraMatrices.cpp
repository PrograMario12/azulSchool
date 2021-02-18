#include <iostream>
#include<time.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int columna = 0, fila = 0, opc = 1;
	cout << "¿Cuántas columnas debe tener la matriz?" << endl;
	cin >> columna;
	cout << "¿Cuántas filas debe tener la matriz?" << endl;
	cin >> fila;
	
	int matriz[fila][columna] = {}, matriz2[fila][columna]={}, matrizResultado[fila][columna]={};
	
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			//cout << "Ingresa un numero: ";
			//cin >> inicial[i][j];
			matriz[i][j] = rand()%51;
			matriz2[i][j] = rand()%51;
		}
	}
	
	do{
		cout << endl << "Seleccione una opción" << endl;
		cout << "1.Sumar" << endl;
		cout << "2.Restar" << endl;
		cout << "3.Salir" <<endl;
		cin >> opc;
		
		switch(opc){
			case 1:
				for(int i = 0; i < fila; i++){
					for(int j = 0; j < columna; j++){
						matrizResultado[i][j] = matriz[i][j] + matriz2[i][j];
					}
				}
				
				cout<<"Primera matriz";
				for(int i = 0; i < fila; i++){
					cout<< endl;	
					for(int j = 0; j < columna; j++){
						cout << matriz[i][j] << " ";
					}
				}
				
				cout<< endl << "Segunda matriz";
				for(int i = 0; i < fila; i++){
					cout<< endl;
					for(int j = 0; j < columna; j++){
						cout << matriz2[i][j] << " ";
					}
				}
				
				cout<< endl << "Matriz resultado";
				for(int i = 0; i < fila; i++){
					cout<< endl;
					for(int j = 0; j < columna; j++){
						cout << matrizResultado[i][j] << " ";
					}
				}
				break;
			case 2:	
				for(int i = 0; i < fila; i++){
					for(int j = 0; j < columna; j++){
						matrizResultado[i][j] = matriz[i][j] - matriz2[i][j];
					}
				}	
				
				cout<<"Primera matriz";
				for(int i = 0; i < fila; i++){
					cout<< endl;	
					for(int j = 0; j < columna; j++){
						cout << matriz[i][j] << " ";
					}
				}
				
				cout<< endl << "Segunda matriz";
				for(int i = 0; i < fila; i++){
					cout<< endl;
					for(int j = 0; j < columna; j++){
						cout << matriz2[i][j] << " ";
					}
				}
				
				cout<< endl << "Matriz resultado";
				for(int i = 0; i < fila; i++){
					cout<< endl;
					for(int j = 0; j < columna; j++){
						cout << matrizResultado[i][j] << " ";
					}
				}
				break;
			case 3:
				cout << "Bye :v" << endl;
				break;
			default:
				cout << "Esta opción no existe." << endl;
				break;
		}
	}while(opc != 3);
	return 0;
}
