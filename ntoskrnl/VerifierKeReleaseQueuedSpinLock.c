/*
 * XREFs of VerifierKeReleaseQueuedSpinLock @ 0x140ACC880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140ABD5B0 (VfKeIrqlTransitionReserveLogEntry.c)
 *     VfKeIrqlLogLower @ 0x140AD2C84 (VfKeIrqlLogLower.c)
 */

__int64 __fastcall VerifierKeReleaseQueuedSpinLock(__int64 a1, char a2)
{
  char *v2; // rbx
  __int64 v3; // r9
  __int64 result; // rax

  v2 = 0LL;
  v3 = a1;
  if ( (VfRuleClasses & 2) != 0 )
    v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  result = ((__int64 (__fastcall *)(__int64))pXdvKeReleaseQueuedSpinLock)(v3);
  if ( (VfRuleClasses & 2) != 0 )
    return VfKeIrqlLogLower(v2);
  return result;
}
