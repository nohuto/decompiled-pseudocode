/*
 * XREFs of ?_ReleaseMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FE510
 * Callers:
 *     ?ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FE410 (-ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODES.c)
 *     ?ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C03C26A0 (-ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_ReleaseMonitorModeEnumerator(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  DxgMonitor::MonitorModes *v4; // rdx
  DxgMonitor::MonitorModes *v5; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v6; // rcx
  __int64 v7; // rdx
  struct _D3DKMDT_MONITOR_SOURCE_MODE **v8; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    goto LABEL_10;
  }
  v4 = (DxgMonitor::MonitorModes *)((char *)this + 152);
  v5 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 19);
  if ( v5 == (DxgMonitor::MonitorModes *)((char *)this + 152) )
  {
LABEL_10:
    WdLogSingleEntry2(2LL, a2, this);
    return 3223192368LL;
  }
  v6 = a2 + 1;
  while ( v5 != (DxgMonitor::MonitorModes *)v6 )
  {
    if ( v4 == v5 )
      goto LABEL_10;
    v5 = *(DxgMonitor::MonitorModes **)v5;
  }
  v7 = *(_QWORD *)&v6->Id;
  if ( *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)(*(_QWORD *)&v6->Id + 8LL) != v6
    || (v8 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE ***)&a2[1].VideoSignalInfo.VideoStandard, *v8 != v6) )
  {
    __fastfail(3u);
  }
  *v8 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  operator delete(a2);
  return 0LL;
}
