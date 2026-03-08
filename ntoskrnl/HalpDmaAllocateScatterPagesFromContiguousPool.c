/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1404FF03C
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14045399E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14050E378 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1409312D8 (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     HalpDmaGetMasterAdapterVersion @ 0x140452E04 (HalpDmaGetMasterAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404FD2D4 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x14051385C (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        ULONG *a6)
{
  __int64 v6; // rcx
  ULONG v7; // r8d
  int v8; // r9d
  __int64 v9; // r10

  if ( (unsigned int)HalpDmaGetMasterAdapterVersion(a2) == 2 )
    return HalpDmaAllocateScatterPagesFromContiguousPoolV2(v6, v9, v7, v8, a5, (__int64)a6);
  else
    return HalpDmaAllocateScatterPagesFromContiguousPoolV3(v6, v9, v7, v8, a5, a6);
}
