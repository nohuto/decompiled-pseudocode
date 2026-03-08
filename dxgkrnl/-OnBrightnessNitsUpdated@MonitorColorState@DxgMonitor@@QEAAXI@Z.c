/*
 * XREFs of ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXI@Z @ 0x1C03C960C
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01690AC (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C0167CA8 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C0169354 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01F89F4 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

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
