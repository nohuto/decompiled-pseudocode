/*
 * XREFs of MiDeletePageFileMemoryExtents @ 0x140A445B4
 * Callers:
 *     MiDeletePagefile @ 0x140A2FB40 (MiDeletePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A44298 (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x1403BDABC (MiFreeContiguousPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePageFileMemoryExtents(_QWORD *P)
{
  MiFreeContiguousPages(P[4], (unsigned int)(*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1));
  ExFreePoolWithTag(P, 0);
}
