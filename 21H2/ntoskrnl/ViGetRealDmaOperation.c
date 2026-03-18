/*
 * XREFs of ViGetRealDmaOperation @ 0x140A88738
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405FE460 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x1405FE590 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1405FE5E0 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1405FE610 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1405FE650 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140A84180 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140A843D0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140A84630 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140A846E0 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140A847C0 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140A84860 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140A849F0 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140A84BC0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140A84F20 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140A850E0 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140A85150 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140A85220 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140A85260 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140A852B0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140A853A0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140A85550 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140A85600 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140A856B0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140A85840 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140A85910 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140A85960 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140A859A0 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140A85AA0 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140A85CB0 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140A85CF0 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140A85D30 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140A85DA0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140A86160 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x140A86450 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140A86510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140A866D0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140A868E0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140A86C30 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140A86E70 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x140A88430 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140C0D98C, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140C0D98C);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
