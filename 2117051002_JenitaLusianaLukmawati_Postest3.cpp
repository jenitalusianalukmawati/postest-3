#include <iostream>
using namespace std;
int main(){

string menentukan_keliling_volume_tabung;
double jari_jari_tabung;
double tinggi_tabung;
double keliling_tabung;
double volume_tabung;

cin >> menentukan_keliling_volume_tabung;
cout << endl;

if(menentukan_keliling_volume_tabung=="1"){
	cout << "jari-jari pada tabung = ";
	cin >> jari_jari_tabung;
	keliling_tabung = 2*3.14*jari_jari_tabung;
	cout << "maka keliling alas tabung adalah = " << keliling_tabung << endl;
}
else if (menentukan_keliling_volume_tabung=="2"){
	cout << "jari-jari tabung = ";
	cin >> jari_jari_tabung;
	cout << "tinggi tabung = ";
	cin >> tinggi_tabung;
	volume_tabung = 3.14*jari_jari_tabung*jari_jari_tabung*tinggi_tabung;
	cout << "maka volume tabung adalah = " << volume_tabung << endl;
}
else {
	cout << "syntax error";
}

}
