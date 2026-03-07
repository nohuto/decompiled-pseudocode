void __fastcall MONITOR_MGR::_MonitorTelemetry(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  struct DXGFASTMUTEX *v4; // rbp
  char *v5; // rsi
  MONITOR_MGR *v6; // rax
  char *v7; // rbx
  DXGFASTMUTEX **i; // rcx
  __int64 v9; // rdi
  char *v10; // rax
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF
  char v12; // [rsp+90h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 4867LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"_GetAdapter()->IsCoreResourceSharedOwner()",
      4867LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (MONITOR_MGR *)((char *)this + 80);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v11, (MONITOR_MGR *)((char *)this + 80));
  v5 = (char *)this + 40;
  v6 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v6 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = (char *)v6 - 152;
    if ( !v6 )
      v7 = 0LL;
  }
  for ( i = (DXGFASTMUTEX **)&v11; ; i = (DXGFASTMUTEX **)&v12 )
  {
    MUTEX_LOCK::~MUTEX_LOCK(i);
    if ( !v7 )
      break;
    v9 = (__int64)v7;
    if ( *((_DWORD *)v7 + 78) != 1 && *((_QWORD *)v7 + 40) )
      v9 = *((_QWORD *)v7 + 40);
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v11, v9, 0);
    DXGMONITOR::TriggerMonitorTelemetry(v9, 2, (__int64)a2);
    if ( v11 )
    {
      ExReleaseResourceLite((PERESOURCE)(v11 + 24));
      KeLeaveCriticalRegion();
    }
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v12, v4);
    v10 = (char *)*((_QWORD *)v7 + 19);
    if ( v10 == v5 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = v10 - 152;
      if ( !v10 )
        v7 = 0LL;
    }
  }
}
