/*
 * XREFs of MonitorCleanupGlobal @ 0x1C005DFCC
 * Callers:
 *     DxgkUnload @ 0x1C0261ED0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C03072C8 (DriverEntry.c)
 * Callees:
 *     ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C02F8CF0 (-MonitorCleanupAdditionalTiming@@YAXXZ.c)
 */

__int64 __fastcall MonitorCleanupGlobal(__int64 a1, __int64 a2)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  WdLogNewEntry5_WdTrace(a1, a2);
  IoUnregisterPlugPlayNotification(MONITOR_MGR::_pInterfaceNotificationHandle);
  v2 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  Flink = MONITOR_MGR::_MonitorPendingEventTraceHead.Flink;
  KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v2);
  if ( Flink != &MONITOR_MGR::_MonitorPendingEventTraceHead )
  {
    v6 = WdLogNewEntry5_WdError(v5, v4);
    WdLogEvent5_WdError(v6);
  }
  MonitorCleanupAdditionalTiming();
  return 0LL;
}
