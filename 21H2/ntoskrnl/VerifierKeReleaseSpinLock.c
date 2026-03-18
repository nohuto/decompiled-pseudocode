/*
 * XREFs of VerifierKeReleaseSpinLock @ 0x140A7F570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLock(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rbx
  __int64 v5; // rdx

  v2 = a2;
  v4 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  VfDeadlockReleaseResource(a1);
  LOBYTE(v5) = v2;
  ((void (__fastcall *)(__int64, __int64))pXdvKeReleaseSpinLock)(a1, v5);
  return ViKeIrqlLogCommon(v4, 1LL);
}
