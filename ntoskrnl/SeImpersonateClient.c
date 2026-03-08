/*
 * XREFs of SeImpersonateClient @ 0x1409CC150
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x140773900 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
