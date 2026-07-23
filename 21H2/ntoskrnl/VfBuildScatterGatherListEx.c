/*
 * XREFs of VfBuildScatterGatherListEx @ 0x1409CC360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1409CAE00 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1409CB060 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1409CB0EC (VF_ASSERT_IRQL.c)
 *     ViCheckMdlLength @ 0x1409CEC54 (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfBuildScatterGatherListEx(
        __int64 a1,
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
  __int64 AdapterInformationInternal; // rdi
  unsigned int v21; // eax
  unsigned int v22; // ebx
  int v23; // eax
  unsigned int v24; // ebx
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, ULONG_PTR, __int64, unsigned int, int, __int64, __int64, char, __int64, int, __int64, __int64, __int64); // [rsp+80h] [rbp-38h]

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, ULONG_PTR, __int64, unsigned int, int, __int64, __int64, char, __int64, int, __int64, __int64, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    if ( !a4 )
      return 3221225485LL;
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 164));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 168));
    VERIFY_BUFFER_LOCKED(a4);
    v21 = ViCheckMdlLength(a4, a5, a6);
    if ( v21 )
    {
      v22 = v21;
      ViHalPreprocessOptions(
        byte_140C12E54,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v21,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v22, 0LL, 0LL, byte_140C12E54);
    }
  }
  v23 = RealDmaOperation(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  v24 = v23;
  if ( AdapterInformationInternal )
  {
    if ( v23 < 0 )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  return v24;
}
