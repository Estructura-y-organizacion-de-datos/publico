#include<iostream>
using namespace std;

	int v=10;
	int *apuntador=&v;
//Un puntero es una variable que contiene la dirección de memoria de otra variable
int main(int argc, char const *argv[])
{
	cout<<"Variable inicial "<<v<<endl;
	cout<<"Direccion &inicial "<<&v<<endl;
	cout<<"Apuntador "<<apuntador<<endl;
	cout<<"Apuntador * "<<*apuntador<<endl;
	cout<<"introduce nuevo valor"<<endl;
	cin>>*apuntador;
	cout<<"Variable nuevo "<<v<<endl;
	cout<<"Direccion &nuevo "<<&v<<endl;
	cout<<"Apuntador "<<apuntador<<endl;
	cout<<"Apuntador * "<<*apuntador<<endl;	
	
	system("pause");
    return 0;	


}
