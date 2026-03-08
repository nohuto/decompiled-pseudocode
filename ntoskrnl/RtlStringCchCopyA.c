/*
 * XREFs of RtlStringCchCopyA @ 0x1403BD50C
 * Callers:
 *     EtwpCoverageAddToStringBuffer @ 0x1403BD4CC (EtwpCoverageAddToStringBuffer.c)
 *     CarCopyRuleViolationDetails @ 0x1405D1370 (CarCopyRuleViolationDetails.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x1405FD574 (EtwpCoverageRecordAtHighIrql.c)
 *     WheaHwErrorReportSetSectionNameDeviceDriver @ 0x14060EFA0 (WheaHwErrorReportSetSectionNameDeviceDriver.c)
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x14060F150 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x14060F270 (WheaReportHwErrorDeviceDriverEx.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14060F578 (WheapInitErrorReportDeviceDriver.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1406104A8 (WheapCreateRecordFromGenericErrorData.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A04E60 (WheaRemoveErrorSourceDeviceDriver.c)
 *     AslpFileQueryExportName @ 0x140A565BC (AslpFileQueryExportName.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A88304 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A93104 (HalpInitGenericErrorSourceEntryV2.c)
 *     EmpParseStrings @ 0x140B4DEC4 (EmpParseStrings.c)
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
