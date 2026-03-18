/*
 * XREFs of MiRemovePendingBadPageNode @ 0x14062A978
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x14064DF24 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall MiRemovePendingBadPageNode(unsigned __int64 a1)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 **v3; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67410);
  v2 = (unsigned __int64 *)qword_140C67400;
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
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C67400, v2);
    v3 = (unsigned __int64 **)qword_140C67428;
    if ( *(PVOID **)qword_140C67428 != &qword_140C67420 )
      __fastfail(3u);
    v2[1] = qword_140C67428;
    *v2 = (unsigned __int64)&qword_140C67420;
    *v3 = v2;
    qword_140C67428 = (__int64)v2;
    if ( (unsigned __int64)++qword_140C67430 >= 0x20 && !byte_140C67438 )
    {
      stru_140C67440.Parameter = 0LL;
      stru_140C67440.List.Flink = 0LL;
      stru_140C67440.WorkerRoutine = (void (__fastcall *)(void *))MiDeletePendingBadPageNodesAwaitingDeleteList;
      ExQueueWorkItem(&stru_140C67440, DelayedWorkQueue);
      byte_140C67438 = 1;
    }
  }
  else
  {
    --qword_140C67418;
  }
  --qword_140C67408;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67410);
}
