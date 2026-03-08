/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x1407850B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlOperationAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1097887312LL);
}
