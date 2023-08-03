#include <iostream>
using namespace std;

class posCache{
public:
	int* dati;
	int dim;
	bool libera;
	int contLRU;
	int contFIFO;
	posCache(bool libera,int contLRU,int contFIFO,int dim) : libera(libera) , contLRU(contLRU) , contFIFO(contFIFO), dim(dim) {
		dati=new int[dim];
	}
	posCache() : posCache (true,0,0,0) {}
	posCache(int dim) : posCache(true,0,0,dim) {}

};