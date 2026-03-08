/*
 * XREFs of ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0225178
 * Callers:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAA30 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1C03C2954 (--1MONITOR_MGR@@UEAA@XZ.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C37E4 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_GDXGMONITOR@@UEAAPEAXI@Z @ 0x1C002A280 (--_GDXGMONITOR@@UEAAPEAXI@Z.c)
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C006B2DC (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAA30 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C03C3BE8 (-_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x1C03C7160 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyPhysicalMonitor(
        MONITOR_MGR *this,
        PVOID P,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct DXGMONITOR *v6; // r8

  if ( !P )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)P + 78) != 1 )
    WdLogSingleEntry0(1LL);
  if ( *((_BYTE *)P + 368) )
  {
    v6 = (struct DXGMONITOR *)*((_QWORD *)P + 47);
    if ( v6 )
      MONITOR_MGR::_HandleCreateMonitorStep2(this, *((_DWORD *)P + 45), v6, 0LL, a3);
    MONITOR_MGR::_LeaveMonitorPendingState(this);
  }
  DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(*((DxgMonitor::MonitorPnpState **)P + 25));
  if ( MONITOR_MGR::_IsMonitorInMonitorList(this, (struct DXGMONITOR *)P) )
    WdLogSingleEntry0(1LL);
  DXGMONITOR::`scalar deleting destructor'((DXGMONITOR *)P, 1);
  return 0LL;
}
