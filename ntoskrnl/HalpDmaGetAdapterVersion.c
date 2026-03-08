/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x1403B4514
 * Callers:
 *     HalJoinDmaDomain @ 0x14038C5D0 (HalJoinDmaDomain.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1403B44EC (HalpDmaGetAdapterCacheAlignment.c)
 *     HalGetScatterGatherList @ 0x1403CB200 (HalGetScatterGatherList.c)
 *     HalAllocateAdapterChannel @ 0x140452D00 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x140452D5A (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaNextContiguousPiece @ 0x140452E28 (HalpDmaNextContiguousPiece.c)
 *     IoMapTransferInternal @ 0x140452EBE (IoMapTransferInternal.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404FF010 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404FF094 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     IoFreeMapRegistersThunk @ 0x1404FF0F4 (IoFreeMapRegistersThunk.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14050E094 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1408215A0 (HalGetAdapterV2.c)
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
