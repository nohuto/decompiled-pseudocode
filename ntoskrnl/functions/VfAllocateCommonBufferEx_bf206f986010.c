__int64 __fastcall VfAllocateCommonBufferEx(int a1, ULONG_PTR *a2, unsigned int a3, __int64 a4, char a5, int a6)
{
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rbx
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-28h]

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal && (MmVerifierData & 0x4000000) != 0 && a2 && *a2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, *a2, a3, 0LL);
  LOBYTE(v13) = a5;
  result = (*(__int64 (__fastcall **)(__int64, ULONG_PTR *, _QWORD, __int64, int, int))(*(_QWORD *)(RealDmaAdapter + 8)
                                                                                      + 152LL))(
             RealDmaAdapter,
             a2,
             a3,
             a4,
             v13,
             a6);
  if ( result )
  {
    if ( AdapterInformationInternal )
      _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 204));
  }
  return result;
}
