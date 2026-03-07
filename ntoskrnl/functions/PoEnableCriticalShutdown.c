__int64 PoEnableCriticalShutdown()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
  byte_140C3C434 = 1;
  PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
  return PopCancelIgnoreBatteryStatusChange();
}
