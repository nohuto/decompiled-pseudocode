__int64 __fastcall MonitorGetCCDMonitorID(DXGMONITOR **this, unsigned int a2, unsigned __int16 *a3)
{
  DXGMONITOR *v5; // rbx
  unsigned int CCDMonitorID; // edi

  v5 = (DXGMONITOR *)this;
  if ( !this || !a2 || !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 78) != 1 && this[40] )
    v5 = this[40];
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v5 + 24), 1u);
  CCDMonitorID = DXGMONITOR::GetCCDMonitorID(v5, 1, a2, a3);
  if ( v5 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 24));
    KeLeaveCriticalRegion();
  }
  return CCDMonitorID;
}
