/*
 * XREFs of ?OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1C0167C74
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C0168AEC (MonitorSetLastWireformatAndColorspace.c)
 *     MonitorSetLastWireformat @ 0x1C03C072C (MonitorSetLastWireformat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C0167CA8 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C0169354 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnOutputColorspaceUpdated(DxgMonitor::MonitorColorState *this)
{
  DxgMonitor::MonitorColorState *v2; // rcx

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this) == 12 )
    DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1, 0);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v2);
}
