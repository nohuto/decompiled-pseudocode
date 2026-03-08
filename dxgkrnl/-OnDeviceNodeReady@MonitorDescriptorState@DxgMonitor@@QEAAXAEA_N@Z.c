/*
 * XREFs of ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x1C01FDB34
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC228 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXG.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC328 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001EF9C (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ @ 0x1C01FDBD0 (-_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ.c)
 *     ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x1C01FFCB8 (-AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::MonitorDescriptorState::OnDeviceNodeReady(struct _ERESOURCE *this, bool *a2)
{
  __int64 v4; // rcx
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
    &Resource,
    this,
    1);
  v4 = *(_QWORD *)&this[1].ActiveCount;
  if ( v4
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4)
    && (*(int (__fastcall **)(_QWORD, POWNER_ENTRY))(**(_QWORD **)&this[1].ActiveCount + 32LL))(
         *(_QWORD *)&this[1].ActiveCount,
         this[1].OwnerTable) >= 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&this[1].ActiveCount + 56LL))(*(_QWORD *)&this[1].ActiveCount) )
  {
    *a2 = 1;
    DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache((DxgMonitor::MonitorDescriptorState *)this);
  }
  DxgMonitor::MonitorDescriptorState::_UpdateMonitorEDIDRegistryForGDI((DxgMonitor::MonitorDescriptorState *)this);
  if ( Resource )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
}
