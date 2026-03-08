/*
 * XREFs of safe_cast_fnid_to_PMENUWND @ 0x1C012D8B8
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     MNGetPopupFromMenu @ 0x1C00A69F0 (MNGetPopupFromMenu.c)
 *     MNFreePopup @ 0x1C0202004 (MNFreePopup.c)
 *     xxxMNStartMenuState @ 0x1C0202C44 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0217DF8 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C021876C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0219500 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     xxxMNFindWindowFromPoint @ 0x1C021A850 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxGetMenuBarInfo @ 0x1C0233A80 (xxxGetMenuBarInfo.c)
 *     xxxMNDragOver @ 0x1C023457C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0234718 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0234910 (xxxMNUpdateDraggingInfo.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PMENUWND(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // cx

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(*(_QWORD *)(a1 + 40) + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 874LL);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x29C )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
