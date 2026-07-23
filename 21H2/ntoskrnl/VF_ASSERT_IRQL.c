/*
 * XREFs of VF_ASSERT_IRQL @ 0x1409CB0EC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409CB5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CB810 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409CBA70 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409CBD90 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x1409CC000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CC360 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x1409CC950 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x1409CCCF0 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x1409CCE60 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x1409CD040 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x1409CD0F0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409CDF30 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_140C12E6C, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140C12E6C);
  }
}
