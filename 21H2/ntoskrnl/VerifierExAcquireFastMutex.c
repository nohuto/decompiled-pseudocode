/*
 * XREFs of VerifierExAcquireFastMutex @ 0x140A9C1E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall VerifierExAcquireFastMutex(LONG *a1)
{
  char *v2; // rax
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  ((void (*)(void))pXdvExAcquireFastMutex)();
  if ( (VfRuleClasses & 0x400000) == 0 )
  {
    v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), 1);
    ViKeIrqlLogCommon((__int64)v2, 2u);
  }
  return VfDeadlockAcquireResource(a1, 3, (__int64)KeGetCurrentThread(), 0, retaddr);
}
