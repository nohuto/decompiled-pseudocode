/*
 * XREFs of HalpDmaAllocateScatterPagesFromScatterPool @ 0x140452DAE
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14045399E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14050E378 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1409312D8 (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     HalpDmaGetMasterAdapterVersion @ 0x140452E04 (HalpDmaGetMasterAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV2 @ 0x1404557C0 (HalpDmaAllocateScatterPagesFromScatterPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x1404FD590 (HalpDmaAllocateScatterPagesFromScatterPoolV3.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromScatterPool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d

  if ( (unsigned int)HalpDmaGetMasterAdapterVersion(a2) == 2 )
    return HalpDmaAllocateScatterPagesFromScatterPoolV2(v6, v9, v7, v8, a5, a6);
  else
    return HalpDmaAllocateScatterPagesFromScatterPoolV3(v6, v9, v7, v8, a5, a6);
}
