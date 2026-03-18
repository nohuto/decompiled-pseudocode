/*
 * XREFs of VerifierExTryToAcquireFastMutex @ 0x140A9C3A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierExTryToAcquireFastMutex(LONG *a1)
{
  char v2; // bl
  char *v3; // rax
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  v2 = ((__int64 (*)(void))pXdvExTryToAcquireFastMutex)();
  if ( v2 )
  {
    if ( (VfRuleClasses & 0x400000) == 0 )
    {
      v3 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), 1);
      ViKeIrqlLogCommon((__int64)v3, 2u);
    }
    VfDeadlockAcquireResource(a1, 3, (__int64)KeGetCurrentThread(), 1u, retaddr);
  }
  return v2;
}
