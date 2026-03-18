/*
 * XREFs of NtUserNavigateFocus @ 0x1C01FA6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00024C8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077038 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C011E5AC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0210658 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 */

_QWORD *__fastcall NtUserNavigateFocus(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  struct _LARGE_STRING **TopLevelWindow; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h]
  __int128 v23; // [rsp+48h] [rbp-20h] BYREF
  __int64 v24; // [rsp+58h] [rbp-10h]

  v22 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = v2;
  if ( !v2 || (v3 = *(_QWORD *)(v2 + 40), (((*(_WORD *)(v3 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0) )
  {
    v5 = 0LL;
    goto LABEL_29;
  }
  *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v21;
  *((_QWORD *)&v21 + 1) = v2;
  HMLockObject(v2);
  v5 = 0LL;
  if ( gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground((const struct tagWND *)v4) )
    goto LABEL_5;
  v6 = *((_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v4) + 2);
  if ( *(_QWORD *)(v6 + 432) == gpqForeground )
  {
    if ( *(_QWORD *)(v6 + 672) )
      goto LABEL_5;
  }
  v10 = *(_QWORD *)(v4 + 16);
  if ( v10 == gptiCurrent )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v10 + 424)) && (*(_DWORD *)(v4 + 320) & 0x1000) != 0 )
    {
LABEL_18:
      TopLevelWindow = (struct _LARGE_STRING **)GetTopLevelWindow(v4);
      if ( gpqForeground && *(struct _LARGE_STRING ***)(gpqForeground + 120LL) == TopLevelWindow )
      {
        v5 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
        if ( v5 )
          v5 = (_QWORD *)*v5;
        if ( IsPwndComponentWebview((const struct tagWND *)v4) )
          xxxSendNotifyMessage((struct tagWND *)v4, 6u, 1LL, *TopLevelWindow, 0);
      }
      else if ( TopLevelWindow == (struct _LARGE_STRING **)v4 )
      {
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8LL, v13, v14);
      }
      else
      {
        v23 = 0LL;
        v24 = 0LL;
        ThreadLock((__int64)TopLevelWindow, (__int64 *)&v23);
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8LL, v15, v16);
        ThreadUnlock1(v18, v17, v19);
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
      v5 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
      if ( v5 )
        v5 = (_QWORD *)*v5;
      goto LABEL_18;
    }
  }
LABEL_5:
  UserSetLastError(5LL, v6);
LABEL_27:
  ThreadUnlock1(v8, v7, v9);
LABEL_29:
  UserSessionSwitchLeaveCrit(v3);
  return v5;
}
