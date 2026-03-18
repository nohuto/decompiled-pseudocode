/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C002DFB0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C002E050 (GreCreateCompatibleDC.c)
 */

__int64 __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
