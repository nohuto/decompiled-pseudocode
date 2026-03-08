/*
 * XREFs of ViKeAcquireSpinLockCommon @ 0x140AD2CEC
 * Callers:
 *     VerifierPortKeAcquireSpinLock @ 0x140AD29E0 (VerifierPortKeAcquireSpinLock.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD2DA8 (ViKeIrqlLogAndTrimMemory.c)
 */

unsigned int __fastcall ViKeAcquireSpinLockCommon(ULONG_PTR a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  ULONG_PTR v6; // rdi
  unsigned int result; // eax

  v3 = 0LL;
  v6 = a1;
  if ( (VfRuleClasses & 0x800) != 0 )
    VfMiscCheckKernelAddress(a1, 8uLL);
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140C13828;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 164LL);
    LOBYTE(a1) = 2;
    v3 = ViKeIrqlLogAndTrimMemory(a1);
  }
  result = ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeAcquireSpinLockRaiseToDpc)(v6);
  *a3 = result;
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
