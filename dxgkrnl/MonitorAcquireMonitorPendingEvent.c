/*
 * XREFs of MonitorAcquireMonitorPendingEvent @ 0x1C03BF0BC
 * Callers:
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C02CA740 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CAC10 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C030EE50 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_AcquireMonitorPendingEvent@MONITOR_MGR@@QEAAPEAU_MONITOR_PENDING_EVENT@@XZ @ 0x1C006AEF4 (-_AcquireMonitorPendingEvent@MONITOR_MGR@@QEAAPEAU_MONITOR_PENDING_EVENT@@XZ.c)
 */

__int64 __fastcall MonitorAcquireMonitorPendingEvent(
        DXGADAPTER *this,
        struct _MONITOR_PENDING_EVENT **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  MONITOR_MGR *v9; // rcx
  struct _MONITOR_PENDING_EVENT *v10; // rax

  v6 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v7 = *((_QWORD *)this + 365);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225659LL;
  }
  v9 = *(MONITOR_MGR **)(v7 + 112);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  v10 = MONITOR_MGR::_AcquireMonitorPendingEvent(v9);
  *a2 = v10;
  if ( !v10 )
    return (unsigned int)-1073741823;
  return v6;
}
