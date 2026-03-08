/*
 * XREFs of DpiGetDxgAdapter @ 0x1C000E550
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C000E4E0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C001CB40 (DxgSetPowerComponentIdleCB.c)
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0041A80 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C0048010 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C00480A0 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C00480D0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C0048150 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C00481D0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C0048260 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkInvalidateHwContextCB @ 0x1C00482E0 (DxgkInvalidateHwContextCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C00484D0 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C0048640 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C00486C0 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0048740 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgLogEtwEventCb @ 0x1C004D550 (DxgLogEtwEventCb.c)
 *     DxgkCbReportDiagnostic @ 0x1C004E910 (DxgkCbReportDiagnostic.c)
 *     DxgkMapFrameBufferPointerCB @ 0x1C0052360 (DxgkMapFrameBufferPointerCB.c)
 *     DxgkPinFrameBufferForSave2CB @ 0x1C00524B0 (DxgkPinFrameBufferForSave2CB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x1C0052500 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkUnmapFrameBufferPointerCB @ 0x1C0052540 (DxgkUnmapFrameBufferPointerCB.c)
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C00525D0 (DxgkUnpinFrameBufferForSaveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01CBBE0 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgDestroyContextAllocationCB @ 0x1C01CBC50 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C01CBD10 (DxgCreateContextAllocationCB.c)
 *     DxgkMapContextAllocationCB @ 0x1C01CBEA0 (DxgkMapContextAllocationCB.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01CE5A0 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     DxgMiniportQueryMonitorInterfaceCB @ 0x1C01D08B0 (DxgMiniportQueryMonitorInterfaceCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C01E83D0 (DxgSetPowerComponentActiveCB.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C0218790 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C02E1060 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C02E1200 (DxgkUpdateContextAllocationCB.c)
 *     DxgkNotifyCursorSupportChangeCB @ 0x1C0335D00 (DxgkNotifyCursorSupportChangeCB.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03C16B0 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C03C1F30 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C03C22E0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C03C2800 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapter(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
      return *(_QWORD *)(v1 + 3912);
    WdLogSingleEntry1(2LL, a1);
  }
  else
  {
    WdLogSingleEntry0(2LL);
  }
  return 0LL;
}
