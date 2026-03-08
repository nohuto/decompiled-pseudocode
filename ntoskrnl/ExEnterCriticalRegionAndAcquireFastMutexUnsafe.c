/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14023FC00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 */

void __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(struct _FAST_MUTEX *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(a1);
}
