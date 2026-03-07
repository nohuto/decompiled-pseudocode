void __fastcall ACPIFilterIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rcx

  a2->IoStatus.Status = a3;
  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
  if ( a3 < 0 )
  {
    IofCompleteRequest(a2, 0);
  }
  else
  {
    *(_DWORD *)(a1 + 368) = 2;
    v4->List.Flink = 0LL;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPIFilterIrpStartDeviceWorker;
    v4->Parameter = v4;
    v4[1].List.Flink = *(_LIST_ENTRY **)(a1 + 768);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
}
