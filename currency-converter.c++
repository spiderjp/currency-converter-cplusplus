#include<iostream>

using namespace std;

int main(){

    int dollars;
    float B, M,  J, P, R;
    string currency;

    cout << "Enter currency in American Dollars: $"<<endl;
    cin >> dollars;

    B = dollars*0,57105;
    M = dollars*10.7956;
    J=dollars*112.212;
    P=dollars*102.243;
    R=dollars*5.6;

    cout << "What currency would you like to convert? \n";
    cout << "The currencies are: (B)ritish dollars, (M)exican pesos, (J)apanese yen, (P)akistani rupees and (R)eal brasileiro. \n ";
    cin >> currency;

    if(currency == "B" || currency =="b"){

        cout << dollars << "$ is equal to " << B << " British Dollars\n";

    }else if(currency == "M" || currency == "m"){

        cout << dollars << "$ is equal to " << M << " Mexican pesos\n";

    }else if (currency == "J" || currency == "j"){

        cout << dollars << "$ is equal to " << J << " Japonese yen\n";
    }else if(currency == "P" || currency == "p"){

        cout << dollars << "$ is equal to " << P << " Pakistani rupees\n";
    }else if(currency == "B" || currency == "b"){

        cout << dollars << "$ is equal to " << R << " Real brasileiro\n";
    } else{

        cout << "Invalid entry. (check spelling!)\n";
    }
}