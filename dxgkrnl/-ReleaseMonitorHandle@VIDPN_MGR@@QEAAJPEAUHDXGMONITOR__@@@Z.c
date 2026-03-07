__int64 __fastcall VIDPN_MGR::ReleaseMonitorHandle(VIDPN_MGR *this, struct HDXGMONITOR__ *a2)
{
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  return MonitorReleaseMonitorHandle(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), a2, 1313891414LL);
}
