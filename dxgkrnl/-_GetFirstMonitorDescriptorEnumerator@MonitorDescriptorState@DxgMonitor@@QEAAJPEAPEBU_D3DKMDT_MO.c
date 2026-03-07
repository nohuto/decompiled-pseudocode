__int64 __fastcall DxgMonitor::MonitorDescriptorState::_GetFirstMonitorDescriptorEnumerator(
        DxgMonitor::MonitorDescriptorState *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v12; // rdx
  char *v13; // rdi
  char *v14; // rax
  char **v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h]

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = *((_QWORD *)this + 20);
  if ( !v4 || !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) )
  {
    WdLogSingleEntry1(7LL, this);
    goto LABEL_14;
  }
  v5 = *((_QWORD *)this + 20);
  v17 = 0LL;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v6 + 32LL))(v6, 0LL, &v17) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = this;
LABEL_14:
    *a2 = 0LL;
    return 0LL;
  }
  v11 = operator new[](0x30uLL, 0x4D677844u, 256LL);
  v12 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v11;
  if ( !v11 )
  {
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
  v13 = (char *)this + 168;
  *(_OWORD *)v11 = 0LL;
  *(_OWORD *)(v11 + 16) = 0LL;
  *(_OWORD *)(v11 + 32) = 0LL;
  *(_OWORD *)v11 = v17;
  *(_QWORD *)(v11 + 16) = v18;
  *(_DWORD *)(v11 + 24) = DWORD2(v18);
  v14 = (char *)(v11 + 32);
  v15 = (char **)*((_QWORD *)v13 + 1);
  if ( *v15 != v13 )
    __fastfail(3u);
  *(_QWORD *)v14 = v13;
  v12[1].DataSize = (SIZE_T)v15;
  *v15 = v14;
  *((_QWORD *)v13 + 1) = v14;
  *a2 = v12;
  return 0LL;
}
