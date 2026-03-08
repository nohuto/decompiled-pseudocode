/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C0063218
 * Callers:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00D8F74 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C000F7B0 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxClientCallWinEventProc @ 0x1C00636F8 (xxxClientCallWinEventProc.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00D25FC (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 *ThreadWin32Thread; // rax
  int v5; // r15d
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v7; // rcx
  __int64 v8; // rsi
  _QWORD **v9; // r13
  __int64 v10; // rax
  struct tagTHREADINFO **v11; // r12
  _QWORD *v12; // rcx
  __int16 ProcessMachine; // bx
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // rbx
  unsigned int v19; // r15d
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  int v22; // r14d
  char *v23; // rbx
  tagDomLock *v24; // rcx
  __int64 v25; // rbx
  struct tagNOTIFY **v26; // rax
  struct tagNOTIFY ***v27; // rdx
  __int64 v29; // rdx
  struct tagQ *v30; // r13
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  int v41; // ecx
  __int16 v42; // bx
  __int64 ProcessInformation; // [rsp+58h] [rbp-39h] BYREF
  _QWORD **v44; // [rsp+60h] [rbp-31h]
  __int64 v45; // [rsp+68h] [rbp-29h]
  __int128 v46; // [rsp+70h] [rbp-21h] BYREF
  __int64 v47; // [rsp+80h] [rbp-11h]
  tagDomLock *v48; // [rsp+88h] [rbp-9h]
  char v49; // [rsp+90h] [rbp-1h] BYREF
  __int64 v50; // [rsp+98h] [rbp+7h]
  char v51; // [rsp+A0h] [rbp+Fh]
  __int64 v52; // [rsp+A8h] [rbp+17h]
  char v53; // [rsp+B0h] [rbp+1Fh]

  v46 = 0LL;
  v47 = 0LL;
  v2 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 8)) )
  {
    LODWORD(ProcessInformation) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  v5 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock);
  v7 = 1LL;
  if ( IsResourceAcquiredExclusiveLite != 1 )
    __int2c();
  v8 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 56) & 0xC) == 4 || (*(_DWORD *)(v3 + 488) & 0xD) != 0 )
    goto LABEL_39;
  if ( !(unsigned __int8)Enforced(1LL) )
  {
    v40 = *(_QWORD *)(v3 + 424);
    v7 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL);
    if ( (*(_DWORD *)(v7 + 772) != *(_DWORD *)(v40 + 772) || *(_DWORD *)(v7 + 776) != *(_DWORD *)(v40 + 776))
      && (*(_DWORD *)(v3 + 488) & 0x400000) == 0 )
    {
      goto LABEL_39;
    }
  }
  v9 = (_QWORD **)(v3 + 424);
  v10 = *(_QWORD *)(v3 + 424);
  v11 = (struct tagTHREADINFO **)(v8 + 16);
  v12 = *(_QWORD **)(v8 + 16);
  v44 = (_QWORD **)(v3 + 424);
  if ( v12[53] != v10 )
  {
    if ( (unsigned __int8)IsRestricted(*v12) )
      goto LABEL_39;
  }
  ProcessMachine = PsGetProcessMachine(**((_QWORD **)*v11 + 53));
  if ( (unsigned __int16)PsGetProcessMachine(**v9) != ProcessMachine )
    goto LABEL_39;
  if ( !(unsigned __int8)CheckAccess(*((_QWORD *)*v11 + 53) + 864LL, *v9 + 108) )
  {
    v5 = 1;
LABEL_39:
    v14 = (__int64 *)(v8 + 16);
    v11 = (struct tagTHREADINFO **)(v8 + 16);
    v44 = (_QWORD **)(v3 + 424);
LABEL_40:
    v29 = *v14;
    v45 = *(_QWORD *)(v8 + 24);
    v30 = *(struct tagQ **)(v29 + 432);
    if ( v5 )
      EtwTraceUIPIEventHookError(a1, v29, v3);
    if ( !*(_QWORD *)(SGDGetUserSessionState(v7) + 8)
      || (v32 = SGDGetUserSessionState(v31), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v32 + 8))) )
    {
      LODWORD(ProcessInformation) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v33);
    ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
    *(_DWORD *)(a1 + 56) |= 0xCu;
    if ( !v30
      || (v35 = *v14, *v14 == gptiRit)
      || (v36 = *(_DWORD *)(v8 + 40), (v36 & 1) != 0)
      || (v36 & 0x10) != 0
      && ((v41 = *(_DWORD *)(v3 + 488) & 0x100, (*(_DWORD *)(v35 + 488) & 0x100) != v41)
       || v41
       && (v42 = PsWow64GetProcessMachine(**(_QWORD **)(v35 + 424)),
           (unsigned __int16)PsWow64GetProcessMachine(**v44) != v42))
      || !(unsigned int)PostEventMessageEx(*v11, v30, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
    {
      if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
        __int2c();
      RemoveNotify((struct tagNOTIFY ***)a1);
    }
    v38 = PsGetCurrentThreadWin32Thread(v37);
    --*(_DWORD *)(v38 + 48);
    return v45;
  }
  v14 = (__int64 *)(v8 + 16);
  if ( (!*(_DWORD *)(v8 + 56) || !*(_QWORD *)(v8 + 48)) && !(unsigned int)IsImmersiveBroker(*((_QWORD *)*v11 + 53)) )
  {
    v39 = *((_QWORD *)*v11 + 53);
    if ( *(int *)(v39 + 12) >= 0 && (_QWORD *)v39 != *v9 && (*(_DWORD *)(v39 + 812) & 0x100) == 0 )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(*v9) )
        goto LABEL_40;
      ProcessInformation = 6LL;
      if ( ZwQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessCookie|ProcessUserModeIOPL,
             &ProcessInformation,
             8u,
             0LL) < 0
        || (ProcessInformation & 0x100000000LL) != 0 )
      {
        goto LABEL_40;
      }
    }
  }
  if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
  {
    v25 = *(_QWORD *)(v8 + 24);
    if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
      __int2c();
    RemoveNotify((struct tagNOTIFY ***)a1);
  }
  else
  {
    ThreadLockAlways(v8, &v46);
    *(_QWORD *)(a1 + 64) = v3;
    if ( (*(_DWORD *)(v8 + 40) & 8) != 0 )
      EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v8);
    else
      EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v8 + 64);
    if ( EventProc )
    {
      v19 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v8 + 76));
      DLT = DLT_WINEVENT::getDLT();
      DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
      v50 = gDomainDummyLock;
      v48 = DomainLockRef;
      v49 = 1;
      v51 = 0;
      v52 = 0LL;
      if ( DomainLockRef )
        tagDomLock::UnLockExclusive(DomainLockRef);
      v53 = 1;
      xxxClientCallWinEventProc(EventProc, v8, a1);
      if ( v53 )
      {
        v22 = 0;
        v23 = &v49;
        do
        {
          v24 = (tagDomLock *)*((_QWORD *)v23 - 1);
          if ( v24 )
          {
            if ( *v23 )
              tagDomLock::LockExclusive(v24);
            else
              tagDomLock::LockShared(v24);
          }
          ++v22;
          v23 += 16;
        }
        while ( !v22 );
      }
      W32SetCurrentThreadDpiAwarenessContext(v19);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    v25 = *(_QWORD *)(v8 + 24);
    ThreadUnlock1(v16, v15, v17);
    if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock) != 1 )
      __int2c();
    if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock) != 1 )
      __int2c();
    v26 = *(struct tagNOTIFY ***)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1
      || (v27 = *(struct tagNOTIFY ****)(a1 + 8), *v27 != (struct tagNOTIFY **)a1) )
    {
      __fastfail(3u);
    }
    *v27 = v26;
    v26[1] = (struct tagNOTIFY *)v27;
    *(_QWORD *)(a1 + 8) = a1;
    *(_QWORD *)a1 = a1;
    if ( !*(_DWORD *)(a1 + 24) )
      HMAssignmentUnlock(a1 + 16);
    if ( (_UNKNOWN *)a1 == &unk_1C03621B0 )
      dword_1C0361138 = 0;
    else
      Win32FreePool((void *)a1);
  }
  return v25;
}
