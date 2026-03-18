/*
 * XREFs of MonitorCleanupGlobal @ 0x1C006BB94
 * Callers:
 *     DxgkUnload @ 0x1C030A890 (DxgkUnload.c)
 *     DriverEntry @ 0x1C03DEE7C (DriverEntry.c)
 * Callees:
 *     ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x1C03C55C4 (-DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ.c)
 *     ?DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ @ 0x1C03C7390 (-DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ.c)
 *     ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C03C8B20 (-MonitorCleanupAdditionalTiming@@YAXXZ.c)
 */

__int64 __fastcall MonitorCleanupGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  IoUnregisterPlugPlayNotification(MONITOR_MGR::_pInterfaceNotificationHandle);
  v4 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  Flink = MONITOR_MGR::_MonitorPendingEventTraceHead.Flink;
  KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v4);
  if ( Flink != &MONITOR_MGR::_MonitorPendingEventTraceHead )
    WdLogSingleEntry0(2LL);
  MONITOR_MGR::DestroyStaticUSB4Class();
  MonitorCleanupAdditionalTiming();
  DxgMonitor::EDIDCACHE::DeleteGlobalCache();
  return 0LL;
}
