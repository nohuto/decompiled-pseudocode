/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x1409CB16C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1409CC6F0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409CC8A0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x1409CCB90 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x1409CD4B0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CD870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CDA30 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CDC30 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x1409CE170 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C12E68, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C12E68);
  }
}
