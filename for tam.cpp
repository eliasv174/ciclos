#include <iostream>
using namespace std;

main(){
	int tam = 5;
	int datos [tam] = {10,40,100,250,3000};
	for (int i=0; i<tam;i++){
		cout<<datos[i]<<endl;
	}
	
	 	int datos[]={8,12,35,200,1000};   //array initialization
 	//cout<<sizeof(datos)<<endl;
 	//cout<<sizeof(datos[0])<<endl;
    int tama = (sizeof(datos)/sizeof(datos[0]));
    
    for (int i=0;i<tama;i++){
    	cout<<datos[i]<<endl;
	}

system("pause");
}
