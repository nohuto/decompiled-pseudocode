/*
 * XREFs of PoEnableCriticalShutdown @ 0x140818B24
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140818B6C (PopCancelIgnoreBatteryStatusChange.c)
 */

__int64 PoEnableCriticalShutdown()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
  byte_140C3C434 = 1;
  PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
  return PopCancelIgnoreBatteryStatusChange();
}
