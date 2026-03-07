void __fastcall PsSetVmProcessorHostProcess(_QWORD *a1)
{
  volatile signed __int32 *v1; // rbx
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  signed __int64 v4; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-28h] BYREF
  __int64 v8; // [rsp+80h] [rbp+10h] BYREF

  v1 = (volatile signed __int32 *)a1 + 543;
  memset(&Event, 0, sizeof(Event));
  memset(&WorkItem, 0, sizeof(WorkItem));
  _m_prefetchw((char *)a1 + 2172);
  v2 = *((_DWORD *)a1 + 543);
  for ( LODWORD(v8) = v2; ; LODWORD(v8) = v2 )
  {
    if ( (v2 & 0x800000) != 0 )
    {
      if ( (v2 & 0x1000000) != 0 )
      {
        do
        {
          ExBlockOnAddressPushLock((__int64)&PsVmProcessorHostTransitionEvent, v1, &v8, 4uLL, 0LL);
          LODWORD(v8) = *v1;
        }
        while ( (v8 & 0x1000000) != 0 );
      }
      return;
    }
    v3 = v2;
    v2 = _InterlockedCompareExchange(v1, v2 | 0x1800000, v2);
    if ( v3 == v2 )
      break;
  }
  if ( !a1[316] )
  {
    _InterlockedOr(v1, 0x200000u);
    v4 = _InterlockedIncrement64(&PsNextSecurityDomain);
    a1[316] = v4;
    a1[317] = v4;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspSetVmProcessorHostProcessWorkerRoutine;
  WorkItem.Parameter = &Event;
  ExQueueWorkItem(&WorkItem, CriticalWorkQueue);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  _InterlockedAnd(v1, 0xFEFFFFFF);
  _InterlockedOr(v5, 0);
  if ( PsVmProcessorHostTransitionEvent )
    ExfUnblockPushLock(&PsVmProcessorHostTransitionEvent, 0LL);
}
