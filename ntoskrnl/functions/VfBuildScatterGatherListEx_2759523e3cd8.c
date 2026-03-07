__int64 __fastcall VfBuildScatterGatherListEx(
        int a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 RealDmaAdapter; // r15
  __int64 AdapterInformationInternal; // rdi
  unsigned int v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  unsigned int v25; // ebx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    if ( !a4 )
      return 3221225485LL;
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 196));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 200));
    VERIFY_BUFFER_LOCKED(a4);
    v22 = ViCheckMdlLength(a4, a5, a6);
    if ( v22 )
    {
      v23 = v22;
      ViHalPreprocessOptions(
        byte_140C0DCBC,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v22,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v23, 0LL, 0LL, byte_140C0DCBC);
    }
  }
  v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, ULONG_PTR, __int64, unsigned int, int, __int64, __int64, char, __int64, int, __int64, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 200LL))(
          RealDmaAdapter,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a15);
  v25 = v24;
  if ( AdapterInformationInternal )
  {
    if ( v24 < 0 )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  return v25;
}
