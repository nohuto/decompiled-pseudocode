/*
 * XREFs of MiWakeFileOnlyReaper @ 0x14063E05C
 * Callers:
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x14063CCC0 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140C653A9 )
  {
    stru_140C65368.List.Flink = 0LL;
    stru_140C65368.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140C65368.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140C65368, DelayedWorkQueue);
    byte_140C653A9 = 1;
  }
}
