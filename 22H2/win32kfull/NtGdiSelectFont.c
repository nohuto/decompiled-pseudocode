/*
 * XREFs of NtGdiSelectFont @ 0x1C0045E60
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C016C948 (GreSelectFontInternal.c)
 */

__int64 __fastcall NtGdiSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
