#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int i;
long long result;


void mainMenu() {
    cout << "=========================================" << endl;
    cout << "     Chuong trinh tinh chi so NRO:" << endl;
    cout << "=========================================" << endl;
    cout << "     1 - Cong HP "<< endl;
    cout << "     2 - Cong KI " << endl;
    cout << "     3 - Cong Tan Cong"<< endl;
    cout << "     4 - Cong Giap" << endl;
    cout << "     => Nhap 0 de thoat." << endl;
    cout << "=========================================" << endl;
}

string formatResult(long long result) {
    // chuyên kết quả thành string
    string strResult = to_string(result);
    // lấy độ dài của string
    int n = strResult.length();
    // duyệt cách nhau 3 chữ số để chèn dấu vào
    for (i = n - 3; i > 0; i -= 3) {
        strResult.insert(i, ",");
    }
    return strResult;
}

void HP(int current, int wish) {
    result = 0;
    for (i = current; i < wish; i += 20) {
        result += i + 1000;
    }
    cout << "Can " << formatResult(result) << " tiem nang de nang den " << wish << " HP" << endl;
}

void KI(int current, int wish) {
    result = 0;
    for (i = current; i < wish; i += 20) {
        result += i + 1000;
    }
    cout << "Can " << formatResult(result) << " tiem nang de nang den " << wish << " KI" << endl;
}

void AT(int current, int wish) {
    result = 0;
    for(i = current; i < wish; i++) {
        result += i * 100;
    }
    cout << "Can " << formatResult(result) << " tiem nang de nang den " << wish << " Tan Cong" << endl;
}

void Def(int current, int wish) {
    result = 0;
    for (i = current; i < wish; i++) {
        result += i* 100000 + 500000;
    }
    cout << "Can " << formatResult(result) << " tiem nang de nang den " << wish << " Giap" << endl;
}


int main() {
    int runcode;
    int current, wish;
    do {
        mainMenu();
        cin >> runcode;
        if (runcode != 0) 
            {
            cout << "Nhap chi so ban dau: " << endl;
            cin >> current;
            cout << "Nhap chi so can: " << endl;
            cin >> wish;
        }
        system("cls");
        switch (runcode) {
            case 1: HP(current, wish);
                break;
            case 2: KI(current, wish);
                break;
            case 3: AT(current, wish);
                break;
            case 4: Def(current, wish);
                break;
            default: break;
        }

    } while (runcode != 0);

    return 0;
}