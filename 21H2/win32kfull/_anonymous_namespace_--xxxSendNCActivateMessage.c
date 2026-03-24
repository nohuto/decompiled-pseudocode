/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003A730
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0031A40 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120404 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006A1DC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B740 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F59B8 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(struct tagWND *a1, __int64 a2, __int64 a3)
{
  bool v6; // bp
  unsigned __int64 v7; // r14
  struct tagWND *TopLevelWindow; // rbx
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 i; // r10
  _QWORD v14[4]; // [rsp+30h] [rbp-48h] BYREF
  char v15; // [rsp+80h] [rbp+8h] BYREF

  v6 = 1;
  if ( !(_WORD)a2 )
  {
    v7 = 0LL;
LABEL_3:
    TopLevelWindow = a1;
    v6 = xxxSendMessage(a1, 134LL, a2, a3) != 0;
    goto LABEL_4;
  }
  v7 = 1LL;
  if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
    goto LABEL_3;
  TopLevelWindow = a1;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
  if ( TopLevelHostForComponent )
    TopLevelWindow = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
  if ( TopLevelWindow && gpqForegroundPrev && *(struct tagWND **)(gpqForegroundPrev + 128LL) != TopLevelWindow )
  {
    v14[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v14[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v14;
    v14[1] = TopLevelWindow;
    HMLockObject(TopLevelWindow);
    v6 = (unsigned int)xxxSendNotifyMessage(TopLevelWindow, 134LL, a2, 0LL, 1) != 0;
    ThreadUnlock1(v12);
  }
LABEL_4:
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  if ( (*((_DWORD *)TopLevelWindow + 81) & 8) != 0 )
  {
    for ( i = *((_QWORD *)TopLevelWindow + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 235LL) & 1) != 0 && *(_QWORD *)(i + 16) == *((_QWORD *)TopLevelWindow + 2) )
      {
        QueueNotifyTransformableMessage((struct tagWND *)i, 0x2FCu, v7, 0LL, 1, 0);
        break;
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  return v6;
}
