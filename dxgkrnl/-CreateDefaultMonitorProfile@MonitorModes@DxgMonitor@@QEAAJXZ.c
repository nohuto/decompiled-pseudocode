/*
 * XREFs of ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C03C7F38
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C01FC7C4 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001EF9C (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor@@AEAAJXZ @ 0x1C03C8688 (-_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::CreateDefaultMonitorProfile(struct _ERESOURCE *this)
{
  unsigned int DefaultMonitorProfileForWDDMv1_0; // ebx
  PERESOURCE Resource; // [rsp+38h] [rbp+10h] BYREF

  RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
    &Resource,
    this,
    1);
  DefaultMonitorProfileForWDDMv1_0 = DxgMonitor::MonitorModes::_CreateDefaultMonitorProfileForWDDMv1_0((DxgMonitor::MonitorModes *)this);
  if ( Resource )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  return DefaultMonitorProfileForWDDMv1_0;
}
