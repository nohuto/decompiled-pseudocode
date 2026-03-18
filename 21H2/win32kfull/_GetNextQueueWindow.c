/*
 * XREFs of _GetNextQueueWindow @ 0x1C01EE6BC
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C00038F4 (xxxSwitchToThisWindow.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01ED4B8 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 * Callees:
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077038 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00779AC (IsWindowUnderActiveLockScreen.c)
 *     GetLastTopMostWindow @ 0x1C0085494 (GetLastTopMostWindow.c)
 *     GetAppCompatFlags @ 0x1C01027E0 (GetAppCompatFlags.c)
 */

struct tagWND *__fastcall GetNextQueueWindow(__int64 a1, int a2, int a3)
{
  int v3; // r14d
  __int64 LastTopMostWindow; // rax
  ULONG_PTR v6; // r13
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v9; // rdx
  struct tagWND *v10; // rbx
  __int64 v11; // rsi
  struct tagWND *v12; // r12
  struct tagWND *v13; // rdi
  struct tagWND *i; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  struct tagWND *j; // rcx
  __int64 v19; // r9
  const struct tagWND *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  struct tagWND *v24; // rax
  struct tagWND *v25; // rcx

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
  v10 = CompositeAppFrameWindowOrSelf;
  if ( !CompositeAppFrameWindowOrSelf )
    return 0LL;
  v11 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 13);
  if ( !v11 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    v10 = *(struct tagWND **)(v11 + 112);
  }
  v12 = v10;
  if ( !v10 )
    return 0LL;
  while ( 1 )
  {
    if ( (*(_WORD *)(*((_QWORD *)v10 + 5) + 42LL) & 0x2FFF) != 0x29D )
    {
      v13 = 0LL;
      if ( (a2 != 0) == -2 )
      {
        v15 = *((_QWORD *)v10 + 13);
        if ( v15 )
        {
          v13 = *(struct tagWND **)(v15 + 112);
          v16 = GetAppCompatFlags(0LL) & 8;
          while ( v13 && v16 && (*(_BYTE *)(*((_QWORD *)v13 + 5) + 24LL) & 8) != 0 )
            v13 = (struct tagWND *)*((_QWORD *)v13 + 11);
        }
      }
      else if ( (a2 != 0) == -1 )
      {
        for ( i = *(struct tagWND **)(*((_QWORD *)v10 + 13) + 112LL); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
          v13 = i;
      }
      else if ( a2 )
      {
        if ( a2 != 0 )
        {
          v13 = (struct tagWND *)*((_QWORD *)v10 + 12);
        }
        else if ( (a2 != 0) == 2 )
        {
          v13 = (struct tagWND *)*((_QWORD *)v10 + 15);
        }
        else
        {
          if ( (a2 != 0) != 3 )
          {
            UserSetLastError(1443LL, v9);
            goto LABEL_30;
          }
          v13 = (struct tagWND *)*((_QWORD *)v10 + 14);
        }
      }
      else
      {
        v13 = (struct tagWND *)*((_QWORD *)v10 + 11);
      }
      v10 = v13;
      if ( v13 )
        goto LABEL_37;
    }
LABEL_30:
    v10 = *(struct tagWND **)(v11 + 112);
    if ( a2 )
    {
      v17 = *((_QWORD *)v10 + 5);
      v9 = *(_QWORD *)(v11 + 112);
      v10 = 0LL;
      if ( (*(_WORD *)(v17 + 42) & 0x2FFF) != 0x29D )
      {
        for ( j = *(struct tagWND **)(*(_QWORD *)(v9 + 104) + 112LL); j; j = (struct tagWND *)*((_QWORD *)j + 11) )
          v10 = j;
      }
    }
    if ( v3 )
      return 0LL;
    v3 = 1;
    if ( !v10 )
      return 0LL;
LABEL_37:
    if ( v10 == v12 )
      return 0LL;
    if ( v10 != (struct tagWND *)v6 )
    {
      v19 = *((_QWORD *)v10 + 5);
      if ( *(char *)(v19 + 24) >= 0
        && (*(_BYTE *)(v19 + 27) & 8) == 0
        && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)v10)
        && (*(_BYTE *)(v21 + 31) & 0x10) != 0
        && !(unsigned int)GetWindowCloakState(v20) )
      {
        v22 = *((_QWORD *)v10 + 25);
        if ( !v22
          || (*(_BYTE *)(*(_QWORD *)(v22 + 40) + 31LL) & 8) == 0
          && (!a3 || (v23 = *((_QWORD *)v10 + 5), (*(_BYTE *)(v23 + 24) & 8) == 0) && (*(_BYTE *)(v23 + 20) & 0x20) == 0) )
        {
          v24 = (struct tagWND *)*((_QWORD *)v10 + 15);
          v25 = v10;
          while ( v24 )
          {
            v25 = v24;
            v24 = (struct tagWND *)*((_QWORD *)v24 + 15);
          }
          if ( v10 == *((struct tagWND **)v25 + 25) )
            return v10;
        }
      }
    }
    if ( !v10 )
      return 0LL;
  }
}
