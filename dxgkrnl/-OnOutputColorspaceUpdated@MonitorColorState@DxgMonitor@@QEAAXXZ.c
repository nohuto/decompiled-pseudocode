void __fastcall DxgMonitor::MonitorColorState::OnOutputColorspaceUpdated(DxgMonitor::MonitorColorState *this)
{
  DxgMonitor::MonitorColorState *v2; // rcx

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this) == 12 )
    DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1, 0);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v2);
}
