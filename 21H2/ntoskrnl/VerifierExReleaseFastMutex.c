/*
 * XREFs of VerifierExReleaseFastMutex @ 0x1409E4900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x1409DC0CC (ViKeIrqlLogCommon.c)
 *     VfDeadlockReleaseResource @ 0x1409DE338 (VfDeadlockReleaseResource.c)
 *     ViExReleaseFastMutexCommon @ 0x1409E4E30 (ViExReleaseFastMutexCommon.c)
 */

void __fastcall VerifierExReleaseFastMutex(const void *a1)
{
  __int64 v2; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViExReleaseFastMutexCommon((ULONG_PTR)a1);
  VfDeadlockReleaseResource(a1, 3, (__int64)KeGetCurrentThread(), retaddr);
  ((void (__fastcall *)(const void *))pXdvExReleaseFastMutex)(a1);
  ViKeIrqlLogCommon(v2, 1u);
}
