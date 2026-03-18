/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C021D324
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C8EC0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxGetSysMenuPtr @ 0x1C0067210 (xxxGetSysMenuPtr.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C006A110 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     xxxSetSysMenu @ 0x1C00BC268 (xxxSetSysMenu.c)
 *     _GetMenuState @ 0x1C00C8FD8 (_GetMenuState.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA94 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020BEC4 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CA38 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CAA8 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CAD4 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall xxxHandleNCMouseGuys(__int64 BugCheckParameter2, const struct tagWND *a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  int v6; // r15d
  unsigned int v9; // esi
  unsigned int v10; // ebp
  const struct tagWND *v11; // rcx
  const struct tagWND *v12; // rdx
  const struct tagWND *NonChildAncestor; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 SysMenuPtr; // rax
  const struct tagWND *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h]

  LOBYTE(v4) = 0;
  v5 = (unsigned int)a3;
  v6 = 0;
  v9 = 0xFFFF;
  v10 = 24;
  v22 = 0LL;
  v23 = 0LL;
  if ( a3 == 2 )
  {
    v12 = (const struct tagWND *)(unsigned int)((_DWORD)a2 - 161);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 != 2 )
        return v4;
      if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL) & 0x21) != 0
        || WindowArrangement::MoveWithArrangementAllowed((WindowArrangement *)BugCheckParameter2, v12)
        && IsSemiMaximized((const struct tagWND *)BugCheckParameter2) )
      {
        v9 = 61728;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 30LL) & 1) != 0 )
      {
        v9 = 61488;
      }
      v6 = 1;
LABEL_32:
      LOBYTE(v4) = v9 - 48;
      if ( v9 != 61488 )
        goto LABEL_44;
      goto LABEL_37;
    }
    v4 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (*(_BYTE *)(v4 + 31) & 0xC0) == 0x40 && (*(_DWORD *)(BugCheckParameter2 + 320) & 0x2000) != 0 )
      return v4;
    NonChildAncestor = (const struct tagWND *)GetNonChildAncestor(BugCheckParameter2);
    ThreadLock((__int64)NonChildAncestor, (__int64 *)&v22);
    xxxActivateWindowWithOptions(NonChildAncestor, 0LL, 0LL, 0);
    ThreadUnlock1(v15, v14, v16);
    v9 = 61456;
    goto LABEL_37;
  }
  if ( a3 == 3 )
    goto LABEL_14;
  if ( a3 <= 4 )
    return v4;
  if ( a3 <= 7 )
  {
LABEL_14:
    if ( (((_DWORD)a2 - 161) & 0xFFFFFFFD) != 0 )
      goto LABEL_32;
    if ( a3 != 3 )
    {
      if ( a3 != 5 )
      {
        if ( a3 == 6 )
          v9 = 61568;
        else
          v9 = 61552;
        goto LABEL_48;
      }
      goto LABEL_22;
    }
    if ( (_DWORD)a2 != 163 )
    {
LABEL_22:
      v9 = 61584;
      goto LABEL_32;
    }
    v9 = 61536;
LABEL_37:
    v4 = *(_QWORD *)(BugCheckParameter2 + 40);
    v10 = 24;
    if ( (*(_BYTE *)(v4 + 30) & 8) != 0 )
    {
      xxxSetSysMenu((_QWORD *)BugCheckParameter2);
      SysMenuPtr = xxxGetSysMenuPtr((_QWORD *)BugCheckParameter2);
      LOBYTE(v4) = GetMenuState(SysMenuPtr, (unsigned __int16)v9 & 0xFFF0);
      if ( (v4 & 3) != 0 )
      {
        if ( v9 != 61456 )
          return v4;
        v19 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( (*(_BYTE *)(v19 + 30) & 4) == 0 )
          return v4;
        if ( (*(_BYTE *)(v19 + 31) & 1) == 0 )
          return v4;
        LOBYTE(v4) = WindowArrangement::DragOperationFromMaximizedAllowed((WindowArrangement *)BugCheckParameter2, v18);
        if ( !(_BYTE)v4 )
        {
          LOBYTE(v4) = ShellWindowManagement::WindowSubjectToBehavior(
                         (ShellWindowManagement **)BugCheckParameter2,
                         (const struct tagWND *)4,
                         v20);
          if ( !(_BYTE)v4 )
            return v4;
        }
      }
    }
    goto LABEL_44;
  }
  if ( a3 != 12 && a3 != 15 || (_DWORD)a2 != 163 )
    return v4;
  LOBYTE(v4) = WindowArrangement::SizeWithSnapAllowed((WindowArrangement *)BugCheckParameter2, a2);
  if ( !(_BYTE)v4 )
    goto LABEL_47;
  v4 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_BYTE *)(v4 + 31) & 0x21) != 0 )
    goto LABEL_47;
  v6 = 1;
  if ( IsVerticallyMaximized((const struct tagWND *)BugCheckParameter2) )
  {
    v10 = 19;
    goto LABEL_45;
  }
  LOBYTE(v4) = IsSemiMaximized(v11);
  if ( (_BYTE)v4 )
  {
LABEL_45:
    LOBYTE(v4) = gSqmIsOptedIn;
    if ( gSqmIsOptedIn )
      LOBYTE(v4) = WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3534LL, 1LL);
    goto LABEL_47;
  }
  v10 = 18;
LABEL_44:
  if ( v6 )
    goto LABEL_45;
LABEL_47:
  if ( v9 != 0xFFFF )
  {
LABEL_48:
    _InterlockedIncrement(&glSendMessage);
    LOBYTE(v4) = xxxSendTransformableMessageTimeout(
                   (unsigned __int64 *)BugCheckParameter2,
                   0x112u,
                   v5 | v9,
                   a4,
                   0,
                   0,
                   0LL,
                   1,
                   1);
    return v4;
  }
  if ( v10 != 24 )
    LOBYTE(v4) = xxxArrangeWindow((ShellWindowManagement **)BugCheckParameter2, (const struct tagWND *)v10);
  return v4;
}
