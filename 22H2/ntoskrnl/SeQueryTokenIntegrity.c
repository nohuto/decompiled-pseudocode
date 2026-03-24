/*
 * XREFs of SeQueryTokenIntegrity @ 0x140251BD8
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x1402521FC (SepCopyTokenIntegrity.c)
 */

void __stdcall SeQueryTokenIntegrity(PACCESS_TOKEN Token, PSID_AND_ATTRIBUTES IntegritySA)
{
  SepCopyTokenIntegrity(Token, IntegritySA);
}
