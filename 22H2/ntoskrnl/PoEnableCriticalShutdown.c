/*
 * XREFs of PoEnableCriticalShutdown @ 0x140864794
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080CEA0 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x1408647DC (PopCancelIgnoreBatteryStatusChange.c)
 */

__int64 PoEnableCriticalShutdown()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
  byte_140C3C814 = 1;
  PopReleaseRwLock(&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
  return PopCancelIgnoreBatteryStatusChange();
}
