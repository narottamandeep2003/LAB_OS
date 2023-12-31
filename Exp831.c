#include "prog.h" // Header file generated by RPCGEN
#include <stdio.h>
#include <stdlib.h>

// Implementation of the remote procedure
int *add_1_svc(int *argp, struct svc_req *rqstp) {
    static int result;
    result = *argp + 1;
    return &result;
}

int main() {
    // Register the server with the RPC daemon
    if (!register_prog_1(PROG, PROG_VERS, add_1_svc, IPPROTO_TCP)) {
        fprintf(stderr, "Error: could not register server\n");
        exit(1);
    }

    // Start the RPC server and wait for requests
    svc_run();
    fprintf(stderr, "Error: could not start server\n");
    exit(1);
}
