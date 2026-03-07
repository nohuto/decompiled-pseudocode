__int64 __fastcall DmmGetPreferredMonitorSourceModeOnTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a3)
{
  __int64 v4; // rdi
  char *v5; // rbx
  VIDPN_MGR *v6; // rsi
  int ConnectedMonitorHandle; // eax
  unsigned int PreferredMonitorSourceMode; // ebx
  struct HDXGMONITOR__ *v9; // rdi
  struct HDXGMONITOR__ *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  v5 = (char *)a1 + 2920;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*(_QWORD *)v5 )
    WdLogSingleEntry0(1LL);
  v6 = *(VIDPN_MGR **)(*(_QWORD *)v5 + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, (__int64)v6);
  v11 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v6, v4, &v11);
  PreferredMonitorSourceMode = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    WdLogSingleEntry2(2LL, v4, ConnectedMonitorHandle);
  }
  else
  {
    v9 = v11;
    if ( !v11 )
      WdLogSingleEntry0(1LL);
    PreferredMonitorSourceMode = MonitorGetPreferredMonitorSourceMode(v9, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v6, v9);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  return PreferredMonitorSourceMode;
}
