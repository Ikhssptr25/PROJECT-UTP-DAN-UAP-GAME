#include <iostream>
using namespace std;

int main (){
	
	/*ikhsan saputra
	  2117051037
	  kelas B*/
	  
   	
	/* deklarasi variabel*/
	int gaji_karyawan;
	int UMR_daerah ;
	
	//input data
	cout<<"GAJI KARYAWAN :"; cin>>gaji_karyawan;
	cout<<"UMR DAERAH    :"; cin>>UMR_daerah;
	
	// percabangan output
	 if(gaji_karyawan<UMR_daerah)
	{cout<<"GAJI ANDA DIBAWAH UMR DAERAH"<<endl;
	}else if (gaji_karyawan==UMR_daerah) 
	{cout<<"GAJI ANDA SETARA UMR DAERAHH"<<endl;
	}else if(gaji_karyawan>UMR_daerah)
	{cout<<"GAJI ANDA DIATAS UMR DAERAH"<<endl;
	}
	
	return 0;
}
