/*
 * XREFs of VerifierKeLowerIrql @ 0x140A7F480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 */

__int64 __fastcall VerifierKeLowerIrql(char a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // dl
  __int64 v4; // rcx

  LOBYTE(a2) = a1;
  v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  LOBYTE(v4) = v3;
  ((void (__fastcall *)(__int64))pXdvKeLowerIrql)(v4);
  return ViKeIrqlLogCommon(v2, 1LL);
}
