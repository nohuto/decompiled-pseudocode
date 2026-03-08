/*
 * XREFs of SeQueryTokenIntegrity @ 0x14035C400
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x1407E8D90 (EtwpPsProvTraceProcess.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x14030FED0 (SepCopyTokenIntegrity.c)
 */

void __stdcall SeQueryTokenIntegrity(PACCESS_TOKEN Token, PSID_AND_ATTRIBUTES IntegritySA)
{
  SepCopyTokenIntegrity((__int64)Token, (__int64)IntegritySA);
}
