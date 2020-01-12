//Number System and Code
#include <iostream>
#include <cmath>
using namespace std;

class con{
	public:
		void headline();
		void dec_bin();
		void dec_oct();
		void dec_hex();
		void bin_dec();
		void bin_oct();
		void bin_hex();
		void oct_dec();
		void oct_bin();
		void oct_hex();
		void hex_dec();
		void hex_bin();
		void hex_oct();
};

int main() {
	con fn;
	fn.headline();
	cout << "********** All in One **********\n";
    cout << "  1. Decimal to Binary\n";
    cout << "  2. Decimal to Octal\n";
    cout << "  3. Decimal to Hexadecimal\n";
	cout << "  4. Binary to Decimal\n";
    cout << "  5. Binary to Octal\n";
    cout << "  6. Binary to Hexadecimal\n";
    cout << "  7. Octal to Decimal\n";
    cout << "  8. Octal to Binary\n";
    cout << "  9. Octal to Hexadecimal\n";
    cout << " 10. Hexadecimal to Decimal\n";
    cout << " 11. Hexadecimal to Binary\n";
	cout << " 12. Hexadecimal to Octal\n";
    cout << " 13. Exit\n";
    cout << "********************************\n\n";

    int choice;
    while(choice != 13) {

	    cout << "\nEnter your choice: ";
	    cin >> choice;

	    switch(choice) {
		    case 1:
		    	fn.dec_bin();	 break;
		    case 2:
		    	fn.dec_oct();    break;
		    case 3:
		    	fn.dec_hex();    break;
		    case 4:
		    	fn.bin_dec();    break;
		    case 5:
		    	fn.bin_oct();    break;
		    case 6:
		    	fn.bin_hex();    break;
			case 7:
		    	fn.oct_dec();    break;
		    case 8:
		    	fn.oct_bin();    break;
		    case 9:
		    	fn.oct_hex();    break;
		    case 10:
		    	fn.hex_dec();    break;
		    case 11:
		    	fn.hex_bin();    break;
		    case 12:
		    	fn.hex_oct();    break;
		    case 13:
		        cout << "\nYou are logged out Successfully!!\n";    break;
		    default:
		        cout << "\nError!!";
	    }
    }
	return 0;
}

void con::headline() {
	cout << "\t\t\t\t\t***************************\n";
    cout << "\t\t\t\t\t    Number System & Code\n";
    cout << "\t\t\t\t\t***************************\n";
}

void con::dec_bin() {
	int binary[50], dec_num, k=0;

    cout << "Enter the Decimal number : ";
    cin >> dec_num;

    while(dec_num!=1) {
        binary[k] = dec_num % 2;
        dec_num /= 2; k++;
    }
    binary[k] = 1;

    for (int i=k; i>=0; i--) {
        cout << binary[i];
    } cout << endl;
}

void con::dec_oct() {
	int octal[50], dec_num, k=0;

    cout << "Enter the Decimal number : ";
    cin >> dec_num;

    while(dec_num > 8) {
        octal[k] = dec_num % 8;
        dec_num /= 8; k++;
    }
    octal[k] = dec_num;

    for (int i=k; i>=0; i--) {
        cout << octal[i];
    } cout << endl;
}

void con::dec_hex() {
	int dec_num, k=0, x[10];
    cout << "Enter the Decimal number : ";
    cin >> dec_num;

    while(dec_num > 16) {
        x[k] = dec_num % 16;         
        dec_num /= 16; k++;
    } 
	x[k] = dec_num;
	
    for (int i=k; i>=0; i--) {
     	if(x[i]>=10) {
	    	if(x[i] == 10) cout << 'A';
	        if(x[i] == 11) cout << 'B';
	        if(x[i] == 12) cout << 'C';
	        if(x[i] == 13) cout << 'D';
	        if(x[i] == 14) cout << 'E';
	        if(x[i] == 15) cout << 'F';
		}else {
			cout << x[i];
		}  
    } cout << endl;
}

void con::bin_dec() {
	int decimal=0, k=0;
	unsigned long long int bin_num;
	cout << "Enter a Binary Number : ";
	cin >> bin_num;

	while(bin_num != 0) {
		decimal += (bin_num % 10) * pow(2, k);
		bin_num /= 10;
		k++;
	}
	cout << decimal << endl;
}

void con::bin_oct() {
	//binary >> decimal >> octal
	unsigned long long int bin_num;
	int decimal=0, octal[50], k=0;

	cout << "Enter a Binary Number : ";
	cin >> bin_num;

	while(bin_num != 0) {
		decimal += (bin_num % 10) * pow(2, k);
		bin_num /= 10;
		k++;
	}
	k=0;
    while(decimal > 8) {
        octal[k] = decimal % 8;
        decimal /= 8; k++;
    }
    octal[k] = decimal;

    for (int i=k; i>=0; i--) {
        cout << octal[i];
    } cout << endl;
}

void con::bin_hex() {
	//binary >> decimal >> hexadecimal
	unsigned long long int bin_num;
	int decimal=0, octal[50], x[10], k=0;

	cout << "Enter a Binary Number : ";
	cin >> bin_num;

	while(bin_num != 0) {
		decimal += (bin_num % 10) * pow(2, k);
		bin_num /= 10;
		k++;
	}
	k=0;
    while(decimal > 16) {
        x[k] = decimal % 16;         
        decimal /= 16; k++;
    } 
	x[k] = decimal;
	
    for (int i=k; i>=0; i--) {
     	if(x[i]>=10) {
	    	if(x[i] == 10) cout << 'A';
	        if(x[i] == 11) cout << 'B';
	        if(x[i] == 12) cout << 'C';
	        if(x[i] == 13) cout << 'D';
	        if(x[i] == 14) cout << 'E';
	        if(x[i] == 15) cout << 'F';
		}else {
			cout << x[i];
		}  
    } cout << endl;
}

void con::oct_dec() {
	int octal, k=0, decimal=0;
	cout << "Enter a Octal Number : ";
	cin >> octal;

	while(octal != 0) {
		decimal += (octal % 10) * pow(8, k);
		octal /= 10;
		k++;
	}
	cout << decimal << endl;
}

void con::oct_bin() {
	//octal >> decimal >> binary
	int octal, k=0, decimal=0, binary[50];
	cout << "Enter a Octal Number : ";
	cin >> octal;

	while(octal != 0) {
		decimal += (octal % 10) * pow(8, k);
		octal /= 10;
		k++;
	}
	k=0;
    while(decimal!=1) {
        binary[k] = decimal % 2;
        decimal /= 2; k++;
    }
    binary[k] = 1;

    for (int i=k; i>=0; i--) {
        cout << binary[i];
    } cout << endl;
}

void con::oct_hex() {
	//octal >> decimal >> hexadecimal
	int octal, k=0, decimal=0, x[10];
	cout << "Enter a Octal Number : ";
	cin >> octal;

	while(octal != 0) {
		decimal += (octal % 10) * pow(8, k);
		octal /= 10;
		k++;
	}
	k=0;
    while(decimal > 16) {
        x[k] = decimal % 16;         
        decimal /= 16; k++;
    } 
	x[k] = decimal;
	
    for (int i=k; i>=0; i--) {
     	if(x[i]>=10) {
	    	if(x[i] == 10) cout << 'A';
	        if(x[i] == 11) cout << 'B';
	        if(x[i] == 12) cout << 'C';
	        if(x[i] == 13) cout << 'D';
	        if(x[i] == 14) cout << 'E';
	        if(x[i] == 15) cout << 'F';
		}else {
			cout << x[i];
		}  
    } cout << endl;
}

void con::hex_dec() {
	char hex[10];
	int store[10], decimal=0, k=0, i;
	cout << "Enter a Hexadecimal number : ";
	cin >> hex;
	
	for(i=0; hex[i]!='\0'; i++) {
		if(hex[i]>='A' && hex[i]<='F') {
			if(hex[i] == 'A') store[i] = 10; 
			if(hex[i] == 'B') store[i] = 11; 
			if(hex[i] == 'C') store[i] = 12; 
			if(hex[i] == 'D') store[i] = 13; 
			if(hex[i] == 'E') store[i] = 14; 
			if(hex[i] == 'F') store[i] = 15; 
		}else {
			store[i] = hex[i] - '0';
		}
	}
	for(int j=i-1; j>-1; j--) {
		decimal += store[j] * pow(16, k);
		k++;
	}
	cout << decimal << endl;
}

void con::hex_bin() {
	//hex >> decimal >> binary
	char hex[10];
	int store[10], decimal=0, k=0, i, binary[50];
	cout << "Enter a Hexadecimal number : ";
	cin >> hex;
	
	for(i=0; hex[i]!='\0'; i++) {
		if(hex[i]>='A' && hex[i]<='F') {
			if(hex[i] == 'A') store[i] = 10; 
			if(hex[i] == 'B') store[i] = 11; 
			if(hex[i] == 'C') store[i] = 12; 
			if(hex[i] == 'D') store[i] = 13; 
			if(hex[i] == 'E') store[i] = 14; 
			if(hex[i] == 'F') store[i] = 15; 
		}else {
			store[i] = hex[i] - '0';
		}
	}
	for(int j=i-1; j>-1; j--) {
		decimal += store[j] * pow(16, k);
		k++;
	}
	
	k=0;
    while(decimal!=1) {
        binary[k] = decimal % 2;
        decimal /= 2; k++;
    }
    binary[k] = 1;
    
    for (int i=k; i>=0; i--) {
        cout << binary[i];
    } cout << endl;
}

void con::hex_oct() {
	//hex >> decimal >> octal
	char hex[10];
	int store[10], decimal=0, k=0, i, octal[50];
	cout << "Enter a Hexadecimal number : ";
	cin >> hex;
	
	for(i=0; hex[i]!='\0'; i++) {
		if(hex[i]>='A' && hex[i]<='F') {
			if(hex[i] == 'A') store[i] = 10; 
			if(hex[i] == 'B') store[i] = 11; 
			if(hex[i] == 'C') store[i] = 12; 
			if(hex[i] == 'D') store[i] = 13; 
			if(hex[i] == 'E') store[i] = 14; 
			if(hex[i] == 'F') store[i] = 15; 
		}else {
			store[i] = hex[i] - '0';
		}
	}
	for(int j=i-1; j>-1; j--) {
		decimal += store[j] * pow(16, k);
		k++;
	}

	k=0;
    while(decimal > 8) {
        octal[k] = decimal % 8;
        decimal /= 8; k++;
    }
    octal[k] = decimal;

    for (int i=k; i>=0; i--) {
        cout << octal[i];
    } cout << endl;
}
