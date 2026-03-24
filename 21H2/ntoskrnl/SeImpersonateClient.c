/*
 * XREFs of SeImpersonateClient @ 0x140922650
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1406E0EE0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
