/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C007FC50
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A22D8 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077064 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(struct tagWND *a1, __int64 a2)
{
  const struct tagWND *TopLevelWindow; // rbx
  bool v4; // di
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  TopLevelWindow = a1;
  v4 = 1;
  if ( !(_WORD)a2 || !(unsigned int)CoreWindowProp::IsComponent(a1) )
    return xxxSendMessage((ULONG_PTR)TopLevelWindow) != 0;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelWindow);
  if ( TopLevelHostForComponent )
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
  if ( TopLevelWindow && gpqForegroundPrev && *(const struct tagWND **)(gpqForegroundPrev + 128LL) != TopLevelWindow )
  {
    v11[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v11;
    v11[1] = TopLevelWindow;
    HMLockObject(TopLevelWindow);
    v4 = (unsigned int)xxxSendNotifyMessage(TopLevelWindow, 134LL, a2, 0LL, 1) != 0;
    ThreadUnlock1(v9, v8, v10);
  }
  return v4;
}
