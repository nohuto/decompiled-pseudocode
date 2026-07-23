/*
 * XREFs of SeImpersonateClient @ 0x1409227B0
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1406B81C0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
