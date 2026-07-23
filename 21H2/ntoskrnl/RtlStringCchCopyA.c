/*
 * XREFs of RtlStringCchCopyA @ 0x140246F94
 * Callers:
 *     EtwpCoverageAddToStringBuffer @ 0x140246F48 (EtwpCoverageAddToStringBuffer.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x1405A6C24 (EtwpCoverageRecordAtHighIrql.c)
 *     WheaHwErrorReportSetSectionNameDeviceDriver @ 0x1405BC120 (WheaHwErrorReportSetSectionNameDeviceDriver.c)
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1405BC2C0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1405BC3E0 (WheaReportHwErrorDeviceDriverEx.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1405BC6B0 (WheapInitErrorReportDeviceDriver.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1405BCF20 (WheapCreateRecordFromGenericErrorData.c)
 *     AslpFileQueryExportName_Vb @ 0x1405D226C (AslpFileQueryExportName_Vb.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x14095D2F0 (WheaRemoveErrorSourceDeviceDriver.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A8610 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A88A8 (HalpInitGenericErrorSourceEntryV2.c)
 *     EmpParseStrings @ 0x140A4789C (EmpParseStrings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  char v6; // al
  NTSTRSAFE_PSTR v7; // rax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    if ( cchDest )
    {
      v4 = 2147483646 - cchDest;
      v5 = pszSrc - pszDest;
      do
      {
        if ( !(v4 + cchDest) )
          break;
        v6 = pszDest[v5];
        if ( !v6 )
          break;
        *pszDest++ = v6;
        --cchDest;
      }
      while ( cchDest );
    }
    v7 = pszDest - 1;
    if ( cchDest )
      v7 = pszDest;
    v3 = cchDest == 0 ? 0x80000005 : 0;
    *v7 = 0;
  }
  return v3;
}
