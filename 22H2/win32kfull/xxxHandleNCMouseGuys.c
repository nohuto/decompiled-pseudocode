/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C0223744
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00DACB8 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C0038928 (GetNonChildAncestor.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039AC8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxSetSysMenu @ 0x1C0046C70 (xxxSetSysMenu.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C004B54C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxGetSysMenuPtr @ 0x1C006190C (xxxGetSysMenuPtr.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     _GetMenuState @ 0x1C00DADD0 (_GetMenuState.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D06C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02234C8 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02234F4 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02235BC (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleNCMouseGuys(unsigned __int64 a1, int a2, int a3, struct _LARGE_STRING *a4)
{
  __int64 v4; // rbp
  int v5; // r15d
  unsigned int v8; // esi
  int v9; // r14d
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  __int64 NonChildAncestor; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 SysMenuPtr; // rax
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]

  v4 = (unsigned int)a3;
  v5 = 0;
  v8 = 0xFFFF;
  v9 = 24;
  v19 = 0LL;
  v20 = 0LL;
  if ( a3 == 2 )
  {
    v11 = a2 - 161;
    if ( v11 )
    {
      if ( v11 == 2 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x21) != 0
          || MoveWithArrangementAllowed((struct tagWND *)a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 3) != 0 )
        {
          v8 = 61728;
        }
        else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 1) != 0 )
        {
          v8 = 61488;
        }
        v5 = 1;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v12 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v12 + 233) & 0x10) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor(a1);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v19 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v19;
        *((_QWORD *)&v19 + 1) = NonChildAncestor;
        if ( NonChildAncestor )
          HMLockObject(NonChildAncestor);
        xxxActivateWindowWithOptions(NonChildAncestor, 0, 0, 0);
        ThreadUnlock1(v15);
        v8 = 61456;
      }
    }
  }
  else
  {
    if ( a3 == 3 )
      goto LABEL_14;
    if ( a3 <= 4 )
      goto LABEL_37;
    if ( a3 <= 7 )
    {
LABEL_14:
      if ( ((a2 - 161) & 0xFFFFFFFD) != 0 )
        goto LABEL_37;
      if ( a3 == 3 )
      {
        if ( a2 == 163 )
        {
          v8 = 61536;
          goto LABEL_37;
        }
      }
      else if ( a3 != 5 )
      {
        if ( a3 == 6 )
          v8 = 61568;
        else
          v8 = 61552;
        goto LABEL_37;
      }
      v8 = 61584;
    }
    else if ( (a3 == 12 || a3 == 15) && a2 == 163 && SizeWithSnapAllowed((struct tagWND *)a1) )
    {
      v10 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v10 + 31) & 0x21) == 0 )
      {
        v5 = 1;
        if ( (*(_BYTE *)(v10 + 233) & 3) != 0 )
        {
          if ( (*(_BYTE *)(v10 + 233) & 3) == 3 )
            v9 = 19;
        }
        else
        {
          v9 = 18;
        }
      }
    }
  }
LABEL_37:
  if ( v8 != 61456 && v8 != 61488 && v8 != 61536
    || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) == 0
    || (xxxSetSysMenu((struct tagWND *)a1),
        SysMenuPtr = xxxGetSysMenuPtr((_QWORD *)a1),
        (GetMenuState(SysMenuPtr, (unsigned __int16)v8 & 0xFFF0) & 3) == 0)
    || v8 == 61456
    && (v17 = *(_QWORD *)(a1 + 40), (*(_BYTE *)(v17 + 30) & 4) != 0)
    && (*(_BYTE *)(v17 + 31) & 1) != 0
    && (DragOperationFromMaximizedAllowed((struct tagWND *)a1)
     || ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)a1, (struct tagWND *)4, v18)) )
  {
    if ( v5 && gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3534LL, 1LL);
    if ( v8 == 0xFFFF )
    {
      if ( v9 != 24 )
        xxxArrangeWindow(a1, v9);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(a1, 0x112u, v4 | v8, a4, 0, 0, 0LL, 1, 1);
    }
  }
}
