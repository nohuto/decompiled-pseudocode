/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1406404BC
 * Callers:
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x14063F128 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140C65829 )
  {
    stru_140C657E8.List.Flink = 0LL;
    stru_140C657E8.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140C657E8.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140C657E8, DelayedWorkQueue);
    byte_140C65829 = 1;
  }
}
