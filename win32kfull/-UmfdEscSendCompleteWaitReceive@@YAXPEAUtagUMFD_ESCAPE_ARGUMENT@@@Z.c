/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00BB270 (UmfdDispatchEscape.c)
 * Callees:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C00BC724 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C00BD100 (-WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C00BD190 (-DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C011F1FC (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C011FE60 (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C03091C8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     ?Complete@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C0309200 (-Complete@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  struct tagUMFD_ESCAPE_ARGUMENT *v1; // r12
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rcx
  union _SLIST_HEADER **v16; // rbx
  struct CWorkItemQueue::CWorkItem **v17; // rsi
  struct CWorkItemQueue::CWorkItem **RequestContext; // r13
  struct CWorkItemQueue::CWorkItem *v19; // r14
  char v20; // al
  PSLIST_ENTRY v21; // rax
  __int64 v22; // r9
  struct CWorkItemQueue::CWorkItem *v23; // rbx
  CWorkItemQueue *v24; // rbx
  PSLIST_ENTRY v25; // rax
  unsigned int v26; // r12d
  int v27; // r14d
  __int64 v28; // rsi
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rbx
  char v34; // r15
  CWorkItemQueue *v35; // rcx
  signed __int32 v36[8]; // [rsp+0h] [rbp-98h] BYREF
  CWorkItemQueue *v37; // [rsp+30h] [rbp-68h]
  _QWORD *v38; // [rsp+38h] [rbp-60h]
  _QWORD *v39; // [rsp+40h] [rbp-58h]
  int *v40; // [rsp+48h] [rbp-50h]
  CWorkItemQueue **v42; // [rsp+A8h] [rbp+10h]
  int v43; // [rsp+A8h] [rbp+10h]
  __int64 v44; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v45; // [rsp+B8h] [rbp+20h] BYREF

  v1 = a1;
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( v2 )
  {
    if ( !*(_QWORD *)(v2 + 352) )
      *(_QWORD *)(v2 + 352) = UmfdTls::Create();
    v4 = *(_QWORD *)(v2 + 352);
    if ( v4 )
    {
      v38 = (_QWORD *)(v4 + 48);
      *(_QWORD *)(v4 + 48) = 0LL;
      v39 = (_QWORD *)(v4 + 40);
      *(_QWORD *)(v4 + 40) = 0LL;
      v40 = (int *)(v4 + 32);
      if ( *(int *)(v4 + 32) >= 0 )
      {
        v5 = 0LL;
        v6 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v6 )
          v5 = *v6;
        if ( !v5 )
          goto LABEL_85;
        if ( !*(_QWORD *)(v5 + 352) )
          *(_QWORD *)(v5 + 352) = UmfdTls::Create();
        v7 = *(_QWORD *)(v5 + 352);
        if ( !v7 )
          goto LABEL_85;
        v8 = *(_QWORD *)(v7 + 24);
        if ( v8 && **(_QWORD **)v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      }
      v9 = *((int *)v1 + 10);
      v10 = 0LL;
      v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v11 )
        v10 = *v11;
      if ( !v10 )
        goto LABEL_85;
      if ( !*(_QWORD *)(v10 + 352) )
        *(_QWORD *)(v10 + 352) = UmfdTls::Create();
      v13 = *(_QWORD *)(v10 + 352);
      if ( !v13 )
      {
LABEL_85:
        v27 = -1073741801;
        goto LABEL_70;
      }
      if ( (unsigned int)v9 <= 3 )
      {
        v14 = *(_DWORD *)(v13 + 8);
        if ( v14 == -1 )
        {
          *(_DWORD *)(v13 + 8) = v9;
LABEL_26:
          v15 = *(_QWORD *)(SGDGetSessionState(v12) + 40);
          _mm_lfence();
          v16 = *(union _SLIST_HEADER ***)(v15 + 8 * v9 + 48);
          v42 = (CWorkItemQueue **)v16;
          if ( !v16 )
          {
LABEL_73:
            v27 = -1073740032;
            goto LABEL_70;
          }
          v17 = *(struct CWorkItemQueue::CWorkItem ***)(v13 + 16);
          if ( v17 )
          {
            RequestContext = *(struct CWorkItemQueue::CWorkItem ***)(v13 + 16);
          }
          else
          {
            RequestContext = (struct CWorkItemQueue::CWorkItem **)UmfdCreateRequestContext();
            if ( !RequestContext )
              goto LABEL_85;
          }
          v44 = 0LL;
          v19 = 0LL;
          if ( v17 )
          {
            v19 = *v17;
            if ( !*v17 )
            {
              v27 = -1073741811;
              goto LABEL_68;
            }
          }
          if ( RequestContext )
          {
            if ( RequestContext != v17 && *RequestContext )
            {
              v27 = -1073741811;
              goto LABEL_68;
            }
            v20 = 15;
          }
          else
          {
            v20 = 7;
          }
          if ( v20 != 15 )
          {
            v27 = -1073741811;
            goto LABEL_68;
          }
          if ( v19 )
          {
            *v17 = 0LL;
            KeResetEvent(*(PRKEVENT *)(*v16)->Region);
            _InterlockedOr(v36, 0);
            v21 = ExpInterlockedPopEntrySList(*v16 + 1);
            v23 = (struct CWorkItemQueue::CWorkItem *)v21;
            _InterlockedOr(v36, 0);
            if ( v21 )
            {
              *((_DWORD *)&v21->Next + 2) = 2;
            }
            else if ( !*(_BYTE *)*v42 )
            {
              *((_DWORD *)v19 + 2) = 3;
              v24 = *v42;
              v37 = v24;
              LOBYTE(v22) = 1;
              if ( (unsigned int)WdSetEventAndWaitForSingleObject(
                                   **(_QWORD **)(*((_QWORD *)v19 + 5) + 8LL),
                                   **((_QWORD **)v24 + 1),
                                   6LL,
                                   v22,
                                   0LL) == 192 )
              {
                KeSetEvent(**((PRKEVENT **)v24 + 1), 1, 0);
                v23 = CWorkItemQueue::DequeueWorkItem(v24);
                goto LABEL_41;
              }
              v25 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v24 + 1);
              v23 = (struct CWorkItemQueue::CWorkItem *)v25;
              _InterlockedOr(v36, 0);
              if ( v25 )
              {
                *((_DWORD *)&v25->Next + 2) = 2;
LABEL_41:
                if ( !v23 )
                {
LABEL_67:
                  v27 = -1073741823;
                  goto LABEL_68;
                }
                v26 = *((_DWORD *)v23 + 7);
                if ( v26 <= 8 )
                {
                  *RequestContext = v23;
                  memmove(&v44, *((const void **)v23 + 2), v26);
                  v27 = 0;
                  if ( v26 == 8 )
                  {
                    if ( !v17 )
                      *(_QWORD *)(v13 + 16) = RequestContext;
                    *(_QWORD *)(v13 + 24) = v44;
                    v1 = a1;
LABEL_47:
                    if ( v27 >= 0 )
                    {
                      v28 = 0LL;
                      v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v29 )
                        v28 = *v29;
                      if ( v28 )
                      {
                        if ( !*(_QWORD *)(v28 + 352) )
                          *(_QWORD *)(v28 + 352) = UmfdTls::Create();
                        v30 = *(_QWORD *)(v28 + 352);
                        if ( v30 )
                        {
                          v31 = *(_QWORD *)(v30 + 24);
                          if ( v31 )
                          {
                            v45 = 0LL;
                            v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v31 + 24LL))(
                                    v31,
                                    v30,
                                    &v45);
                            if ( v27 >= 0 )
                            {
                              v32 = v45;
                              v43 = *(_DWORD *)(v31 + 8);
                              v33 = *(_QWORD *)(v31 + 24);
                              v34 = *(_BYTE *)(v31 + 32);
                              ProbeForWrite(*((volatile void **)v1 + 1), 8uLL, 4u);
                              ProbeForWrite(*((volatile void **)v1 + 2), 4uLL, 4u);
                              ProbeForWrite(*((volatile void **)v1 + 4), 1uLL, 1u);
                              **((_QWORD **)v1 + 1) = v32;
                              **((_DWORD **)v1 + 2) = v43;
                              **((_BYTE **)v1 + 4) = v34;
                              if ( v34 )
                              {
                                ProbeForWrite(*((volatile void **)v1 + 3), 8uLL, 4u);
                                **((_QWORD **)v1 + 3) = v33;
                              }
                            }
                            if ( v27 >= 0 )
                              goto LABEL_59;
                            goto LABEL_70;
                          }
                          goto LABEL_73;
                        }
                      }
                      goto LABEL_85;
                    }
LABEL_70:
                    *v38 = 0LL;
                    *v39 = 0LL;
LABEL_59:
                    *((_DWORD *)v1 + 2) = v27;
                    *v40 = v27;
                    return;
                  }
                  v1 = a1;
                  goto LABEL_67;
                }
                if ( CWorkItemQueue::QueueWorkItem(*v42, v23) )
                {
                  v27 = -1073741789;
                }
                else
                {
                  CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(v23);
                  v27 = -1073740032;
                }
                v1 = a1;
LABEL_68:
                if ( !v17 )
                  EngFreeMem(RequestContext);
                goto LABEL_47;
              }
              v35 = v37;
LABEL_61:
              v23 = CWorkItemQueue::WaitForWorkItem(v35);
              goto LABEL_41;
            }
            CMultipleConsumerWorkQueue::CWaitableWorkItem::Complete(v19);
            goto LABEL_41;
          }
          v35 = (CWorkItemQueue *)*v16;
          goto LABEL_61;
        }
        if ( v14 == (_DWORD)v9 )
          goto LABEL_26;
      }
      v27 = -1073741811;
      goto LABEL_70;
    }
  }
  *((_DWORD *)v1 + 2) = -1073741801;
}
