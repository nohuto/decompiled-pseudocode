/*
 * XREFs of HalCalculateScatterGatherListSizeV2 @ 0x1403AF830
 * Callers:
 *     <none>
 * Callees:
 *     HalpCalculateScatterGatherListSize @ 0x1403B4390 (HalpCalculateScatterGatherListSize.c)
 */

__int64 __fastcall HalCalculateScatterGatherListSizeV2(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return HalpCalculateScatterGatherListSize(a1, a2, a3, a4, a5, a6, 0LL);
}
