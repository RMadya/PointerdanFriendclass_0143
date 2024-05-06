#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main() {
	mahasiswa mhs{ 1 }; //OBJECT MHS
	mhs.showNim(); //MEMBER ACCESS OPERATOR

	mahasiswa& refMhs = mhs; //POINTER REFERENCE refMhs
	refMhs.nim = 2; //MEMBER ACCESS OPERATOR
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //POINTER DEREFERENCE pMhs
	pMhs->nim = 3; //ARROW OPERATOR
	mhs.showNim();

	return 0;
}