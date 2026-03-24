/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x1409CA16C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1409CB6F0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409CB8A0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x1409CBB90 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x1409CC4B0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CC870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CCA30 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CCC30 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x1409CD170 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x1409CE748 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CEC60 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C12ED4, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C12ED4);
  }
}
