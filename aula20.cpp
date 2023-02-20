#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	//controle
	inicio:
	bool state = true;
	int acertos = 0;
	int tentativas = 0;
	char letra;

		
	//dados
	string pal;
	
	cout <<"Digite a palavra secreta."<<endl;
	cin >> pal;
	system("cls");
	char vetor [pal.length()];
	
	for (int i = 0; i <pal.length();i++){
			vetor[i] = '_';
		}
	//cout << "tamanho da palavra: " <<pal.length() <<endl;
	//cout << "Letra 1: " <<pal[0]<<endl;
	
	//jogo
	while (state){
		//desenhar o grafico
		for (int i = 0; i <pal.length();i++){
			cout <<" "<<vetor[i]<<" ";
		}
	cout << endl;	
	
	if (acertos==pal.length()){
		state = false;
		cout <<"Parabens, voce acertou a palvra. "<<endl;
		break;
	}
	if (tentativas > 4){
		state = false;
		cout<<"\n\n\nGAME OVER"<<endl;
		break;
	}
	
	cout << "Tente acertar a palavra digitando uma letra: "<< "      Qnt de erros: "<<tentativas <<endl;
	cin >> letra;
	int aux = acertos;
	for(int i = 0;i<pal.length();i++){
		if (letra == pal[i]){
			vetor[i] = pal[i];
			acertos++;
		}
		
	}
	
	if (aux != acertos){
		cout <<"Muito bem, acertou uma letra."<<endl;
	}else {
		tentativas++;
		cout <<"Voce errou, tente novamente."<<endl;
	}
		
	system("pause");
	system("cls");
	
	
	}
	
	cout << "DESEJA JOGAR NOVAMENTE? [s = Sim, n = nao]"<<endl;
	cin >> letra;
	if(letra == 's' || letra == 'S'){
		goto inicio;
	}
	
	cout << "FINALIZANDO O JOGO.";
	
	//fim do programa
	return 0;
}
