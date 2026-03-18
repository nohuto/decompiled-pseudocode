/*
 * XREFs of ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C0011080
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0010E28 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@_N@Z @ 0x1C00E16D0 (-WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@_N@Z.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C011C498 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C01211CC (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C01242D8 (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02DC998 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

__int64 __fastcall UmfdHostSendCompleteWaitReceive(int a1)
{
  __int64 v1; // rbx
  __int64 *ThreadWin32Thread; // rax
  bool v3; // dl
  __int64 v4; // rsi
  struct UmfdTls *v5; // rdi
  int v6; // eax
  CWorkItemQueue **v7; // r15
  struct CWorkItemQueue::CWorkItem **v8; // rsi
  struct CWorkItemQueue::CWorkItem *v9; // rax
  struct CWorkItemQueue::CWorkItem **RequestContext; // r14
  struct CWorkItemQueue::CWorkItem *v11; // rax
  CMultipleConsumerWorkQueue::CWaitableWorkItem *v12; // rbx
  unsigned int v13; // ebp
  unsigned int v14; // ebx
  struct UmfdTls *v16; // rax
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 3221225495LL;
  v4 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return 3221225495LL;
  v5 = *(struct UmfdTls **)(v4 + 352);
  if ( !v5 )
  {
    v16 = UmfdTls::Create();
    *(_QWORD *)(v4 + 352) = v16;
    v5 = v16;
    if ( !v16 )
      return 3221225495LL;
  }
  if ( (unsigned int)v1 > 3 )
    return 3221225485LL;
  v6 = *((_DWORD *)v5 + 2);
  if ( v6 == -1 )
  {
    *((_DWORD *)v5 + 2) = v1;
    goto LABEL_7;
  }
  if ( v6 != (_DWORD)v1 )
    return 3221225485LL;
LABEL_7:
  _mm_lfence();
  v7 = (CWorkItemQueue **)g_pUmfdServerPort[v1];
  if ( v7 )
  {
    v8 = (struct CWorkItemQueue::CWorkItem **)*((_QWORD *)v5 + 2);
    if ( v8 )
    {
      v17 = 0LL;
      v9 = *v8;
      if ( !*v8 )
        return (unsigned int)-1073741811;
      RequestContext = v8;
      goto LABEL_11;
    }
    RequestContext = (struct CWorkItemQueue::CWorkItem **)UmfdCreateRequestContext();
    if ( RequestContext )
    {
      v17 = 0LL;
      v9 = 0LL;
      if ( *RequestContext )
      {
        v14 = -1073741811;
        goto LABEL_25;
      }
LABEL_11:
      if ( v9 )
      {
        *((_DWORD *)v9 + 2) = 3;
        KeSetEvent(**(PRKEVENT **)(*((_QWORD *)v9 + 5) + 8LL), 1, 0);
        *v8 = 0LL;
      }
      v11 = CWorkItemQueue::WaitForWorkItem(*v7, v3);
      v12 = v11;
      if ( v11 )
      {
        v13 = *((_DWORD *)v11 + 7);
        if ( v13 > 8 )
        {
          if ( CWorkItemQueue::QueueWorkItem(*v7, v11) )
          {
            v14 = -1073741789;
          }
          else
          {
            CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(v12);
            v14 = -1073740032;
          }
LABEL_25:
          if ( !v8 )
            EngFreeMem(RequestContext);
          return v14;
        }
        *RequestContext = v11;
        memmove(&v17, *((const void **)v11 + 2), v13);
        v14 = 0;
        if ( v13 == 8 )
        {
          if ( !v8 )
            *((_QWORD *)v5 + 2) = RequestContext;
          *((_QWORD *)v5 + 3) = v17;
          return v14;
        }
      }
      v14 = -1073741823;
      goto LABEL_25;
    }
    return 3221225495LL;
  }
  return 3221227264LL;
}
