/*
 * XREFs of ?_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FF594
 * Callers:
 *     ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FD1B0 (-AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCE.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FE684 (-_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_AcquireFirstModeInfo(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  int v7; // edi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v8; // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v13; // rdx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) )
  {
    v10 = (_QWORD *)((char *)this + 128);
    v14 = 0LL;
    v11 = (_QWORD *)*((_QWORD *)this + 16);
    if ( v11 == v10 )
      goto LABEL_14;
    v6 = v11 - 12;
    if ( !v11 )
      v6 = 0LL;
    if ( !v6 )
LABEL_14:
      WdLogSingleEntry0(1LL);
    v12 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)(v12 - 12);
      if ( !v12 )
        v13 = 0LL;
    }
    v7 = DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(this, v13, &v14);
    if ( v7 >= 0 )
    {
      v8 = v14;
      if ( !v14 )
        WdLogSingleEntry0(1LL);
      *a2 = v8;
    }
    return (unsigned int)v7;
  }
  else
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 1075708747LL;
  }
}
