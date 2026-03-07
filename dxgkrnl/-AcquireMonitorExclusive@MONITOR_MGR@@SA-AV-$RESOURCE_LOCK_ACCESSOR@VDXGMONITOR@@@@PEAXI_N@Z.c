_QWORD *__fastcall MONITOR_MGR::AcquireMonitorExclusive(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  MONITOR_MGR *v8; // rcx
  __int64 v9; // r8
  struct DXGMONITOR *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_QWORD *)(a2 + 2920) )
    WdLogSingleEntry0(1LL);
  v8 = *(MONITOR_MGR **)(*(_QWORD *)(a2 + 2920) + 112LL);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a2);
    goto LABEL_7;
  }
  v11 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v8, a3, a4, &v11) < 0 )
  {
LABEL_7:
    *a1 = 0LL;
    return a1;
  }
  LOBYTE(v9) = 1;
  RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(a1, v11, v9);
  return a1;
}
