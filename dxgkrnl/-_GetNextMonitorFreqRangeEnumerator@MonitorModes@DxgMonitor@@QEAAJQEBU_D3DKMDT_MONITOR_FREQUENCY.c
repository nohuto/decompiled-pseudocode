/*
 * XREFs of ?_GetNextMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C03C8A1C
 * Callers:
 *     ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C03C1A70 (-AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_H.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetNextMonitorFreqRangeEnumerator(
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ****this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3,
        __int64 a4)
{
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **v7; // rbx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v8; // rax
  __int64 v9; // rdx
  _QWORD **v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD **v13; // rax
  _OWORD *v14; // rdi
  __int64 v15; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v16; // rcx
  __int64 result; // rax
  __int128 v18; // xmm0
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***v19; // rdx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***v20; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v7 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)(this + 24);
  if ( !a2 )
    goto LABEL_27;
  v8 = *v7;
  if ( *v7 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v7 )
    goto LABEL_27;
  while ( v8 != &a2[1] )
  {
    if ( v7 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v8 )
      goto LABEL_27;
    v8 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)&v8->Origin;
  }
  v9 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  v10 = this + 22;
  if ( !v9 || (v11 = *v10, *v10 == v10) )
  {
LABEL_27:
    WdLogSingleEntry2(2LL, a2, this);
    return 3223192368LL;
  }
  else
  {
    v12 = (_QWORD *)(v9 + 48);
    while ( v11 != v12 )
    {
      if ( v10 == v11 )
        goto LABEL_27;
      v11 = (_QWORD *)*v11;
    }
    v13 = (_QWORD **)*v12;
    if ( (_QWORD **)*v12 == v10 )
      goto LABEL_26;
    v14 = v13 - 6;
    if ( !v13 )
      v14 = 0LL;
    if ( !v14 )
    {
LABEL_26:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v12, a3, a4) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      v15 = operator new[](0x48uLL, 0x4D677844u, 256LL);
      v16 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v15;
      if ( v15 )
      {
        *(_OWORD *)v15 = *v14;
        *(_OWORD *)(v15 + 16) = v14[1];
        v18 = v14[2];
        *(_QWORD *)(v15 + 64) = v14;
        *(_OWORD *)(v15 + 32) = v18;
        v19 = this[25];
        v20 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***)(v15 + 48);
        if ( *v19 != v7 )
          __fastfail(3u);
        *v20 = v7;
        v20[1] = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v19;
        *v19 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v20;
        this[25] = v20;
        result = 0LL;
        *a3 = v16;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        return 3221225495LL;
      }
    }
  }
  return result;
}
