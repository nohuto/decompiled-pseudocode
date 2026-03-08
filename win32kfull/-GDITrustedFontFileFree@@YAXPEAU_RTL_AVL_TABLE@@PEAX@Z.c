/*
 * XREFs of ?GDITrustedFontFileFree@@YAXPEAU_RTL_AVL_TABLE@@PEAX@Z @ 0x1C02901D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GDITrustedFontFileFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x66667447u);
}
