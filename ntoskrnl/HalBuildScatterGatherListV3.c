/*
 * XREFs of HalBuildScatterGatherListV3 @ 0x14050C9A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuildScatterGatherList @ 0x14050D490 (HalpBuildScatterGatherList.c)
 */

__int64 __fastcall HalBuildScatterGatherListV3(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        int a10)
{
  return HalpBuildScatterGatherList(
           a1,
           a2,
           0,
           a3,
           a4 - *(unsigned int *)(a3 + 44) - *(_QWORD *)(a3 + 32),
           a5,
           0,
           a6,
           a7,
           a8,
           a9,
           a10);
}
