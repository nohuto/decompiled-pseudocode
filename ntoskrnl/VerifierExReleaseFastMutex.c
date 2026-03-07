void __fastcall VerifierExReleaseFastMutex(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  __int64 v3; // r9

  v2 = 0LL;
  LOBYTE(a2) = *(_BYTE *)(a1 + 48);
  v3 = a1;
  if ( (VfRuleClasses & 2) != 0 )
    v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  ((void (__fastcall *)(__int64, __int64))pXdvExReleaseFastMutex)(v3, a2);
  if ( (VfRuleClasses & 2) != 0 )
    VfKeIrqlLogLower((__int64)v2);
}
