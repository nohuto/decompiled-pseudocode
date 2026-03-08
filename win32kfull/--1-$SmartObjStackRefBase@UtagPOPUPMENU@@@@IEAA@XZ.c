/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     xxxSetMenuInfo @ 0x1C00A3A58 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00A4FB4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A6850 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C00A69F0 (MNGetPopupFromMenu.c)
 *     xxxInsertMenuItem @ 0x1C00A7ADC (xxxInsertMenuItem.c)
 *     GetInheritedMonitor @ 0x1C00ACC90 (GetInheritedMonitor.c)
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C012D878 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C75BC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C0201F10 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C0202004 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C02024A0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C0202580 (xxxMNEndMenuState.c)
 *     xxxMNEndMenuStateInternal @ 0x1C02026A0 (xxxMNEndMenuStateInternal.c)
 *     xxxEndMenuLoop @ 0x1C0216810 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0217DF8 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0218110 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C021876C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0219098 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0219500 (MNSetTimerToCloseHierarchy.c)
 *     xxxCallHandleMenuMessages @ 0x1C0219674 (xxxCallHandleMenuMessages.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C021A3D4 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxEnableMenuItem @ 0x1C0224CA0 (xxxEnableMenuItem.c)
 *     xxxHiliteMenuItem @ 0x1C0233248 (xxxHiliteMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C0233A80 (xxxGetMenuBarInfo.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0234140 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNDragOver @ 0x1C023457C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0234718 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0234910 (xxxMNUpdateDraggingInfo.c)
 *     xxxEndMenu @ 0x1C0234AE4 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023A528 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(_QWORD *a1)
{
  __int64 ThreadWin32Thread; // rdi
  _QWORD *result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8LL) )
  {
    if ( *(_BYTE *)(*a1 + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
  }
  result = *(_QWORD **)(ThreadWin32Thread + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(ThreadWin32Thread + 1512) = result;
  }
  return result;
}
