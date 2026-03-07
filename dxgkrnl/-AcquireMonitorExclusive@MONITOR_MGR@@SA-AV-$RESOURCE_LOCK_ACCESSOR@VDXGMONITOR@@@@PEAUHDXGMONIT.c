_QWORD *__fastcall MONITOR_MGR::AcquireMonitorExclusive(_QWORD *a1, struct HDXGMONITOR__ *a2)
{
  __int64 v3; // r8
  struct DXGMONITOR *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorFromHandle(a2, &v5) < 0 )
  {
    *a1 = 0LL;
  }
  else
  {
    LOBYTE(v3) = 1;
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(a1, v5, v3);
  }
  return a1;
}
