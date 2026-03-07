unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::NeedToBeActive(DMMVIDEOPRESENTTARGET *this)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rdx
  char IsMonitorDisabled; // di
  DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) != 1 )
    return 0;
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) )
    return 0;
  if ( *((_BYTE *)this + 415) )
  {
    v3 = *((_QWORD *)this + 14);
    if ( v3 )
    {
      MONITOR_MGR::AcquireMonitorShared(&v7, v3);
      if ( v7 )
      {
        IsMonitorDisabled = DXGMONITOR::_IsMonitorDisabled(v7);
        if ( v4 )
        {
          ExReleaseResourceLite((PERESOURCE)(v4 + 24));
          KeLeaveCriticalRegion();
        }
        if ( IsMonitorDisabled )
          return v2;
      }
      else
      {
        WdLogSingleEntry1(2LL, -1073741275LL);
        RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v7);
        WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), -1073741275LL);
      }
    }
    return 1;
  }
  return DMMVIDEOPRESENTTARGET::IsTargetForceable(this);
}
