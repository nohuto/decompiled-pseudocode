__int64 __fastcall DXGMONITOR::_OnMonitorDeviceNodeReady(
        DXGMONITOR *this,
        struct DxgMonitor::IMonitorDeferredEventSource *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  DxgMonitor::MonitorPnpState *v7; // rcx
  _BYTE *v8; // rdi
  PDEVICE_OBJECT *v9; // rsi
  DxgMonitor::MonitorDescriptorState *v10; // rcx
  bool v11; // r8
  bool v13; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !*(_BYTE *)(*((_QWORD *)this + 25) + 16LL) )
  {
    if ( (*((_BYTE *)this + 176) & 1) == 0 )
      WdLogSingleEntry0(1LL);
    if ( !*(_QWORD *)(*((_QWORD *)this + 25) + 8LL) )
      WdLogSingleEntry0(1LL);
    if ( *((_DWORD *)this + 78) != 1 )
      WdLogSingleEntry0(1LL);
    v7 = (DxgMonitor::MonitorPnpState *)*((_QWORD *)this + 25);
    *((_BYTE *)v7 + 16) = 1;
    DxgMonitor::MonitorPnpState::UpdatePnPDeviceProperties(v7);
    v8 = (_BYTE *)*((_QWORD *)this + 33);
    v9 = (PDEVICE_OBJECT *)*((_QWORD *)this + 25);
    if ( v8[8] )
    {
      if ( DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(
             v9,
             &DEVPKEY_Monitor_Dpcd_DP_IN_Adapter_Number,
             7u,
             4u,
             v8 + 12) < 0 )
        WdLogSingleEntry0(1LL);
      if ( DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(v9, &DEVPKEY_Monitor_Dpcd_USB4_Driver_ID, 7u, 4u, v8 + 16) < 0 )
        WdLogSingleEntry0(1LL);
      if ( DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(
             v9,
             &DEVPKEY_Monitor_Dpcd_USB4_ROUTER_TOPOLOGY_ID,
             0x1003u,
             5u,
             v8 + 20) < 0 )
        WdLogSingleEntry0(1LL);
    }
    v10 = (DxgMonitor::MonitorDescriptorState *)*((_QWORD *)this + 27);
    v13 = 0;
    DxgMonitor::MonitorDescriptorState::OnDeviceNodeReady(v10, &v13);
    if ( v13 )
      DXGMONITOR::OnDescriptorUpdated(this, a2, v11);
    DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(*((DxgMonitor::MonitorModes **)this + 29));
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
    if ( *((_BYTE *)this + 368) )
    {
      if ( !*((_QWORD *)this + 21) )
        WdLogSingleEntry0(1LL);
      if ( (int)MONITOR_MGR::_HandleCreateMonitorStep2(
                  *((MONITOR_MGR **)this + 21),
                  *((_DWORD *)this + 45),
                  *((struct DXGMONITOR **)this + 47),
                  this,
                  a3) < 0 )
        WdLogSingleEntry0(1LL);
      if ( *((_BYTE *)this + 368) )
        WdLogSingleEntry0(1LL);
    }
  }
  return 0LL;
}
