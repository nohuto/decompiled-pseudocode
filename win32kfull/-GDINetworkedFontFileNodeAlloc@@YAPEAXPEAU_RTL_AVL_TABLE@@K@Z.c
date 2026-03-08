/*
 * XREFs of ?GDINetworkedFontFileNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C028D000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GDINetworkedFontFileNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(258LL, ByteSize, 1717988935LL);
}
