//  删数
//  main.cpp
//  八OJ504
//
//  Created by 毛泽宇 on 2021/03/22.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {// i负责循环删除n个数
        int ind = s.size() - 1;// 初始化删掉的位置,如果所有都不满足,那就删掉最后一个数
        for (int j = 1; j < s.size(); j++) {// j负责循环相邻两个数,并比较大小,如果前数大于后数,删前数
            if (s[j - 1] > s[j]) {
                ind = j - 1;
                break;
            }
        }
        s.replace(ind, 1, "");// .replace(替换的位置,替换的长度,替换成什么)
    }
    int flag = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') {
            cout << s[i];
            flag = 1;
        }
        else if (flag == 1) {
            cout << s[i];
        }
//        if (flag == 1) {
//            cout << s[i];
//        }else if (s[i] != '0') {
//            cout << s[i];
//            flag = 1;
//        }
    }
    if (flag == 0) {
        cout << 0;
    }
    cout << endl;
    return 0;
}
