#include <iostream>
using namespace std;

main(){
// i++, i+=1, i=i+1
for (int i=0;i<10; i++){
	if (i==5){
		continue;
		cout<<"if"<<endl;
	}
	cout<<i<<endl;
}
cout<<i<<endl;
cout<<"fuera del for"<<endl;
system("pause");
}
