/*
 * XREFs of PsRevertToSelf @ 0x1409B1D60
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x140734F30 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
