__int64 __fastcall MonitorEnableBoostRefreshRateEnabledByDefault(__int64 a1, unsigned int a2, bool a3)
{
  int refreshed; // edi
  DXGMONITOR *v5; // rbx
  DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  refreshed = 0;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v7, a1, a2, 1u);
  v5 = v7;
  if ( v7 )
  {
    if ( *((_DWORD *)v7 + 78) != 1 )
      WdLogSingleEntry0(1LL);
    if ( (*((_DWORD *)v5 + 88) != 0) != a3 )
    {
      refreshed = DXGMONITOR::_EnableBoostRefreshRateEnabled(v5, a3);
      if ( refreshed >= 0 )
        refreshed = -1073741802;
    }
  }
  else
  {
    refreshed = -1073741632;
    WdLogSingleEntry1(2LL, -1073741632LL);
  }
  if ( v5 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 24));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)refreshed;
}
