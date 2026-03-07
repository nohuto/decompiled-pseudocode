__int64 __fastcall DxgMonitor::MonitorModes::_ReleaseAdditionalTiming(
        DxgMonitor::MonitorModes *this,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a2)
{
  int v3; // eax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v3 = *((_DWORD *)this + 56);
  if ( v3 )
    *((_DWORD *)this + 56) = v3 - 1;
  else
    WdLogSingleEntry0(2LL);
  return 0LL;
}
