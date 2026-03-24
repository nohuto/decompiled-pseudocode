/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1403F8678
 * Callers:
 *     RtlLockBootStatusData @ 0x14077F570 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14078C6B0 (RtlUnlockBootStatusData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
}
