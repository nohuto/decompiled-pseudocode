/*
 * XREFs of VF_ASSERT_IRQL @ 0x140AC56AC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC5B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC5DE0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC6050 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC6380 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140AC6650 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC69B0 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x140AC7030 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140AC7400 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140AC7560 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140AC7740 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140AC7800 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140AC85C0 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140ACA2F4 (ViHalPreprocessOptions.c)
 */

void __fastcall VF_ASSERT_IRQL(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v2; // edi
  ULONG_PTR v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C0DDD4, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140C0DDD4);
  }
}
