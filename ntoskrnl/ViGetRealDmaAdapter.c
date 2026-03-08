/*
 * XREFs of ViGetRealDmaAdapter @ 0x140AC6158
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405CC330 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x1405CC450 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1405CC4A0 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1405CC4D0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1405CC510 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140AC1B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC1DE0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC2050 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC2110 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140AC21F0 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC2280 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC2380 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC2460 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140AC2650 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC29B0 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140AC2B70 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140AC2BE0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140AC2CB0 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140AC2CF0 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140AC2D40 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140AC2DD0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC2F80 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140AC3030 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC30E0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140AC3280 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140AC3350 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140AC33A0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140AC3400 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140AC3500 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140AC3700 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140AC3740 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140AC3790 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140AC3800 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC3BD0 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140AC3D60 (VfHalAllocateMapRegisters.c)
 *     VfInitializeDmaTransferContext @ 0x140AC3E40 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140AC3F00 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC40B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC4280 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140AC45C0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140AC4810 (VfReadDmaCounter.c)
 *     ViReleaseDmaAdapter @ 0x140AC6C1C (ViReleaseDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViGetAdapterSignature @ 0x140AC6010 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaAdapter(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)ViGetAdapterSignature(a1) == 1634550856 )
    return v2;
  if ( (unsigned int)ViGetAdapterSignature(v2) != 1634550870 )
  {
    ViHalPreprocessOptions(
      byte_140C0DCB8,
      "Driver has provided an adapter (%p) that is not a valid DMA Adapter",
      (const void *)0x27);
    VfReportIssueWithOptions(0xE6u, 0x27uLL, a1, 0LL, 0LL, byte_140C0DCB8);
  }
  return *(_QWORD *)(a1 + 24);
}
