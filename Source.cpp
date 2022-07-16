#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {

	map< string, vector<int> > scores;
	scores["A"].push_back(20);
	scores["A"].push_back(10);
	scores["B"].push_back(20);
	
	map< string, vector<int>>::iterator it = scores.begin();
	for (it; it != scores.end(); it++) {
		string name = it->first;
		vector<int> score = it->second;
		cout << name << " :  " << flush;
		for (int i = 0; i != score.size(); i++) {
			cout << score[i] << "  " << flush;
		}
		cout << endl;
	}
	return 0;
}
