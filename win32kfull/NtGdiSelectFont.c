/*
 * XREFs of NtGdiSelectFont @ 0x1C0116920
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C0116F84 (GreSelectFontInternal.c)
 */

__int64 __fastcall NtGdiSelectFont(__int64 a1, __int64 a2)
{
  return GreSelectFontInternal(a1, a2, 0LL);
}
