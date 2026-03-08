/*
 * XREFs of ViPtAllocPoolInfoCallback @ 0x140ADBB80
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ViPtAllocPoolInfoCallback(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(64LL, ByteSize, 0x6E496956u);
}
