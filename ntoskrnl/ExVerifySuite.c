/*
 * XREFs of ExVerifySuite @ 0x1403A1420
 * Callers:
 *     MmWriteTriageInformation @ 0x14062E4BC (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x14084ADDC (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140B6505C (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
