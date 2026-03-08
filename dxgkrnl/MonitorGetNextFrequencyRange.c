/*
 * XREFs of MonitorGetNextFrequencyRange @ 0x1C016F178
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C016EB6C (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?_GetNextMonitorFrequencyRange@MonitorModes@DxgMonitor@@QEBAJPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C016F20C (-_GetNextMonitorFrequencyRange@MonitorModes@DxgMonitor@@QEBAJPEBU_D3DKMDT_MONITOR_FREQUENCY_RANG.c)
 */

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
