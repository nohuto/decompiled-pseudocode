/*
 * XREFs of VF_ASSERT_IRQL @ 0x1409CA0FC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409CA5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA820 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409CAA80 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409CADA0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x1409CB010 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CB370 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1409CB960 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x1409CBD00 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x1409CBE70 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x1409CC050 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x1409CC100 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409CCF40 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CEC70 (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_140C12EA8, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140C12EA8);
  }
}
