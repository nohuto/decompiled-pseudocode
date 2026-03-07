__int64 __fastcall EmRemoveBadS3PagesCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5, int a6)
{
  int v6; // eax

  if ( !a5 || a6 != 1 )
    return 1LL;
  v6 = *a5;
  PersistBadS3PageWorkItem.Parameter = 0LL;
  PersistBadS3PageWorkItem.List.Flink = 0LL;
  EmpBadS3Page = v6;
  PersistBadS3PageWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EmpRemoveBadS3PageWorker;
  ExQueueWorkItem(&PersistBadS3PageWorkItem, DelayedWorkQueue);
  return 2LL;
}
