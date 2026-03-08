/*
 * XREFs of MonitorUnregisterMonitorEventCallback @ 0x1C03C0CF8
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0067318 (--1VIDPN_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x1C03C406C (-_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z.c)
 */

int __fastcall MonitorUnregisterMonitorEventCallback(__int64 a1, struct HDXGMONITOREVENT__ *a2)
{
  if ( !a1 || !a2 )
    return -1073741811;
  if ( !*(_QWORD *)(a1 + 112) )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(a1 + 16));
    return -1073741811;
  }
  return MONITOR_MGR::_RemoveMonitorEventHandler(*(MONITOR_MGR **)(a1 + 112), a2);
}
