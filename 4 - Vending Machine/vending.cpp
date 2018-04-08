#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main() {
        int uang;
        int harga;
        int jumlah=2;

		cout << "Total Belanja:\n>";
        cin>>harga;
        
        cout << "Uang:\n>";
        cin>>uang;
		
		int kembalian=uang-harga;
		
		int pecahan1=50000;
		int pecahan2=20000;
		int pecahan3=10000;
		int pecahan4=5000;
		int pecahan5=2000;
		int pecahan6=1000;
		int pecahan7=500;
		
		if(kembalian > pecahan1){
			int sisa1=kembalian%pecahan1;
			int sisa2=sisa1%pecahan2;
			int sisa3=sisa2%pecahan3;
			int sisa4=sisa3%pecahan4;
			int sisa5=sisa4%pecahan5;
			int sisa6=sisa5%pecahan6;
		
			int y=kembalian-sisa1;
			int banyak50=y/pecahan1;
			int banyak20=sisa1/pecahan2;
			int banyak10=sisa2/pecahan3;
			int banyak5=sisa3/pecahan4;
			int banyak2=sisa4/pecahan5;
			int banyak1=sisa5/pecahan6;
			int banyak05=sisa6/pecahan7;
			//int banyak=kembalian/pecahan1;
			cout<<"\n"<<(banyak50)<<" Lembar 50000";
			if(banyak20==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak20)<<" Lembar 20000";
			}
			if(banyak10==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak10)<<" Lembar 10000";
			}
			if(banyak5==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak5)<<" Lembar 5000";
			}
			if(banyak2==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak2)<<" Lembar 2000";
			}
			if(banyak1==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak1)<<" Lembar 1000";
			}
			if(banyak05==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak05)<<" Keping 500";
			}
		}
		
		if(kembalian < pecahan1 && kembalian>pecahan2){
			int sisa2=kembalian%pecahan2;
			int sisa3=sisa2%pecahan3;
			int sisa4=sisa3%pecahan4;
			int sisa5=sisa4%pecahan5;
			int sisa6=sisa5%pecahan6;
		
			int y=kembalian-sisa2;
			int banyak20=y/pecahan2;
			int banyak10=sisa2/pecahan3;
			int banyak5=sisa3/pecahan4;
			int banyak2=sisa4/pecahan5;
			int banyak1=sisa5/pecahan6;
			int banyak05=sisa6/pecahan7;
			//int banyak=kembalian/pecahan1;
			if(banyak20==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak20)<<" Lembar 20000";
			}
			if(banyak10==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak10)<<" Lembar 10000";
			}
			if(banyak5==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak5)<<" Lembar 5000";
			}
			if(banyak2==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak2)<<" Lembar 2000";
			}
			if(banyak1==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak1)<<" Lembar 1000";
			}
			if(banyak05==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak05)<<" Keping 500";
			}
		}
		if(kembalian < pecahan2 && kembalian>pecahan3){
			int sisa3=kembalian%pecahan3;
			int sisa4=sisa3%pecahan4;
			int sisa5=sisa4%pecahan5;
			int sisa6=sisa5%pecahan6;
		
			int y=kembalian-sisa3;
			int banyak10=y/pecahan3;
			int banyak5=sisa3/pecahan4;
			int banyak2=sisa4/pecahan5;
			int banyak1=sisa5/pecahan6;
			int banyak05=sisa6/pecahan7;
			//int banyak=kembalian/pecahan1;
			if(banyak10==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak10)<<" Lembar 10000";
			}if(banyak5==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak5)<<" Lembar 5000";
			}if(banyak2==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak2)<<" Lembar 2000";
			}if(banyak1==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak1)<<" Lembar 1000";
			}if(banyak05==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak05)<<" Keping 500";
			}
		}
		if(kembalian < pecahan3 && kembalian>pecahan4){
			int sisa4=kembalian%pecahan4;
			int sisa5=sisa4%pecahan5;
			int sisa6=sisa5%pecahan6;
		
			int y=kembalian-sisa4;
			int banyak5=y/pecahan4;
			int banyak2=sisa4/pecahan5;
			int banyak1=sisa5/pecahan6;
			int banyak05=sisa6/pecahan7;
			//int banyak=kembalian/pecahan1;
			if(banyak5==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak5)<<" Lembar 5000";
			}if(banyak2==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak2)<<" Lembar 2000";
			}if(banyak1==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak1)<<" Lembar 1000";
			}if(banyak05==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak05)<<" Keping 500";
			}
		}
		if(kembalian < pecahan4 && kembalian>pecahan5){
			int sisa5=kembalian%pecahan5;
			int sisa6=sisa5%pecahan6;
		
			int y=kembalian-sisa5;
			int banyak2=y/pecahan5;
			int banyak1=sisa5/pecahan6;
			int banyak05=sisa6/pecahan7;
			//int banyak=kembalian/pecahan1;
			if(banyak2==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak2)<<" Lembar 2000";
			}if(banyak1==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak1)<<" Lembar 1000";
			}if(banyak05==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak05)<<" Keping 500";
			}
		}
		if(kembalian < pecahan5 && kembalian>pecahan6){
			int sisa6=kembalian%pecahan6;
		
			int y=kembalian-sisa6;
			int banyak1=y/pecahan6;
			int banyak05=sisa6/pecahan7;
			//int banyak=kembalian/pecahan1;
			if(banyak1==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak1)<<" Lembar 1000";
			}if(banyak05==0){
				cout<<"";
			}else{
				cout<<"\n"<<(banyak05)<<" Keping 500";
			}
		}
		cout<<"\nTotal Kembalian = " << (kembalian);
getch();
}

