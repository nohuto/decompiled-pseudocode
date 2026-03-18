/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C007446C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00741F8 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0074860 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     xxxClientCallWinEventProc @ 0x1C00748EC (xxxClientCallWinEventProc.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C0074AA8 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1)
{
  __int64 v2; // r14
  __int64 *ThreadWin32Thread; // rax
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int16 ProcessMachine; // bx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // rbx
  unsigned int v18; // r15d
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  int v21; // r14d
  char *v22; // rbx
  tagDomLock *v23; // rcx
  __int64 v24; // rbx
  __int64 v26; // rdx
  __int64 v27; // r13
  struct tagQ *v28; // r12
  __int64 v29; // r15
  int v30; // eax
  __int64 v31; // rcx
  int v32; // ecx
  __int16 v33; // bx
  _BYTE v34[8]; // [rsp+48h] [rbp-29h] BYREF
  __int64 ProcessInformation; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v36[4]; // [rsp+58h] [rbp-19h] BYREF
  char v37; // [rsp+78h] [rbp+7h] BYREF
  __int64 v38; // [rsp+80h] [rbp+Fh]
  char v39; // [rsp+88h] [rbp+17h]
  __int64 v40; // [rsp+90h] [rbp+1Fh]
  char v41; // [rsp+98h] [rbp+27h]

  v36[2] = 0LL;
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  v4 = 0;
  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  v6 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 56) & 0xC) != 4 && (*(_DWORD *)(v2 + 488) & 0xD) == 0 )
  {
    if ( (unsigned __int8)Enforced(v5)
      || (v7 = *(_QWORD *)(v2 + 424),
          v31 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL),
          *(_DWORD *)(v31 + 780) == *(_DWORD *)(v7 + 780))
      && *(_DWORD *)(v31 + 784) == *(_DWORD *)(v7 + 784)
      || (*(_DWORD *)(v2 + 488) & 0x400000) != 0 )
    {
      v8 = *(_QWORD **)(v6 + 16);
      if ( v8[53] == *(_QWORD *)(v2 + 424) || !(unsigned __int8)IsRestricted(*v8) )
      {
        ProcessMachine = PsGetProcessMachine(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 424LL), v7);
        if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v2 + 424), v10) == ProcessMachine )
        {
          if ( (unsigned __int8)CheckAccess(
                                  *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL) + 880LL,
                                  *(_QWORD *)(v2 + 424) + 880LL) )
          {
            if ( *(_DWORD *)(v6 + 56) && *(_QWORD *)(v6 + 48)
              || (unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL))
              || (v11 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL), *(int *)(v11 + 12) < 0)
              || (v12 = *(_QWORD *)(v2 + 424), v11 == v12)
              || (*(_DWORD *)(v11 + 820) & 0x100) != 0
              || !(unsigned int)IsImmersiveAppRestricted(v12)
              && (ProcessInformation = 6LL,
                  ZwQueryInformationProcess(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    ProcessCookie|ProcessUserModeIOPL,
                    &ProcessInformation,
                    8u,
                    0LL) >= 0)
              && (ProcessInformation & 0x100000000LL) == 0 )
            {
              if ( (*(_DWORD *)(v6 + 40) & 1) != 0 )
              {
                v24 = *(_QWORD *)(v6 + 24);
              }
              else
              {
                v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v36[0] = *(_QWORD *)(v13 + 416);
                *(_QWORD *)(v13 + 416) = v36;
                v36[1] = v6;
                HMLockObject(v6);
                *(_QWORD *)(a1 + 64) = v2;
                if ( (*(_DWORD *)(v6 + 40) & 8) != 0 )
                  EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v6);
                else
                  EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v6 + 64);
                if ( EventProc )
                {
                  v18 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v6 + 76));
                  DLT = DLT_WINEVENT::getDLT();
                  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
                  v38 = gDomainDummyLock;
                  v36[3] = DomainLockRef;
                  v37 = 1;
                  v39 = 0;
                  v40 = 0LL;
                  if ( DomainLockRef )
                    tagDomLock::UnLockExclusive(DomainLockRef);
                  v41 = 1;
                  xxxClientCallWinEventProc(EventProc, v6, a1);
                  if ( v41 )
                  {
                    v21 = 0;
                    v22 = &v37;
                    do
                    {
                      v23 = (tagDomLock *)*((_QWORD *)v22 - 1);
                      if ( v23 )
                      {
                        if ( *v22 )
                          tagDomLock::LockExclusive(v23);
                        else
                          tagDomLock::LockShared(v23);
                      }
                      ++v21;
                      v22 += 16;
                    }
                    while ( !v21 );
                  }
                  W32SetCurrentThreadDpiAwarenessContext(v18);
                }
                *(_QWORD *)(a1 + 64) = 0LL;
                v24 = *(_QWORD *)(v6 + 24);
                ThreadUnlock1(v15, v14, v16);
              }
              if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
                __int2c();
              RemoveNotify((struct tagNOTIFY *)a1);
              return v24;
            }
          }
          else
          {
            v4 = 1;
          }
        }
      }
    }
  }
  v26 = *(_QWORD *)(v6 + 16);
  v27 = *(_QWORD *)(v6 + 24);
  v28 = *(struct tagQ **)(v26 + 432);
  if ( v4 )
    EtwTraceUIPIEventHookError(a1, v26, v2);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v34);
  *(_DWORD *)(a1 + 56) |= 0xCu;
  if ( !v28
    || (v29 = *(_QWORD *)(v6 + 16), v29 == gptiRit)
    || (v30 = *(_DWORD *)(v6 + 40), (v30 & 1) != 0)
    || (v30 & 0x10) != 0
    && ((v32 = *(_DWORD *)(v2 + 488) & 0x100, (*(_DWORD *)(v29 + 488) & 0x100) != v32)
     || v32
     && (v33 = PsWow64GetProcessMachine(**(_QWORD **)(v2 + 424)),
         v33 != (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v29 + 424))))
    || !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v6 + 16), v28, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
  {
    if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
      __int2c();
    RemoveNotify((struct tagNOTIFY *)a1);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v34);
  return v27;
}
