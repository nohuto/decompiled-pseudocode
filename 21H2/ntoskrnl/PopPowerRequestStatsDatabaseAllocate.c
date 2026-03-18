/*
 * XREFs of PopPowerRequestStatsDatabaseAllocate @ 0x1406EA0F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerRequestStatsDatabaseAllocate(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1414616912LL);
}
