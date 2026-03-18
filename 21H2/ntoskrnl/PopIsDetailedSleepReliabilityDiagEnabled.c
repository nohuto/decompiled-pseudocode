/*
 * XREFs of PopIsDetailedSleepReliabilityDiagEnabled @ 0x1407FF3EC
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x1407FE8C0 (PopEnableSystemSleepCheckpoint.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x1407FF3B4 (PopUpdatePowerActionWatchdogTimeouts.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

char PopIsDetailedSleepReliabilityDiagEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopSleepReliabilityDiagLock, 0LL);
  v1 = PopSleepReliabilityDetailedDiagEnabled;
  PopReleaseRwLock((ULONG_PTR)&PopSleepReliabilityDiagLock);
  return v1;
}
