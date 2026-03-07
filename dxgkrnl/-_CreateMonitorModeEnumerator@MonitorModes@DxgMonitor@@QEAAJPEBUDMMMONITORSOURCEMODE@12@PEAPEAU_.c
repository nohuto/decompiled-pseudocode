__int64 __fastcall DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  DxgMonitor::MonitorModes **v8; // r8
  DxgMonitor::MonitorModes *v9; // rax
  __int64 result; // rax
  int v11; // ecx

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v6 = operator new[](0x78uLL, 0x4D677844u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    if ( a2 )
    {
      *(_OWORD *)v6 = *(_OWORD *)a2;
      *(_OWORD *)(v6 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v6 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v6 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v6 + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(v6 + 80) = *((_OWORD *)a2 + 5);
    }
    else
    {
      v11 = *((_DWORD *)this + 31);
      *((_DWORD *)this + 31) = v11 + 1;
      *(_DWORD *)(v6 + 88) = 0;
      *(_DWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 12) = -1LL;
      *(_QWORD *)(v6 + 20) = -1LL;
      *(_QWORD *)(v6 + 28) = -1LL;
      *(_QWORD *)(v6 + 48) = 0xFFFFFFFFLL;
      *(_DWORD *)v6 = v11;
      *(_DWORD *)(v6 + 56) = 8;
    }
    *(_QWORD *)(v6 + 112) = a2;
    v8 = (DxgMonitor::MonitorModes **)*((_QWORD *)this + 20);
    v9 = (DxgMonitor::MonitorModes *)(v6 + 96);
    if ( *v8 != (DxgMonitor::MonitorModes *)((char *)this + 152) )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)this + 152;
    *(_QWORD *)(v7 + 104) = v8;
    *v8 = v9;
    *((_QWORD *)this + 20) = v9;
    result = 0LL;
    *a3 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v7;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
  return result;
}
