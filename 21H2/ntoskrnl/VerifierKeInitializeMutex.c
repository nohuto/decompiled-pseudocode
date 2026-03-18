/*
 * XREFs of VerifierKeInitializeMutex @ 0x140A95E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockInitializeResource @ 0x140A98420 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutex(int a1)
{
  ((void (*)(void))pXdvKeInitializeMutex)();
  return VfDeadlockInitializeResource(a1);
}
