/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140AC172C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140AC2DD0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC2F80 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x140AC3280 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x140AC3BD0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140AC3F00 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC40B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC4280 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140AC4810 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C0DCDC, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C0DCDC);
  }
}
