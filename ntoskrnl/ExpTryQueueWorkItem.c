/*
 * XREFs of ExpTryQueueWorkItem @ 0x140308AAC
 * Callers:
 *     IoTryQueueWorkItem @ 0x140300920 (IoTryQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x140308A80 (ExTryQueueWorkItem.c)
 * Callees:
 *     MmGetNextNode @ 0x1402AB0A0 (MmGetNextNode.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402F6A24 (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x14033F350 (ExpIsPoolReadyForWork.c)
 *     ExpValidateWorkItem @ 0x14033F620 (ExpValidateWorkItem.c)
 *     KeInsertPriQueue @ 0x14033F6C0 (KeInsertPriQueue.c)
 *     ExpTypeToPriority @ 0x140343758 (ExpTypeToPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExpTryQueueWorkItem(__int64 a1, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  int v4; // r12d
  char inserted; // r15
  __int64 CurrentIrql; // rbx
  int v9; // esi
  unsigned __int16 NextNode; // ax
  unsigned __int16 *v11; // r14
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+34h] [rbp-34h] BYREF
  __int64 v25; // [rsp+38h] [rbp-30h]

  v4 = a2;
  v24 = 0;
  inserted = 0;
  ExpValidateWorkItem(a2);
  v23 = ExpTypeToPriority(a3);
  CurrentIrql = KeGetCurrentIrql();
  v25 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v17) = 4;
    if ( (_BYTE)CurrentIrql != 2 )
      v17 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v17;
  }
  v9 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  NextNode = v9;
  if ( (unsigned __int16)v9 < (unsigned __int16)KeNumberNodes )
  {
    while ( 1 )
    {
      v11 = (unsigned __int16 *)KeNodeBlock[NextNode];
      if ( v11 == (unsigned __int16 *)((char *)&KiNodeInit + 304 * NextNode) )
        v11 = 0LL;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(a1, v11, a4) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *v11) + 8LL * (int)a4);
        if ( (v14 & 1) != 0 )
          v14 = 0LL;
        inserted = KeInsertPriQueue(v14, v4, v23, v12, v13);
        if ( inserted )
        {
LABEL_9:
          LOBYTE(CurrentIrql) = v25;
          break;
        }
        *(_DWORD *)(v14 + 716) |= 0x80000000;
        ExpPartitionCreateThreadIfNecessary(a1, (__int64)v11, v14);
      }
      NextNode = MmGetNextNode(v9, &v24);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_9;
    }
  }
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v18 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v22 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return inserted;
}
