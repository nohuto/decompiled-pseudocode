/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1403F86A8
 * Callers:
 *     RtlLockBootStatusData @ 0x14077F730 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14078C870 (RtlUnlockBootStatusData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
}
