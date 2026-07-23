/*
 * XREFs of VerifierExTryToAcquireFastMutex @ 0x1409E5A30
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E5E70 (ViExTryToAcquireFastMutexCommon.c)
 */

char __fastcall VerifierExTryToAcquireFastMutex(ULONG_PTR a1)
{
  char v2; // bl
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViExTryToAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  if ( v2 )
    VfDeadlockAcquireResource(a1, 3, (__int64)KeGetCurrentThread(), 1u, retaddr);
  return v2;
}
