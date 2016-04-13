// BtResearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <WinSock2.h>
#include <ws2bth.h>


int main()
{
	WSADATA wsaData;

	int iResult;

	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed: %d\n", iResult);
		return 1;
	}

	struct addrinfo *result = NULL,
		*ptr = NULL,
		hints;

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_BTH;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = BTHPROTO_RFCOMM;

	SOCKADDR_BTH bluetoothAddress;
	bluetoothAddress.addressFamily = 

    return 0;
}

