/*
 * XREFs of xxxAddShadow @ 0x1C013D9EC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E8B8 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C0036CF0 (zzzSetWindowCompositionCloak.c)
 *     GetWindowCloakState @ 0x1C004DB6C (GetWindowCloakState.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006C7D8 (xxxInheritWindowMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00BBE88 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013DD1C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // r14d
  __int64 v9; // rax
  struct tagWND *Window; // rsi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v19[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v20; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+7h]
  _QWORD v22[3]; // [rsp+D0h] [rbp+Fh] BYREF
  _QWORD v23[4]; // [rsp+E8h] [rbp+27h] BYREF

  v21 = 0LL;
  v23[2] = 0LL;
  v20 = 0LL;
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
  PushW32ThreadLock(v2, &v20, (__int64)Win32FreePool);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 24) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v4)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6),
        v8 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v9 = *((_QWORD *)a1 + 5);
  v22[2] = 0LL;
  Window = (struct tagWND *)xxxCreateWindowEx(
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
                              (__int64)v22,
                              hModuleWin,
                              0LL,
                              *(_DWORD *)(v9 + 236),
                              2560,
                              v8,
                              0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v22);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_20:
    PopAndFreeAlwaysW32ThreadLock((__int64)&v20);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v23;
  v23[1] = Window;
  HMLockObject(Window);
  xxxInheritWindowMonitor(Window, (__int64 *)a1, 1);
  ++gdwDeferWinEvent;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !zzzApplyShadow(v12, Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow((unsigned __int64)Window);
    ThreadUnlock1(v17);
    goto LABEL_20;
  }
  *(_QWORD *)(v3 + 16) = gpshadowFirst;
  gpshadowFirst = (struct tagSHADOW *)v3;
  v18[0] = v3;
  v18[1] = a1;
  HMAssignmentLock(v18);
  v19[1] = Window;
  v19[0] = v3 + 8;
  HMAssignmentLock(v19);
  if ( (unsigned int)GetWindowCloakState(a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v3 + 8), 0LL, 1u);
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v13 + 16) = v20;
  PushW32ThreadLock(v3, &v20, (__int64)RemoveShadow);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v14);
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v15 + 16) = v20;
  return 1LL;
}
