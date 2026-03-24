/*
 * XREFs of NtGdiFontIsLinked @ 0x1C0111540
 * Callers:
 *     <none>
 * Callees:
 *     GreFontIsLinked @ 0x1C0111558 (GreFontIsLinked.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
