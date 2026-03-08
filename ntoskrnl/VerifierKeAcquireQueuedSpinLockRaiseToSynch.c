/*
 * XREFs of VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140AD2380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD2DA8 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140C13828;
    v3 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(retaddr, 164LL);
    LOBYTE(v3) = 12;
    v1 = ViKeIrqlLogAndTrimMemory(v3);
  }
  result = ((__int64 (__fastcall *)(__int64))pXdvKeAcquireQueuedSpinLockRaiseToSynch)(a1);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v1 )
      *(_WORD *)(v1 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
