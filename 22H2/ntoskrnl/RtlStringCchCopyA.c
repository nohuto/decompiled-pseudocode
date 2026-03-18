/*
 * XREFs of RtlStringCchCopyA @ 0x1403C2DCC
 * Callers:
 *     EtwpCoverageAddToStringBuffer @ 0x1403C2D8C (EtwpCoverageAddToStringBuffer.c)
 *     CarCopyRuleViolationDetails @ 0x1405D3820 (CarCopyRuleViolationDetails.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x1405FFA14 (EtwpCoverageRecordAtHighIrql.c)
 *     WheaHwErrorReportSetSectionNameDeviceDriver @ 0x1406113C0 (WheaHwErrorReportSetSectionNameDeviceDriver.c)
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140611570 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140611690 (WheaReportHwErrorDeviceDriverEx.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140611998 (WheapInitErrorReportDeviceDriver.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1406128C8 (WheapCreateRecordFromGenericErrorData.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A07B50 (WheaRemoveErrorSourceDeviceDriver.c)
 *     AslpFileQueryExportName @ 0x140A59270 (AslpFileQueryExportName.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A8B914 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A96244 (HalpInitGenericErrorSourceEntryV2.c)
 *     EmpParseStrings @ 0x140B56184 (EmpParseStrings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r8
  char v5; // al
  NTSTRSAFE_PSTR v6; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cchDest;
    v4 = pszSrc - pszDest;
    do
    {
      if ( !(v3 + cchDest) )
        break;
      v5 = pszDest[v4];
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cchDest;
    }
    while ( cchDest );
    v6 = pszDest - 1;
    if ( cchDest )
      v6 = pszDest;
    *v6 = 0;
    return cchDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
