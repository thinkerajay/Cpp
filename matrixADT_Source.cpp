#include"matrixADT_Header.h"


int main()
{
	cMatrixADT* matrixOne = new cMatrixADT(3,0);
	cMatrixADT* matrixTwo = new cMatrixADT(3,0);

	//loading first matrix
	cout<<"load elements into first matrix"<<endl;
	matrixOne->loadMatrix();
	cout<<"load elements into second matrix"<<endl;
	matrixTwo->loadMatrix();

	cout<<"Add Two Matrices"<<endl;
	matrixOne->matrixOperation(matrixTwo,'+');

	cout<<"diplaying result matrix"<<endl;
	matrixOne->displayMatrix();
	
	return 0;

}
