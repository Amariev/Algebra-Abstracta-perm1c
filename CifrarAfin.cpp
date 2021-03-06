#include <iostream>
#include <clocale>
using namespace std;

void cifrar_afin(string texto, int key_a, int key_b);
void descifrar_afin(string texto, int key_a, int key_b);

void imprimir_mensaje(string texto);

int main(){
	//Idioma por que Ñ no quiere 
	setlocale(LC_CTYPE, "Spanish");
	//Abecedarios
	string abecedario = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
	string abecedario_cifrado;
	
	string ejemplo= "ELEMENTALMIQUERIDOWATSON";
	
	cifrar_afin(ejemplo, 1, 1);
	imprimir_mensaje(ejemplo);
	descifrar_afin(ejemplo, 1, 1);
	imprimir_mensaje(ejemplo);
	return 0;
}

void cifrar_afin(string texto, int key_a, int key_b){
	string abecedario = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
	string texto_c;
	for(int i=0; i<texto.length()+1; i++){
		
		int u = abecedario.find(texto[i]);
		int newindex = mod((key_a * u + key_b), 27);
		texto_c[i]=abecedario[newindex];
		cout<<abecedario[newindex];
	}
	/*Imprimir texto cifrado*/
	for(int i=0; i<texto_c.length(); i++) cout<<texto[i];
	cout<<endl;
}

void descifrar_afin(string texto, int key_a, int key_b){
	
}

void imprimir_mensaje(string texto){
	for(int i=0; i<texto.length(); i++) cout<<texto[i];
	cout<<endl;
}
