/*
 * XREFs of NtUserNavigateFocus @ 0x1C01D8BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000E6EC (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013228 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035AC4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C01F3DE8 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 */

_QWORD *__fastcall NtUserNavigateFocus(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int128 **TopLevelWindow; // rsi
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h]
  __int128 v21; // [rsp+48h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-10h]

  v20 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = v2;
  if ( !v2 || (v3 = *(_QWORD *)(v2 + 40), (((*(_WORD *)(v3 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0) )
  {
    v5 = 0LL;
    goto LABEL_29;
  }
  *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v19;
  *((_QWORD *)&v19 + 1) = v2;
  HMLockObject(v2);
  v5 = 0LL;
  if ( gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground((const struct tagWND *)v4) )
    goto LABEL_5;
  v9 = *((_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v4) + 2);
  if ( *(_QWORD *)(v9 + 432) == gpqForeground )
  {
    if ( *(_QWORD *)(v9 + 672) )
      goto LABEL_5;
  }
  v10 = *(_QWORD *)(v4 + 16);
  if ( v10 == gptiCurrent )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v10 + 424)) && (*(_DWORD *)(v4 + 320) & 0x1000) != 0 )
    {
LABEL_18:
      TopLevelWindow = (__int128 **)GetTopLevelWindow(v4);
      if ( gpqForeground && *(__int128 ***)(gpqForeground + 128LL) == TopLevelWindow )
      {
        v5 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        if ( v5 )
          v5 = (_QWORD *)*v5;
        if ( IsPwndComponentWebview((const struct tagWND *)v4) )
          xxxSendNotifyMessage((struct tagTHREADINFO **)v4, 6u, 1uLL, *TopLevelWindow, 0);
      }
      else if ( TopLevelWindow == (__int128 **)v4 )
      {
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8LL, v13);
      }
      else
      {
        v21 = 0LL;
        v22 = 0LL;
        ThreadLock(TopLevelWindow, &v21);
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8LL, v14);
        ThreadUnlock1(v16, v15, v17);
      }
      goto LABEL_27;
    }
  }
  else
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
      v11 = IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL));
    }
    else
    {
      if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
        goto LABEL_5;
      v11 = IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL));
    }
    if ( v11 )
    {
      v5 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
      if ( v5 )
        v5 = (_QWORD *)*v5;
      goto LABEL_18;
    }
  }
LABEL_5:
  UserSetLastError(5);
LABEL_27:
  ThreadUnlock1(v7, v6, v8);
LABEL_29:
  UserSessionSwitchLeaveCrit(v3);
  return v5;
}
