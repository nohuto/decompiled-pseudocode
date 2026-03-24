/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C020A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0004A30 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00388DC (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0209DE8 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209F58 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-30h] BYREF

  v5 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v7, v8);
    return v5;
  }
  v9 = HMValidateHandleNoSecure((unsigned __int64)a2, 1);
  if ( v9 )
  {
    v21[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v21[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v21;
    v21[1] = v9;
    HMLockObject(v9);
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v9) )
      goto LABEL_23;
    v12 = HMValidateHandleNoSecure((unsigned __int64)a1, 1);
    v13 = v12;
    if ( !v12 )
      goto LABEL_23;
    v11 = gptiCurrent;
    if ( *(_QWORD *)(v12 + 16) != gptiCurrent )
      goto LABEL_23;
    v11 = *(unsigned __int16 *)(gpsi + 900LL);
    if ( **(_WORD **)(*(_QWORD *)(v12 + 136) + 8LL) != (_WORD)v11 )
      goto LABEL_23;
    v22[2] = 0LL;
    v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v22[0] = *(_QWORD *)(v14 + 416);
    *(_QWORD *)(v14 + 416) = v22;
    v22[1] = v13;
    HMLockObject(v13);
    if ( (unsigned int)SetFrostProp((struct tagWND *)v13, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v9, (__int64)a1) )
      {
        SetGhostFNID((struct tagWND *)v13, 1);
        xxxShowGhostWindow((struct tagWND *)v13, (struct tagWND *)v9);
        if ( !(unsigned int)IsWindowBeingDestroyed(v13)
          && !(unsigned int)IsWindowBeingDestroyed(v9)
          && (HWND)GetProp(v13, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a2
          && (HWND)GetProp(v9, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v5 = 1;
          goto LABEL_22;
        }
        SetGhostFNID((struct tagWND *)v13, 0);
        if ( (HWND)GetProp(v9, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v16 = *(unsigned __int16 *)(gpsi + 1378LL);
          v17 = *(_QWORD *)(v9 + 144);
          if ( (_WORD)v16 == word_1C033AF44 )
            *(_QWORD *)(*(_QWORD *)(v9 + 40) + 312LL) = 0LL;
          RealInternalRemoveProp(v17, v16, 1LL);
        }
        xxxHideGhostWindow((struct tagWND *)v13, (struct tagWND *)v9);
      }
      v18 = *(unsigned __int16 *)(gpsi + 1378LL);
      v19 = *(_QWORD *)(v13 + 144);
      if ( (_WORD)v18 == word_1C033AF44 )
        *(_QWORD *)(*(_QWORD *)(v13 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v19, v18, 1LL);
    }
LABEL_22:
    ThreadUnlock1(v15);
LABEL_23:
    ThreadUnlock1(v11);
  }
  return v5;
}
