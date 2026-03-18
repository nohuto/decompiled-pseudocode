/*
 * XREFs of MiDeletePageFileMemoryExtents @ 0x140A47284
 * Callers:
 *     MiDeletePagefile @ 0x140A32870 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A46F68 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x1403C337C (MiFreeContiguousPages.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePageFileMemoryExtents(_QWORD *P)
{
  MiFreeContiguousPages(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1));
  ExFreePoolWithTag(P, 0);
}
