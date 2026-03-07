unsigned int __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  unsigned int result; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140C13828;
    v5 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(retaddr, 164LL);
    LOBYTE(v5) = 12;
    v2 = ViKeIrqlLogAndTrimMemory(v5);
  }
  result = ((__int64 (__fastcall *)(__int64, __int64))pXdvKeAcquireInStackQueuedSpinLockRaiseToSynch)(a1, a2);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v2 )
    {
      result = KeGetPcr()->Prcb.Number;
      *(_WORD *)(v2 + 10) = result;
    }
  }
  return result;
}
