__int64 __fastcall DxgMonitor::MonitorModes::_GetFirstMonitorFreqRangeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2)
{
  __int64 result; // rax
  DxgMonitor::MonitorModes *v5; // rcx
  _OWORD *v6; // rbx
  __int64 v7; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v8; // rcx
  char *v9; // rdi
  __int128 v10; // xmm0
  char **v11; // rdx
  char *v12; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !*((_DWORD *)this + 42) )
  {
    WdLogSingleEntry1(7LL, this);
    return 1075708747LL;
  }
  v5 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 22);
  if ( v5 == (DxgMonitor::MonitorModes *)((char *)this + 176) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = (_OWORD *)((char *)v5 - 48);
    if ( !v5 )
      v6 = 0LL;
    if ( v6 )
      goto LABEL_11;
  }
  WdLogSingleEntry0(1LL);
LABEL_11:
  v7 = operator new[](0x48uLL, 0x4D677844u, 256LL);
  v8 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v7;
  if ( v7 )
  {
    v9 = (char *)this + 192;
    *(_OWORD *)v7 = *v6;
    *(_OWORD *)(v7 + 16) = v6[1];
    v10 = v6[2];
    *(_QWORD *)(v7 + 64) = v6;
    *(_OWORD *)(v7 + 32) = v10;
    v11 = (char **)*((_QWORD *)v9 + 1);
    v12 = (char *)(v7 + 48);
    if ( *v11 != v9 )
      __fastfail(3u);
    *(_QWORD *)v12 = v9;
    *((_QWORD *)v12 + 1) = v11;
    *v11 = v12;
    *((_QWORD *)v9 + 1) = v12;
    result = 0LL;
    *a2 = v8;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
  return result;
}
