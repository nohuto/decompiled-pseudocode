/*
 * XREFs of VfGetScatterGatherListEx @ 0x140AC3BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140AC13C0 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140AC1620 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC172C (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckMdlLength @ 0x140AC531C (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfGetScatterGatherListEx(
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
        __int64 a12,
        __int64 a13)
{
  __int64 RealDmaAdapter; // r15
  __int64 AdapterInformationInternal; // rdi
  unsigned int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // ebx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 196));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 200));
    VERIFY_BUFFER_LOCKED(a4);
    v19 = ViCheckMdlLength(a4, a5, a6);
    if ( v19 )
    {
      v20 = v19;
      ViHalPreprocessOptions(
        byte_140C0DCB0,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v19,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v20, 0LL, 0LL, byte_140C0DCB0);
    }
  }
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, ULONG_PTR, __int64, unsigned int, int, __int64, __int64, char, __int64, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 192LL))(
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
          a13);
  v22 = v21;
  if ( AdapterInformationInternal && v21 < 0 )
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  return v22;
}
