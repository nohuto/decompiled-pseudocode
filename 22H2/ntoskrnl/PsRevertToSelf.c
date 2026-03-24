/*
 * XREFs of PsRevertToSelf @ 0x1407145E0
 * Callers:
 *     EtwpCreateLogFile @ 0x14071334C (EtwpCreateLogFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x1406D3C60 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
