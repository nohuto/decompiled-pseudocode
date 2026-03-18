/*
 * XREFs of VerifierKeInitializeMutant @ 0x140A95E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140A98420 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutant(int a1, char a2)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ((void (*)(void))pXdvKeInitializeMutant)();
  result = VfDeadlockInitializeResource(a1);
  if ( a2 )
    return VfDeadlockAcquireResource(a1, retaddr);
  return result;
}
