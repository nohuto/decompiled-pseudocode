/*
 * XREFs of ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354
 * Callers:
 *     xxxFlashWindow @ 0x1C0005B74 (xxxFlashWindow.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000A7BC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C000D3A0 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C0097B28 (_anonymous_namespace_--EligibleWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C009DE3C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ParkIcon @ 0x1C0101D68 (ParkIcon.c)
 *     xxxRedrawTitle @ 0x1C01097D0 (xxxRedrawTitle.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxSetSysMenu @ 0x1C0224F64 (xxxSetSysMenu.c)
 *     xxxRedrawFrameAndHook @ 0x1C022A73C (xxxRedrawFrameAndHook.c)
 *     xxxArrangeIconicWindows @ 0x1C023C684 (xxxArrangeIconicWindows.c)
 * Callees:
 *     ?Is31TrayWindow@@YAHPEAUtagWND@@@Z @ 0x1C0222B6C (-Is31TrayWindow@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall IsTrayWindow(struct tagWND *a1, char a2)
{
  __int64 v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  __int64 v7; // rax
  char v9; // al

  if ( !a1 )
    return 0;
  v3 = *((_QWORD *)a1 + 3);
  if ( !v3
    || (a2 & 1) != 0
    && ((*(_DWORD *)(gpsi + 2120LL) & 8) == 0
     || ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
     && !*(_QWORD *)(*(_QWORD *)(v3 + 8) + 192LL)) )
  {
    return 0;
  }
  if ( (a2 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 1) == 0 )
    return 0;
  v4 = *((_QWORD *)a1 + 13);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v3 + 8);
  if ( !v5 || v4 != *(_QWORD *)(v5 + 24) )
    return 0;
  v6 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v6[26] & 4) != 0 )
    return 1;
  if ( (char)v6[24] < 0 || (v6[27] & 8) != 0 )
    return 0;
  if ( (v6[21] & 2) != 0 )
  {
    v7 = *((_QWORD *)a1 + 15);
    if ( !v7 )
      return 1;
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 21LL) & 2) != 0 )
      return 0;
  }
  if ( (v6[20] & 0x40) != 0 )
    return (unsigned int)Is31TrayWindow(a1) != 0;
  v9 = v6[30];
  return (v9 & 0xA) != 0 && ((v9 & 0xC0) != 0 || (v6[31] & 0x20) != 0) && (unsigned int)Is31TrayWindow(a1) != 0;
}
