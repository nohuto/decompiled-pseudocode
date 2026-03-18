/*
 * XREFs of VerifierExReleaseFastMutex @ 0x140A9C2E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 */

void __fastcall VerifierExReleaseFastMutex(__int64 a1)
{
  char *v2; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), *(_BYTE *)(a1 + 48));
  VfDeadlockReleaseResource((LONG *)a1, 3, (__int64)KeGetCurrentThread(), retaddr);
  ((void (__fastcall *)(__int64))pXdvExReleaseFastMutex)(a1);
  if ( (VfRuleClasses & 0x400000) == 0 )
    ViKeIrqlLogCommon((__int64)v2, 1u);
}
