/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00BAFD8
 * Callers:
 *     UmfdUninitializeThread @ 0x1C00BAFC0 (UmfdUninitializeThread.c)
 *     UmfdDispatchEscape @ 0x1C00BB270 (UmfdDispatchEscape.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C00BB0B4 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C00BB0E8 (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00BBD4C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00BCA88 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00BCAB0 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C03091C8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

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
