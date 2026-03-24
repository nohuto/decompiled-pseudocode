/*
 * XREFs of PsRevertToSelf @ 0x1406E0D40
 * Callers:
 *     EtwpCreateLogFile @ 0x1406DFAAC (EtwpCreateLogFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x14065AEA0 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
