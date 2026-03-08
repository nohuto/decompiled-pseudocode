/*
 * XREFs of ?_ReleaseAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C03C42F0
 * Callers:
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C03C22E0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorModes::_ReleaseAdditionalTiming(
        DxgMonitor::MonitorModes *this,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a2)
{
  int v3; // eax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v3 = *((_DWORD *)this + 56);
  if ( v3 )
    *((_DWORD *)this + 56) = v3 - 1;
  else
    WdLogSingleEntry0(2LL);
  return 0LL;
}
