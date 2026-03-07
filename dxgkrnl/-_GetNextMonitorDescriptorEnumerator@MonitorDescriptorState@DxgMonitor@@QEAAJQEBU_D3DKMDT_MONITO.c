__int64 __fastcall DxgMonitor::MonitorDescriptorState::_GetNextMonitorDescriptorEnumerator(
        const struct _D3DKMDT_MONITOR_DESCRIPTOR ****this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3,
        __int64 a4)
{
  const struct _D3DKMDT_MONITOR_DESCRIPTOR **v7; // rbx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v8; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r15
  D3DKMDT_MONITOR_DESCRIPTOR_ID v12; // ebp
  __int64 v14; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v15; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v16; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+30h] [rbp-28h]

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v7 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)(this + 21);
  if ( !a2 || (v8 = *v7, *v7 == (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v7) )
  {
LABEL_22:
    WdLogSingleEntry2(2LL, a2, this);
    return 3223192368LL;
  }
  else
  {
    while ( v8 != &a2[1] )
    {
      if ( v7 == (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)v8 )
        goto LABEL_22;
      v8 = *(const struct _D3DKMDT_MONITOR_DESCRIPTOR **)&v8->Id;
    }
    v9 = this[16];
    if ( !v9
      || (v10 = ((__int64 (__fastcall *)(const struct _D3DKMDT_MONITOR_DESCRIPTOR ***))(*v9)[1])(v9), (v11 = v10) == 0)
      || (v12 = a2->Id + 1, (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) <= v12)
      || (v18 = 0LL,
          v19 = 0LL,
          !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v11 + 32LL))(v11, v12, &v18)) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, a2, a3, a4) + 24) = this;
      *a3 = 0LL;
      return 0LL;
    }
    v14 = operator new[](0x30uLL, 0x4D677844u, 256LL);
    v15 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v14;
    if ( v14 )
    {
      *(_DWORD *)v14 = a2->Id + 1;
      *(_DWORD *)(v14 + 4) = DWORD1(v18);
      *(_QWORD *)(v14 + 8) = *((_QWORD *)&v18 + 1);
      *(_QWORD *)(v14 + 16) = v19;
      *(_DWORD *)(v14 + 24) = DWORD2(v19);
      v16 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR ***)(v14 + 32);
      v17 = this[22];
      if ( *v17 != v7 )
        __fastfail(3u);
      *v16 = v7;
      v15[1].DataSize = (SIZE_T)v17;
      *v17 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)v16;
      this[22] = v16;
      *a3 = v15;
      return 0LL;
    }
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
}
