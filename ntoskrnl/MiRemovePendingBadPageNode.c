/*
 * XREFs of MiRemovePendingBadPageNode @ 0x1406284EC
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x14064B908 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall MiRemovePendingBadPageNode(unsigned __int64 a1)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 **v3; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66F90);
  v2 = (unsigned __int64 *)qword_140C66F80;
  while ( v2 )
  {
    if ( a1 <= v2[3] )
    {
      if ( a1 >= v2[3] )
        break;
      v2 = (unsigned __int64 *)*v2;
    }
    else
    {
      v2 = (unsigned __int64 *)v2[1];
    }
  }
  if ( v2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C66F80, v2);
    v3 = (unsigned __int64 **)qword_140C66FA8;
    if ( *(PVOID **)qword_140C66FA8 != &qword_140C66FA0 )
      __fastfail(3u);
    v2[1] = qword_140C66FA8;
    *v2 = (unsigned __int64)&qword_140C66FA0;
    *v3 = v2;
    qword_140C66FA8 = (__int64)v2;
    if ( (unsigned __int64)++qword_140C66FB0 >= 0x20 && !byte_140C66FB8 )
    {
      stru_140C66FC0.Parameter = 0LL;
      stru_140C66FC0.List.Flink = 0LL;
      stru_140C66FC0.WorkerRoutine = (void (__fastcall *)(void *))MiDeletePendingBadPageNodesAwaitingDeleteList;
      ExQueueWorkItem(&stru_140C66FC0, DelayedWorkQueue);
      byte_140C66FB8 = 1;
    }
  }
  else
  {
    --qword_140C66F98;
  }
  --qword_140C66F88;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66F90);
}
