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
