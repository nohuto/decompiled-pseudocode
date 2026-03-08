/*
 * XREFs of ?_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C03C8540
 * Callers:
 *     ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C03C1C30 (-AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 *     ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C03C1DA0 (-AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSO.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FE684 (-_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_AcquirePreferredModeInfo(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3,
        __int64 a4)
{
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v5; // rdx
  int v7; // edi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v8; // rbx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    v9 = 0LL;
    v7 = DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(this, v5, &v9);
    if ( v7 >= 0 )
    {
      v8 = v9;
      if ( !v9 )
        WdLogSingleEntry0(1LL);
      *a2 = v8;
    }
    return (unsigned int)v7;
  }
  else
  {
    WdLogNewEntry5_WdTrace(this, 0LL, a3, a4);
    return 1075708702LL;
  }
}
