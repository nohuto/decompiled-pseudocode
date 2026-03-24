/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C003C710
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C003C7B0 (GreCreateCompatibleDC.c)
 */

__int64 __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
