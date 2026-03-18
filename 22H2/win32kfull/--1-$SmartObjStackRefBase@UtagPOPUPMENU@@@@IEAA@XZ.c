/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0062B7C (xxxSetMenuInfo.c)
 *     xxxInsertMenuItem @ 0x1C00638F0 (xxxInsertMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00645A0 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C0064740 (MNGetPopupFromMenu.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00649F8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxGetSystemMenu @ 0x1C0067088 (xxxGetSystemMenu.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     GetInheritedMonitor @ 0x1C010E880 (GetInheritedMonitor.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C013A334 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C645C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C01FF380 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C01FF474 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01FF910 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C01FF9F0 (xxxMNEndMenuState.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FFB10 (xxxMNEndMenuStateInternal.c)
 *     xxxEndMenuLoop @ 0x1C0213C50 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0213DC8 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0215238 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0215550 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215BAC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02164D8 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0216940 (MNSetTimerToCloseHierarchy.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216AB4 (xxxCallHandleMenuMessages.c)
 *     xxxMNCancel @ 0x1C0216E04 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0217510 (xxxMNCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0217814 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0218038 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0218950 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0219AA0 (xxxMNSelectItem.c)
 *     xxxEnableMenuItem @ 0x1C0221F90 (xxxEnableMenuItem.c)
 *     xxxHiliteMenuItem @ 0x1C0230534 (xxxHiliteMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C0230D6C (xxxGetMenuBarInfo.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C023142C (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNDragOver @ 0x1C0231868 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0231A04 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0231BFC (xxxMNUpdateDraggingInfo.c)
 *     xxxEndMenu @ 0x1C0231DD0 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02378C0 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(_QWORD *a1)
{
  __int64 ThreadWin32Thread; // rdi
  _QWORD *result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
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
