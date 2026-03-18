/*
 * XREFs of ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0
 * Callers:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C006A184 (_anonymous_namespace_--EligibleWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00A3568 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A41CC (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxRedrawTitle @ 0x1C00A6034 (xxxRedrawTitle.c)
 *     xxxSetSysMenu @ 0x1C00BC268 (xxxSetSysMenu.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ParkIcon @ 0x1C00CBAB0 (ParkIcon.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C010DBA0 (NtUserGetWindowMinimizeRect.c)
 *     xxxArrangeIconicWindows @ 0x1C014E0E4 (xxxArrangeIconicWindows.c)
 *     xxxRedrawFrameAndHook @ 0x1C0150974 (xxxRedrawFrameAndHook.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     ?Is31TrayWindow@@YAHPEAUtagWND@@@Z @ 0x1C0238924 (-Is31TrayWindow@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall IsTrayWindow(__int64 a1, char a2)
{
  __int64 v2; // r10
  struct tagWND *v3; // r9
  _BYTE *v5; // rdx
  __int64 v6; // rax
  char v7; // al

  if ( !a1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 24);
  if ( !v2
    || (a2 & 1) != 0
    && ((*(_DWORD *)(gpsi + 2120LL) & 8) == 0
     || ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
     && !*(_QWORD *)(*(_QWORD *)(v2 + 8) + 192LL)) )
  {
    return 0;
  }
  if ( (a2 & 2) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 1) == 0 || !(unsigned int)IsTopLevelWindow(a1) )
    return 0;
  v5 = (_BYTE *)*((_QWORD *)v3 + 5);
  if ( (v5[26] & 4) != 0 )
    return 1;
  if ( (char)v5[24] < 0 || (v5[27] & 8) != 0 )
    return 0;
  if ( (v5[21] & 2) != 0 )
  {
    v6 = *((_QWORD *)v3 + 15);
    if ( !v6 )
      return 1;
    if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 21LL) & 2) != 0 )
      return 0;
  }
  if ( (v5[20] & 0x40) == 0 )
  {
    v7 = v5[30];
    if ( (v7 & 0xA) == 0 || (v7 & 0xC0) == 0 && (v5[31] & 0x20) == 0 )
      return 0;
  }
  return (unsigned int)Is31TrayWindow(v3) != 0;
}
