/*
 * XREFs of NtGdiSelectFont @ 0x1C00BF9F0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
