/*
 * XREFs of VerifierKeReleaseQueuedSpinLock @ 0x140A8EF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 */

void __fastcall VerifierKeReleaseQueuedSpinLock(__int64 a1, char a2)
{
  char *v2; // rbx
  __int64 v3; // r9

  v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  ((void (__fastcall *)(__int64))pXdvKeReleaseQueuedSpinLock)(v3);
  ViKeIrqlLogCommon((__int64)v2, 1u);
}
