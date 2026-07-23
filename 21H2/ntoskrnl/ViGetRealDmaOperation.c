/*
 * XREFs of ViGetRealDmaOperation @ 0x1409CFA50
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405A10E0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x1405A1210 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1405A1260 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1405A1290 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1405A12D0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1409CB5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CB810 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409CBA70 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1409CBB20 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x1409CBC00 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409CBCA0 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1409CBE30 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1409CC000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CC360 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x1409CC520 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x1409CC590 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x1409CC660 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x1409CC6A0 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1409CC6F0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409CC8A0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1409CC950 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CCA00 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1409CCB90 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x1409CCC60 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x1409CCCB0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x1409CCCF0 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x1409CCDF0 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x1409CD000 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x1409CD040 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1409CD080 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x1409CD0F0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CD4B0 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x1409CD7B0 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x1409CD870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CDA30 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CDC30 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x1409CDF30 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x1409CE170 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140C12EC8, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140C12EC8);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
