#include <iostream>
using namespace std;

int main(){
	
	float sayi,toplam,cikarma,carpma,bolme;
	string islem;
	
	cout<<"Hesap makinesi"<<endl;
	
	cout<<"Toplama icin 1 yaziniz"<<endl;
	cout<<"Cikarma icin 2 yaziniz"<<endl;
	cout<<"Carpma icin 3 yaziniz"<<endl;
	cout<<"Bolme icin 4 yaziniz"<<endl;
	
	cout<<"Hangi islemi yapmak istiyorsunuz:";
	cin>>islem;
	
	if (islem == "1"){
		cout<<"Sayi giriniz (cikmak icin 0 girin): ";
		cin>>sayi;
		toplam=sayi;
		
		if (sayi!=0){
		
			do{
				cout<<"sayi giriniz(cikmak icin 0 giriniz)";
				cin>>sayi;
					if(sayi!=0){
		
			
						toplam+=sayi;
		}
	} while (sayi!=0);
	cout<<"sayilarin toplamlari"<<toplam<<endl;}

//
		return 0;
}


