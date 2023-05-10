#include <iostream> 
using namespace std; 

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method 
};

void mahasiswa::showNim() { //implementasi method diluar class 
	cout << "no Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };     //object mhs 
	mhs.showNim();          //Member Acces Operator 

	mahasiswa& ref = mhs;   //Pointer reference refmhs 
	ref.nim = 2;           //member Acces Operator 
	mhs.showNim();

	mahasiswa *pMhs = &mhs;   //Pointer Dereference pMhs 
	pMhs->nim = 3;            //Arrow operator 
	mhs.showNim();
	system("pause"); 
	return 0;
}

