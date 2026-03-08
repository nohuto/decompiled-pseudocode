/*
 * XREFs of RtlPerformRetpolineRelocationsOnImage @ 0x14067800C
 * Callers:
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14067804C (RtlPerformRetpolineRelocationsOnImageEx.c)
 */

__int64 __fastcall RtlPerformRetpolineRelocationsOnImage(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  return RtlPerformRetpolineRelocationsOnImageEx(a1, a2, a3, a4, a5, a6, 0LL, 0LL, 0);
}
