/*
 * XREFs of NtGdiSelectFont @ 0x1C0045F00
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C016D258 (GreSelectFontInternal.c)
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
