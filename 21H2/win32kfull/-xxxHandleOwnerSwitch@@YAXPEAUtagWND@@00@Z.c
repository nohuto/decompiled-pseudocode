/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00A3568
 * Callers:
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x1C00825E4 (DwmAsyncOwnerChange.c)
 *     zzzAttachThreadInput @ 0x1C009D530 (zzzAttachThreadInput.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     PostShellHookMessagesEx @ 0x1C00A6128 (PostShellHookMessagesEx.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  BOOL v13; // r12d
  int v14; // r15d
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  void *v19; // rax

  v3 = 0LL;
  if ( !a3 || (v7 = *((_QWORD *)a3 + 2), v8 = *((_QWORD *)a1 + 2), v7 == v8) )
  {
LABEL_6:
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( !a2 || (v9 = *((_QWORD *)a2 + 2), v9 == v8) || v9 != v7 )
  {
    zzzAttachThreadInput(v8, v7, 0);
    goto LABEL_6;
  }
LABEL_7:
  v10 = *((_QWORD *)a2 + 2);
  v11 = *((_QWORD *)a1 + 2);
  if ( v10 != v11 && (!a3 || v10 != *((_QWORD *)a3 + 2)) )
    zzzAttachThreadInput(v11, v10, 1);
LABEL_8:
  v12 = 0LL;
  if ( a1 )
    v12 = *(_QWORD *)a1;
  v13 = IsTrayWindow((__int64)a1, 1);
  if ( !gpqForeground || (v14 = 1, *(struct tagWND **)(gpqForeground + 120LL) != a1) )
    v14 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( a3 == a2 )
        goto LABEL_19;
      v15 = v12;
      if ( v14 )
        v16 = 27LL;
      else
        v16 = 30LL;
      goto LABEL_18;
    }
    PostIAMShellHookMessage(v14 != 0 ? 26 : 29, v12);
    if ( v13 )
    {
      xxxCallHook(1, v12, 0LL, 10);
      PostShellHookMessagesEx(1uLL, v12, 0LL);
    }
  }
  else if ( a2 )
  {
    if ( v13 )
    {
      xxxCallHook(2, v12, 0LL, 10);
      PostShellHookMessagesEx(2uLL, v12, 0LL);
    }
    v15 = v12;
    v16 = v14 != 0 ? 25 : 28;
LABEL_18:
    PostIAMShellHookMessage(v16, v15);
  }
LABEL_19:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 )
      v3 = *(_QWORD *)a2;
    v18 = *(_QWORD *)a1;
    v19 = (void *)ReferenceDwmApiPort(v17);
    DwmAsyncOwnerChange(v19, v18, v3);
  }
}
