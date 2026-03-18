/*
 * XREFs of ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004A860
 * Callers:
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004A804 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004A8F4 (-GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F6690 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02F6FD0 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02F7D08 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02F830C (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO@@I@Z @ 0x1C02F86E4 (-GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX.c)
 *     ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1C02F895C (-GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02F8F1C (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02F9328 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4Dxg.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F96FC (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

struct DISPLAYDIAGNOSTICADAPTERDATA *__fastcall DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(
        DISPLAYSTATECHECKER *this,
        unsigned int a2)
{
  int v3; // edx
  int v4; // r8d

  if ( a2 < 4 )
    return (DISPLAYSTATECHECKER *)((char *)this + 3512 * a2 + 40);
  WdLogSingleEntry1(1LL, 619LL);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        0,
        v3,
        v4,
        0LL,
        2,
        -1,
        L"GetDisplayAdapterDiagData() called with invalid index",
        619LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return 0LL;
}
