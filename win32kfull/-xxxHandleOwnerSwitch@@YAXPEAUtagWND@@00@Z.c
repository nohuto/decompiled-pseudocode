/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000A7BC
 * Callers:
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C00280A4 (DwmAsyncOwnerChange.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     zzzAttachThreadInput @ 0x1C00CCFE8 (zzzAttachThreadInput.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  int v12; // r12d
  int v13; // r15d
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rax

  if ( !a3 || (v6 = *((_QWORD *)a3 + 2), v7 = *((_QWORD *)a1 + 2), v6 == v7) )
  {
LABEL_7:
    if ( !a2 )
      goto LABEL_12;
    goto LABEL_8;
  }
  if ( !a2 || (v8 = *((_QWORD *)a2 + 2), v8 == v7) || v8 != v6 )
  {
    zzzAttachThreadInput(v7, v6, 0LL);
    goto LABEL_7;
  }
LABEL_8:
  v9 = *((_QWORD *)a2 + 2);
  v10 = *((_QWORD *)a1 + 2);
  if ( v9 != v10 && (!a3 || v9 != *((_QWORD *)a3 + 2)) )
    zzzAttachThreadInput(v10, v9, 1LL);
LABEL_12:
  v11 = 0LL;
  if ( a1 )
    v11 = *(_QWORD *)a1;
  v12 = (unsigned __int8)IsTrayWindow(a1, 1LL);
  if ( !gpqForeground || (v13 = 1, *(struct tagWND **)(gpqForeground + 128LL) != a1) )
    v13 = 0;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_30;
    if ( v12 )
    {
      xxxCallHook(2, v11, 0LL, 10);
      PostShellHookMessagesEx(2uLL, v11, 0LL);
    }
    v14 = v11;
    v15 = v13 != 0 ? 25 : 28;
    goto LABEL_29;
  }
  if ( a2 )
  {
    if ( a3 == a2 )
      goto LABEL_30;
    v14 = v11;
    if ( v13 )
      v15 = 27LL;
    else
      v15 = 30LL;
LABEL_29:
    PostIAMShellHookMessage(v15, v14);
    goto LABEL_30;
  }
  PostIAMShellHookMessage(v13 != 0 ? 26 : 29, v11);
  if ( v12 )
  {
    xxxCallHook(1, v11, 0LL, 10);
    PostShellHookMessagesEx(1uLL, v11, 0LL);
  }
LABEL_30:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v16 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v16);
  }
}
