#include<iostream>
#include<sstream>
#include<boost/asio.hpp>

int main(){
	std::stringstream ss;
	char aiueo[16] = { 0 };
	std::cout << "test" << std::endl;
	std::cin >> aiueo;
	std::cout << aiueo;
	return 0;
}