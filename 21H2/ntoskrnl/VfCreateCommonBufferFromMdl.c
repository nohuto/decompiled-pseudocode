/*
 * XREFs of VfCreateCommonBufferFromMdl @ 0x140A852B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x140A88430 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140A88738 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfCreateCommonBufferFromMdl(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, unsigned int a4, __int64 a5)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, ULONG_PTR, ULONG_PTR, _QWORD, __int64); // rbx
  __int64 AdapterInformationInternal; // rsi
  int v11; // edi

  RealDmaOperation = (__int64 (__fastcall *)(__int64, ULONG_PTR, ULONG_PTR, _QWORD, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v11 = RealDmaOperation(a1, a2, a3, a4, a5);
  if ( v11 == -1073741811 )
  {
    ViHalPreprocessOptions(
      byte_140C0D8E4,
      "MDL-backed common buffer creation failed due to invalid extended configurations (%p, count 0x%x) or an incompatible MDL (%p)",
      (const void *)0x26,
      a3,
      (const void *)a4);
    VfReportIssueWithOptions(0xE6u, 0x26uLL, a3, a4, a2, byte_140C0D8E4);
  }
  else if ( v11 >= 0 && AdapterInformationInternal )
  {
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 172));
  }
  return (unsigned int)v11;
}
