/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x140AD2720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD2DA8 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeSynchronizeExecution(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140C1382C;
    v6 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(retaddr, 168LL);
    LOBYTE(v6) = *(_BYTE *)(a1 + 93);
    ViKeIrqlLogAndTrimMemory(v6);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvKeSynchronizeExecution)(a1, a2, a3);
}
