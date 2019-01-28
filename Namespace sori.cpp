#include<iostream>
#include<conio.h>
using namespace std;
	namespace sori {
		string v="soraya";
		void foo(){v="khavari";}
		}
		
	namespace sami{
		string v="somaye";return
		int m=9;
		int foo()
		{return ++m;}	
		}
	
	main(){
		cout<<sori::v<<endl;
		cout<<sami::foo()<<endl;
		}
