/*
 * XREFs of MNGetpItemFromIndex @ 0x1C00480C4
 * Callers:
 *     xxxMenuDraw @ 0x1C0043668 (xxxMenuDraw.c)
 *     xxxSetMenuInfo @ 0x1C0046A14 (xxxSetMenuInfo.c)
 *     xxxMNCompute @ 0x1C0047BA4 (xxxMNCompute.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1BE0 (xxxDrawMenuBarUnderlines.c)
 *     _ServerFixupMenuDC @ 0x1C0106800 (_ServerFixupMenuDC.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235D70 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     MNGetpItem @ 0x1C023663C (MNGetpItem.c)
 *     MNItemHitTest @ 0x1C0236668 (MNItemHitTest.c)
 *     xxxMNChar @ 0x1C02372E4 (xxxMNChar.c)
 *     xxxMNOpenHierarchy @ 0x1C02394F8 (xxxMNOpenHierarchy.c)
 *     xxxMNSetTop @ 0x1C023AFB8 (xxxMNSetTop.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242388 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0249294 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C024988C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0249B78 (xxxMNUpdateDraggingInfo.c)
 *     MNEraseBackground @ 0x1C024C33C (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024C484 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E300 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
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
