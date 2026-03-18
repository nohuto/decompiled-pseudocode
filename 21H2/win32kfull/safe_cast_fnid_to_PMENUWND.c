/*
 * XREFs of safe_cast_fnid_to_PMENUWND @ 0x1C0061074
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C0043DBC (MNGetPopupFromMenu.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxGetMenuBarInfo @ 0x1C00BB868 (xxxGetMenuBarInfo.c)
 *     MNFreePopup @ 0x1C021BD14 (MNFreePopup.c)
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C022EB14 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C022F478 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0230248 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C0230E00 (xxxMNCloseHierarchy.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C02454E4 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C024568C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02458A8 (xxxMNUpdateDraggingInfo.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PMENUWND(__int64 a1)
{
  __int64 v2; // rdx
  __int16 v3; // ax

  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( _bittest16((const signed __int16 *)(v2 + 42), 0xCu) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = *(_QWORD *)(a1 + 40);
  }
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x29C )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
