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
	
	cout<<"Hangi islemi yapmak istiyorsunuz?";
	cin>>islem;
	
	if (islem == "1"){
		cout<<"Sayi giriniz (cikmak icin 0 giriniz): ";
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
	cout<<"sayilarin toplamlari "<<toplam<<endl;}
}
	else if (islem == "2") { 
		cout << "Sayi giriniz (cikmak icin 0 girin): "; 
		cin >> sayi; 
		cikarma = sayi;  
			if (sayi != 0) { 
				do { 
					cout << "Sayi giriniz (cikmak icin 0 girin): "; 
					cin >> sayi; 
						if (sayi != 0) { 
						cikarma -= sayi; 
	 }  
	 } while (sayi != 0); 
	 	cout << "Sayilarin farklari: " << cikarma << endl; }
		 }
		else if (islem == "3") { 
		cout << "Sayi giriniz (cikmak icin 0 girin): "; 
		cin >> sayi; 
		carpma = sayi;  
			if (sayi != 0) { 
				do { 
					cout << "Sayi giriniz (cikmak icin 0 girin): "; 
					cin >> sayi; 
						if (sayi != 0) { 
						carpma *= sayi; 
	 }  
	 } while (sayi != 0); 
	 	cout << "Sayilarin carpimlari: " << carpma << endl; }
		 }
				else if (islem == "4") { 
		cout << "Sayi giriniz (cikmak icin 0 girin): "; 
		cin >> sayi; 
		bolme = sayi;  
			if (sayi != 0) { 
				do { 
					cout << "Sayi giriniz (cikmak icin 0 girin): "; 
					cin >> sayi; 
						if (sayi != 0) { 
						bolme/= sayi; 
	 }  
	 } while (sayi != 0); 
	 	cout << "Sayilarin bolumleri: " << bolme << endl; }
		 }
			
	else 
	{
		cout<<"gecersiz islem girdiniz ";
	}
		return 0;
}


