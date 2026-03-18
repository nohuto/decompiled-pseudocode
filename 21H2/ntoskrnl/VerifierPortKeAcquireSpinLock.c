/*
 * XREFs of VerifierPortKeAcquireSpinLock @ 0x140A965D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierPortKeAcquireSpinLock(ULONG_PTR a1, _BYTE *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  ++dword_140C29FC8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 164LL);
  VfMiscCheckKernelAddress(a1, 8uLL);
  LOBYTE(v5) = 2;
  v6 = ViKeIrqlLogAndTrimMemory(v5);
  result = ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeAcquireSpinLockRaiseToDpc)(a1);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
