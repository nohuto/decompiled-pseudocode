__int64 __fastcall MONITOR_MGR::_GetMonitorFromHandle(struct HDXGMONITOR__ *a1, struct DXGMONITOR **a2)
{
  if ( !a1 )
    return 3221225480LL;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *a2 = a1;
  return 0LL;
}
