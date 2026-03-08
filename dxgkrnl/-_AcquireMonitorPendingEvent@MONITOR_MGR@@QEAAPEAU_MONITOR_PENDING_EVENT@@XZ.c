/*
 * XREFs of ?_AcquireMonitorPendingEvent@MONITOR_MGR@@QEAAPEAU_MONITOR_PENDING_EVENT@@XZ @ 0x1C006AEF4
 * Callers:
 *     MonitorAcquireMonitorPendingEvent @ 0x1C03BF0BC (MonitorAcquireMonitorPendingEvent.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct _MONITOR_PENDING_EVENT *__fastcall MONITOR_MGR::_AcquireMonitorPendingEvent(MONITOR_MGR *this)
{
  __int64 v2; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL)) )
    WdLogSingleEntry0(1LL);
  v2 = *((_QWORD *)this + 83);
  if ( v2 )
  {
    if ( *(int *)(v2 + 16) <= 0 )
      WdLogSingleEntry0(1LL);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 83) + 16LL));
  }
  return (struct _MONITOR_PENDING_EVENT *)*((_QWORD *)this + 83);
}
