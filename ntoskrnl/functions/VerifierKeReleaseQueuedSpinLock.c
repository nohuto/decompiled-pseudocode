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
