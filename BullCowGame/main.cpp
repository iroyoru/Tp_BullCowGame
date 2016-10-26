#include <iostream>
#include <string>

using namespace std;
	typedef struct Perso

	{
		char*nom = nullptr;

			char*prenom = nullptr;

		char*type=nullptr; // monstre, humain etc
	};

int main() {


	int nb;
	//double *pt_x=NULL;
	double *ptx = nullptr; // declaration UE4
	int *pt_nb = &nb;
	//int **pt_nb = 



	Perso *mPerso = nullptr;

	mPerso = new Perso;
	mPerso->nom = new char[100];
	mPerso->prenom = new char[100];
	mPerso->type = new char[100];

	if (!mPerso) {
		return 0;
	}

	cout << "Entrez votre nom : " << endl;
	cin.getline(mPerso->nom, 100 * sizeof(char));
	cout << "Entrez votre prénom : " << endl;
	cin.getline(mPerso->prenom, 100 * sizeof(char));
	cout << "Entrez votre type : " << endl;
	cin.getline(mPerso->type, 100 * sizeof(char));

	cout << mPerso->nom << endl;
	cout << mPerso->prenom << endl;
	cout << mPerso->type << endl;

	mPerso = nullptr;
	if (!mPerso) {

		delete[]mPerso;
	}

	system("pause");
	return 0;
}