/*
 * XREFs of HalpAllocateDmaResources @ 0x1404CA500
 * Callers:
 *     HalpFreeDmaChannels @ 0x1404CF140 (HalpFreeDmaChannels.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA51C (HalpAllocateDmaResourcesInternal.c)
 */

__int64 __fastcall HalpAllocateDmaResources(struct _DMA_ADAPTER *a1)
{
  return HalpAllocateDmaResourcesInternal(a1);
}
