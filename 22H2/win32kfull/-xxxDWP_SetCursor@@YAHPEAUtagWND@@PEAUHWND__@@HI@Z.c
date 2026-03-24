/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C004B32C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxActivateEnabledPopup @ 0x1C000710C (xxxActivateEnabledPopup.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C004B590 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004B5B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     _GetMenuState @ 0x1C00DADD0 (_GetMenuState.c)
 *     xxxGetSysMenu @ 0x1C00DAE14 (xxxGetSysMenu.c)
 *     xxxActiveWindowTracking @ 0x1C01E246C (xxxActiveWindowTracking.c)
 *     xxxFlashEnabledPopup @ 0x1C02436A4 (xxxFlashEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, HWND a2, signed int a3, int a4)
{
  __int64 v8; // rdx
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct tagCURSOR *v16; // rcx
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  __int64 v22; // rbx
  char v23; // cl
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  bool v29; // zf
  struct tagCURSOR *v30; // rbx
  __int64 v31; // rax
  struct tagWND *v32; // rdi
  __int64 v33; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v36; // rcx
  __int128 v37; // [rsp+20h] [rbp-38h] BYREF
  __int64 v38; // [rsp+30h] [rbp-28h]
  _QWORD v39[4]; // [rsp+38h] [rbp-20h] BYREF

  v37 = 0LL;
  v38 = 0LL;
  if ( !a4 )
    goto LABEL_4;
  if ( ShellWindowManagement::BehaviorEnabled(*((ShellWindowManagement **)a1 + 3), (const struct tagDESKTOP *)8, a3) )
  {
    v23 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL);
    if ( (v23 & 3) != 0 )
    {
      v24 = a3 - 10;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( !v25 )
          goto LABEL_42;
        v26 = v25 - 2;
        if ( !v26 )
          goto LABEL_43;
        v27 = v26 - 1;
        if ( !v27 )
        {
LABEL_42:
          v29 = (v23 & 1) == 0;
          goto LABEL_44;
        }
        v28 = v27 - 2;
        if ( v28 )
        {
          if ( v28 != 1 )
            goto LABEL_18;
          goto LABEL_42;
        }
      }
LABEL_43:
      v29 = (v23 & 2) == 0;
LABEL_44:
      if ( !v29 )
        goto LABEL_45;
      goto LABEL_18;
    }
  }
  if ( a3 < 10 )
  {
LABEL_4:
    DesktopWindow = GetDesktopWindow(a1);
    v11 = 0LL;
    if ( v10 != DesktopWindow )
      v11 = v10;
    if ( v11 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v37 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v37;
      *((_QWORD *)&v37 + 1) = v11;
      HMLockObject(v11);
      v13 = xxxSendMessage(v11, 32LL, a2, (unsigned __int16)a3 | ((unsigned __int16)a4 << 16));
      ThreadUnlock1(v14);
      if ( v13 )
        return 1LL;
    }
    if ( !a4 )
      goto LABEL_18;
    LOBYTE(v10) = 1;
    v15 = HMValidateHandleNoSecure(a2, v10);
    if ( v15 )
    {
      if ( a3 == -2 )
      {
        v18 = a4 - 512;
        if ( !v18 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL);
          goto LABEL_18;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 3;
          if ( v20 )
          {
            v21 = v20 - 3;
            if ( v21 )
            {
              if ( v21 != 4 )
                goto LABEL_18;
            }
          }
        }
        else
        {
          v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
          xxxActivateEnabledPopup(a1);
          if ( v22 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
            goto LABEL_18;
        }
        xxxFlashEnabledPopup(a1);
LABEL_18:
        v16 = (struct tagCURSOR *)gasyscur[1];
        goto LABEL_13;
      }
      if ( a3 != 1 )
        goto LABEL_18;
      v16 = *(struct tagCURSOR **)(*(_QWORD *)(v15 + 136) + 88LL);
      if ( v16 )
LABEL_13:
        zzzSetCursor(v16);
    }
    return 0LL;
  }
  if ( a3 <= 11 )
  {
LABEL_45:
    v30 = (struct tagCURSOR *)gasyscur[484];
    goto LABEL_46;
  }
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_52:
      v30 = (struct tagCURSOR *)gasyscur[346];
      goto LABEL_46;
    }
    if ( a3 == 14 )
    {
LABEL_51:
      v30 = (struct tagCURSOR *)gasyscur[415];
      goto LABEL_46;
    }
    if ( a3 != 15 )
    {
      if ( a3 != 16 )
      {
        if ( a3 != 17 )
          goto LABEL_4;
        goto LABEL_52;
      }
      goto LABEL_51;
    }
  }
  v30 = *(struct tagCURSOR **)(gasyscur[0] + 4424LL);
LABEL_46:
  LOBYTE(v8) = 1;
  v31 = HMValidateHandleNoSecure(a2, v8);
  v32 = (struct tagWND *)v31;
  if ( !v31 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v31 + 40) + 30LL) & 8) != 0 )
  {
    v39[2] = 0LL;
    v33 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v39[0] = *(_QWORD *)(v33 + 416);
    *(_QWORD *)(v33 + 416) = v39;
    v39[1] = v32;
    HMLockObject(v32);
    SysMenu = xxxGetSysMenu(v32);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v36);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_18;
  }
  zzzSetCursor(v30);
  return 1LL;
}
