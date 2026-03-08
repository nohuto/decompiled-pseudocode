/*
 * XREFs of MiDeletePartitionPageNode @ 0x140656DFC
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x140656C50 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x140656E28 (MiDeletePartitionPageNodes.c)
 *     MiFreePartitionTree @ 0x1406578D0 (MiFreePartitionTree.c)
 *     MiPartitionDeleteMemoryNode @ 0x140658BB8 (MiPartitionDeleteMemoryNode.c)
 *     MiHotAddPartitionMemory @ 0x140A4203C (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
