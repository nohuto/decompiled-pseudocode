/*
 * XREFs of ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01446B8
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxHandleHealthyWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144620 (-xxxHandleHealthyWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  int v4; // ebp
  struct tagWND *v5; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
  if ( !v3 )
  {
    v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1u);
    if ( !v3 )
      return v1;
    v4 = 1;
    goto LABEL_4;
  }
  if ( v3 == -1 )
  {
    if ( !IsNonImmersiveBand((__int64)a1) )
      PostShellHookMessages(0x34uLL, *(_QWORD *)a1);
    v3 = 0LL;
  }
  v4 = 0;
  v1 = 1;
  if ( v3 )
  {
LABEL_4:
    v5 = (struct tagWND *)HMValidateHandleNoSecure(v3, 1);
    v1 = 1;
    if ( v5 )
    {
      v12[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v12;
      v12[1] = v5;
      HMLockObject(v5);
      v9 = *(_WORD *)(*((_QWORD *)v5 + 5) + 42LL) & 0x2FFF;
      if ( (_DWORD)v9 == 682 )
      {
        if ( v4 )
          v10 = *(_WORD *)(gpsi + 1378LL);
        else
          v10 = *(_WORD *)(gpsi + 900LL);
        InternalRemoveProp((__int64)v5, v10, 1u);
        xxxHideGhostWindow(v5, a1);
      }
      else
      {
        v1 = 0;
      }
      ThreadUnlock1(v9, v7, v8);
    }
  }
  return v1;
}
