/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceShared @ 0x1409E3060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierExEnterCriticalRegionAndAcquireResourceShared(ULONG_PTR a1)
{
  __int64 v2; // rdi
  void *v4; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = ((__int64 (*)(void))pXdvExEnterCriticalRegionAndAcquireResourceShared)();
  if ( (MmVerifierData & 0x400000) == 0 )
  {
    v4 = retaddr;
    goto LABEL_5;
  }
  if ( ViDeadlockDetectionEnabled )
  {
    v4 = retaddr;
LABEL_5:
    VfDeadlockAcquireResource(a1, 8, (__int64)KeGetCurrentThread(), 0, v4);
  }
  return v2;
}
