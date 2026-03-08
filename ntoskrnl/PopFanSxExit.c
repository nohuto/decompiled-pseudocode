/*
 * XREFs of PopFanSxExit @ 0x14059721C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void PopFanSxExit()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 400);
    if ( *(_BYTE *)(i + 88) )
    {
      *(_QWORD *)(i + 208) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(i + 200) = 0;
    }
    PopReleaseRwLock(i + 400);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
