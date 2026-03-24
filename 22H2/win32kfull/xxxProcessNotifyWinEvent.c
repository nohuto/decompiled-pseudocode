/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C0050EC0
 * Callers:
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0111AE0 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00502B4 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxClientCallWinEventProc @ 0x1C0051294 (xxxClientCallWinEventProc.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0052608 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C005CF00 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1)
{
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rsi
  int v9; // r12d
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // r14
  unsigned int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v23; // rdx
  struct tagQ *v24; // r15
  __int64 v25; // rdx
  int v26; // eax
  __int16 ProcessMachine; // bx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v32; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rdx
  int v38; // ecx
  __int16 v39; // bx
  _QWORD v40[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 ProcessInformation; // [rsp+A0h] [rbp+40h] BYREF
  tagDomLock *v42; // [rsp+A8h] [rbp+48h] BYREF
  char v43; // [rsp+B0h] [rbp+50h] BYREF

  v40[2] = 0LL;
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v32),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0xC) == 4 || (*(_DWORD *)(v2 + 488) & 0xD) != 0 )
    goto LABEL_30;
  if ( !(unsigned __int8)Enforced() )
  {
    v34 = *(_QWORD *)(v2 + 424);
    v35 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL);
    if ( (*(_DWORD *)(v35 + 780) != *(_DWORD *)(v34 + 780) || *(_DWORD *)(v35 + 784) != *(_DWORD *)(v34 + 784))
      && (*(_DWORD *)(v2 + 488) & 0x400000) == 0 )
    {
      goto LABEL_30;
    }
  }
  v10 = *(_QWORD **)(v8 + 16);
  if ( v10[53] != *(_QWORD *)(v2 + 424) )
  {
    if ( (unsigned __int8)IsRestricted(*v10) )
      goto LABEL_30;
  }
  v11 = *(_QWORD *)(v8 + 16);
  v12 = *(_DWORD *)(v2 + 488) & 0x100;
  if ( (*(_DWORD *)(v11 + 488) & 0x100) != v12 )
    goto LABEL_30;
  if ( v12 )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v11 + 424));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v2 + 424)) != ProcessMachine )
      goto LABEL_30;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) + 880LL, *(_QWORD *)(v2 + 424) + 880LL) )
  {
    v9 = 1;
    goto LABEL_30;
  }
  if ( (!*(_DWORD *)(v8 + 56) || !*(_QWORD *)(v8 + 48))
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL)) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL);
    if ( *(int *)(v13 + 12) >= 0 )
    {
      v14 = *(_QWORD *)(v2 + 424);
      if ( v13 != v14 && (*(_DWORD *)(v13 + 820) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v14)
          || (ProcessInformation = 6LL,
              ZwQueryInformationProcess(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                ProcessCookie|ProcessUserModeIOPL,
                &ProcessInformation,
                8u,
                0LL) < 0)
          || (ProcessInformation & 0x100000000LL) != 0 )
        {
LABEL_30:
          v23 = *(_QWORD *)(v8 + 16);
          ProcessInformation = *(_QWORD *)(v8 + 24);
          v24 = *(struct tagQ **)(v23 + 432);
          if ( v9 )
            EtwTraceUIPIEventHookError(a1, v23, v2);
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v43);
          *(_DWORD *)(a1 + 56) |= 0xCu;
          if ( !v24
            || (v25 = *(_QWORD *)(v8 + 16), v25 == gptiRit)
            || (v26 = *(_DWORD *)(v8 + 40), (v26 & 1) != 0)
            || (v26 & 0x10) != 0
            && ((v38 = *(_DWORD *)(v2 + 488) & 0x100, (*(_DWORD *)(v25 + 488) & 0x100) != v38)
             || v38
             && (v39 = PsWow64GetProcessMachine(**(_QWORD **)(v25 + 424)),
                 (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v2 + 424)) != v39))
            || !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v8 + 16), v24, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
          {
            v28 = *(_QWORD *)a1;
            if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
              goto LABEL_49;
            v29 = *(_QWORD **)(a1 + 8);
            if ( *v29 != a1 )
              goto LABEL_49;
            *v29 = v28;
            *(_QWORD *)(v28 + 8) = v29;
            *(_QWORD *)(a1 + 8) = a1;
            *(_QWORD *)a1 = a1;
            if ( !*(_DWORD *)(a1 + 24) )
              HMAssignmentUnlock(a1 + 16);
            if ( (_UNKNOWN *)a1 == &unk_1C033C050 )
              dword_1C0339AB8 = 0;
            else
              Win32FreePool((void *)a1);
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v43);
          return ProcessInformation;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
  {
    v36 = *(_QWORD *)a1;
    v19 = *(_QWORD *)(v8 + 24);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
    {
      v37 = *(_QWORD **)(a1 + 8);
      if ( *v37 == a1 )
      {
        *v37 = v36;
        *(_QWORD *)(v36 + 8) = v37;
        goto LABEL_25;
      }
    }
LABEL_49:
    __fastfail(3u);
  }
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v40[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v40;
  v40[1] = v8;
  HMLockObject(v8);
  *(_QWORD *)(a1 + 64) = v2;
  if ( (*(_DWORD *)(v8 + 40) & 8) != 0 )
    EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v8);
  else
    EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v8 + 64);
  if ( EventProc )
  {
    v18 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v8 + 88));
    CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v42);
    xxxClientCallWinEventProc(EventProc, v8, a1);
    tagDomLock::LockExclusive(v42);
    W32SetCurrentThreadDpiAwarenessContext(v18);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v19 = *(_QWORD *)(v8 + 24);
  ThreadUnlock1(v16);
  v20 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
    goto LABEL_49;
  v21 = *(_QWORD **)(a1 + 8);
  if ( *v21 != a1 )
    goto LABEL_49;
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
LABEL_25:
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  if ( !*(_DWORD *)(a1 + 24) )
    HMAssignmentUnlock(a1 + 16);
  if ( (_UNKNOWN *)a1 == &unk_1C033C050 )
    dword_1C0339AB8 = 0;
  else
    Win32FreePool((void *)a1);
  return v19;
}
