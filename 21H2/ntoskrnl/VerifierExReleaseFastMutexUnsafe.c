/*
 * XREFs of VerifierExReleaseFastMutexUnsafe @ 0x1409E5990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfDeadlockReleaseResource @ 0x1409DF338 (VfDeadlockReleaseResource.c)
 *     ViExCheckAPCsDisabled @ 0x1409E5DC4 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafe(const void *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0x3AuLL, (ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 4, (__int64)KeGetCurrentThread(), retaddr);
  return ((__int64 (__fastcall *)(const void *))pXdvExReleaseFastMutexUnsafe)(a1);
}
