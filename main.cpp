#include <stdio.h>
#include <iostream>
using namespace std;

/* Fungsi tukar untuk mensorting data dengan dua parameter 
 * 
 * 1. Parameter pertama data yang akan di sorting
 * 2. Parameter kedua jumlah data yang akan di sorting
 */
class Bouble_sort {
	public : int data, jumlahdata;
	tukar(int data[], int jumlahdata){
		int j, tamp;
		for(int i=0; i<=jumlahdata; i++)
		{
		  for(j=0; j<=jumlahdata; j++)
		  {
			  if(data[j]>data[j+1])
			  {
					tamp=data[j];
					data[j]=data[j+1];
					data[j+1]=tamp;
					
			  }
		  }
		}
		
		cout << endl << " =====================================" << endl << endl;
		cout <<" Hasil data setelah di sorting :" << endl;
		for(int i=0; i<=jumlahdata; i++)
		{
			cout << " [" << data[i] << "]";
		}
		cout<<endl<<endl<<endl;
	}
};


int main(int argc,char **argv)
{
  int jumlahdata = 5; 		// jumlah angka yang akan di urut
  int data[5];				// 5 data input dari user dalam array 
  
  cout << " Bouble sort untuk mengurutkan enam (6) derat angka : " << endl;
  cout << endl << " =====================================" << endl << endl;

  cout << " Masukkan data ke 1 = "; 		// label data 1
  cin >> data[0];							// input data 1
  cout << " Masukkan data ke 2 = ";			// label data 2
  cin >> data[1];							// input data 2
  cout << " Masukkan data ke 3 = ";			// label data 3
  cin >> data[2];							// input data 3
  cout << " Masukkan data ke 4 = ";			// label data 4
  cin >> data[3];  							// input data 4
  cout << " Masukkan data ke 5 = ";			// label data 5
  cin >> data[4];							// input data 5
  cout << " Masukkan data ke 6 = ";			// label data 6
  cin >> data[5];							// input data 6
  
  cout << endl << " =====================================" << endl << endl;
  cout << " Hasil data yang di input :" << endl;
  
  // menampilkan data secara manual atau tanpa perulangan 
  // cout << " ["<< data[0] << "] [" << data[1] << "] [" << data[2] << "] [" << data[3] << "] [" << data[4] << "] [" << data[5] << "]" << endl ;
  
  // menampilkan data dengan perulangan for
  for(int a = 0; a <= 5; a ++)
  {
	 cout << " [" << data[a] << "]" ;
  }
  cout << endl;
  
  
  int parsingdata[] = {data[0], data[1], data[2], data[3], data[4], data[5]};
  
  /* Memanggil fungsi tukar dengan dua parameter 
   * 
   * 1. Parameter pertama data input sebelum di sorting
   * 2. Parameter kedua jumlah data yang akan disorting
   */
  Bouble_sort obj;
  obj.tukar(parsingdata, jumlahdata);  
}