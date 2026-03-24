/*
 * XREFs of HalpMapEarlyPages @ 0x1404BC920
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x1403BB2D8 (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapEarlyPages(__int64 a1, __int64 a2, unsigned int a3)
{
  return HalpMap(a1, a2, 1u, 0LL, a3);
}
