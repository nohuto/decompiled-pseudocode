/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x14030DA00
 * Callers:
 *     HalGetScatterGatherList @ 0x14030D990 (HalGetScatterGatherList.c)
 *     HalAllocateCommonBuffer @ 0x140380FF0 (HalAllocateCommonBuffer.c)
 *     IoMapTransferInternal @ 0x1403885EC (IoMapTransferInternal.c)
 *     IoFlushAdapterBuffers @ 0x140389720 (IoFlushAdapterBuffers.c)
 *     IoFreeMapRegisters @ 0x1403A25A0 (IoFreeMapRegisters.c)
 *     HalJoinDmaDomain @ 0x1403C6AE0 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x1404B89F0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B8A44 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404B8A98 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404B8B74 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8BA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B8C00 (HalpDmaNextContiguousPiece.c)
 *     IoFreeAdapterChannel @ 0x1404B8C60 (IoFreeAdapterChannel.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C6C2C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV2 @ 0x140763E30 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407C3B70 (HalGetAdapterV3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetAdapterVersion(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 148);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
