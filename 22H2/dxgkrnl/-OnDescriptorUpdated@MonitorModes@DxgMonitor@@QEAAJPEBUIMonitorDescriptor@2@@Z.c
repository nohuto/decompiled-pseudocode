/*
 * XREFs of ?OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z @ 0x1C020C8AC
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C020B9D4 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001F1FC (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1C020EA18 (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1C020EE5C (-_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::OnDescriptorUpdated(
        struct _ERESOURCE *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  unsigned int v4; // ebx
  PERESOURCE Resource; // [rsp+38h] [rbp+10h] BYREF

  RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
    &Resource,
    this,
    1);
  DxgMonitor::MonitorModes::_CleanupMonitorSourceModeAndFreqRanges((DxgMonitor::MonitorModes *)this);
  if ( a2 )
    v4 = DxgMonitor::MonitorModes::ParseDescriptorModes((DxgMonitor::MonitorModes *)this, a2);
  else
    v4 = 0;
  if ( Resource )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  return v4;
}
