void __fastcall ExpNodeHotAddProcessorWorker(unsigned __int16 *a1)
{
  void *v2; // rcx
  int v3; // eax
  void *NextPartition; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  KeSynchronizeWithDynamicProcessors();
  v2 = 0LL;
  while ( 1 )
  {
    NextPartition = PsGetNextPartition(v2);
    v7 = NextPartition;
    if ( !NextPartition )
      break;
    v3 = ExpWorkQueueManagerStart(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextPartition + 2) + 16LL) + 8LL * *a1),
           *a1,
           v5,
           v6);
    v2 = v7;
    if ( v3 < 0 )
    {
      PsQuitNextPartition(v7);
      Interval.QuadPart = -500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      *((_QWORD *)a1 + 38) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 152), DelayedWorkQueue);
      return;
    }
  }
}
