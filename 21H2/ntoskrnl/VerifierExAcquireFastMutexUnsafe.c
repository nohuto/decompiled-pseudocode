/*
 * XREFs of VerifierExAcquireFastMutexUnsafe @ 0x140A9C250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall VerifierExAcquireFastMutexUnsafe(LONG *a1)
{
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  ((void (*)(void))pXdvExAcquireFastMutexUnsafe)();
  return VfDeadlockAcquireResource(a1, 4, (__int64)KeGetCurrentThread(), 0, retaddr);
}
