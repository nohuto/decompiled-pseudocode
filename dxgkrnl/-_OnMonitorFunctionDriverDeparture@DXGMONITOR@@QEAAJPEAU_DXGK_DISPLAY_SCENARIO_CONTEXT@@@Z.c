__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverDeparture(
        DxgMonitor::MonitorPnpState **this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( ((_BYTE)this[22] & 1) == 0 )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)this[25] + 1) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 78) != 1 )
    WdLogSingleEntry0(1LL);
  return DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(this[25]);
}
