__int64 __fastcall MonitorGetPreferredMonitorSourceMode(__int64 a1, struct _D3DKMDT_MONITOR_SOURCE_MODE *a2)
{
  __int64 v3; // rbx
  unsigned int PreferredMonitorSourceMode; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v6, a1);
  v3 = v6;
  if ( v6 )
  {
    PreferredMonitorSourceMode = DxgMonitor::MonitorModes::_GetPreferredMonitorSourceMode(
                                   *(DxgMonitor::MonitorModes **)(v6 + 232),
                                   a2);
  }
  else
  {
    PreferredMonitorSourceMode = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)(v3 + 24));
    KeLeaveCriticalRegion();
  }
  return PreferredMonitorSourceMode;
}
