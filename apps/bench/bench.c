#include <stdio.h>

#include "clocks.h"
#include "cpu_id.c"
#include "bench_fp.c"
#include "bench_ecc.c"
#include "bench_ecdh.c"
#include "bench_eddsa.c"

int main(void)
{
	printf("==========================================================\n");
	printf("  High Performance Implementation of Elliptic Curve       \n");
	printf("        Cryptography using Vector Instructions            \n");
	printf("==========================================================\n\n");

    printf("==== Start of Benchmarking  ====\n");
	machine_info();

	bench_fp25519();
	bench_ecc25519();
	bench_x25519();
	bench_ed25519();

	bench_fp448();
	bench_ecc448();
	bench_x448();
	bench_ed448();

	printf("====  End of Benchmarking  ====\n");
	return 0;
}


