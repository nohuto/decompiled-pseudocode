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
