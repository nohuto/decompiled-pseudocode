/*
 * XREFs of ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F28F8
 * Callers:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F1860 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0003484 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_DriverBlackboxData__private_ReportDeviceUsage @ 0x1C0025E8C (Feature_DriverBlackboxData__private_ReportDeviceUsage.c)
 *     Feature_DriverWhiteboxData__private_ReportDeviceUsage @ 0x1C0025EF0 (Feature_DriverWhiteboxData__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiIsLastLidStateOpen @ 0x1C005DB5C (DpiIsLastLidStateOpen.c)
 *     ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F1734 (-AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02F1924 (-AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02F1B90 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 *     ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F1CB4 (-AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F1DF8 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::CollectDisplayAdapterDiagData(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  NTSTATUS v5; // esi
  _BYTE OutputBuffer[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a2 )
    return 3221225485LL;
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)a2 + 404);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 103);
  *((_BYTE *)this + 20) = DXGADAPTER::IsBddFallbackDriver(a2);
  memset(OutputBuffer, 0, 0x4CuLL);
  v5 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 3504) = OutputBuffer[2] != 0;
    *((_BYTE *)this + 3505) = *((_BYTE *)DXGGLOBAL::GetGlobal() + 304760);
    *((_BYTE *)this + 3506) = DpiIsLastLidStateOpen() != 0;
  }
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnSourceInfo(this, (ADAPTER_DISPLAY **)a2);
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(this, a2);
  if ( DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(this, a2) < 0 )
    *((_BYTE *)this + 56) = 0;
  Feature_DriverWhiteboxData__private_ReportDeviceUsage();
  if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverWhiteboxInfo((struct DXGADAPTER **)this) < 0 )
    *((_BYTE *)this + 3248) = 0;
  if ( *((_BYTE *)this + 21) )
  {
    Feature_DriverBlackboxData__private_ReportDeviceUsage();
    if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverBlackboxInfo(this) < 0 )
      *((_BYTE *)this + 3488) = 0;
  }
  return (unsigned int)v5;
}
