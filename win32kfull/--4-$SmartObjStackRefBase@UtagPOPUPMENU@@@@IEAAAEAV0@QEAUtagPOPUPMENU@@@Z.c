/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     xxxSetMenuInfo @ 0x1C00A3A58 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00A4FB4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     MNGetPopupFromMenu @ 0x1C00A69F0 (MNGetPopupFromMenu.c)
 *     xxxInsertMenuItem @ 0x1C00A7ADC (xxxInsertMenuItem.c)
 *     MNFlushDestroyedPopups @ 0x1C0201F10 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C02024A0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C0202580 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C0202C44 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0217DF8 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C021876C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0219098 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0219500 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C021A3D4 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxEnableMenuItem @ 0x1C0224CA0 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C0233A80 (xxxGetMenuBarInfo.c)
 *     xxxMNDragOver @ 0x1C023457C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0234718 (xxxMNSetGapState.c)
 *     xxxEndMenu @ 0x1C0234AE4 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023A528 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRefBase<tagPOPUPMENU>::operator=(_QWORD *a1, __int64 a2)
{
  if ( a2 != *(_QWORD *)*a1 )
  {
    if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8LL) )
    {
      if ( *(_BYTE *)(*a1 + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
    if ( a2 )
    {
      *a1 = *(_QWORD *)(a2 + 88);
      ++*(_DWORD *)(*a1 + 8LL);
    }
    else
    {
      *a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
