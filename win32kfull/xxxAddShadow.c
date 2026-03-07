// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rcx
  int v5; // r15d
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r12d
  int v10; // ebx
  struct tagWND *Window; // rbx
  struct tagWND *v12; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+98h] [rbp-29h] BYREF
  struct tagWND *v23; // [rsp+A0h] [rbp-21h]
  __int128 v24; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-9h]
  _QWORD v26[3]; // [rsp+C0h] [rbp-1h] BYREF
  __int128 v27; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+27h]

  v28 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
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
  PushW32ThreadLock(v2, &v24, (__int64)Win32FreePool);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 24) & 8 | 0x800A0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v4);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_12;
  v8 = PsGetCurrentProcessWin32Process(v7);
  if ( v8 )
    v8 &= -(__int64)(*(_QWORD *)v8 != 0LL);
  v9 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v8) )
LABEL_12:
    v9 = 0;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
  v26[2] = 0LL;
  Window = (struct tagWND *)xxxCreateWindowEx(
                              v5,
                              (unsigned __int16)gatomShadow,
                              (unsigned __int16)gatomShadow,
                              0LL,
                              0x80000000,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              (__int64)v26,
                              hModuleWin,
                              0LL,
                              v10,
                              0xA00u,
                              v9,
                              0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v26);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_22:
    PopAndFreeAlwaysW32ThreadLock((__int64)&v24);
    return 0LL;
  }
  ThreadLock(Window, &v27);
  xxxInheritWindowMonitor(Window, a1, 1);
  ++gdwDeferWinEvent;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !(unsigned int)zzzApplyShadow(v12, Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow((__int64 *)Window);
    ThreadUnlock1(v20, v19, v21);
    goto LABEL_22;
  }
  *(_QWORD *)(v3 + 16) = gpshadowFirst;
  gpshadowFirst = (struct tagSHADOW *)v3;
  v22 = v3;
  v23 = a1;
  HMAssignmentLock(&v22, 0LL);
  v23 = Window;
  v22 = v3 + 8;
  HMAssignmentLock(&v22, 0LL);
  if ( (unsigned int)GetWindowCloakState((struct tagTHREADINFO **)a1) )
    zzzSetWindowCompositionCloak(*(struct tagWND **)(v3 + 8), 0LL, 1u);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v24;
  PushW32ThreadLock(v3, &v24, (__int64)RemoveShadow);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v15, v14, v16);
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v17 + 16) = v24;
  return 1LL;
}
