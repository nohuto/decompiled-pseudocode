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
