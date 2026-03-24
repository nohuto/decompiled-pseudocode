/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000E488
 * Callers:
 *     xxxSetWindowData @ 0x1C008A238 (xxxSetWindowData.c)
 * Callees:
 *     zzzAttachThreadInput @ 0x1C00115F8 (zzzAttachThreadInput.c)
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     DwmAsyncOwnerChange @ 0x1C0035D14 (DwmAsyncOwnerChange.c)
 *     PostShellHookMessagesEx @ 0x1C00435F8 (PostShellHookMessagesEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx

  if ( a3 )
  {
    v15 = *((_QWORD *)a3 + 2);
    v16 = *((_QWORD *)a1 + 2);
    if ( v15 != v16 )
    {
      if ( !a2 || (v17 = *((_QWORD *)a2 + 2), v17 == v16) || v17 != v15 )
        zzzAttachThreadInput(v16, v15, 0LL);
    }
  }
  if ( a2 )
  {
    v6 = *((_QWORD *)a2 + 2);
    v7 = *((_QWORD *)a1 + 2);
    if ( v6 != v7 && (!a3 || v6 != *((_QWORD *)a3 + 2)) )
      zzzAttachThreadInput(v7, v6, 1LL);
  }
  v8 = 0LL;
  if ( a1 )
    v8 = *(_QWORD *)a1;
  v9 = IsTrayWindow(a1);
  if ( !gpqForeground || (v10 = 1, *(struct tagWND **)(gpqForeground + 120LL) != a1) )
    v10 = 0;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_17;
    if ( v9 )
    {
      xxxCallHook(2, v8, 0LL, 10);
      PostShellHookMessagesEx(2uLL, v8, 0LL);
    }
    v11 = 25LL;
    v12 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( !v10 )
      v11 = 28LL;
    v13 = v8;
    goto LABEL_16;
  }
  if ( a2 )
  {
    if ( a3 != a2 )
    {
      v13 = v8;
      v12 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v10 )
        v11 = 27LL;
      else
        v11 = 30LL;
LABEL_16:
      PostIAMShellHookMessageEx(v12, v11, v13);
    }
  }
  else
  {
    v18 = 26LL;
    if ( !v10 )
      v18 = 29LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v18, v8);
    if ( v9 )
    {
      xxxCallHook(1, v8, 0LL, 10);
      PostShellHookMessagesEx(1uLL, v8, 0LL);
    }
  }
LABEL_17:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v14 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v14);
  }
}
