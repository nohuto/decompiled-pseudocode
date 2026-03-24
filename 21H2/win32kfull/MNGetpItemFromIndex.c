/*
 * XREFs of MNGetpItemFromIndex @ 0x1C0048164
 * Callers:
 *     xxxMenuDraw @ 0x1C0043708 (xxxMenuDraw.c)
 *     xxxSetMenuInfo @ 0x1C0046AB4 (xxxSetMenuInfo.c)
 *     xxxMNCompute @ 0x1C0047C44 (xxxMNCompute.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1F30 (xxxDrawMenuBarUnderlines.c)
 *     _ServerFixupMenuDC @ 0x1C0106B80 (_ServerFixupMenuDC.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236330 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     MNGetpItem @ 0x1C0236BFC (MNGetpItem.c)
 *     MNItemHitTest @ 0x1C0236C28 (MNItemHitTest.c)
 *     xxxMNChar @ 0x1C02378A4 (xxxMNChar.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxMNSetTop @ 0x1C023B578 (xxxMNSetTop.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242948 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0249854 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C0249E4C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024A138 (xxxMNUpdateDraggingInfo.c)
 *     MNEraseBackground @ 0x1C024C8FC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024CA44 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C024CD80 (xxxMNInvertItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E8C0 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
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
