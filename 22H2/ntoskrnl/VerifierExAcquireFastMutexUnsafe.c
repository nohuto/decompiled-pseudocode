/*
 * XREFs of VerifierExAcquireFastMutexUnsafe @ 0x1409E4850
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x1409DD5D8 (VfDeadlockAcquireResource.c)
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x1409E4890 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 */

PVOID __fastcall VerifierExAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  VerifierExAcquireFastMutexUnsafeNoReboot(a1);
  return VfDeadlockAcquireResource(a1, 4, (__int64)KeGetCurrentThread(), 0, retaddr);
}
