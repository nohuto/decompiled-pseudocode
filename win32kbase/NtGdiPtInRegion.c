/*
 * XREFs of NtGdiPtInRegion @ 0x1C0185900
 * Callers:
 *     <none>
 * Callees:
 *     GrePtInRegion @ 0x1C0007000 (GrePtInRegion.c)
 */

__int64 __fastcall NtGdiPtInRegion(HRGN a1, LONG a2, LONG a3)
{
  return GrePtInRegion(a1, a2, a3);
}
