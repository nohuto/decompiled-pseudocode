/*
 * XREFs of ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049800
 * Callers:
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C00497A4 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C0049894 (-GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F1860 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02F21A0 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02F2ED8 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02F34DC (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO@@I@Z @ 0x1C02F38B4 (-GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX.c)
 *     ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1C02F3B2C (-GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02F40EC (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02F44F8 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4Dxg.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F48CC (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
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
