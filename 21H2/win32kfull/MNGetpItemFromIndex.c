/*
 * XREFs of MNGetpItemFromIndex @ 0x1C00BF0D8
 * Callers:
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     xxxSetMenuInfo @ 0x1C00BE9B8 (xxxSetMenuInfo.c)
 *     xxxMNCompute @ 0x1C00BEB88 (xxxMNCompute.c)
 *     _ServerFixupMenuDC @ 0x1C00F4650 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x1C022EFC4 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     MNGetpItem @ 0x1C023021C (MNGetpItem.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSetTop @ 0x1C0233C0C (xxxMNSetTop.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023E474 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02451B0 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C024568C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02458A8 (xxxMNUpdateDraggingInfo.c)
 *     MNEraseBackground @ 0x1C0247D38 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0247E7C (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0249BAC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNGetpItemFromIndex(__int64 a1, unsigned int a2)
{
  if ( a2 == -1 || a2 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 88) + 96LL * (int)a2;
}
