
#include<iostream>
#include<assert.h>
using namespace std;

#define MAX_ROWS 10
#define MAX_COLUMNS 10

class cMatrixADT
{
private:
	int matrixElements[MAX_ROWS][MAX_COLUMNS];
	unsigned short int matrixDimension;
public:
	 cMatrixADT(int dimension,int initValue)
	 {
		 this->initializeMatrix(dimension,initValue);
	 }
	 void matrixOperation(cMatrixADT*,char mathOperator);
	 void initializeMatrix(int,int );
	 void loadMatrix();
	 void displayMatrix();
};

void cMatrixADT::displayMatrix()
{
	cout<<"[";
	 for(int i=0;i<this->matrixDimension;i++)
	{
		for(int j=0;j<this->matrixDimension;j++)
		{
			
			cout<<this->matrixElements[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"]"<<endl;

}

void cMatrixADT::loadMatrix()
{
  cout<<"Start of loading"<<endl;
  for(int i=0;i<this->matrixDimension;i++)
	{
		for(int j=0;j<this->matrixDimension;j++)
		{
			cout<<endl<<"Enter integer number";
			cin>>this->matrixElements[i][j];
		}
	}
  cout<<"End of loading"<<endl;

}



void cMatrixADT::initializeMatrix(int dimension,int initValue)
{
	this->matrixDimension = dimension;
	for(int i=0;i<dimension;i++)
	{
		for(int j=0;j<dimension;j++)
		{
			this->matrixElements[i][j] = initValue;
		}
	}
	
}

void cMatrixADT::matrixOperation(cMatrixADT* otherMatrix,char mathOperator)
{
	assert(this->matrixDimension==otherMatrix->matrixDimension);
	for(int i=0;i<this->matrixDimension;i++)
	{
		for(int j=0;j<this->matrixDimension;j++)
		{
			if(mathOperator == '+')
			{
				this->matrixElements[i][j] = this->matrixElements[i][j] + otherMatrix->matrixElements[i][j];
			}
			else if (mathOperator == '-')
			{
				this->matrixElements[i][j] = this->matrixElements[i][j] - otherMatrix->matrixElements[i][j];
			}
			else if(mathOperator == '*')
			{
				this->matrixElements[i][j] = this->matrixElements[i][j] * otherMatrix->matrixElements[i][j];
			}
		}
	}

}
