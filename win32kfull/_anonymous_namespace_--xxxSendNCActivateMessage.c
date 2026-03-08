/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C009E068
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C009BD38 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00E6D24 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00291D4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035B2C (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(struct tagWND *a1, __int64 a2)
{
  struct tagWND *TopLevelWindow; // rbx
  bool v4; // di
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  TopLevelWindow = a1;
  v4 = 1;
  if ( !(_WORD)a2 || !(unsigned int)CoreWindowProp::IsComponent(a1) )
    return xxxSendMessage(TopLevelWindow, 0x86u) != 0;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelWindow);
  if ( TopLevelHostForComponent )
    TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
  if ( TopLevelWindow && gpqForegroundPrev && *(struct tagWND **)(gpqForegroundPrev + 136LL) != TopLevelWindow )
  {
    v10 = 0LL;
    v11 = 0LL;
    ThreadLockAlways(TopLevelWindow, &v10);
    v4 = (unsigned int)xxxSendNotifyMessage(TopLevelWindow, 134LL, a2, 0LL, 1) != 0;
    ThreadUnlock1(v8, v7, v9);
  }
  return v4;
}
