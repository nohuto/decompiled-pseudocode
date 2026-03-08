/*
 * XREFs of VfMapTransferEx @ 0x140AC40B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140AC1454 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140AC1620 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC172C (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckAdapterBuffers @ 0x140AC51E4 (ViCheckAdapterBuffers.c)
 *     ViCheckMdlLength @ 0x140AC531C (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfMapTransferEx(
        int a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        char a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 RealDmaAdapter; // r15
  __int64 AdapterInformationInternal; // rdi
  unsigned int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    VERIFY_BUFFER_LOCKED(a2);
    ViCheckAdapterBuffers(AdapterInformationInternal);
    v17 = ViCheckMdlLength(a2, a4, *a6);
    if ( v17 )
    {
      v18 = v17;
      ViHalPreprocessOptions(
        byte_140C0DCAC,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v17,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v18, 0LL, 0LL, byte_140C0DCAC);
    }
  }
  v19 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64, __int64, int, unsigned int *, char, __int64, int, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 184LL))(
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
          a11);
  v20 = v19;
  if ( AdapterInformationInternal && v19 >= 0 )
    INCREASE_MAPPED_TRANSFER_BYTE_COUNT(AdapterInformationInternal, *a6, 1);
  return v20;
}
