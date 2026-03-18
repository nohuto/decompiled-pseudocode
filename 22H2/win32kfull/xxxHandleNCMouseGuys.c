/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C0200A20
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0222AD8 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C00255E4 (GetNonChildAncestor.c)
 *     xxxGetSysMenuPtr @ 0x1C006347C (xxxGetSysMenuPtr.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E24 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01EBB54 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021E068 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     xxxSetSysMenu @ 0x1C0222254 (xxxSetSysMenu.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE70 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DED8 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DF04 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     _GetMenuState @ 0x1C024BB54 (_GetMenuState.c)
 */

char __fastcall xxxHandleNCMouseGuys(
        __int64 BugCheckParameter2,
        const struct tagWND *a2,
        unsigned int a3,
        __int128 *a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  const struct tagWND *v8; // rcx
  unsigned int v9; // ebp
  unsigned int v10; // esi
  const struct tagWND *v11; // rdx
  const struct tagWND *NonChildAncestor; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 SysMenuPtr; // rax
  const struct tagWND *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+60h] [rbp-28h]

  LOBYTE(v4) = 0;
  v5 = a3;
  v21 = 0LL;
  v22 = 0LL;
  if ( a3 == 2 )
  {
    v11 = (const struct tagWND *)(unsigned int)((_DWORD)a2 - 161);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 != 2 )
        return v4;
      if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL) & 0x21) != 0
        || WindowArrangement::MoveWithArrangementAllowed((WindowArrangement *)BugCheckParameter2, v11)
        && IsSemiMaximized((const struct tagWND *)BugCheckParameter2) )
      {
        v10 = 61728;
        goto LABEL_34;
      }
      v4 = *(_QWORD *)(BugCheckParameter2 + 40);
      if ( (*(_BYTE *)(v4 + 30) & 1) == 0 )
        return v4;
      v10 = 61488;
    }
    else
    {
      v4 = *(_QWORD *)(BugCheckParameter2 + 40);
      if ( (*(_BYTE *)(v4 + 31) & 0xC0) == 0x40 && (*(_DWORD *)(BugCheckParameter2 + 320) & 0x2000) != 0 )
        return v4;
      NonChildAncestor = (const struct tagWND *)GetNonChildAncestor(BugCheckParameter2);
      ThreadLock(NonChildAncestor, &v21);
      xxxActivateWindowWithOptions(NonChildAncestor, 0, 0LL, 0);
      ThreadUnlock1(v14, v13, v15);
      v10 = 61456;
    }
    goto LABEL_38;
  }
  if ( a3 == 3 || a3 == 5 || a3 == 6 || a3 == 7 )
  {
    LOBYTE(v4) = (_BYTE)a2 + 95;
    if ( (((_DWORD)a2 - 161) & 0xFFFFFFFD) != 0 )
      return v4;
    if ( a3 != 3 )
    {
      if ( a3 != 5 )
      {
        if ( a3 == 6 )
          v10 = 61568;
        else
          v10 = 61552;
        goto LABEL_34;
      }
      goto LABEL_25;
    }
    if ( (_DWORD)a2 != 163 )
    {
LABEL_25:
      v10 = 61584;
      goto LABEL_34;
    }
    v10 = 61536;
LABEL_38:
    if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 30LL) & 8) != 0 )
    {
      xxxSetSysMenu(BugCheckParameter2);
      SysMenuPtr = xxxGetSysMenuPtr((_QWORD *)BugCheckParameter2);
      LOBYTE(v4) = GetMenuState(SysMenuPtr, (unsigned __int16)v10 & 0xFFF0);
      if ( (v4 & 3) != 0 )
      {
        if ( v10 != 61456 )
          return v4;
        v18 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( (*(_BYTE *)(v18 + 30) & 4) == 0 )
          return v4;
        if ( (*(_BYTE *)(v18 + 31) & 1) == 0 )
          return v4;
        if ( !WindowArrangement::DragOperationFromMaximizedAllowed((WindowArrangement *)BugCheckParameter2, v17) )
        {
          LOBYTE(v4) = ShellWindowManagement::WindowSubjectToBehavior(
                         (ShellWindowManagement *)BugCheckParameter2,
                         (const struct tagWND *)4,
                         v19);
          if ( !(_BYTE)v4 )
            return v4;
        }
      }
    }
LABEL_34:
    _InterlockedIncrement(&glSendMessage);
    LOBYTE(v4) = xxxSendTransformableMessageTimeout(
                   (unsigned __int64 *)BugCheckParameter2,
                   0x112u,
                   v5 | v10,
                   a4,
                   0,
                   0,
                   0LL,
                   1,
                   1);
    return v4;
  }
  if ( (a3 == 12 || a3 == 15) && (_DWORD)a2 == 163 )
  {
    LOBYTE(v4) = WindowArrangement::SizeWithSnapAllowed((WindowArrangement *)BugCheckParameter2, a2);
    if ( (_BYTE)v4 )
    {
      v4 = *(_QWORD *)(BugCheckParameter2 + 40);
      if ( (*(_BYTE *)(v4 + 31) & 0x21) == 0 )
      {
        if ( IsVerticallyMaximized((const struct tagWND *)BugCheckParameter2) )
        {
          v9 = 19;
LABEL_15:
          LOBYTE(v4) = xxxArrangeWindow((ShellWindowManagement **)BugCheckParameter2, (const struct tagWND *)v9);
          return v4;
        }
        LOBYTE(v4) = IsSemiMaximized(v8);
        if ( !(_BYTE)v4 )
        {
          v9 = 18;
          goto LABEL_15;
        }
      }
    }
  }
  return v4;
}
