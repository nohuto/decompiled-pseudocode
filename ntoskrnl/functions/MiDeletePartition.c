void __fastcall MiDeletePartition(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx

  v1 = *P;
  MiDrainCrossPartitionUsage();
  MiDeletePartitionResources((_DWORD)P);
  MiFreePartitionId(v1);
  ExFreePoolWithTag(P, 0);
}
