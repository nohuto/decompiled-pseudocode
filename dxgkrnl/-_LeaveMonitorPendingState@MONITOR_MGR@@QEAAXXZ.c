/*
 * XREFs of ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C006B2DC
 * Callers:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAA30 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0225178 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall MONITOR_MGR::_LeaveMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 3) + 16LL)) )
    WdLogSingleEntry0(1LL);
  v2 = *((_QWORD *)this + 83);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 20))-- == 1 )
      KeSetEvent((PRKEVENT)(*((_QWORD *)this + 83) + 24LL), 0, 0);
  }
}
