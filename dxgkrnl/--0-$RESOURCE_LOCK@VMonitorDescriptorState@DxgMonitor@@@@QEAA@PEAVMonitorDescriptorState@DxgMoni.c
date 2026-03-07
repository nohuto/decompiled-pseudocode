struct _ERESOURCE **__fastcall RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
        struct _ERESOURCE **a1,
        struct _ERESOURCE *a2,
        char a3)
{
  *a1 = a2;
  if ( a2 )
  {
    if ( a3 == 1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(a2, 1u);
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(a2, 1u);
    }
  }
  return a1;
}
