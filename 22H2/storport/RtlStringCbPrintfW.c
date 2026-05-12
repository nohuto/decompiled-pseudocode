/*
 * XREFs of RtlStringCbPrintfW @ 0x1C001A24C
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011BC0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     PortMapDeleteLunEntry @ 0x1C001C1E8 (PortMapDeleteLunEntry.c)
 *     PortMapDeleteAdapterEntry @ 0x1C0059978 (PortMapDeleteAdapterEntry.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C0077494 (RaidAdapterCreateDriverInfo.c)
 *     PortOpenDeviceKey @ 0x1C007C7DC (PortOpenDeviceKey.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C001B248 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  if ( v3 )
    *pszDest = 0;
  return v4;
}
