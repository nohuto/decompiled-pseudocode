/*
 * XREFs of ViGetRealDmaAdapter @ 0x140ACA158
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405CE7E0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x1405CE900 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1405CE950 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1405CE980 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1405CE9C0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140AC5B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC5DE0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC6050 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC6110 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140AC61F0 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC6280 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC6380 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC6460 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140AC6650 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC69B0 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140AC6B70 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140AC6BE0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140AC6CB0 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140AC6CF0 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140AC6D40 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140AC6DD0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC6F80 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140AC7030 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC70E0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140AC7280 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140AC7350 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140AC73A0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140AC7400 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140AC7500 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140AC7700 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140AC7740 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140AC7790 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140AC7800 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC7BD0 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140AC7D60 (VfHalAllocateMapRegisters.c)
 *     VfInitializeDmaTransferContext @ 0x140AC7E40 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140AC7F00 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC80B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC8280 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140AC85C0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140AC8810 (VfReadDmaCounter.c)
 *     ViReleaseDmaAdapter @ 0x140ACAC1C (ViReleaseDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViGetAdapterSignature @ 0x140ACA010 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140ACA2F4 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaAdapter(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)ViGetAdapterSignature(a1) == 1634550856 )
    return v2;
  if ( (unsigned int)ViGetAdapterSignature(v2) != 1634550870 )
  {
    ViHalPreprocessOptions(
      byte_140C0DDA4,
      "Driver has provided an adapter (%p) that is not a valid DMA Adapter",
      (const void *)0x27);
    VfReportIssueWithOptions(0xE6u, 0x27uLL, a1, 0LL, 0LL, byte_140C0DDA4);
  }
  return *(_QWORD *)(a1 + 24);
}
