/*
 * XREFs of MiDeletePartition @ 0x140626F80
 * Callers:
 *     MmCreatePartition @ 0x1403A6A3C (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x1409B3730 (PspTeardownPartition.c)
 * Callees:
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14065745C (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x140A2CD28 (MiFreePartitionId.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartition(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx

  v1 = *P;
  MiDrainCrossPartitionUsage();
  MiDeletePartitionResources((_DWORD)P);
  MiFreePartitionId(v1);
  ExFreePoolWithTag(P, 0);
}
