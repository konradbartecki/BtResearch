#include <Windows.h>
#include <WinSock2.h>
#include <iostream>
#include <ws2bth.h>

using namespace std;

int main() {
	
	struct addrinfo *result = NULL,
		*ptr = NULL,
		hints;

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_BTH;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = BTHPROTO_RFCOMM;


	std::cout << "Siema Konrad";
	return 0;
}