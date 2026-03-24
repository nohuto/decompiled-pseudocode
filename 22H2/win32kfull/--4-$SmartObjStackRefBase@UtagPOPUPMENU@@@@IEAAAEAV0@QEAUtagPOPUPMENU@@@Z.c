/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0046A14 (xxxSetMenuInfo.c)
 *     xxxEnableMenuItem @ 0x1C0046F10 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0047358 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0047758 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C00478F8 (MNGetPopupFromMenu.c)
 *     xxxInsertMenuItem @ 0x1C007929C (xxxInsertMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C008AA48 (xxxGetMenuBarInfo.c)
 *     xxxGetSystemMenu @ 0x1C00DC574 (xxxGetSystemMenu.c)
 *     MNFlushDestroyedPopups @ 0x1C0221530 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C0221A00 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C0221C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C02224D0 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C02339B8 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0234DB0 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235708 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236180 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0236840 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0237B24 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C02384D8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023913C (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02394F8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023A5BC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C024961C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C024988C (xxxMNSetGapState.c)
 *     xxxEndMenu @ 0x1C0249E34 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A5F0 (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C024E17C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
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
