#include <openssl/crypto.h>
#include <stdio.h>

/* trivial program for linking against OpenSSL */

int main (void) {
    const char *version;
  #if OPENSSL_API_COMPAT < 0x10100000L
    version = SSLeay_version(SSLEAY_VERSION);
  #else
    version = OpenSSL_version(OPENSSL_VERSION);
  #endif
    printf("%s\n", version);
}
