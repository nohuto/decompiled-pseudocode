/*
 * XREFs of _GetNextQueueWindow @ 0x1C01F3ED8
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0007AA0 (xxxSwitchToThisWindow.c)
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2C38 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxNextWindow @ 0x1C01F412C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F4970 (xxxOldNextWindow.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C0038CE8 (GetLastTopMostWindow.c)
 *     GetWindowCloakState @ 0x1C004DC0C (GetWindowCloakState.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C004DEE4 (IsWindowUnderActiveLockScreen.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0066ACC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     GetAppCompatFlags @ 0x1C0110F40 (GetAppCompatFlags.c)
 */

struct tagWND *__fastcall GetNextQueueWindow(__int64 a1, int a2, int a3)
{
  int v3; // r15d
  __int64 LastTopMostWindow; // rax
  struct tagWND *v6; // r13
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagWND *v11; // rbx
  __int64 v12; // rsi
  struct tagWND *v13; // r12
  struct tagWND *v14; // rdi
  struct tagWND *i; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  struct tagWND *j; // rcx
  __int64 v20; // r9
  _QWORD *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  struct tagWND *v25; // rax
  struct tagWND *v26; // rcx

  v3 = 0;
  LastTopMostWindow = a1;
  if ( !a1 )
  {
    LastTopMostWindow = GetLastTopMostWindow(0LL);
    if ( !LastTopMostWindow )
      return 0LL;
  }
  v6 = gspwndAltTab;
  TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(LastTopMostWindow);
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
  v11 = CompositeAppFrameWindowOrSelf;
  if ( !CompositeAppFrameWindowOrSelf )
    return 0LL;
  v12 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 13);
  if ( !v12 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    v11 = *(struct tagWND **)(v12 + 112);
  }
  v13 = v11;
  if ( !v11 )
    return 0LL;
  while ( 1 )
  {
    if ( (*(_WORD *)(*((_QWORD *)v11 + 5) + 42LL) & 0x2FFF) != 0x29D )
    {
      v14 = 0LL;
      if ( (a2 != 0) == -2 )
      {
        v16 = *((_QWORD *)v11 + 13);
        if ( v16 )
        {
          v14 = *(struct tagWND **)(v16 + 112);
          v17 = GetAppCompatFlags(0LL) & 8;
          while ( v14 && v17 && (*(_BYTE *)(*((_QWORD *)v14 + 5) + 24LL) & 8) != 0 )
            v14 = (struct tagWND *)*((_QWORD *)v14 + 11);
        }
      }
      else if ( (a2 != 0) == -1 )
      {
        for ( i = *(struct tagWND **)(*((_QWORD *)v11 + 13) + 112LL); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
          v14 = i;
      }
      else if ( a2 )
      {
        if ( a2 != 0 )
        {
          v14 = (struct tagWND *)*((_QWORD *)v11 + 12);
        }
        else if ( (a2 != 0) == 2 )
        {
          v14 = (struct tagWND *)*((_QWORD *)v11 + 15);
        }
        else
        {
          if ( (a2 != 0) != 3 )
          {
            UserSetLastError(1443LL, v9, v10);
            goto LABEL_30;
          }
          v14 = (struct tagWND *)*((_QWORD *)v11 + 14);
        }
      }
      else
      {
        v14 = (struct tagWND *)*((_QWORD *)v11 + 11);
      }
      v11 = v14;
      if ( v14 )
        goto LABEL_37;
    }
LABEL_30:
    v11 = *(struct tagWND **)(v12 + 112);
    if ( a2 )
    {
      v18 = *((_QWORD *)v11 + 5);
      v9 = *(_QWORD *)(v12 + 112);
      v11 = 0LL;
      if ( (*(_WORD *)(v18 + 42) & 0x2FFF) != 0x29D )
      {
        for ( j = *(struct tagWND **)(*(_QWORD *)(v9 + 104) + 112LL); j; j = (struct tagWND *)*((_QWORD *)j + 11) )
          v11 = j;
      }
    }
    if ( v3 )
      return 0LL;
    v3 = 1;
    if ( !v11 )
      return 0LL;
LABEL_37:
    if ( v11 == v13 )
      return 0LL;
    if ( v11 != v6 )
    {
      v20 = *((_QWORD *)v11 + 5);
      if ( *(char *)(v20 + 24) >= 0
        && (*(_BYTE *)(v20 + 27) & 8) == 0
        && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)v11)
        && (*(_BYTE *)(v22 + 31) & 0x10) != 0
        && !(unsigned int)GetWindowCloakState(v21) )
      {
        v23 = *((_QWORD *)v11 + 25);
        if ( !v23
          || (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 31LL) & 8) == 0
          && (!a3 || (v24 = *((_QWORD *)v11 + 5), (*(_BYTE *)(v24 + 24) & 8) == 0) && (*(_BYTE *)(v24 + 20) & 0x20) == 0) )
        {
          v25 = (struct tagWND *)*((_QWORD *)v11 + 15);
          v26 = v11;
          while ( v25 )
          {
            v26 = v25;
            v25 = (struct tagWND *)*((_QWORD *)v25 + 15);
          }
          if ( v11 == *((struct tagWND **)v26 + 25) )
            return v11;
        }
      }
    }
    if ( !v11 )
      return 0LL;
  }
}
