/*
 * XREFs of MiDeletePartitionPageNode @ 0x140659438
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x14065928C (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x140659464 (MiDeletePartitionPageNodes.c)
 *     MiFreePartitionTree @ 0x140659F08 (MiFreePartitionTree.c)
 *     MiPartitionDeleteMemoryNode @ 0x14065B1FC (MiPartitionDeleteMemoryNode.c)
 *     MiHotAddPartitionMemory @ 0x140A44D10 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
