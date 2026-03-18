/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00F188C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E40 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E5C (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00F178C (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     xxxActiveWindowTracking @ 0x1C01B7230 (xxxActiveWindowTracking.c)
 *     xxxGetSysMenu @ 0x1C02221A0 (xxxGetSysMenu.c)
 *     xxxActivateEnabledPopup @ 0x1C0222C18 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C0222D28 (xxxFlashEnabledPopup.c)
 *     _GetMenuState @ 0x1C024BB54 (_GetMenuState.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, HWND a2, int a3, int a4)
{
  HWND v6; // r14
  __int64 v8; // rax
  const struct tagWND *v9; // rcx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  bool v15; // al
  struct tagCURSOR *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  struct tagCURSOR *v34; // rcx
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // esi
  __int64 v39; // rbx
  __int128 v40; // [rsp+20h] [rbp-38h] BYREF
  __int64 v41; // [rsp+30h] [rbp-28h]
  __int128 v42; // [rsp+38h] [rbp-20h] BYREF
  __int64 v43; // [rsp+48h] [rbp-10h]

  v6 = a2;
  v42 = 0LL;
  v43 = 0LL;
  if ( !a4 )
  {
LABEL_29:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
      v25 = *((_QWORD *)a1 + 13);
    else
      v25 = 0LL;
    v26 = *((_QWORD *)a1 + 3);
    v27 = 0LL;
    if ( v26 )
    {
      v28 = *(_QWORD *)(v26 + 8);
      if ( v28 )
        v27 = *(_QWORD *)(v28 + 24);
    }
    if ( v25 != v27 )
    {
      if ( v25 )
      {
        ThreadLockAlways(v25, &v42);
        v29 = xxxSendMessage(v25, 32LL, v6, (unsigned __int16)a3 | ((unsigned __int16)a4 << 16));
        ThreadUnlock1(v31, v30, v32);
        if ( v29 )
          return 1LL;
      }
    }
    if ( !a4 )
      goto LABEL_57;
    LOBYTE(a2) = 1;
    v33 = HMValidateHandleNoSecure(v6, a2);
    if ( !v33 )
      return 0LL;
    if ( a3 == -2 )
    {
      v35 = a4 - 512;
      if ( !v35 )
      {
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          xxxActiveWindowTracking(a1, 32LL, 4294967294LL);
        goto LABEL_57;
      }
      v36 = v35 - 1;
      if ( v36 )
      {
        v37 = v36 - 3;
        if ( v37 )
        {
          v38 = v37 - 3;
          if ( v38 )
          {
            if ( v38 != 4 )
              goto LABEL_57;
          }
        }
      }
      else
      {
        v39 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
        xxxActivateEnabledPopup(a1);
        if ( v39 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) )
          goto LABEL_57;
      }
      xxxFlashEnabledPopup(a1);
      goto LABEL_57;
    }
    if ( a3 == 1 )
    {
      v34 = *(struct tagCURSOR **)(*(_QWORD *)(v33 + 136) + 88LL);
      if ( v34 )
        goto LABEL_58;
      return 0LL;
    }
LABEL_57:
    v34 = (struct tagCURSOR *)gasyscur[1];
LABEL_58:
    zzzSetCursor(v34);
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 3);
  if ( *(_QWORD *)(v8 + 328) && (*(_DWORD *)(v8 + 336) & 8) != 0 && IsSemiMaximized(a1) )
  {
    v10 = a3 - 10;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_11;
      v12 = v11 - 2;
      if ( !v12 )
        goto LABEL_20;
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_11:
        v15 = IsLeftSemiMaximized(v9);
        goto LABEL_12;
      }
      v14 = v13 - 2;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_57;
        goto LABEL_11;
      }
    }
LABEL_20:
    v15 = IsRightSemiMaximized(v9);
LABEL_12:
    if ( v15 )
    {
LABEL_13:
      v16 = (struct tagCURSOR *)gasyscur[484];
      goto LABEL_14;
    }
    goto LABEL_57;
  }
  if ( a3 == 10 || a3 == 11 )
    goto LABEL_13;
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_32:
      v16 = (struct tagCURSOR *)gasyscur[346];
      goto LABEL_14;
    }
    if ( a3 == 14 )
    {
LABEL_31:
      v16 = (struct tagCURSOR *)gasyscur[415];
      goto LABEL_14;
    }
    if ( a3 != 15 )
    {
      if ( a3 != 16 )
      {
        if ( a3 != 17 )
          goto LABEL_29;
        goto LABEL_32;
      }
      goto LABEL_31;
    }
  }
  v16 = *(struct tagCURSOR **)(gasyscur[0] + 4424LL);
LABEL_14:
  LOBYTE(a2) = 1;
  v17 = HMValidateHandleNoSecure(v6, a2);
  v18 = v17;
  if ( v17 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 30LL) & 8) == 0
      || (v40 = 0LL,
          v41 = 0LL,
          ThreadLockAlways(v17, &v40),
          SysMenu = xxxGetSysMenu(v18, 1LL),
          MenuState = GetMenuState(SysMenu, 61440LL),
          ThreadUnlock1(v22, v21, v23),
          MenuState == -1)
      || (MenuState & 3) == 0 )
    {
      zzzSetCursor(v16);
      return 1LL;
    }
    goto LABEL_57;
  }
  return 0LL;
}
