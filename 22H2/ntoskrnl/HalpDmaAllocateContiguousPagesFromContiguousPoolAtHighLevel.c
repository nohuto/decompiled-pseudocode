/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1405010F0
 * Callers:
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1405105C4 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B91D4 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x1404FF060 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x140515C38 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel(__int64 a1)
{
  __int64 v1; // rcx
  ULONG v2; // r8d
  __int64 v3; // r9

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2(v1, v3);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3(v1, v3, v2);
}
