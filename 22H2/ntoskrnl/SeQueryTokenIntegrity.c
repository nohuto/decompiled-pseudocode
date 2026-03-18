/*
 * XREFs of SeQueryTokenIntegrity @ 0x1402F6584
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x1407528E0 (EtwpPsProvTraceProcess.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x140226B60 (SepCopyTokenIntegrity.c)
 */

void __stdcall SeQueryTokenIntegrity(PACCESS_TOKEN Token, PSID_AND_ATTRIBUTES IntegritySA)
{
  SepCopyTokenIntegrity((__int64)Token, (__int64)IntegritySA);
}
