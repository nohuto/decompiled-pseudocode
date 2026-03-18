/*
 * XREFs of VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x140AA1310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierExEnterPriorityRegionAndAcquireResourceExclusive(LONG *a1)
{
  __int64 v2; // rbx
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  v2 = ((__int64 (*)(void))pXdvExEnterPriorityRegionAndAcquireResourceExclusive)();
  VfDeadlockAcquireResource(a1, 8, (__int64)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
