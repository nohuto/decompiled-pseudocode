/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140AD21E0
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x140ABD260 (VerifierKeAcquireInStackQueuedSpinLock.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD2DA8 (ViKeIrqlLogAndTrimMemory.c)
 */

unsigned int __fastcall VerifierKeAcquireInStackQueuedSpinLockCommon(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r9
  __int64 v6; // rsi
  unsigned int result; // eax

  v3 = 0LL;
  v5 = a2;
  v6 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140C13828;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 164LL);
    LOBYTE(a1) = 2;
    v3 = ViKeIrqlLogAndTrimMemory(a1);
  }
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))pXdvKeAcquireInStackQueuedSpinLock)(
             v6,
             a3,
             a3,
             v5);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v3 )
    {
      result = KeGetPcr()->Prcb.Number;
      *(_WORD *)(v3 + 10) = result;
    }
  }
  return result;
}
