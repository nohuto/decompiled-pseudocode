/*
 * XREFs of ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C024DBB0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 */

void __fastcall SelectFont(struct _SELECT_FONT *a1)
{
  GreSelectFontInternal(*(HDC *)a1, *((_QWORD *)a1 + 1), 1);
}
