__int64 __fastcall MonitorIsBoostRefreshRateEnabledByDefault(__int64 a1, unsigned int a2, bool *a3)
{
  struct DXGMONITOR *v4; // rbx
  unsigned int v5; // edi
  struct DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v7, a1, a2);
  v4 = v7;
  if ( v7 )
  {
    if ( *((_DWORD *)v7 + 78) != 1 )
      WdLogSingleEntry0(1LL);
    *a3 = *((_DWORD *)v4 + 88) != 0;
    v5 = 0;
  }
  else
  {
    v5 = -1073741632;
    WdLogSingleEntry1(2LL, -1073741632LL);
  }
  if ( v4 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v4 + 24));
    KeLeaveCriticalRegion();
  }
  return v5;
}
