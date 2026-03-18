/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C0043DBC (MNGetPopupFromMenu.c)
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0068C00 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C00BB868 (xxxGetMenuBarInfo.c)
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00BC4A0 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C00BE9B8 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C021BC20 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C021BE70 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C021BF30 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C022EB14 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C022F478 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C022FE00 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0230248 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0231190 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C02454E4 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C024568C (xxxMNSetGapState.c)
 *     xxxEndMenu @ 0x1C0245A6C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0249B08 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
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
