/*
 * XREFs of SeQueryTokenIntegrity @ 0x1402585D0
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x14070AFEC (EtwpPsProvTraceProcess.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x1402ED98C (SepCopyTokenIntegrity.c)
 */

void __stdcall SeQueryTokenIntegrity(PACCESS_TOKEN Token, PSID_AND_ATTRIBUTES IntegritySA)
{
  SepCopyTokenIntegrity(Token, IntegritySA);
}
