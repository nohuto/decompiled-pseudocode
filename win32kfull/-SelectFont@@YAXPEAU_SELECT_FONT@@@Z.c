/*
 * XREFs of ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0242040
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C0116F84 (GreSelectFontInternal.c)
 */

void __fastcall SelectFont(struct _SELECT_FONT *a1)
{
  GreSelectFontInternal(*(_QWORD *)a1, *((_QWORD *)a1 + 1), 1);
}
