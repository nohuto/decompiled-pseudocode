NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 ThreadWin32Thread; // r15
  __int64 v8; // r13
  NTSTATUS result; // eax
  __int64 v10; // rcx
  PETHREAD v11; // r12
  NTSTATUS v12; // r14d
  int v13; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v15; // rcx
  int v16; // ebx
  PEPROCESS ThreadProcess; // rax
  bool v18; // zf
  struct _KTHREAD *v19; // rbx
  int v20; // r12d
  int v21; // r12d
  int v22; // r12d
  unsigned int v23; // r15d
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 i; // rbx
  HANDLE ThreadId; // rax
  __int64 v28; // rcx
  PETHREAD v29; // rcx
  unsigned int v30; // r12d
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rax
  struct _EPROCESS *v34; // rax
  PEPROCESS v35; // rax
  struct _KPROCESS *v36; // rax
  __int64 v37; // rax
  char v38; // r13
  struct _KPROCESS *v39; // rax
  __int64 v40; // rdx
  PACCESS_TOKEN v41; // r12
  PETHREAD Thread; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  __int64 v44; // [rsp+40h] [rbp-20h] BYREF
  __int128 v45; // [rsp+48h] [rbp-18h] BYREF
  __int64 v46; // [rsp+58h] [rbp-8h]
  int v47; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v48; // [rsp+B8h] [rbp+58h]

  v48 = a4;
  v4 = 0;
  ThreadWin32Thread = 0LL;
  v8 = 0LL;
  if ( a2 == 11 )
  {
    Thread = 0LL;
    result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Thread, 0LL);
    v11 = Thread;
    v12 = result;
    if ( result < 0 )
      return result;
    v13 = *(_DWORD *)SGDGetUserSessionState(v10);
    if ( (unsigned int)PsGetProcessSessionId(v11) == v13 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(v11);
      v8 = ProcessWin32Process;
      if ( ProcessWin32Process )
        v8 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
    }
    goto LABEL_16;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  Thread = (PETHREAD)Object;
  if ( v12 >= 0 )
  {
    v16 = *(_DWORD *)SGDGetUserSessionState(v15);
    ThreadProcess = PsGetThreadProcess(Thread);
    v18 = (unsigned int)PsGetProcessSessionId(ThreadProcess) == v16;
    v19 = Thread;
    if ( v18 )
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    if ( a2 )
    {
      v20 = a2 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 2;
          if ( v22 )
          {
            if ( v22 == 7 )
            {
              v11 = 0LL;
LABEL_16:
              v23 = 0;
              if ( v48 >= 8 )
              {
                if ( v8 && (v24 = *(_DWORD *)(v8 + 376)) != 0 )
                {
                  v25 = 8LL * (unsigned int)(v24 + 1);
                  if ( v25 <= v48 )
                  {
                    for ( i = *(_QWORD *)(v8 + 320); i; i = *(_QWORD *)(i + 664) )
                    {
                      ThreadId = PsGetThreadId(*(PETHREAD *)i);
                      v28 = v23++;
                      *(_QWORD *)&a3[2 * v28] = ThreadId;
                    }
                    *(_QWORD *)&a3[2 * v23] = 0LL;
                  }
                  else
                  {
                    *(_QWORD *)a3 = v25;
                    v12 = -1073741801;
                  }
                }
                else
                {
                  *(_QWORD *)a3 = 0LL;
                }
              }
              else
              {
                v12 = -1073741811;
              }
              v29 = v11;
              goto LABEL_74;
            }
            v12 = -1073741821;
          }
          else
          {
            if ( ThreadWin32Thread )
              LOBYTE(v4) = IsThreadHungTimeCheck((const struct tagTHREADINFO *)ThreadWin32Thread, *a3);
            *a3 = v4;
          }
LABEL_73:
          v29 = v19;
LABEL_74:
          ObfDereferenceObject(v29);
          return v12;
        }
        if ( ThreadWin32Thread )
        {
          GetTaskName(ThreadWin32Thread, a3, v48);
          goto LABEL_73;
        }
      }
      else if ( ThreadWin32Thread )
      {
        *a3 = *(_DWORD *)(ThreadWin32Thread + 488);
        goto LABEL_73;
      }
      v12 = -1073741816;
      goto LABEL_73;
    }
    v30 = a3[3];
    *(_OWORD *)a3 = 0LL;
    if ( ThreadWin32Thread )
    {
      v31 = *(_QWORD *)(ThreadWin32Thread + 456);
      if ( v31 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v31 + 40) + 64LL) & 4) == 0 )
        {
          v32 = *(__int64 **)(*(_QWORD *)(v31 + 8) + 24LL);
          if ( v32 )
            v33 = *v32;
          else
            v33 = 0LL;
          *(_QWORD *)a3 = v33;
        }
      }
    }
    if ( PsGetThreadProcessId(v19) == (HANDLE)gpidLogon
      || PsGetThreadProcessId(v19) == (HANDLE)gpidLogonUI
      || (v34 = PsGetThreadProcess(v19), (unsigned int)GreIsProcessSystemCritical(v34))
      || (v35 = PsGetThreadProcess(v19), (unsigned int)IsProcessDwm(v35))
      || (v36 = PsGetThreadProcess(v19), (unsigned int)IsProcessUserService(v36)) )
    {
      a3[2] = 1;
    }
    else
    {
      if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 456) )
      {
        v37 = *(_QWORD *)(ThreadWin32Thread + 424);
        if ( v37 && (*(_DWORD *)(v37 + 812) & 0x80u) != 0 && (v30 & 0x800) == 0 )
          a3[2] = 1;
        goto LABEL_64;
      }
      if ( !(unsigned int)Feature_YieldToHAM__private_IsEnabledDeviceUsage() )
        goto LABEL_61;
      v38 = 1;
      if ( (v30 & 0x800) != 0 )
        goto LABEL_61;
      v39 = PsGetThreadProcess(v19);
      v41 = PsReferencePrimaryToken(v39);
      if ( !v41 )
        goto LABEL_61;
      v47 = 0;
      Thread = 0LL;
      v44 = 0LL;
      if ( (int)AppModelPolicy_GetPolicy_Internal(v41, v40, &v47, &v44, &Thread) >= 0 && v47 == 65537 )
      {
        a3[2] = 1;
        v38 = 0;
      }
      ObfDereferenceObject(v41);
      if ( v38 )
LABEL_61:
        a3[2] = 2;
    }
    if ( !ThreadWin32Thread )
    {
LABEL_66:
      if ( (a3[3] & 1) != 0 && !a3[2] )
      {
        v45 = 0LL;
        v46 = 0LL;
        if ( *(_QWORD *)(gptiCurrent + 456LL) != *(_QWORD *)(ThreadWin32Thread + 456) )
        {
          LockW32Thread(ThreadWin32Thread, &v45);
          if ( !*(_QWORD *)(gptiCurrent + 456LL) || (v12 = xxxRestoreCsrssThreadDesktop(a3 + 4, 0LL), v12 >= 0) )
            v12 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 456));
          PopAndFreeW32ThreadLock(&v45);
        }
      }
      goto LABEL_73;
    }
LABEL_64:
    if ( *(_DWORD *)(ThreadWin32Thread + 904) )
      a3[3] |= 1u;
    goto LABEL_66;
  }
  return v12;
}
