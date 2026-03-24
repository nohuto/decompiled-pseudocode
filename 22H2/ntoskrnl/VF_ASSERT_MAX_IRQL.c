/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x1409CA17C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1409CB700 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409CB8B0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x1409CBBA0 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x1409CC4C0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409CC880 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CCA40 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CCC40 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x1409CD180 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x1409CE758 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CEC70 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C12EAC, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C12EAC);
  }
}
