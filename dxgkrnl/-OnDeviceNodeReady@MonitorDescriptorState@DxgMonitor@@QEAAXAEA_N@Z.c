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
