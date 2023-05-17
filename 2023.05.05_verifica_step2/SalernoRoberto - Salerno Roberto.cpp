#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#define MAX_NAME 256
using namespace std;

// Definizione della funzione per la lettura del file
void LeggiFile(string filename, vector<string>& vet) {
ifstream file("C:\\Users\\STUDENTE\\Desktop\\Nuova cartella\\F1.txt");
if(file.is_open()) {
string riga;
while(getline(file, riga)) {
vet.push_back(riga);
}
file.close();
}
else {
cout << "Impossibile aprire il file!" << endl;
}
}

// Definizione della funzione Cerca
int Cerca(vector<string>& vet, string key) {
for(int i=0; i<vet.size(); i++) {
if(vet[i] == key) {
return i;
}
}
return -1; // valore di default se la key non viene trovata
}

// Definizione della funzione EliminaKey
void EliminaKey(vector<string>& vet, string key) {
int indice = Cerca(vet, key);
while(indice != -1) { // finch� la key viene trovata
vet.erase(vet.begin()+indice); // elimina la riga contenente la key
indice = Cerca(vet, key); // cerca la prossima occorrenza della key
}
}

// Definizione della funzione per la scrittura del file
void ScriviFile(string filename, vector<string>& vet) {
ofstream file("C:\\Users\\STUDENTE\\Desktop\\Nuova cartella\\F2.txt");
if(file.is_open()) {
for(int i=0; i<vet.size(); i++) {
file << vet[i] << endl;
}
file.close();
}
else {
cout << "Impossibile creare il file!" << endl;
}
}

int main() {
vector<string> vet;
LeggiFile("C:\\Users\\STUDENTE\\Desktop\\Nuova cartella\\F1.txt", vet);
EliminaKey(vet, "ROSSI");
ScriviFile("C:\\Users\\STUDENTE\\Desktop\\Nuova cartella\\F2.txt", vet);
return 0;
}
