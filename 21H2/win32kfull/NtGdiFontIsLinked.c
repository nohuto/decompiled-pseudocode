/*
 * XREFs of NtGdiFontIsLinked @ 0x1C01118C0
 * Callers:
 *     <none>
 * Callees:
 *     GreFontIsLinked @ 0x1C01118D8 (GreFontIsLinked.c)
 */

__int64 __fastcall NtGdiFontIsLinked(HDC a1)
{
  return GreFontIsLinked(a1);
}
