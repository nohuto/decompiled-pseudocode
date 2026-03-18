/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0062B7C (xxxSetMenuInfo.c)
 *     xxxInsertMenuItem @ 0x1C00638F0 (xxxInsertMenuItem.c)
 *     MNGetPopupFromMenu @ 0x1C0064740 (MNGetPopupFromMenu.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00649F8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxGetSystemMenu @ 0x1C0067088 (xxxGetSystemMenu.c)
 *     MNFlushDestroyedPopups @ 0x1C01FF380 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01FF910 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C01FF9F0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C020009C (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C0213DC8 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0215238 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215BAC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02164D8 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0216940 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0217814 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0218038 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0218950 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0219AA0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxEnableMenuItem @ 0x1C0221F90 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C0230D6C (xxxGetMenuBarInfo.c)
 *     xxxMNDragOver @ 0x1C0231868 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0231A04 (xxxMNSetGapState.c)
 *     xxxEndMenu @ 0x1C0231DD0 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02378C0 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
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
