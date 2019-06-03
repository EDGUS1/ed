#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	int mat1[100][100],i,j,mat2[100][100],mat3[100][100],mat4[100][100],suma=0,a1,a2,b1,b2,k;
	do{
		cout<<"ingrese la fila de la matriz 1: ";cin>>a1;
		cout<<"ingrese la columna de la matriz 1: ";cin>>b1;
		cout<<"ingrese la fila de la matriz 2: ";cin>>a2;
		cout<<"ingrese la columna de la matriz 2: ";cin>>b2;
		if(a1!=a2){
			cout<<"\nERROR\n";
		}
	}while(a1!=a2);
	srand(time(NULL));
	for(i=0;i<a1;i++){//llenado de la primera matriz
		for(j=0;j<b1;j++){
			mat1[i][j]=rand()%10;
		}
	}
	for(i=0;i<a2;i++){//llenado de la segunda matriz
		for(j=0;j<b2;j++){
			mat2[i][j]=rand()%10;
		}
	}
	
	for(i=0;i<b1;i++){//transpuesta de la primera matriz
		for(j=0;j<a1;j++){
			mat4[i][j]=mat1[j][i];
		}
	}
	cout<<"\n PRIMERA MATRIZ \n";
	for(i=0;i<a1;i++){//mostrando matriz
		for(j=0;j<b1;j++){
			cout<<mat1[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n MATRIZ TRANSPUESTA\n";
	for(i=0;i<b1;i++){//mostrando matriz
		for(j=0;j<a1;j++){
			cout<<mat4[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\nSEGUNDA MATRIZ MATRIZ\n";
	for(i=0;i<a2;i++){//llenado de la primera matriz
		for(j=0;j<b2;j++){
			cout<<mat2[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	for(i=0;i<b1;i++){//multiplicacion de matrices
		for(j=0;j<b2;j++){
			mat3[i][j]=0;
			for(k=0;k<b2;k++){
				mat3[i][j]=mat3[i][j]+mat4[i][k]*mat2[k][j];
			}
		}
	}
	cout<<"\n MULTIPLICACION DE MATRICES\n";
	for(i=0;i<b1;i++){//mostrando matriz
		for(j=0;j<a1;j++){
			cout<<mat3[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	for(i=0;i<b1;i++){//traza
		for(j=0;j<b2;j++){
			if(i==j){
				suma+=mat3[i][j];
			}
		}
	}
	cout<<"\n\nEl producto interno es: "<<suma;
	return 0;
}
