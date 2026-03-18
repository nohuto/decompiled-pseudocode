/*
 * XREFs of ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C03C9490
 * Callers:
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C02103B4 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C7C9C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1C03C8E3C (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C0354F30 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 */

void __fastcall DXGMONITOR::_DestroyTtmDevice(char **this)
{
  struct DXGGLOBAL *Global; // rax

  if ( this[56] )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::DestroyTtmDevice(*((CSERIALIZEDWORKQUEUE ****)Global + 118), this[56]);
    this[56] = 0LL;
  }
}
