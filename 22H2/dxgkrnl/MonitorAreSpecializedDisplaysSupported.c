/*
 * XREFs of MonitorAreSpecializedDisplaysSupported @ 0x1C0142B0C
 * Callers:
 *     ?_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z @ 0x1C0142AC4 (-_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02B1494 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_ProductizeSpecializedDisplays__private_ReportDeviceUsage @ 0x1C0028870 (Feature_ProductizeSpecializedDisplays__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

_BOOL8 MonitorAreSpecializedDisplaysSupported()
{
  int v0; // ecx
  _BOOL8 result; // rax
  ULONG ReturnedProductType[4]; // [rsp+30h] [rbp-148h] BYREF
  _DWORD VersionInformation[72]; // [rsp+40h] [rbp-138h] BYREF

  Feature_ProductizeSpecializedDisplays__private_ReportDeviceUsage();
  memset(&VersionInformation[1], 0, 0x118uLL);
  VersionInformation[0] = 284;
  result = 0;
  if ( RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0 )
  {
    ReturnedProductType[0] = 0;
    if ( RtlGetProductInfo(
           VersionInformation[1],
           VersionInformation[2],
           LOWORD(VersionInformation[69]),
           HIWORD(VersionInformation[69]),
           ReturnedProductType) )
    {
      if ( ReturnedProductType[0] == 4 )
        return 1;
      if ( ReturnedProductType[0] - 161 <= 0x1B )
      {
        v0 = 134217737;
        if ( _bittest(&v0, ReturnedProductType[0] - 161) )
          return 1;
      }
    }
  }
  return result;
}
