/*
 * XREFs of ViDeadlockExAcquireFastMutexUnsafe_Exit @ 0x140AD5FD0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall ViDeadlockExAcquireFastMutexUnsafe_Exit(__int64 a1)
{
  return VfDeadlockAcquireResource(*(LONG **)(a1 + 8), 4, (__int64)KeGetCurrentThread(), 0, *(PVOID *)a1);
}
