/*
 * XREFs of VerifierKeSetEvent @ 0x1409DC610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C758C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeSetEvent(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3)
{
  char v3; // di
  unsigned __int8 CurrentIrql; // al

  v3 = a3;
  if ( (MmVerifierData & 0x800) != 0 )
  {
    VfUtilCheckKernelAddress(BugCheckParameter3, 0x18uLL);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x80uLL, CurrentIrql, BugCheckParameter3, 0LL);
  }
  LOBYTE(a3) = v3;
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64))pXdvKeSetEvent)(BugCheckParameter3, a2, a3);
}
