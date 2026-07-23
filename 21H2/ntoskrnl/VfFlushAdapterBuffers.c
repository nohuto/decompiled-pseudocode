/*
 * XREFs of VfFlushAdapterBuffers @ 0x1409CC6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409CB16C (VF_ASSERT_MAX_IRQL.c)
 *     ViFlushDoubleBuffer @ 0x1409CF210 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetMapRegisterFile @ 0x1409CF914 (ViGetMapRegisterFile.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 *     ViSwap @ 0x1409D0A00 (ViSwap.c)
 */

char __fastcall VfFlushAdapterBuffers(__int64 a1, ULONG_PTR a2, const void *a3, const void *a4, int a5, char a6)
{
  __int64 AdapterInformationInternal; // rbp
  char result; // al
  __int64 MapRegisterFile; // r13
  char v13; // r12
  const void *v16; // [rsp+40h] [rbp-48h] BYREF
  const void *v17; // [rsp+48h] [rbp-40h] BYREF
  ULONG_PTR v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *RealDmaOperation)(__int64, ULONG_PTR, const void *, const void *, int, char); // [rsp+58h] [rbp-30h]

  RealDmaOperation = (__int64 (__fastcall *)(__int64, ULONG_PTR, const void *, const void *, int, char))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal )
    goto LABEL_4;
  VF_ASSERT_MAX_IRQL();
  if ( a3 == (const void *)-559026163LL )
  {
    a3 = 0LL;
    goto LABEL_4;
  }
  MapRegisterFile = ViGetMapRegisterFile(a3);
  if ( !MapRegisterFile )
  {
LABEL_4:
    result = RealDmaOperation(a1, a2, a3, a4, a5, a6);
    if ( AdapterInformationInternal )
    {
      if ( result )
        _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
    }
    return result;
  }
  v18 = a2;
  v16 = a4;
  v17 = a3;
  if ( (unsigned int)ViSwap(&v17, &v18, &v16) )
  {
    v13 = RealDmaOperation(a1, v18, v17, v16, a5, a6);
    ViFlushDoubleBuffer(MapRegisterFile, a6);
    if ( v13 )
      _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
    return v13;
  }
  else
  {
    if ( a5 )
    {
      ViHalPreprocessOptions(
        byte_140C12EFC,
        "Cannot flush map register that isn't mapped! (Map register base %p, flushing address %p, MDL %p)",
        (const void *)0x20,
        a3,
        a4);
      VfReportIssueWithOptions(0xE6u, 0x20uLL, (ULONG_PTR)a3, (ULONG_PTR)a4, a2, byte_140C12EFC);
    }
    return 0;
  }
}
