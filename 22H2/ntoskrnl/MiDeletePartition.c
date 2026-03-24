/*
 * XREFs of MiDeletePartition @ 0x14053561C
 * Callers:
 *     MmCreatePartition @ 0x1403CA2A4 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x14090D0E0 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x140561858 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x140561FDC (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1408C7C0C (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartition(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx

  v1 = *P;
  MiDrainCrossPartitionUsage();
  MiDeletePartitionResources(P);
  MiFreePartitionId(v1);
  ExFreePoolWithTag(P, 0);
}
