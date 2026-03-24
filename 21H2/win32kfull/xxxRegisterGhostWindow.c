/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C0003A40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0003CA0 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0004A30 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00388DC (IsWindowBeingDestroyed.c)
 *     IsHungWindow @ 0x1C00418B0 (IsHungWindow.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01277DC (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // ebp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-30h] BYREF

  v4 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL);
    return v4;
  }
  LOBYTE(v6) = 1;
  v7 = HMValidateHandleNoSecure(a2, v6);
  if ( v7 )
  {
    v20[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v20[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v20;
    v20[1] = v7;
    HMLockObject(v7);
    if ( !(unsigned int)_ShouldGhostWindow((struct tagWND *)v7) )
      goto LABEL_27;
    if ( GetProp(v7, *(unsigned __int16 *)(gpsi + 900LL), 1LL) != -1 )
      goto LABEL_27;
    if ( !(unsigned int)IsHungWindow(v7) )
      goto LABEL_27;
    LOBYTE(v9) = 1;
    v10 = HMValidateHandleNoSecure(a1, v9);
    v11 = v10;
    if ( !v10
      || *(_QWORD *)(v10 + 16) != gptiCurrent
      || **(_WORD **)(*(_QWORD *)(v10 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
    {
      goto LABEL_27;
    }
    v21[2] = 0LL;
    v12 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v21[0] = *(_QWORD *)(v12 + 416);
    *(_QWORD *)(v12 + 416) = v21;
    v21[1] = v11;
    HMLockObject(v11);
    if ( (unsigned int)SetGhostProp((struct tagWND *)v11, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v7, a1) )
      {
        SetGhostFNID((struct tagWND *)v11, 1);
        xxxShowGhostWindow((struct tagWND *)v11, (struct tagWND *)v7);
        if ( !(unsigned int)IsWindowBeingDestroyed(v11)
          && !(unsigned int)IsWindowBeingDestroyed(v7)
          && (HWND)GetProp(v11, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a2
          && (HWND)GetProp(v7, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
        {
          v4 = 1;
          goto LABEL_16;
        }
        SetGhostFNID((struct tagWND *)v11, 0);
        if ( (HWND)GetProp(v7, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
        {
          v14 = *(unsigned __int16 *)(gpsi + 900LL);
          v15 = *(_QWORD *)(v7 + 144);
          if ( (_WORD)v14 == word_1C033AF44 )
            *(_QWORD *)(*(_QWORD *)(v7 + 40) + 312LL) = 0LL;
          RealInternalRemoveProp(v15, v14, 1LL);
        }
        xxxHideGhostWindow((struct tagWND *)v11, (struct tagWND *)v7);
      }
      v16 = *(unsigned __int16 *)(gpsi + 900LL);
      v17 = *(_QWORD *)(v11 + 144);
      if ( (_WORD)v16 == word_1C033AF44 )
        *(_QWORD *)(*(_QWORD *)(v11 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v17, v16, 1LL);
    }
LABEL_16:
    ThreadUnlock1();
    if ( v4 )
    {
LABEL_17:
      ThreadUnlock1();
      return v4;
    }
LABEL_27:
    if ( GetProp(v7, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == -1 )
    {
      v18 = *(unsigned __int16 *)(gpsi + 900LL);
      v19 = *(_QWORD *)(v7 + 144);
      if ( (_WORD)v18 == word_1C033AF44 )
        *(_QWORD *)(*(_QWORD *)(v7 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v19, v18, 1LL);
    }
    goto LABEL_17;
  }
  return v4;
}
