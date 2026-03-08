/*
 * XREFs of ViDeadlockExAcquireFastMutex_Exit @ 0x140AD6010
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall ViDeadlockExAcquireFastMutex_Exit(__int64 a1)
{
  return VfDeadlockAcquireResource(*(LONG **)(a1 + 8), 3, (__int64)KeGetCurrentThread(), 0, *(PVOID *)a1);
}
