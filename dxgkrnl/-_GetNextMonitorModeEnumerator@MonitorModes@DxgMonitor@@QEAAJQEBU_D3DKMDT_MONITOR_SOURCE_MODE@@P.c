__int64 __fastcall DxgMonitor::MonitorModes::_GetNextMonitorModeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v7; // rcx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v8; // rax
  __int64 v9; // rdx
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE **v10; // rcx
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v11; // rax
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v12; // rdx
  __int64 v13; // rax
  __int64 result; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v15; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v7 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)((char *)this + 152);
  if ( !a2 )
    goto LABEL_24;
  v8 = *v7;
  if ( *v7 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v7 )
    goto LABEL_24;
  while ( v8 != &a2[1] )
  {
    if ( v7 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v8 )
      goto LABEL_24;
    v8 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v8->Id;
  }
  v9 = *(_QWORD *)&a2[1].VideoSignalInfo.TotalSize.cy;
  v10 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE **)((char *)this + 128);
  if ( !v9 || (v11 = *v10, *v10 == (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)v10) )
  {
LABEL_24:
    WdLogSingleEntry2(2LL, a2, this);
    return 3223192368LL;
  }
  else
  {
    v12 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)(v9 + 96);
    while ( v11 != v12 )
    {
      if ( v10 == (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE **)v11 )
        goto LABEL_24;
      v11 = *(const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE **)v11;
    }
    v13 = *(_QWORD *)v12;
    if ( *(const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE ***)v12 == v10 )
      goto LABEL_21;
    v12 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)(v13 - 96);
    if ( !v13 )
      v12 = 0LL;
    if ( !v12 )
    {
LABEL_21:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v12, a3, a4) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      v15 = 0LL;
      result = DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(this, v12, &v15);
      if ( (int)result >= 0 )
        *a3 = v15;
    }
  }
  return result;
}
