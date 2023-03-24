#include <iostream> //Codice sbagliato.
#include <string>
using namespace std;
char cifra_più_significativa (int n){
	returtn to_string(n)[0];
}
//funzione
bool verifica_cifra(int n1,int n2)		{
	int prodotto = n1 * n2;
	int somma = n1 + n2;
	char cifra_prodotto =
cifra_più_significativa(prodotto);
	char cifra_somma =
cifra_più_significativa(somma);
	return cifra_prodotto < cifra_somma;
					}
int main (){
	int n1, n2;
	cout << "inserisci due numeri:";
	cin >> n1 >> n2
		if (verifica_cifra(n1,n2)){
			cout << "La cifra più significativa del prodotto è minore della somma" << endl;
		}
				else{
					cout << "La cifra più significativa del prodotto è uguale o maggiore della somma" << endl;
			}
	return 0;
}
