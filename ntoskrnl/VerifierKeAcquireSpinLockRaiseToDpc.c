/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x140ABD280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD2DA8 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockRaiseToDpc(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = 0LL;
  v2 = a1;
  if ( (VfRuleClasses & 2) != 0 )
  {
    LOBYTE(a1) = 2;
    v1 = ViKeIrqlLogAndTrimMemory(a1);
  }
  result = ((__int64 (__fastcall *)(__int64))pXdvKeAcquireSpinLockRaiseToDpc)(v2);
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v1 )
      *(_WORD *)(v1 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
