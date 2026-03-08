/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x1C0055780
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 */

HDC __fastcall NtGdiCreateCompatibleDC(HDC a1)
{
  return GreCreateCompatibleDC(a1);
}
