#include <iostream>
#include <sys/socket.h>

using namespace std;

int main(){

    int server_fd;
    int opt = 1;
    //cout << SOCK_STREAM << endl;
    
    // new socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd <= 0)
    {
        perror("Socket creation failed..");
        exit(EXIT_FAILURE);
    }

    // socket options
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)))
    {
        perror("Set socket options failed..");
        exit(EXIT_FAILURE);
    }


    


    

}