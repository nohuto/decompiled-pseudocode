/*
 * XREFs of ?GDITrustedFontFileAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C028B1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall GDITrustedFontFileAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x66667447u);
}
