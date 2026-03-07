__int64 __fastcall MonitorNotifyDXGIGammaRampChange(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rdi
  MONITOR_MGR *v4; // rsi
  int MonitorInstance; // ebx
  struct DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)a1 + 365) )
    WdLogSingleEntry0(1LL);
  v4 = *(MONITOR_MGR **)(*((_QWORD *)a1 + 365) + 112LL);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v7 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v4, v2, 1u, &v7);
  if ( MonitorInstance < 0 )
    WdLogSingleEntry2(7LL, v2, v4);
  else
    DxgMonitor::MonitorGammaState::OnDxgiGammaRampChange(*((DxgMonitor::MonitorGammaState **)v7 + 31));
  return (unsigned int)MonitorInstance;
}
