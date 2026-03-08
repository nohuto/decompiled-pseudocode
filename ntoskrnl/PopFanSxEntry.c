/*
 * XREFs of PopFanSxEntry @ 0x14059718C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopFanUpdateStatistics @ 0x140994754 (PopFanUpdateStatistics.c)
 */

void PopFanSxEntry()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 400);
    PopFanUpdateStatistics(i);
    *(_BYTE *)(i + 200) = 1;
    PopReleaseRwLock(i + 400);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
