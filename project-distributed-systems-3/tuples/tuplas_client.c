/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "tuplas.h"


void
tuples_429005(char *host)
{
	CLIENT *clnt;
	enum clnt_stat retval_1;
	int result_1;
	enum clnt_stat retval_2;
	int result_2;
	int settovarue_429005_key;
	char *settovarue_429005_value1;
	int settovarue_429005_value2;
	double settovarue_429005_value3;
	enum clnt_stat retval_3;
	struct Response result_3;
	int gettovarue_429005_key;
	enum clnt_stat retval_4;
	int result_4;
	int modifuicvarue_429005_key;
	char *modifuicvarue_429005_value1;
	int modifuicvarue_429005_value2;
	double modifuicvarue_429005_value3;
	enum clnt_stat retval_5;
	int result_5;
	int deletto_429005_key;
	enum clnt_stat retval_6;
	int result_6;
	int existt_429005_key;
	enum clnt_stat retval_7;
	int result_7;
	int copyvarue_429005_key;
	int copyvarue_429005_key2;

#ifndef	DEBUG
	clnt = clnt_create (host, tuples, TUPLESVER, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	retval_1 = initto_429005(&result_1, clnt);
	if (retval_1 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}
	retval_2 = settovarue_429005(settovarue_429005_key, settovarue_429005_value1, settovarue_429005_value2, settovarue_429005_value3, &result_2, clnt);
	if (retval_2 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}
	retval_3 = gettovarue_429005(gettovarue_429005_key, &result_3, clnt);
	if (retval_3 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}
	retval_4 = modifuicvarue_429005(modifuicvarue_429005_key, modifuicvarue_429005_value1, modifuicvarue_429005_value2, modifuicvarue_429005_value3, &result_4, clnt);
	if (retval_4 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}
	retval_5 = deletto_429005(deletto_429005_key, &result_5, clnt);
	if (retval_5 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}
	retval_6 = existt_429005(existt_429005_key, &result_6, clnt);
	if (retval_6 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}
	retval_7 = copyvarue_429005(copyvarue_429005_key, copyvarue_429005_key2, &result_7, clnt);
	if (retval_7 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	tuples_429005 (host);
exit (0);
}