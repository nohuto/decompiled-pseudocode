/*
 * XREFs of ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017E65C
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C0056E0C (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C018F830 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01911B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C78EC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01E3020 (DxgkCheckMonitorPowerState.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C01E570C (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 *     DxgkGetScanLine @ 0x1C02CCB90 (DxgkGetScanLine.c)
 *     DxgkDispMgrSourceOperation @ 0x1C02F9A60 (DxgkDispMgrSourceOperation.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000469C (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall DXGADAPTER::IsVSyncAvailable(DXGADAPTER *this, unsigned int a2)
{
  char v4; // bl
  ADAPTER_DISPLAY *v5; // rcx

  v4 = 1;
  if ( !*((_QWORD *)this + 365) )
  {
    WdLogSingleEntry1(1LL, 10367LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10367LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 365);
  if ( !v5 || !ADAPTER_DISPLAY::IsVidPnSourceActive(v5, a2) )
    return 0;
  return v4;
}
