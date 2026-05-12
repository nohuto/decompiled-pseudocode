/*
 * XREFs of RtlStringCchPrintfW @ 0x1C001B1F0
 * Callers:
 *     RaidUnitGetInstanceId @ 0x1C001B16C (RaidUnitGetInstanceId.c)
 *     RaidUnitGetDeviceId @ 0x1C001B2B0 (RaidUnitGetDeviceId.c)
 *     StorpTelemetryGetStartStopCycleCounter @ 0x1C001F4A8 (StorpTelemetryGetStartStopCycleCounter.c)
 *     RaidCreateDeviceName @ 0x1C0044EC8 (RaidCreateDeviceName.c)
 *     StorCreateScsiSymbolicLink @ 0x1C0045F40 (StorCreateScsiSymbolicLink.c)
 *     StorDeleteScsiSymbolicLink @ 0x1C004628C (StorDeleteScsiSymbolicLink.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0052E98 (StorpLogPhysicalTopologyInfo.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0074C34 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C001B248 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, (size_t *)pszFormat, pszFormat, va);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
