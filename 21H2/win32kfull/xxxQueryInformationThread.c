/*
 * XREFs of xxxQueryInformationThread @ 0x1C00FC914
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C00FC750 (NtUserQueryInformationThread.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001F1E4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00A64D0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00A65F0 (xxxSetCsrssThreadDesktop.c)
 *     ?IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z @ 0x1C00A93A4 (-IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z.c)
 *     ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C00FCD08 (-IsProcessUserService@@YAHQEAU_EPROCESS@@@Z.c)
 *     GetTaskName @ 0x1C01D9994 (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, __int64 a3, unsigned int a4)
{
  int v4; // edi
  __int64 ThreadWin32Thread; // r14
  __int64 ProcessWin32Process; // r13
  NTSTATUS result; // eax
  struct _KTHREAD *v10; // r12
  int v11; // r15d
  PEPROCESS ThreadProcess; // rax
  int v13; // r13d
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rax
  struct _KPROCESS *v17; // rbx
  bool v18; // bl
  PEPROCESS v19; // rax
  struct _KPROCESS *v20; // rax
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // r14d
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 i; // rbx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  HANDLE ThreadId; // rcx
  __int64 v32; // rax
  PETHREAD Thread; // [rsp+30h] [rbp-30h] BYREF
  __int64 v34; // [rsp+38h] [rbp-28h] BYREF
  __int128 v35; // [rsp+40h] [rbp-20h] BYREF
  __int64 v36; // [rsp+50h] [rbp-10h]

  v4 = 0;
  Thread = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 != 11 )
  {
    result = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, (PVOID *)&Thread, 0LL);
    v10 = Thread;
    v11 = result;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess(Thread);
    if ( (unsigned int)PsGetProcessSessionId(ThreadProcess) == gSessionId )
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)v10);
    if ( !a2 )
    {
      v13 = *(_DWORD *)(a3 + 12);
      *(_OWORD *)a3 = 0LL;
      if ( ThreadWin32Thread )
      {
        v14 = *(_QWORD *)(ThreadWin32Thread + 456);
        if ( v14 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 64LL) & 4) == 0 )
          {
            v15 = *(__int64 **)(*(_QWORD *)(v14 + 8) + 24LL);
            if ( v15 )
              v16 = *v15;
            else
              v16 = 0LL;
            *(_QWORD *)a3 = v16;
          }
        }
      }
      if ( PsGetThreadProcessId(v10) == (HANDLE)gpidLogon || PsGetThreadProcessId(v10) == (HANDLE)gpidLogonUI )
        goto LABEL_24;
      v17 = PsGetThreadProcess(v10);
      AutoSharedPushLock::AutoSharedPushLock(
        (AutoSharedPushLock *)&v34,
        (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
      v18 = UmfdHostLifeTimeManager::s_UmfdHostProcess == v17;
      if ( v34 )
      {
        GreReleasePushLockShared(v34);
        KeLeaveCriticalRegion();
      }
      if ( v18
        || (v19 = PsGetThreadProcess(v10), (unsigned int)IsProcessDwm(v19))
        || (v20 = PsGetThreadProcess(v10), (unsigned int)IsProcessUserService(v20)) )
      {
LABEL_24:
        v22 = 1;
      }
      else
      {
        if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 456) )
        {
          v21 = *(_QWORD *)(ThreadWin32Thread + 424);
          if ( v21 && *(char *)(v21 + 820) < 0 && (v13 & 0x800) == 0 )
            *(_DWORD *)(a3 + 8) = 1;
          goto LABEL_26;
        }
        v22 = 2;
      }
      *(_DWORD *)(a3 + 8) = v22;
      if ( !ThreadWin32Thread )
      {
LABEL_28:
        if ( (*(_DWORD *)(a3 + 12) & 1) != 0 && !*(_DWORD *)(a3 + 8) )
        {
          v35 = 0LL;
          v36 = 0LL;
          if ( *(_QWORD *)(gptiCurrent + 456LL) != *(_QWORD *)(ThreadWin32Thread + 456) )
          {
            LockW32Thread(ThreadWin32Thread, (__int64)&v35);
            if ( !*(_QWORD *)(gptiCurrent + 456LL)
              || (v11 = xxxRestoreCsrssThreadDesktop((_QWORD *)(a3 + 16), 0), v11 >= 0) )
            {
              v11 = xxxSetCsrssThreadDesktop(*(_DWORD **)(ThreadWin32Thread + 456), (PVOID *)(a3 + 16));
            }
            PopAndFreeW32ThreadLock((__int64)&v35);
          }
        }
        goto LABEL_29;
      }
LABEL_26:
      if ( *(_DWORD *)(ThreadWin32Thread + 896) )
        *(_DWORD *)(a3 + 12) |= 1u;
      goto LABEL_28;
    }
    v27 = a2 - 1;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( !v30 )
          {
            if ( ThreadWin32Thread )
              v4 = IsThreadHung((const struct tagTHREADINFO *)ThreadWin32Thread, *(_DWORD *)a3);
            *(_DWORD *)a3 = v4;
            goto LABEL_29;
          }
          if ( v30 == 7 )
          {
            v10 = 0LL;
LABEL_39:
            v23 = 0;
            if ( a4 < 8 )
            {
              v11 = -1073741811;
            }
            else if ( ProcessWin32Process && (v24 = *(_DWORD *)(ProcessWin32Process + 384)) != 0 )
            {
              v25 = 8LL * (unsigned int)(v24 + 1);
              if ( v25 > a4 )
              {
                *(_QWORD *)a3 = v25;
                v11 = -1073741801;
              }
              else
              {
                for ( i = *(_QWORD *)(ProcessWin32Process + 320); i; i = *(_QWORD *)(i + 664) )
                {
                  ThreadId = PsGetThreadId(*(PETHREAD *)i);
                  v32 = v23++;
                  *(_QWORD *)(a3 + 8 * v32) = ThreadId;
                }
                *(_QWORD *)(a3 + 8LL * v23) = 0LL;
              }
            }
            else
            {
              *(_QWORD *)a3 = 0LL;
            }
            goto LABEL_29;
          }
          v11 = -1073741821;
        }
        else
        {
          *(_OWORD *)a3 = 0LL;
        }
LABEL_29:
        ObfDereferenceObject(v10);
        return v11;
      }
      if ( ThreadWin32Thread )
      {
        GetTaskName(ThreadWin32Thread, a3, a4);
        goto LABEL_29;
      }
    }
    else if ( ThreadWin32Thread )
    {
      *(_DWORD *)a3 = *(_DWORD *)(ThreadWin32Thread + 488);
      goto LABEL_29;
    }
    v11 = -1073741816;
    goto LABEL_29;
  }
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Thread, 0LL);
  v10 = Thread;
  v11 = result;
  if ( result >= 0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(Thread) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v10);
    goto LABEL_39;
  }
  return result;
}
