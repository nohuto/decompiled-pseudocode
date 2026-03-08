/*
 * XREFs of PiDmAllocateGenericTableEntry @ 0x14086F520
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1517317712LL);
}
