/*
 * XREFs of ?GDITrustedFontFileAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C0290160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GDITrustedFontFileAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(258LL, ByteSize, 1717990471LL);
}
