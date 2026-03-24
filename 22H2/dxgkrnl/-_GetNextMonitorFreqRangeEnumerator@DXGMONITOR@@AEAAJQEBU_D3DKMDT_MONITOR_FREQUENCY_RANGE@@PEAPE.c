/*
 * XREFs of ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C02FAAA0
 * Callers:
 *     ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C02F7750 (-AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_H.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v4; // rdi
  DXGMONITOR *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  DXGMONITOR **v8; // rbx
  DXGMONITOR *v9; // rax
  DXGMONITOR *v10; // rax
  DXGMONITOR *v11; // rax
  _OWORD *v12; // rdi
  char *v13; // rax
  __int64 v14; // rdx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v15; // rcx
  __int64 v16; // rax
  __int64 result; // rax
  __int128 v18; // xmm0
  DXGMONITOR ***v19; // rdx
  DXGMONITOR ***v20; // rax
  __int64 v21; // rax

  v4 = a2;
  v5 = this;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (DXGMONITOR **)((char *)v5 + 280);
  if ( !v4 )
    goto LABEL_27;
  v9 = *v8;
  if ( *v8 == (DXGMONITOR *)v8 )
    goto LABEL_27;
  this = (DXGMONITOR *)&v4[1];
  while ( v9 != this )
  {
    if ( v8 == (DXGMONITOR **)v9 )
      goto LABEL_27;
    v9 = *(DXGMONITOR **)v9;
  }
  a2 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const *)&v4[1].RangeLimits.MaxVSyncFreq.Denominator;
  this = (DXGMONITOR *)((char *)v5 + 264);
  if ( !a2 || (v10 = *(DXGMONITOR **)this, *(DXGMONITOR **)this == this) )
  {
LABEL_27:
    v21 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v21 + 24) = v4;
    *(_QWORD *)(v21 + 32) = v5;
    WdLogEvent5_WdError(v21);
    return 3223192368LL;
  }
  else
  {
    while ( v10 != (DXGMONITOR *)&a2[1] )
    {
      if ( this == v10 )
        goto LABEL_27;
      v10 = *(DXGMONITOR **)v10;
    }
    v11 = *(DXGMONITOR **)&a2[1].Origin;
    if ( v11 == this )
      goto LABEL_26;
    v12 = (_OWORD *)((char *)v11 - 48);
    if ( !v11 )
      v12 = 0LL;
    if ( !v12 )
    {
LABEL_26:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = v5;
      return 1075708748LL;
    }
    else
    {
      v13 = (char *)operator new[](0x48uLL, 0x4D677844u, PagedPool);
      v15 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v13;
      if ( v13 )
      {
        *(_OWORD *)v13 = *v12;
        *((_OWORD *)v13 + 1) = v12[1];
        v18 = v12[2];
        *((_QWORD *)v13 + 8) = v12;
        *((_OWORD *)v13 + 2) = v18;
        v19 = (DXGMONITOR ***)*((_QWORD *)v5 + 36);
        v20 = (DXGMONITOR ***)(v13 + 48);
        if ( *v19 != v8 )
          __fastfail(3u);
        *v20 = v8;
        v20[1] = (DXGMONITOR **)v19;
        *v19 = (DXGMONITOR **)v20;
        *((_QWORD *)v5 + 36) = v20;
        result = 0LL;
        *a3 = v15;
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(0LL, v14);
        WdLogEvent5_WdError(v16);
        return 3221225495LL;
      }
    }
  }
  return result;
}
