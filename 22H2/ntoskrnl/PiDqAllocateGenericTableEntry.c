/*
 * XREFs of PiDqAllocateGenericTableEntry @ 0x1406A3D20
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiDqAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x58706E50u);
}
