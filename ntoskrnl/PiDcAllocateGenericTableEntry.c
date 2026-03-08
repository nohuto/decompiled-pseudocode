/*
 * XREFs of PiDcAllocateGenericTableEntry @ 0x14085F160
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDcAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1198550608LL);
}
