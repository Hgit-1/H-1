//system list
//1.0
//waiting for open......
//GetAsyncKeyState(VK_****);//VK_(keyname)
//SHORT GetKeyState(int nVirtKey);//win---get
//SHORT GetAsyncKeyState(int vKey);//keyboard stop---get
//BOOL GetKeyboardState(PBYTE lpKeyState);//win del---get
//system("pause");//push any key to continue
//system("start");//open cmd
//system("cls");//clear
//Sleep(****);//stop **** ms(1s=1000ms,1ms=1000us,1us=1000ns,1ns=1000ps)
//
#include<bits/stdc++.h>
#include<math.h>
#include<windows.h>
using namespace std;
int house=1,townsize=1;
int people=0;
int wood=0;
int stone=0;
int money=0;
int HP=100;
int hunger=100,food=0;
int wearhp=0;
int weaponHP=1;
char a[10];
char b;
int archivement(){
	cout<<"house"<<house<<endl;
	cout<<"townsize"<<townsize<<endl;
	cout<<"people"<<people<<endl;
	cout<<"wood"<<wood<<endl;
	cout<<"stone"<<stone<<endl;
	cout<<"money"<<money<<endl;
	cout<<"HP"<<HP<<endl;
	cout<<"hunger"<<hunger<<endl;
	cout<<"food"<<food<<endl;
	cout<<"wearhp"<<wearhp<<endl;
	cout<<"weaponHP"<<weaponHP<<endl;
}
int main(){
	cout<<"H game 1"<<endl;
	system("pause");
	system("cls");
	cout<<"you are in a small town......"<<endl;
	Sleep(2000);
	cout<<"no any one here......"<<endl;
	Sleep(2000);
	system("pause");
	system("cls");
	cout<<"you are start!"<<endl;
	Sleep(2000);
	system("cls");
	cout<<"a man want to intry you house......"<<endl;
	Sleep(1000);
	cout<<"yes or no?"<<endl;
	for(int i=1;i<=3;i++){
		cin>>a[i];//TODO
	}
	if(a[1]=='y'){
		people+=2;
		cout<<"home1:"<<people<<"/4"<<endl;//TODO
	}else{
		people+=1;
		cout<<"home1:"<<people<<"/4"<<endl;
	}
	Sleep(2000);
	cout<<"night......"<<endl<<"if you want to check archivement,please cin a";
	cin>>b;
	if(b=='a'){
		archivement();
		Sleep(2000);//TODO
	}else{
		Sleep(2000);//TODO
	}
}
