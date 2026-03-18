/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140302630
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 */

void __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(struct _FAST_MUTEX *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(a1);
}
