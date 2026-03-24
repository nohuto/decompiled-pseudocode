/*
 * XREFs of ViGetRealDmaOperation @ 0x1409CEA60
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405A0DF0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x1405A0F20 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1405A0F70 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1405A0FA0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1405A0FE0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x1409CA5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA820 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409CAA80 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1409CAB30 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x1409CAC10 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409CACB0 (VfAllocateCommonBufferWithBounds.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1409CAE40 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1409CB010 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CB370 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x1409CB530 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x1409CB5A0 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x1409CB670 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x1409CB6B0 (VfConfigureAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1409CB700 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409CB8B0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1409CB960 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CBA10 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1409CBBA0 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x1409CBC70 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x1409CBCC0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x1409CBD00 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x1409CBE00 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x1409CC010 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x1409CC050 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x1409CC090 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x1409CC100 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CC4C0 (VfGetScatterGatherListEx.c)
 *     VfInitializeDmaTransferContext @ 0x1409CC7C0 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x1409CC880 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CCA40 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1409CCC40 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x1409CCF40 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x1409CD180 (VfReadDmaCounter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1D34 (VfReportIssueWithOptions.c)
 *     ViGetAdapterInformationInternal @ 0x1409CE758 (ViGetAdapterInformationInternal.c)
 *     ViHalPreprocessOptions @ 0x1409CEC70 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaOperation(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *AdapterInformationInternal; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( ViVerifyDma && !a1 )
  {
    ViHalPreprocessOptions(byte_140C12EFC, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    VfReportIssueWithOptions(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140C12EFC);
  }
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, 1);
  if ( AdapterInformationInternal )
    Flink = AdapterInformationInternal[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
