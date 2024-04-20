
#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;



ofstream out("wordlist11.txt");





void convert(char * k , int i,int S) {
	
	if (i < 0)
		cerr << "error entering !!! write real number above 0 :: ";
	int* d = new int[i];

	int v;

	 char *x=new char[i];
	int loop=0;
	int L;
	cout << "type how many converted word :: ";
	cin >> L;

	while (loop<=L) {
		loop++;		cout << loop++;
		v = 0;
		for (int l = 0; l < i; l++) {
			d[l] = rand() % S;
			v += (d[l] * pow(10, l));
		}
	 

		

		for (int l = 0; l < i; l++) {
			x[l] = k[d[l]];
			out << x[l];
			cout << x[l];

		}
		cout << endl; out << endl;
	}

}

void convert(string * k , int i,int S) {

	
	if (i < 0)
		cerr << "error entering !!! write real number above 0 :: ";
	int* d = new int[i];

	int v;

    string *x=new string[i];
	int loop=0;
	int L;
	cout << "type how many converted word :: ";
	cin >> L;

	while (loop<=L) {
		loop++;		cout << loop++;
		v = 0;
		for (int l = 0; l < i; l++) {
			d[l] = rand() % S;
			v += (d[l] * pow(10, l));
		}
	 


		int l = 0;
		for (int j = 0; j < i; j++) {
			x[l] = k[d[l]];
	
			j += (x[l].size() - 1);
			
			out << x[l];
			cout << x[l];
			l++;
		}
		cout << endl; out << endl;
	}

}





void c1() {
	string* k;
	int l1, l2;



	k = new string[100];
	cout << " how many blocks  to convert word list:::: ";
	int Size
		; cin >> Size;
	cout << " write the blocks  to convert word list:::: ";
	for (int i = 0; i < Size; i++)
		cin >> k[i];


	//delete [] k;




	cout << "write the min size for every word \n from :: ";
	cin >> l1;

	cout << "write the max size for every word \n to :: ";
	cin >> l2;


	//convert();

	for (int i = l1; i <= l2; i++)
		convert(k, i, Size)
		;







}


void c2() {

	char* k;
	int l1, l2;



	k = new char[100];

	cout << " write the charactars to convert word list:::: ";
	cin >> k;

	int s;

	for (s = 0; k[s]; s++);
	char* n = new char[s + 1];
	for (int i = 0; i < s + 1; i++)
		n[i] = k[i];

	//delete [] k;




	cout << "write the min size for every word \n from :: ";
	cin >> l1;

	cout << "write the max size for every word \n to :: ";
	cin >> l2;


	//convert();

	for (int i = l1; i <= l2; i++)
		convert(k, i, s)
		;



}






int main()
{
	int QQ;
	cout << "wordlist of  1- blocks 2- charactars :::: ";
	cin >> QQ;
	switch (QQ)
	{
	case 1:c1();
	



	
	break;



	case 2:c2(); 


	break;
	default:c1();
		break;
	}
	out.close();

	return 0;

}
