#include <iostream>
using namespace std;

// Nama : Anak Agung Mas Mayuri
// Kelas : XI IPA 8


int main (){
	float a;
	char mode;
	
	cout << "== Selamat Datang di Konversi Satuan Suhu ==" << endl;
	cout << endl;
	cout << "Silahkan piih mode konversi" << endl;
	cout << "A. Konversi Celcius (C)" << endl;
	cout << "B. Konversi Reamur (R)" << endl;
	cout << "C. Konversi Fahrenheit (F)" << endl;
	cout << "D. Konversi Kelvin (K)" << endl;
	cout << endl;
	cout << "Masukkan pilihan anda dalam Huruf Kapital : " << endl;
	cin >> mode;
	cout << "--------------------------------------------" << endl;
	
	switch (mode){
		case 'A':
			cout << "Konversi Celcius" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Celcius" << endl;
            
			cout << "a. C ke R" << endl;
			cout << "b. C ke F" << endl;
			cout << "c. C ke K" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Celcius ke Reamur" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Celcius" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " C adalah " << a*4/5 << " R" <<endl;
		            break;
            
            	case 'b':
            		cout << "Celcius ke Fahrenheit" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Celcius" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " C adalah " << (a*9/5)+32 << " F" <<endl;
		            break;
	
				case 'c':
            		cout << "Celcius ke Kelvin" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Celcius" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " C adalah " << a+273.15 << " K" <<endl;
		            break;
		         
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		    }
			break;
	
		case 'B':
			cout << "Konversi Reamur" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Reamur" << endl;
            
			cout << "a. R ke C" << endl;
			cout << "b. R ke F" << endl;
			cout << "c. R ke K" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Reamur ke Celcius" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Reamur" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " R adalah " << a*5/4 << " C" <<endl;
		            break;
            
            	case 'b':
            		cout << "Reamur ke Fahrenheit" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Reamur" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " R adalah " << (a*9/4)+32 << " F" <<endl;
		            break;
	
				case 'c':
            		cout << "Reamur ke Kelvin" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Reamur" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " R adalah " << (a*5/4)+273.15 << " K" <<endl;
		            break;
		         
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		    }
			break;
		  
		case 'C':
			cout << "Konversi Fahrenheit" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Fahrenheit" << endl;
            
			cout << "a. F ke C" << endl;
			cout << "b. F ke R" << endl;
			cout << "c. F ke K" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Fahrenheit ke Celcius" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Fahrenheit" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " F adalah " << (a-32)*5/9 << " C" <<endl;
		            break;
            
            	case 'b':
            		cout << "Fahrenheit ke Reamur" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Fahrenheit" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " F adalah " << (a-32)*4/9 << " R" <<endl;
		            break;
	
				case 'c':
            		cout << "Fahrenheit ke Kelvin" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Fahrenheit" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " F adalah " << ((a-32)*5/9)+273.15 << " K" <<endl;
		            break;
		         
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		    }
			break;
			
		
		case 'D':
			cout << "Konversi Kelvin" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi Kelvin" << endl;
            
			cout << "a. K ke C" << endl;
			cout << "b. K ke R" << endl;
			cout << "c. K ke F" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			case 'a':
            		cout << "Kelvin ke Celcius" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Kelvin" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " K adalah " << a-273.15 << " C" <<endl;
		            break;
            
            	case 'b':
            		cout << "Kelvin ke Reamur" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Kelvin" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " K adalah " << (a-273)*4/5 << " R" <<endl;
		            break;
	
				case 'c':
            		cout << "Kelvin ke Fahrenheit" << endl;
            		cout << endl;
		            cout << "Masukkan nilai Kelvin" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai " << a << " K adalah " << ((a-273.15)*9/5)+32 << " F" <<endl;
		            break;
		         
		        default:
		        	cout << "Pilihan tidak tersedia" << endl;
		    }
			break;
			
		
		
		default:
            cout << "Pilihan tidak tersedia" << endl;	
			break;	
	}
	
	return 0;
}


