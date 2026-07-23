/*
 * XREFs of VerifierObReferenceObjectByPointer @ 0x1409E8C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C758C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObReferenceObjectByPointer(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // r9

  VfUtilCheckKernelAddress(BugCheckParameter2, 8uLL);
  if ( !*(_QWORD *)(BugCheckParameter2 - 48) && (MmVerifierData & 0x800) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, BugCheckParameter2, 1uLL, 0LL);
  LOBYTE(v8) = a4;
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64, __int64))pXdvObReferenceObjectByPointer)(
           BugCheckParameter2,
           a2,
           a3,
           v8);
}
