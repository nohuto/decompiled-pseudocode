/*
 * XREFs of IoFreeMapRegisters @ 0x1403A25A0
 * Callers:
 *     HalPutScatterGatherList @ 0x1402F6340 (HalPutScatterGatherList.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2520 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3Internal @ 0x1404C6480 (IoFreeAdapterChannelV3Internal.c)
 *     IoFreeAdapterChannelV2 @ 0x1404CCD0C (IoFreeAdapterChannelV2.c)
 *     HalpAllocateMapRegisters @ 0x140864700 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14030DA00 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV3 @ 0x1403A25D4 (IoFreeMapRegistersV3.c)
 *     IoFreeMapRegistersV2 @ 0x1404CCEE0 (IoFreeMapRegistersV2.c)
 */

void __stdcall IoFreeMapRegisters(PDMA_ADAPTER DmaAdapter, PVOID MapRegisterBase, ULONG NumberOfMapRegisters)
{
  __int64 v3; // r9
  __int64 v4; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    IoFreeMapRegistersV2(v3, v4);
  else
    IoFreeMapRegistersV3(v3, v4);
}
