__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, __int64 a2)
{
  int v2; // r14d
  unsigned int v3; // ebx
  unsigned int v4; // r14d
  __int64 v6; // rax
  __int64 v7; // r11
  int v8; // r9d
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int64 Object; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]
  __int64 v15; // [rsp+98h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a2 + 6016);
  v3 = 0;
  WorkItem.List.Blink = 0LL;
  v4 = v2 & 0x3FF;
  BYTE3(Object) = 0;
  v14 = 0;
  v15 = 0LL;
  v6 = SmKmStoreRefFromStoreIndex(a1, v4);
  if ( v8 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v6 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v6 + 34) & 1) == 0 )
  {
    return v3;
  }
  if ( !*(_QWORD *)(v7 + 88) )
  {
    _m_prefetchw((const void *)(v6 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v6 + 34), 2u) & 2) == 0
      && (*(int (__fastcall **)(__int64, __int64 *, __int64))(a1 + 256))(a1, &v15, 8LL) >= 0 )
    {
      v12[1] = v12;
      v12[0] = v12;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
      WorkItem.Parameter = &WorkItem;
      WorkItem.List.Blink = 0LL;
      Object = 393216LL;
      v14 = 0;
      v12[2] = a1;
      v13 = v4;
      WorkItem.List.Flink = 0LL;
      if ( v15 )
        ExQueueWorkItemToPartition(&WorkItem, 1, 0xFFFFFFFF, v15);
      else
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v3;
}
