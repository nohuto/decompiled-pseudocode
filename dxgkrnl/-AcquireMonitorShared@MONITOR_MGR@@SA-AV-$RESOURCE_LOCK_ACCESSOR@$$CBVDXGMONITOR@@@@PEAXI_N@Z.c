struct DXGMONITOR **__fastcall MONITOR_MGR::AcquireMonitorShared(struct DXGMONITOR **a1, __int64 a2, unsigned int a3)
{
  MONITOR_MGR *v6; // rcx
  struct DXGMONITOR *v7; // rdi
  struct DXGMONITOR *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_QWORD *)(a2 + 2920) )
    WdLogSingleEntry0(1LL);
  v6 = *(MONITOR_MGR **)(*(_QWORD *)(a2 + 2920) + 112LL);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a2);
    goto LABEL_8;
  }
  v9 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v6, a3, 1u, &v9) < 0 )
  {
LABEL_8:
    *a1 = 0LL;
    return a1;
  }
  v7 = v9;
  *a1 = v9;
  if ( v7 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 24), 1u);
  }
  return a1;
}
