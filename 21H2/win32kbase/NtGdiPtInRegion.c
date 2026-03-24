/*
 * XREFs of NtGdiPtInRegion @ 0x1C013EC80
 * Callers:
 *     <none>
 * Callees:
 *     GrePtInRegion @ 0x1C0085BF0 (GrePtInRegion.c)
 */

__int64 __fastcall NtGdiPtInRegion(HRGN a1, LONG a2, LONG a3)
{
  return GrePtInRegion(a1, a2, a3);
}
