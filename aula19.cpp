#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
	
	int lin = 1, col = 1;
	int matriz[3][4];
	inicio:
	cout << "Quantas linhas tem a matriz?\n";
	cin >> lin;
	cout <<"Quantas colunas?\n";
	cin >> col;
	
	for (int l = 0;l<lin;l++){
		
		for (int c = 0;c<col;c++){
			cout << "Informe o valor da posicao Matriz["<<
			l<<"]["<<c<<"]\n"<< endl;
			cin >> matriz [l][c];
			system("cls");
		}
	}
	
	
	
	for (int l = 0;l<lin;l++){
		
		for(int c = 0; c < col;c++){
			cout << "# " <<matriz[l][c] << " #" ;
		}
		cout << endl;
	}
	system("pause");
	system("cls");
	cout <<"Deseja refazer a matriz? (1 = Sim, 0 = Nao\n)" <<endl;
	cin >>lin;
	 if (lin == 1) {
	 	goto inicio;
	 }
	 
	 cout << "Saindo do programa"<<endl;
	
	return 0;
}
