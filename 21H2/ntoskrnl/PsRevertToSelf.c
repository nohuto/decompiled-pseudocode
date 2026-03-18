/*
 * XREFs of PsRevertToSelf @ 0x1407F6CB0
 * Callers:
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
