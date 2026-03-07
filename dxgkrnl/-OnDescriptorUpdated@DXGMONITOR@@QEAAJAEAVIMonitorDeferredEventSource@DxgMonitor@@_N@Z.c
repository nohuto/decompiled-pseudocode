__int64 __fastcall DXGMONITOR::OnDescriptorUpdated(
        DxgMonitor::MonitorColorState **this,
        struct DxgMonitor::IMonitorDeferredEventSource *a2)
{
  const struct DxgMonitor::IMonitorDescriptor *v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  DxgMonitor::MonitorModes *v7; // rcx

  WdLogSingleEntry1(7LL, this);
  v4 = (const struct DxgMonitor::IMonitorDescriptor *)*((_QWORD *)this[27] + 20);
  v5 = DxgMonitor::MonitorModes::OnDescriptorUpdated(this[29], v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL, v5);
  }
  else
  {
    if ( v4 )
    {
      DxgMonitor::MonitorColorState::OnDescriptorUpdated(this[28], v4);
      DxgMonitor::MonitorUsageState::_EvaluateUsageState(this[30], v4);
      v6 = 0;
    }
    DXGMONITOR::_CheckPortraitFirstMonitorFromEDID((DXGMONITOR *)this);
    if ( (int)DxgMonitor::MonitorModes::RetrieveIntegratedPanelNativeOverride(this[29]) < 0 )
      (*(void (__fastcall **)(DxgMonitor::MonitorColorState *))(*(_QWORD *)this[24] + 40LL))(this[24]);
    v7 = this[29];
    if ( !*((_DWORD *)v7 + 42) && !*((_DWORD *)v7 + 30) )
      DxgMonitor::MonitorModes::CreateDefaultMonitorProfile(v7);
    (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a2)(
      a2,
      *((unsigned int *)this + 45),
      3LL);
  }
  return v6;
}
