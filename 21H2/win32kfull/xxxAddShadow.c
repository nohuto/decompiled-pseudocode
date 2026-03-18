/*
 * XREFs of xxxAddShadow @ 0x1C012DDE0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001F3A8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012E0FC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rcx
  int v5; // r15d
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // r12d
  unsigned int v9; // ebx
  ShellWindowManagement *Window; // rbx
  struct tagWND *v11; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // [rsp+98h] [rbp-29h] BYREF
  struct tagWND *v22; // [rsp+A0h] [rbp-21h]
  __int128 v23; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-9h]
  __int64 v25[3]; // [rsp+C0h] [rbp-1h] BYREF
  __int128 v26; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+27h]

  v27 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  if ( gbDisableAlpha )
    return 0LL;
  if ( gcOverlays )
    return 0LL;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80040000) != 0x80040000 )
    return 0LL;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    return 0LL;
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == gatomShadow )
    return 0LL;
  v2 = Win32AllocPoolZInit(24LL, 1685287765LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  PushW32ThreadLock(v2, &v23, (__int64)Win32FreePool);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 24) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v4)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6),
        v8 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  v9 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
  v25[2] = 0LL;
  Window = (ShellWindowManagement *)xxxCreateWindowEx(
                                      v5,
                                      (wchar_t *)(unsigned __int16)gatomShadow,
                                      (unsigned __int16)gatomShadow,
                                      0LL,
                                      0x80000000,
                                      0,
                                      0,
                                      0,
                                      0,
                                      0LL,
                                      (__int64)v25,
                                      hModuleWin,
                                      0LL,
                                      v9,
                                      0xA00u,
                                      v8,
                                      0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v25);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_20:
    PopAndFreeAlwaysW32ThreadLock((__int64)&v23);
    return 0LL;
  }
  ThreadLock((__int64)Window, (__int64 *)&v26);
  xxxInheritWindowMonitor(Window, a1, 1);
  ++gdwDeferWinEvent;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !zzzApplyShadow(v11, Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow(Window);
    ThreadUnlock1(v19, v18, v20);
    goto LABEL_20;
  }
  *(_QWORD *)(v3 + 16) = gpshadowFirst;
  gpshadowFirst = (struct tagSHADOW *)v3;
  v21 = v3;
  v22 = a1;
  HMAssignmentLock(&v21, 0LL);
  v22 = Window;
  v21 = v3 + 8;
  HMAssignmentLock(&v21, 0LL);
  if ( (unsigned int)GetWindowCloakState(a1) )
    zzzSetWindowCompositionCloak(*(struct tagWND **)(v3 + 8), 0LL, 1u);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v23;
  PushW32ThreadLock(v3, &v23, (__int64)RemoveShadow);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v14, v13, v15);
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v16 + 16) = v23;
  return 1LL;
}
