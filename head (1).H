/*
  Pembuat    : Shintia Agustina
  Nis	       : 222310575
  Email      : sintia.cmz99@gmail.com
  Kontak     : 087645748846
  Pembimbing : Devi Rodiana
  Diajukan   : Tugas Akhir Dasar Pemrograman PPLG
  user,password (shintia,agustina)
*/
#include <conio.h>
#include <iostream.h>

head(char jud[50]=""){
	cout<<"***************************************************************"<<endl;
   cout<<".....................::PEGADAIAN SYARIAH::....................."<<endl;
	cout<<"                       "<<jud<<endl;
  	cout<<"***************************************************************"<<endl;
   if(strcmp(jud,"LOGIN APLIKASI")==0){
    	cout<<"JUDUL     : APP PEGADAIAN SYARIAH"<<endl;
   	cout<<"PEMBUAT   : Shintia Agustina"<<endl;
   	cout<<"NIs       : 222310575"<<endl;
   	cout<<"KELAS     : X PPLG"<<endl;
   	cout<<"VERSI APP : 1.1 (BUILD FULL WITH BORLAND C++)"<<endl;
      cout<<"NOTE      : Gunakan (Username:shintia) dan (Password:agustina)"<<endl;
   	cout<<"***************************************************************"<<endl;
   }
}