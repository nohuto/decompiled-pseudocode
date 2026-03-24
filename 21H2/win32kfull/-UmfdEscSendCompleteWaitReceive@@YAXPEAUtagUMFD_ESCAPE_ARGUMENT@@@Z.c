/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00A7AC0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00A7800 (UmfdDispatchEscape.c)
 * Callees:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C01317CC (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C01357F0 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02DFC54 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C02DFC8C (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1)
{
  volatile void **v1; // r12
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  struct UmfdTls *v8; // r15
  __int64 v9; // rcx
  struct _KTHREAD *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rax
  struct UmfdTls *v16; // rax
  __int64 v17; // r14
  struct _KTHREAD *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  struct UmfdTls *v24; // r13
  int v25; // ecx
  union _SLIST_HEADER **v26; // rbx
  __int64 *v27; // r14
  __int64 RequestContext; // rcx
  __int64 v29; // rax
  union _SLIST_HEADER *v30; // rsi
  PSLIST_ENTRY v31; // rax
  PSLIST_ENTRY v32; // rbx
  unsigned int v33; // r12d
  int v34; // esi
  struct _KTHREAD *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // rax
  struct UmfdTls *v41; // rdx
  __int64 v42; // rsi
  int v43; // eax
  __int64 v44; // r13
  int v45; // ecx
  __int64 v46; // rbx
  char v47; // r14
  PSLIST_ENTRY v48; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v51; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // ebx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // ebx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // [rsp+30h] [rbp-78h] BYREF
  __int64 v66; // [rsp+38h] [rbp-70h] BYREF
  struct UmfdTls *v67; // [rsp+40h] [rbp-68h]
  CWorkItemQueue **v68; // [rsp+48h] [rbp-60h]
  __int64 v69; // [rsp+50h] [rbp-58h]
  __int64 v70; // [rsp+58h] [rbp-50h]
  int v72; // [rsp+C0h] [rbp+18h]
  _QWORD *pv; // [rsp+C8h] [rbp+20h]

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v51),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    v8 = *(struct UmfdTls **)(v3 + 352);
    v67 = v8;
    if ( v8 || (v8 = UmfdTls::Create(), *(_QWORD *)(v3 + 352) = v8, (v67 = v8) != 0LL) )
    {
      *((_QWORD *)v8 + 6) = 0LL;
      *((_QWORD *)v8 + 5) = 0LL;
      v9 = *((unsigned int *)v8 + 8);
      if ( (int)v9 >= 0 )
      {
        v10 = KeGetCurrentThread();
        v11 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v9)
          || (v53 = PsGetCurrentProcess(v13, v12, v14),
              v54 = PsGetProcessSessionIdEx(v53),
              v56 = PsGetCurrentThreadProcess(v55),
              v54 == (unsigned int)PsGetProcessSessionIdEx(v56)) )
        {
          v15 = (__int64 *)PsGetThreadWin32Thread(v10);
          if ( v15 )
            v11 = *v15;
        }
        if ( !v11 )
          goto LABEL_102;
        v16 = *(struct UmfdTls **)(v11 + 352);
        if ( !v16 )
        {
          v16 = UmfdTls::Create();
          *(_QWORD *)(v11 + 352) = v16;
          if ( !v16 )
            goto LABEL_102;
        }
        v9 = *((_QWORD *)v16 + 3);
        if ( v9 && **(_QWORD **)v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      }
      v17 = *((int *)v1 + 10);
      v18 = KeGetCurrentThread();
      v19 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v9)
        || (v57 = PsGetCurrentProcess(v21, v20, v22),
            v58 = PsGetProcessSessionIdEx(v57),
            v60 = PsGetCurrentThreadProcess(v59),
            v58 == (unsigned int)PsGetProcessSessionIdEx(v60)) )
      {
        v23 = (__int64 *)PsGetThreadWin32Thread(v18);
        if ( v23 )
          v19 = *v23;
      }
      if ( !v19
        || (v24 = *(struct UmfdTls **)(v19 + 352)) == 0LL
        && (v24 = UmfdTls::Create(), (*(_QWORD *)(v19 + 352) = v24) == 0LL) )
      {
LABEL_102:
        v34 = -1073741801;
        goto LABEL_77;
      }
      if ( (unsigned int)v17 <= 3 )
      {
        v25 = *((_DWORD *)v24 + 2);
        if ( v25 == -1 )
        {
          *((_DWORD *)v24 + 2) = v17;
LABEL_23:
          _mm_lfence();
          v26 = (union _SLIST_HEADER **)g_pUmfdServerPort[v17];
          v68 = (CWorkItemQueue **)v26;
          if ( !v26 )
          {
            v34 = -1073740032;
            goto LABEL_77;
          }
          v27 = (__int64 *)*((_QWORD *)v24 + 2);
          if ( v27 )
          {
            RequestContext = *((_QWORD *)v24 + 2);
            pv = (_QWORD *)RequestContext;
          }
          else
          {
            RequestContext = (__int64)UmfdCreateRequestContext();
            pv = (_QWORD *)RequestContext;
            if ( !RequestContext )
              goto LABEL_102;
          }
          v65 = 0LL;
          v29 = 0LL;
          if ( v27 )
          {
            v29 = *v27;
            if ( !*v27 )
            {
              v34 = -1073741811;
              goto LABEL_74;
            }
          }
          if ( RequestContext )
          {
            if ( (__int64 *)RequestContext != v27 && *(_QWORD *)RequestContext )
            {
              v34 = -1073741811;
              goto LABEL_74;
            }
            LOBYTE(RequestContext) = 15;
          }
          else
          {
            RequestContext = 7LL;
          }
          if ( (_BYTE)RequestContext != 15 )
          {
            v34 = -1073741811;
            goto LABEL_74;
          }
          if ( v29 )
          {
            *(_DWORD *)(v29 + 8) = 3;
            KeSetEvent(**(PRKEVENT **)(*(_QWORD *)(v29 + 40) + 8LL), 1, 0);
            *v27 = 0LL;
          }
          v30 = *v26;
          v31 = ExpInterlockedPopEntrySList(*v26 + 1);
          v32 = v31;
          if ( !v31 )
          {
            if ( LOBYTE(v30->Alignment) )
            {
LABEL_39:
              if ( !v32 )
              {
LABEL_73:
                v34 = -1073741823;
                goto LABEL_74;
              }
              v33 = *((_DWORD *)&v32[1].Next + 3);
              if ( v33 <= 8 )
              {
                *pv = v32;
                memmove(&v65, v32[1].Next, v33);
                v34 = 0;
                if ( v33 == 8 )
                {
                  if ( !v27 )
                    *((_QWORD *)v24 + 2) = pv;
                  *((_QWORD *)v24 + 3) = v65;
LABEL_45:
                  if ( v34 < 0 )
                    goto LABEL_76;
                  v69 = 0LL;
                  v70 = 0LL;
                  v35 = KeGetCurrentThread();
                  v36 = 0LL;
                  if ( !(unsigned __int8)KeIsAttachedProcess(RequestContext)
                    || (v61 = PsGetCurrentProcess(v38, v37, v39),
                        v62 = PsGetProcessSessionIdEx(v61),
                        v64 = PsGetCurrentThreadProcess(v63),
                        v62 == (unsigned int)PsGetProcessSessionIdEx(v64)) )
                  {
                    v40 = (__int64 *)PsGetThreadWin32Thread(v35);
                    if ( v40 )
                      v36 = *v40;
                  }
                  if ( !v36
                    || (v41 = *(struct UmfdTls **)(v36 + 352)) == 0LL
                    && (v41 = UmfdTls::Create(), (*(_QWORD *)(v36 + 352) = v41) == 0LL) )
                  {
                    v1 = a1;
                    goto LABEL_102;
                  }
                  v42 = *((_QWORD *)v41 + 3);
                  if ( !v42 )
                  {
                    v34 = -1073740032;
                    v1 = a1;
                    goto LABEL_77;
                  }
                  v66 = 0LL;
                  v43 = (*(__int64 (__fastcall **)(__int64, struct UmfdTls *, __int64 *))(*(_QWORD *)v42 + 24LL))(
                          v42,
                          v41,
                          &v66);
                  if ( v43 < 0 )
                  {
                    v44 = v69;
                    v45 = 0;
                    v46 = v70;
                    v47 = 0;
                  }
                  else
                  {
                    v44 = v66;
                    v45 = *(_DWORD *)(v42 + 8);
                    v46 = *(_QWORD *)(v42 + 24);
                    v47 = *(_BYTE *)(v42 + 32);
                  }
                  v34 = v43;
                  v72 = v45;
                  if ( v43 < 0 )
                  {
LABEL_76:
                    v1 = a1;
                  }
                  else
                  {
                    v1 = a1;
                    ProbeForWrite(a1[1], 8uLL, 4u);
                    ProbeForWrite(a1[2], 4uLL, 4u);
                    ProbeForWrite(a1[4], 1uLL, 1u);
                    *(_QWORD *)a1[1] = v44;
                    *(_DWORD *)a1[2] = v72;
                    *(_BYTE *)a1[4] = v47;
                    if ( v47 )
                    {
                      ProbeForWrite(a1[3], 8uLL, 4u);
                      *(_QWORD *)a1[3] = v46;
                    }
                  }
                  if ( v34 >= 0 )
                  {
LABEL_58:
                    *((_DWORD *)v1 + 2) = v34;
                    *((_DWORD *)v8 + 8) = v34;
                    return;
                  }
LABEL_77:
                  *((_QWORD *)v8 + 6) = 0LL;
                  *((_QWORD *)v8 + 5) = 0LL;
                  goto LABEL_58;
                }
                goto LABEL_73;
              }
              if ( CWorkItemQueue::QueueWorkItem(*v68, (struct CWorkItemQueue::CWorkItem *const)v32) )
              {
                v34 = -1073741789;
              }
              else
              {
                CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)v32);
                v34 = -1073740032;
              }
LABEL_74:
              if ( !v27 )
                EngFreeMem(pv);
              goto LABEL_45;
            }
            while ( 1 )
            {
              if ( KeWaitForSingleObject(*(PVOID *)v30->Region, UserRequest, 1, 0, 0LL) == 192 )
              {
                KeSetEvent(*(PRKEVENT *)v30->Region, 1, 0);
                v31 = ExpInterlockedPopEntrySList(v30 + 1);
                v32 = v31;
                if ( !v31 )
                  goto LABEL_39;
                goto LABEL_38;
              }
              v31 = ExpInterlockedPopEntrySList(v30 + 1);
              v32 = v31;
              if ( v31 )
                goto LABEL_38;
              if ( LOBYTE(v30->Alignment) )
                break;
              KeResetEvent(*(PRKEVENT *)v30->Region);
              v48 = ExpInterlockedPopEntrySList(v30 + 1);
              v32 = v48;
              if ( v48 )
              {
                *((_DWORD *)&v48->Next + 2) = 2;
                KeSetEvent(*(PRKEVENT *)v30->Region, 1, 0);
                goto LABEL_39;
              }
              if ( LOBYTE(v30->Alignment) )
              {
                KeSetEvent(*(PRKEVENT *)v30->Region, 1, 0);
                break;
              }
            }
            v31 = ExpInterlockedPopEntrySList(v30 + 1);
            v32 = v31;
            if ( !v31 )
              goto LABEL_39;
          }
LABEL_38:
          *((_DWORD *)&v31->Next + 2) = 2;
          goto LABEL_39;
        }
        if ( v25 == (_DWORD)v17 )
          goto LABEL_23;
      }
      v34 = -1073741811;
      goto LABEL_77;
    }
  }
  *((_DWORD *)v1 + 2) = -1073741801;
}
