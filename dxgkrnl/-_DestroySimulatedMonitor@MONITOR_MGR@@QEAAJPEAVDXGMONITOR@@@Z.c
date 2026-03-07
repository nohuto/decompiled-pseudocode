__int64 __fastcall MONITOR_MGR::_DestroySimulatedMonitor(MONITOR_MGR *this, _DWORD *P)
{
  if ( !P )
    WdLogSingleEntry0(1LL);
  if ( P[78] == 1 )
    WdLogSingleEntry0(1LL);
  if ( *((_BYTE *)P + 368) )
    WdLogSingleEntry0(1LL);
  if ( *((_QWORD *)P + 40) )
    WdLogSingleEntry0(1LL);
  if ( MONITOR_MGR::_IsMonitorInMonitorList(this, (struct DXGMONITOR *)P) )
    WdLogSingleEntry0(1LL);
  DXGMONITOR::`scalar deleting destructor'((DXGMONITOR *)P, 1);
  return 0LL;
}
