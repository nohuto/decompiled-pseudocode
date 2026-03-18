/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C0064A70 (NtUserThunkedMenuItemInfo.c)
 *     NtUserCreateWindowEx @ 0x1C00657B0 (NtUserCreateWindowEx.c)
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     xxxCalcClientRect @ 0x1C0066538 (xxxCalcClientRect.c)
 *     xxxGetSysMenuPtr @ 0x1C0067210 (xxxGetSysMenuPtr.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     xxxMNCanClose @ 0x1C0068094 (xxxMNCanClose.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 *     NtUserSetMenuDefaultItem @ 0x1C00BA4F0 (NtUserSetMenuDefaultItem.c)
 *     xxxGetMenuBarInfo @ 0x1C00BB868 (xxxGetMenuBarInfo.c)
 *     xxxGetSysMenu @ 0x1C00BBF14 (xxxGetSysMenu.c)
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     xxxSetSysMenu @ 0x1C00BC268 (xxxSetSysMenu.c)
 *     xxxEnableMenuItem @ 0x1C00BC4A0 (xxxEnableMenuItem.c)
 *     _SetMenuDefaultItem @ 0x1C00BC748 (_SetMenuDefaultItem.c)
 *     _GetSubMenu @ 0x1C00BC870 (_GetSubMenu.c)
 *     xxxSetMenuItemInfo @ 0x1C00BCB7C (xxxSetMenuItemInfo.c)
 *     xxxPaintMenuBar @ 0x1C00BCDEC (xxxPaintMenuBar.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxCalcMenuBar @ 0x1C00C27B0 (xxxCalcMenuBar.c)
 *     _ServerFixupMenuDC @ 0x1C00F4650 (_ServerFixupMenuDC.c)
 *     NtUserDeleteMenu @ 0x1C00F6950 (NtUserDeleteMenu.c)
 *     NtUserDestroyMenu @ 0x1C01082A0 (NtUserDestroyMenu.c)
 *     NtUserThunkedMenuInfo @ 0x1C010B680 (NtUserThunkedMenuInfo.c)
 *     NtUserRemoveMenu @ 0x1C010D420 (NtUserRemoveMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C0114B34 (xxxSetDialogSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0114BD8 (xxxLoadSysDesktopMenu.c)
 *     LockDesktopMenu @ 0x1C0114C94 (LockDesktopMenu.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     NtUserSetSystemMenu @ 0x1C0146760 (NtUserSetSystemMenu.c)
 *     NtUserSetMenu @ 0x1C0147C30 (NtUserSetMenu.c)
 *     NtUserCheckMenuItem @ 0x1C014C2D0 (NtUserCheckMenuItem.c)
 *     NtUserEnableMenuItem @ 0x1C014DEF0 (NtUserEnableMenuItem.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C014F628 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C014F6C0 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     MenuRecalc @ 0x1C01585A4 (MenuRecalc.c)
 *     NtUserGetMenuItemRect @ 0x1C01F5260 (NtUserGetMenuItemRect.c)
 *     NtUserHiliteMenuItem @ 0x1C01F7A90 (NtUserHiliteMenuItem.c)
 *     NtUserMenuItemFromPoint @ 0x1C01FA2A0 (NtUserMenuItemFromPoint.c)
 *     NtUserSetMenuContextHelpId @ 0x1C01FD830 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C01FD910 (NtUserSetMenuFlagRtoL.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01FFC10 (NtUserTrackPopupMenuEx.c)
 *     xxxMNStartMenu @ 0x1C021C1CC (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0231350 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMNSetTop @ 0x1C0233C0C (xxxMNSetTop.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0239A8C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0240CA4 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C024162C (xxxDoScrollMenu.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C02488F8 (xxxMenuBarDraw.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 *     xxxSendMenuSelect @ 0x1C024E3F8 (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C025AD30 (_GetMenuDefaultItem.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0068450 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::operator=(__int64 a1, __int64 a2)
{
  if ( a2 != **(_QWORD **)a1 )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(a1);
    if ( a2 )
    {
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 152);
      ++*(_DWORD *)(*(_QWORD *)a1 + 8LL);
    }
    else
    {
      *(_QWORD *)a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
