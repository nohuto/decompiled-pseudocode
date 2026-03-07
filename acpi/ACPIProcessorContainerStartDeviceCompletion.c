void __fastcall ACPIProcessorContainerStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rcx
  char v5; // di
  char v6; // bp
  char v7; // si
  unsigned int MinorFunction; // r14d
  const char *v9; // rcx
  const char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
  v5 = 0;
  v6 = a3;
  v7 = (char)a2;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    *(_DWORD *)(a1 + 368) = 2;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPIProcessorContainerStartDeviceWorker;
    v4->Parameter = v4;
    v4->List.Flink = 0LL;
    v4[1].List.Flink = *(_LIST_ENTRY **)(a1 + 768);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
  else
  {
    IofCompleteRequest(a2, 0);
    v9 = (const char *)&unk_1C00622D0;
    v10 = (const char *)&unk_1C00622D0;
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v5 = a1;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(a1 + 608);
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = MinorFunction;
      if ( MinorFunction >= 0x1A )
        v12 = 26LL;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0xAu,
        (__int64)&WPP_66d879e7691833cab0aaa4978b270939_Traceguids,
        v7,
        (__int64)(&ACPIDispatchPnpTableNames)[v12],
        v6,
        v5,
        v9,
        v10);
    }
  }
}
