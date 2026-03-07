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
