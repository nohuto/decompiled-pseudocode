/*
 * XREFs of IoFreeAdapterChannel @ 0x1404B8C60
 * Callers:
 *     HalCancelAdapterChannel @ 0x1404C5E00 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x1404C5EC0 (HalFreeAdapterObject.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA51C (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelThin @ 0x1404CAC20 (HalCancelAdapterChannelThin.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404CC624 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404CCC28 (HalpDmaProcessMapRegisterQueueV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14030DA00 (HalpDmaGetAdapterVersion.c)
 *     IoFreeAdapterChannelV3 @ 0x1404C62DC (IoFreeAdapterChannelV3.c)
 *     IoFreeAdapterChannelV2 @ 0x1404CCD0C (IoFreeAdapterChannelV2.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  struct _DMA_ADAPTER *v1; // r8

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    IoFreeAdapterChannelV2(v1);
  else
    IoFreeAdapterChannelV3(v1);
}
