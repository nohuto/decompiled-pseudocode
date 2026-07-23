/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x140698EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiPnpRtlOperationAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x41706E50u);
}
