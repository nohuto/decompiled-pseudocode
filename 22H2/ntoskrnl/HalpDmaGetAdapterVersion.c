/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x1403B91D4
 * Callers:
 *     HalJoinDmaDomain @ 0x14038EA90 (HalJoinDmaDomain.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1403B91AC (HalpDmaGetAdapterCacheAlignment.c)
 *     HalGetScatterGatherList @ 0x1403D07A0 (HalGetScatterGatherList.c)
 *     HalAllocateAdapterChannel @ 0x14045ACA0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14045ACFA (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaNextContiguousPiece @ 0x14045ADC8 (HalpDmaNextContiguousPiece.c)
 *     IoMapTransferInternal @ 0x14045AE5E (IoMapTransferInternal.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1405010F0 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x140501174 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     IoFreeMapRegistersThunk @ 0x1405011D4 (IoFreeMapRegistersThunk.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1405105C4 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV3 @ 0x140829080 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140829610 (HalGetAdapterV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetAdapterVersion(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 156);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
