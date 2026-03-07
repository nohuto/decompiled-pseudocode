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
