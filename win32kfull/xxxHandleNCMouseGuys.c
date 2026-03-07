char __fastcall xxxHandleNCMouseGuys(struct tagWND *a1, const struct tagWND *a2, unsigned int a3, __int128 *a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  const struct tagWND *v8; // rcx
  unsigned int v9; // ebp
  unsigned int v10; // esi
  const struct tagWND *v11; // rdx
  struct tagWND *NonChildAncestor; // rbx
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
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0
        || WindowArrangement::MoveWithArrangementAllowed(a1, v11) && IsSemiMaximized(a1) )
      {
        v10 = 61728;
        goto LABEL_34;
      }
      v4 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v4 + 30) & 1) == 0 )
        return v4;
      v10 = 61488;
    }
    else
    {
      v4 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v4 + 31) & 0xC0) == 0x40 && (*((_DWORD *)a1 + 80) & 0x2000) != 0 )
        return v4;
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor((__int64)a1);
      ThreadLock(NonChildAncestor, &v21);
      xxxActivateWindowWithOptions(NonChildAncestor, 0LL, 0LL, 0);
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
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
    {
      xxxSetSysMenu(a1);
      SysMenuPtr = xxxGetSysMenuPtr(a1);
      LOBYTE(v4) = GetMenuState(SysMenuPtr, (unsigned __int16)v10 & 0xFFF0);
      if ( (v4 & 3) != 0 )
      {
        if ( v10 != 61456 )
          return v4;
        v18 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v18 + 30) & 4) == 0 )
          return v4;
        if ( (*(_BYTE *)(v18 + 31) & 1) == 0 )
          return v4;
        if ( !WindowArrangement::DragOperationFromMaximizedAllowed(a1, v17) )
        {
          LOBYTE(v4) = ShellWindowManagement::WindowSubjectToBehavior(a1, (const struct tagWND *)4, v19);
          if ( !(_BYTE)v4 )
            return v4;
        }
      }
    }
LABEL_34:
    _InterlockedIncrement(&glSendMessage);
    LOBYTE(v4) = xxxSendTransformableMessageTimeout(a1, 0x112u, v5 | v10, a4, 0, 0, 0LL, 1, 1);
    return v4;
  }
  if ( (a3 == 12 || a3 == 15) && (_DWORD)a2 == 163 )
  {
    LOBYTE(v4) = WindowArrangement::SizeWithSnapAllowed(a1, a2);
    if ( (_BYTE)v4 )
    {
      v4 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v4 + 31) & 0x21) == 0 )
      {
        if ( IsVerticallyMaximized(a1) )
        {
          v9 = 19;
LABEL_15:
          LOBYTE(v4) = xxxArrangeWindow((ShellWindowManagement **)a1, (const struct tagWND *)v9);
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
