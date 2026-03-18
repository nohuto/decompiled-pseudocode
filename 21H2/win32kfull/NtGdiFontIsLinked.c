/*
 * XREFs of NtGdiFontIsLinked @ 0x1C0107820
 * Callers:
 *     <none>
 * Callees:
 *     GreFontIsLinked @ 0x1C0107838 (GreFontIsLinked.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
