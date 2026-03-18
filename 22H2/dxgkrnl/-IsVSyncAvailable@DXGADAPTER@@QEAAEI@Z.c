/*
 * XREFs of ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017687C
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C005790C (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01950A0 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C01C59D0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01C73B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01F1940 (DxgkCheckMonitorPowerState.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C01F402C (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 *     DxgkGetScanLine @ 0x1C02D1910 (DxgkGetScanLine.c)
 *     DxgkDispMgrSourceOperation @ 0x1C02FE890 (DxgkDispMgrSourceOperation.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002AE8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall DXGADAPTER::IsVSyncAvailable(DXGADAPTER *this, unsigned int a2)
{
  char v4; // bl
  ADAPTER_DISPLAY *v5; // rcx

  v4 = 1;
  if ( !*((_QWORD *)this + 365) )
  {
    WdLogSingleEntry1(1LL, 10280LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10280LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 365);
  if ( !v5 || !ADAPTER_DISPLAY::IsVidPnSourceActive(v5, a2) )
    return 0;
  return v4;
}
