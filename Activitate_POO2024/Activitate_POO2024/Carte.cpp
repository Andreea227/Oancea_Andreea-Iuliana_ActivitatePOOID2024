#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Carte {
private:
	string titlu;
	string autor;
	int nrPagini;
	int nrCapitole;
	int an;


public:
	Carte()
	{
		this->titlu = "Necunoscut";
		this->autor = "Anonim";
		this->nrPagini = 3;
		this->nrCapitole = 1;
		this->an = 2024;

	}
};
