/*
 * XREFs of VfAllocateCommonBufferWithBounds @ 0x1409CBCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfAllocateCommonBufferWithBounds(
        __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, ULONG_PTR *, _QWORD, int, __int64, int, __int64); // r15
  __int64 AdapterInformationInternal; // rbx
  __int64 result; // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, ULONG_PTR *, _QWORD, int, __int64, int, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( (MmVerifierData & 0x4000000) != 0 && a3 && *a3 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, *a3, a4, 0LL);
  result = RealDmaOperation(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( result )
  {
    if ( AdapterInformationInternal )
      _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 172));
  }
  return result;
}
