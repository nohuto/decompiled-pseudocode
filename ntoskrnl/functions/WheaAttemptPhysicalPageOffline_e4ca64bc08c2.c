__int64 __fastcall WheaAttemptPhysicalPageOffline(__int64 a1, char a2, char a3, char a4)
{
  unsigned __int64 v6; // rcx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v9[2]; // [rsp+60h] [rbp+27h] BYREF
  char v10; // [rsp+70h] [rbp+37h]
  char v11; // [rsp+71h] [rbp+38h]
  __int16 v12; // [rsp+72h] [rbp+39h]
  __int128 v13; // [rsp+74h] [rbp+3Bh] BYREF
  __int64 Event_12; // [rsp+84h] [rbp+4Bh]
  int Event_20; // [rsp+8Ch] [rbp+53h]

  WorkItem.List.Blink = 0LL;
  v6 = (unsigned __int64)(unsigned int)a1 << 12;
  if ( KeGetCurrentThread()->PreviousMode != 1 || a4 )
    return WheapAttemptPhysicalPageOffline(v6, a1, 0, a2, a3, 0, a4);
  Event_12 = 0LL;
  Event_20 = 0;
  v12 = 0;
  v9[0] = v6;
  v9[1] = a1;
  v11 = a3;
  v13 = 0LL;
  v10 = a2;
  KeInitializeEvent((PRKEVENT)((char *)&v13 + 4), NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
  WorkItem.Parameter = v9;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject((char *)&v13 + 4, Executive, 0, 0, 0LL);
  return (unsigned int)v13;
}
