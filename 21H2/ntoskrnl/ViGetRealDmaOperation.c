/*
 * XREFs of ViGetRealDmaOperation @ 0x1409CEA50
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405A0EB0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x1405A0FE0 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1405A1030 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1405A1060 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1405A10A0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1409CA5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA810 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409CAA70 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1409CAB20 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x1409CAC00 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409CACA0 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1409CAE30 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1409CB000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CB360 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x1409CB520 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x1409CB590 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x1409CB660 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x1409CB6A0 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1409CB6F0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409CB8A0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1409CB950 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CBA00 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1409CBB90 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x1409CBC60 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x1409CBCB0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x1409CBCF0 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x1409CBDF0 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x1409CC000 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x1409CC040 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1409CC080 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x1409CC0F0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CC4B0 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x1409CC7B0 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x1409CC870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CCA30 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CCC30 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x1409CCF30 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x1409CD170 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x1409CE748 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x1409CEC60 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140C12F1C, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140C12F1C);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
