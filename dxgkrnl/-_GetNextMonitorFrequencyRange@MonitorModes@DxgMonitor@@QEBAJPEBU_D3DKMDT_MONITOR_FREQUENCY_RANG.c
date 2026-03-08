/*
 * XREFs of ?_GetNextMonitorFrequencyRange@MonitorModes@DxgMonitor@@QEBAJPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C016F20C
 * Callers:
 *     MonitorGetNextFrequencyRange @ 0x1C016F178 (MonitorGetNextFrequencyRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetNextMonitorFrequencyRange(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **v3; // rcx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **v5; // rdx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v6; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v8; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v9; // rdx

  v3 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)((char *)this + 176);
  if ( a2 )
  {
    v8 = *v3;
    if ( *v3 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v3 )
    {
LABEL_15:
      WdLogSingleEntry1(2LL, a2);
      return 3223192368LL;
    }
    v9 = a2 + 1;
    while ( v8 != v9 )
    {
      if ( v3 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v8 )
        goto LABEL_15;
      v8 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)&v8->Origin;
    }
    v5 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***)&v9->Origin;
  }
  else
  {
    v5 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)*v3;
  }
  if ( v5 == v3 )
    return 1075708748LL;
  v6 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)(v5 - 6);
  if ( !v5 )
    v6 = 0LL;
  if ( !v6 )
    return 1075708748LL;
  *a3 = v6;
  return 0LL;
}
