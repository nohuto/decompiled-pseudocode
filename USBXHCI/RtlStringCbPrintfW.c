/*
 * XREFs of RtlStringCbPrintfW @ 0x1C001C700
 * Callers:
 *     TelemetryData_CreateReport @ 0x1C005306C (TelemetryData_CreateReport.c)
 *     Controller_SetDeviceDescription @ 0x1C0073EEC (Controller_SetDeviceDescription.c)
 *     TelemetryData_pCreateDumpFile @ 0x1C007AFE4 (TelemetryData_pCreateDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C007B300 (TelemetryData_pInitWerContext.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C000CF8C (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
