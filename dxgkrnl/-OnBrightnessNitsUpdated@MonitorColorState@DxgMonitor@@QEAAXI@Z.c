void __fastcall DxgMonitor::MonitorColorState::OnBrightnessNitsUpdated(DxgMonitor::MonitorColorState *this, int a2)
{
  DxgMonitor::MonitorColorState *v3; // rcx

  *((_DWORD *)this + 97) = a2;
  if ( (int)DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this) >= 0
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this) == 12 )
  {
    DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1, 0);
    DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v3);
  }
}
