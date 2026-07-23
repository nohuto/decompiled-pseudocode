/*
 * XREFs of PsRevertToSelf @ 0x1406B8020
 * Callers:
 *     EtwpCreateLogFile @ 0x1406B6D8C (EtwpCreateLogFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
