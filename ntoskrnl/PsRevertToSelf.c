/*
 * XREFs of PsRevertToSelf @ 0x1409AED10
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
