__int64 __fastcall MonitorReleaseMonitorPendingEvent(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(WdLogNewEntry5_WdTrace(P, a2, a3, a4) + 24) = P;
  if ( !P )
    return 3221225485LL;
  MONITOR_MGR::_ReleaseMonitorPendingEvent(P);
  return 0LL;
}
