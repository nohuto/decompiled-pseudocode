/*
 * XREFs of VF_ASSERT_IRQL @ 0x1409CA0EC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409CA5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA810 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409CAA70 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409CAD90 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x1409CB000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CB360 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1409CB950 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x1409CBCF0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x1409CBE60 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x1409CC040 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x1409CC0F0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409CCF30 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CEC60 (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_140C12ED8, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140C12ED8);
  }
}
