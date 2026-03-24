/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C002DB50
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000E488 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C002B3A0 (HandleDisplayChangeForInactiveDesktops.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0031A40 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C003A884 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003B09C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     SetVisible @ 0x1C004BD40 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 *     xxxNotifyMonitorChanged @ 0x1C006C654 (xxxNotifyMonitorChanged.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006EC18 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     NtUserLayoutCompleted @ 0x1C011C5D0 (NtUserLayoutCompleted.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0125320 (SetWindowCompositionFreezeSWR.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0136E30 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EAD58 (-RequestModernAppClose@@YAHXZ.c)
 *     _lambda_3029ce1d0d0873684df583e6396a0ba0_::operator() @ 0x1C023FA9C (_lambda_3029ce1d0d0873684df583e6396a0ba0_--operator().c)
 * Callees:
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0066ACC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

void __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // rbx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 )
  {
    v3 = a3;
    v4 = a2;
    if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
    {
      if ( *(_QWORD *)(a1 + 288) )
      {
        if ( a2 != 35 )
        {
          CompositeAppFrameWindowOrSelf = (struct tagWND *)_HMObjectFromHandle(a3);
          v7 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 5);
          if ( (_DWORD)v4 == 18 )
          {
            *(_BYTE *)(v7 + 234) &= ~2u;
          }
          else
          {
            *(_BYTE *)(v7 + 234) |= 2u;
            if ( (((_DWORD)v4 - 19) & 0xFFFFFFFB) == 0
              && (!gpqForeground || *(struct tagWND **)(gpqForeground + 120LL) != CompositeAppFrameWindowOrSelf) )
            {
              return;
            }
            if ( (_DWORD)v4 == 19 )
              CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(CompositeAppFrameWindowOrSelf);
          }
          if ( CompositeAppFrameWindowOrSelf )
            v3 = *(_QWORD *)CompositeAppFrameWindowOrSelf;
          else
            v3 = 0LL;
        }
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL);
        if ( v8 )
          PostMessage(v8, *(unsigned int *)(gpsi + 928LL), v4, v3);
      }
    }
  }
}
