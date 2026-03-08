/*
 * XREFs of EtwpAllocateKeyNameEntry @ 0x14039D7B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateKeyNameEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1953985605LL);
}
