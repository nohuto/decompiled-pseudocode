/*
 * XREFs of ExVerifySuite @ 0x1403AA560
 * Callers:
 *     MmWriteTriageInformation @ 0x140538CFC (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x140793980 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A414BC (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > (PhoneNT|BackOffice) )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
