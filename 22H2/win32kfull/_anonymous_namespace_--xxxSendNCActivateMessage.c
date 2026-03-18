/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C0066A48
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C004AD48 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0028858 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00CFFEC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(struct tagWND *a1, unsigned __int64 a2, __int64 a3)
{
  const struct tagWND *TopLevelWindow; // rbx
  bool v6; // di
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  TopLevelWindow = a1;
  v6 = 1;
  if ( !(_WORD)a2 || !(unsigned int)CoreWindowProp::IsComponent(a1) )
    return xxxSendMessage(TopLevelWindow, 134LL, a2, a3) != 0;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelWindow);
  if ( TopLevelHostForComponent )
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
  if ( TopLevelWindow && gpqForegroundPrev && *(const struct tagWND **)(gpqForegroundPrev + 136LL) != TopLevelWindow )
  {
    v12 = 0LL;
    v13 = 0LL;
    ThreadLockAlways(TopLevelWindow, &v12);
    v6 = (unsigned int)xxxSendNotifyMessage(TopLevelWindow, 0x86u, a2, 0LL, 1) != 0;
    ThreadUnlock1(v10, v9, v11);
  }
  return v6;
}
