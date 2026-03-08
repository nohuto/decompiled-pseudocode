/*
 * XREFs of VerifierKeLowerIrql @ 0x140ABD380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140ABD5B0 (VfKeIrqlTransitionReserveLogEntry.c)
 *     VfKeIrqlLogLower @ 0x140AD2C84 (VfKeIrqlLogLower.c)
 */

__int64 __fastcall VerifierKeLowerIrql(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = 0LL;
  LOBYTE(a2) = a1;
  if ( (MmVerifierData & 1) != 0 )
    v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  LOBYTE(a1) = a2;
  result = ((__int64 (__fastcall *)(__int64))pXdvKeLowerIrql)(a1);
  if ( (MmVerifierData & 1) != 0 )
    return VfKeIrqlLogLower(v2);
  return result;
}
