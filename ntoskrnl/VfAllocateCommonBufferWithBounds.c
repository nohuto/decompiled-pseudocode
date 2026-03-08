/*
 * XREFs of VfAllocateCommonBufferWithBounds @ 0x140AC2280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfAllocateCommonBufferWithBounds(
        int a1,
        __int64 a2,
        ULONG_PTR *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rbx
  __int64 result; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal && (MmVerifierData & 0x4000000) != 0 && a3 && *a3 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, *a3, a4, 0LL);
  result = (*(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR *, _QWORD, int, __int64, int, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 272LL))(
             RealDmaAdapter,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  if ( result )
  {
    if ( AdapterInformationInternal )
      _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 204));
  }
  return result;
}
