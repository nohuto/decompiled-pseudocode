__int64 __fastcall MonitorGetNextFrequencyRange(
        __int64 a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  __int64 v5; // rbx
  unsigned int NextMonitorFrequencyRange; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  MONITOR_MGR::AcquireMonitorShared(&v8, a1);
  v5 = v8;
  if ( v8 )
  {
    NextMonitorFrequencyRange = DxgMonitor::MonitorModes::_GetNextMonitorFrequencyRange(
                                  *(DxgMonitor::MonitorModes **)(v8 + 232),
                                  a2,
                                  a3);
  }
  else
  {
    NextMonitorFrequencyRange = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v5 )
  {
    ExReleaseResourceLite((PERESOURCE)(v5 + 24));
    KeLeaveCriticalRegion();
  }
  return NextMonitorFrequencyRange;
}
