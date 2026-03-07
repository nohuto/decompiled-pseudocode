void __fastcall DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback(struct _KEVENT *a1)
{
  struct _KEVENT *v2; // rsi
  struct _KEVENT *v3; // rdi
  void (__fastcall ***v4)(_QWORD); // rax
  struct _LIST_ENTRY *Flink; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v2 = a1 + 1;
  a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  while ( 1 )
  {
    v3 = *(struct _KEVENT **)&v2->Header.Lock;
    if ( *(struct _KEVENT **)(*(_QWORD *)&v2->Header.Lock + 8LL) != v2
      || (v4 = *(void (__fastcall ****)(_QWORD))&v3->Header.Lock,
          *(struct _KEVENT **)(*(_QWORD *)&v3->Header.Lock + 8LL) != v3) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)&v2->Header.Lock = v4;
    v4[1] = (void (__fastcall **)(_QWORD))v2;
    if ( v3 == v2 )
      break;
    a1->Header.WaitListHead.Flink = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    ((void (__fastcall *)(_QWORD))v3->Header.WaitListHead.Blink)(*(_QWORD *)&v3[1].Header.Lock);
    Flink = v3[1].Header.WaitListHead.Flink;
    if ( Flink )
      ((void (__fastcall *)(_QWORD))Flink)(*(_QWORD *)&v3[1].Header.Lock);
    ExFreePoolWithTag(v3, 0);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    --LODWORD(a1[1].Header.WaitListHead.Blink);
  }
  KeSetEvent(a1 + 2, 0, 0);
  a1->Header.WaitListHead.Flink = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
