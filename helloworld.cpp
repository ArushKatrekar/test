#include <iostream>
using namespace std;

/*
1) Below 25 - F
2) 25 to 44 - E
3) 45 to 49 - D
4) 50 to 59 - C
5) 60 to 79 - B
6) 80 to 100- A

*/

int main()
{
    int marks;
    cin >> marks;
    if(marks < 25) {
        cout << "F" << endl;
    }

    else if(marks>25 && marks<44){

    
        cout<< "E" << endl;
    }
    else if(marks>45 && marks<49){

    
        cout<< "D" << endl;
    }
    else if(marks>50 && marks<59){

    
        cout<< "C" << "\n";
    }
    else if(marks>60 && marks<79){

    
        cout<< "B" << "\n";
    }
    else {
        cout<<"A" << "\n";
    }
    
    cout << "Helloo" << "\n";

    return(0);

}

