/*
 * XREFs of SeImpersonateClient @ 0x1409226A0
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x140714780 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
