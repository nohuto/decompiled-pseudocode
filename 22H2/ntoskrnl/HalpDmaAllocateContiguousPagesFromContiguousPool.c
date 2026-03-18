/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14045ACFA
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14045B93E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140934000 (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B91D4 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x14045D59E (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x1404FF0F8 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPool(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV2(v1, v2);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v1, v2);
}
