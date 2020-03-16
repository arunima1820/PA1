#include <iostream>
#include <string>
#include "parse.h"
#include "version.h"

using namespace std;

int main(int argc, char *argv[]) {
	version::displayVersion();
	std::cout << "\nEnter URL: \t";
	string url;
	cin >> url;
	cout << endl;

	parse p(url);

}
