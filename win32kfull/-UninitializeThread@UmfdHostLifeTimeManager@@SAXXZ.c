void UmfdHostLifeTimeManager::UninitializeThread(void)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rcx
  struct UmfdTls *v2; // rbx
  void *ServerPort; // rdi
  CMultipleConsumerWorkQueue::CWaitableWorkItem **v4; // rbx
  __int64 v5; // rax
  void *v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 352) )
  {
    UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock((UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *)&v7);
    *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v1) + 32) + 23536LL) = 0;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
    v2 = UmfdTls::EnsureTls();
    ServerPort = (void *)UmfdGetServerPort(*((unsigned int *)v2 + 2));
    if ( ServerPort )
    {
      v4 = (CMultipleConsumerWorkQueue::CWaitableWorkItem **)*((_QWORD *)v2 + 2);
      if ( v4 )
      {
        if ( *v4 )
        {
          CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(*v4);
          *v4 = 0LL;
        }
        EngFreeMem(v4);
      }
      UmfdCancelServerOutstandingRequests(ServerPort);
    }
    v5 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v5 )
    {
      v6 = *(void **)(v5 + 352);
      if ( v6 )
      {
        *(_QWORD *)(v5 + 352) = 0LL;
        UmfdTls::Destroy(v6);
      }
    }
  }
}
