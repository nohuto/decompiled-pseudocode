__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 result; // rax

  v2 = 0LL;
  v3 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  }
  result = ((__int64 (__fastcall *)(__int64))pXdvKeReleaseInStackQueuedSpinLock)(v3);
  if ( (VfRuleClasses & 2) != 0 )
    return VfKeIrqlLogLower(v2);
  return result;
}
