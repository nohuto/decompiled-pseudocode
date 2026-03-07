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
