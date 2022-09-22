openssl-version: openssl-version.c
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $< -o $@ -lcrypto

clean:
	$(RM) openssl-version
