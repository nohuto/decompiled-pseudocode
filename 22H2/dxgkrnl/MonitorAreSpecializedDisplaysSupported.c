/*
 * XREFs of MonitorAreSpecializedDisplaysSupported @ 0x1C00155A8
 * Callers:
 *     ?GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z @ 0x1C01E1EB0 (-GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02FD6A8 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memset @ 0x1C0028640 (memset.c)
 */

__int64 MonitorAreSpecializedDisplaysSupported()
{
  unsigned int v0; // ebx
  ULONG ReturnedProductType[4]; // [rsp+30h] [rbp-148h] BYREF
  _DWORD VersionInformation[72]; // [rsp+40h] [rbp-138h] BYREF

  memset(&VersionInformation[1], 0, 0x118uLL);
  VersionInformation[0] = 284;
  v0 = 0;
  if ( RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) < 0 )
    return 0LL;
  ReturnedProductType[0] = 0;
  if ( !RtlGetProductInfo(
          VersionInformation[1],
          VersionInformation[2],
          LOWORD(VersionInformation[69]),
          HIWORD(VersionInformation[69]),
          ReturnedProductType) )
    return 0LL;
  if ( ReturnedProductType[0] == 4 || ReturnedProductType[0] == 164 || ReturnedProductType[0] == 161 )
    return 1LL;
  LOBYTE(v0) = ReturnedProductType[0] == 188;
  return v0;
}
