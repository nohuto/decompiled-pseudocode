/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00692F0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C006A158 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     xxxGetSysMenu @ 0x1C00BBF14 (xxxGetSysMenu.c)
 *     _GetMenuState @ 0x1C00C8FD8 (_GetMenuState.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA5C (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA78 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01DD47C (xxxActiveWindowTracking.c)
 *     xxxActivateEnabledPopup @ 0x1C023F4F4 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C023F618 (xxxFlashEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(ShellWindowManagement **a1, HWND a2, signed int a3, int a4)
{
  int v6; // r14d
  __int64 DesktopWindow; // rax
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  struct tagCURSOR *v17; // rcx
  int v19; // esi
  const struct tagWND *v20; // rcx
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  bool v26; // al
  struct tagCURSOR *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // esi
  int v37; // esi
  int v38; // esi
  __int64 v39; // rbx
  __int128 v40; // [rsp+20h] [rbp-38h] BYREF
  __int64 v41; // [rsp+30h] [rbp-28h]
  _QWORD v42[4]; // [rsp+38h] [rbp-20h] BYREF

  v6 = (int)a2;
  v40 = 0LL;
  v41 = 0LL;
  if ( !a4 )
    goto LABEL_4;
  if ( ShellWindowManagement::BehaviorEnabled(a1[3], (const struct tagDESKTOP *)8, a3)
    && IsSemiMaximized((const struct tagWND *)a1) )
  {
    v21 = a3 - 10;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_35;
      v23 = v22 - 2;
      if ( !v23 )
        goto LABEL_36;
      v24 = v23 - 1;
      if ( !v24 )
      {
LABEL_35:
        v26 = IsLeftSemiMaximized(v20);
        goto LABEL_37;
      }
      v25 = v24 - 2;
      if ( v25 )
      {
        if ( v25 != 1 )
          goto LABEL_18;
        goto LABEL_35;
      }
    }
LABEL_36:
    v26 = IsRightSemiMaximized(v20);
LABEL_37:
    if ( v26 )
      goto LABEL_38;
    goto LABEL_18;
  }
  if ( a3 < 10 )
  {
LABEL_4:
    DesktopWindow = GetDesktopWindow(a1);
    v10 = 0LL;
    if ( v9 != DesktopWindow )
      v10 = v9;
    if ( v10 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v40 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v40;
      *((_QWORD *)&v40 + 1) = v10;
      HMLockObject(v10);
      v12 = xxxSendMessage(v10);
      ThreadUnlock1(v14, v13, v15);
      if ( v12 )
        return 1LL;
    }
    if ( !a4 )
      goto LABEL_18;
    v16 = HMValidateHandleNoSecure(v6, 1);
    if ( v16 )
    {
      if ( a3 == -2 )
      {
        v19 = a4 - 512;
        if ( !v19 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL);
          goto LABEL_18;
        }
        v36 = v19 - 1;
        if ( v36 )
        {
          v37 = v36 - 3;
          if ( v37 )
          {
            v38 = v37 - 3;
            if ( v38 )
            {
              if ( v38 != 4 )
                goto LABEL_18;
            }
          }
        }
        else
        {
          v39 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
          xxxActivateEnabledPopup((struct tagWND *)a1);
          if ( v39 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
            goto LABEL_18;
        }
        xxxFlashEnabledPopup(a1);
        goto LABEL_18;
      }
      if ( a3 != 1 )
      {
LABEL_18:
        v17 = (struct tagCURSOR *)gasyscur[1];
        goto LABEL_13;
      }
      v17 = *(struct tagCURSOR **)(*(_QWORD *)(v16 + 136) + 88LL);
      if ( v17 )
LABEL_13:
        zzzSetCursor(v17);
    }
    return 0LL;
  }
  if ( a3 <= 11 )
  {
LABEL_38:
    v27 = (struct tagCURSOR *)gasyscur[484];
    goto LABEL_39;
  }
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_45:
      v27 = (struct tagCURSOR *)gasyscur[346];
      goto LABEL_39;
    }
    if ( a3 == 14 )
    {
LABEL_44:
      v27 = (struct tagCURSOR *)gasyscur[415];
      goto LABEL_39;
    }
    if ( a3 != 15 )
    {
      if ( a3 != 16 )
      {
        if ( a3 != 17 )
          goto LABEL_4;
        goto LABEL_45;
      }
      goto LABEL_44;
    }
  }
  v27 = *(struct tagCURSOR **)(gasyscur[0] + 4424LL);
LABEL_39:
  v28 = HMValidateHandleNoSecure(v6, 1);
  v29 = v28;
  if ( !v28 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v28 + 40) + 30LL) & 8) != 0 )
  {
    v42[2] = 0LL;
    v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v42[0] = *(_QWORD *)(v30 + 416);
    *(_QWORD *)(v30 + 416) = v42;
    v42[1] = v29;
    HMLockObject(v29);
    SysMenu = xxxGetSysMenu(v29, 1LL);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v34, v33, v35);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_18;
  }
  zzzSetCursor(v27);
  return 1LL;
}
