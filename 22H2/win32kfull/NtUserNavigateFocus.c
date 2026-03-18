/*
 * XREFs of NtUserNavigateFocus @ 0x1C01D7B90
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000F42C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013F78 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFF84 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C01F2BF8 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 */

_QWORD *__fastcall NtUserNavigateFocus(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  struct _LARGE_STRING **TopLevelWindow; // rsi
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h]
  __int128 v24; // [rsp+48h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-10h]

  v23 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = v2;
  if ( !v2 || (v4 = *(_QWORD *)(v2 + 40), v3 = (*(_WORD *)(v4 + 42) & 0x2FFFu) - 669, (v3 & 0xFFFFFFFD) == 0) )
  {
    v8 = 0LL;
    goto LABEL_29;
  }
  *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v22;
  *((_QWORD *)&v22 + 1) = v2;
  HMLockObject(v2);
  v8 = 0LL;
  if ( gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground((const struct tagWND *)v7) )
    goto LABEL_5;
  v12 = *((_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v7) + 2);
  if ( *(_QWORD *)(v12 + 432) == gpqForeground )
  {
    if ( *(_QWORD *)(v12 + 672) )
      goto LABEL_5;
  }
  v13 = *(_QWORD *)(v7 + 16);
  if ( v13 == gptiCurrent )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v13 + 424)) && (*(_DWORD *)(v7 + 320) & 0x1000) != 0 )
    {
LABEL_18:
      TopLevelWindow = (struct _LARGE_STRING **)GetTopLevelWindow(v7);
      if ( gpqForeground && *(struct _LARGE_STRING ***)(gpqForeground + 128LL) == TopLevelWindow )
      {
        v8 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        if ( v8 )
          v8 = (_QWORD *)*v8;
        if ( IsPwndComponentWebview((const struct tagWND *)v7) )
          xxxSendNotifyMessage((struct tagWND *)v7, 6u, 1uLL, *TopLevelWindow, 0);
      }
      else if ( TopLevelWindow == (struct _LARGE_STRING **)v7 )
      {
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8LL, v16);
      }
      else
      {
        v24 = 0LL;
        v25 = 0LL;
        ThreadLock(TopLevelWindow, &v24);
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8LL, v17);
        ThreadUnlock1(v19, v18, v20);
      }
      goto LABEL_27;
    }
  }
  else
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
      v14 = IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL));
    }
    else
    {
      if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
        goto LABEL_5;
      v14 = IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL));
    }
    if ( v14 )
    {
      v8 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
      if ( v8 )
        v8 = (_QWORD *)*v8;
      goto LABEL_18;
    }
  }
LABEL_5:
  UserSetLastError(5);
LABEL_27:
  ThreadUnlock1(v10, v9, v11);
LABEL_29:
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v8;
}
