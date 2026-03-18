/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140A83D24
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140A853A0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140A85550 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x140A85840 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x140A86160 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140A86510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140A866D0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140A868E0 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140A86E70 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x140A88430 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C0D91C, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C0D91C);
  }
}
