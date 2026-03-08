/*
 * XREFs of MiPartitionDeleteMemoryNode @ 0x140658BB8
 * Callers:
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeletePartitionPageNode @ 0x140656DFC (MiDeletePartitionPageNode.c)
 *     MiMakePartitionMemoryBlock @ 0x140A4242C (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiPartitionDeleteMemoryNode(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v6; // r15
  KIRQL v7; // al
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  if ( (unsigned __int16 *)a1 != MiSystemPartition )
  {
    v6 = (volatile LONG *)(a1 + 224);
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
    v8 = *(unsigned __int64 **)(a1 + 24);
    v9 = v7;
    if ( v8 )
    {
      v10 = a2 & 0x3FFFFFFFFFFFFFFFLL;
      do
      {
        v11 = v8[3] & 0x3FFFFFFFFFFFFFFFLL;
        if ( v10 >= v11 )
        {
          if ( v10 < v11 + v8[4] )
            break;
          v8 = (unsigned __int64 *)v8[1];
        }
        else
        {
          v8 = (unsigned __int64 *)*v8;
        }
      }
      while ( v8 );
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v8);
    *(_QWORD *)(a1 + 17040) -= a3;
    *(_BYTE *)(a1 + 12) = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v9);
    MiMakePartitionMemoryBlock(a1);
    MiDeletePartitionPageNode((PVOID *)v8);
  }
}
