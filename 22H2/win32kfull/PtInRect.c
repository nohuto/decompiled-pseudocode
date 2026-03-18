/*
 * XREFs of PtInRect @ 0x1C00D0A58
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005B40 (xxxSystemTimerProc.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0012708 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0016DDC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C004174C (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C005B398 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C00A0760 (EditionUpdateCursorOnMouseMove.c)
 *     AddMagnificationOutputTransform @ 0x1C00A4A10 (AddMagnificationOutputTransform.c)
 *     FindNCHit @ 0x1C00AD74C (FindNCHit.c)
 *     _MonitorFromPoint @ 0x1C00D03B0 (_MonitorFromPoint.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00D07D0 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     GrePtInSprite @ 0x1C00F76E8 (GrePtInSprite.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     TransformForInputMagnification @ 0x1C014E870 (TransformForInputMagnification.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C015183C (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C0151C40 (DCELogicalSpeedTopLevelHitTest.c)
 *     _ChildWindowFromPointEx @ 0x1C01556EA (_ChildWindowFromPointEx.c)
 *     ApplyMagInputTransform @ 0x1C01A5470 (ApplyMagInputTransform.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01AF7D0 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     zzzActiveCursorTracking @ 0x1C01B7390 (zzzActiveCursorTracking.c)
 *     GetDPITransformationMonitor @ 0x1C01B9BB4 (GetDPITransformationMonitor.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01E3BCC (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E5250 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5494 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E5C0C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     TouchTargetChildTree @ 0x1C01E6AD8 (TouchTargetChildTree.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01E8368 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F19F0 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     EditionMagnificationMousePosition @ 0x1C01F6B70 (EditionMagnificationMousePosition.c)
 *     xxxHandleMenuMessages @ 0x1C0213DC8 (xxxHandleMenuMessages.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x1C02156F0 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0217C90 (xxxMNFindWindowFromPoint.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C022A170 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C022B3F0 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C022B560 (xxxTrackThumb.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022F6D8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxIsDragging @ 0x1C022FF38 (xxxIsDragging.c)
 *     _RealChildWindowFromPoint @ 0x1C0230658 (_RealChildWindowFromPoint.c)
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 *     ?PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C023A408 (-PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x1C023A634 (-SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@.c)
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1C023AD04 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     TouchTargetingCreateContact @ 0x1C024DF88 (TouchTargetingCreateContact.c)
 *     TouchTargetingRankForRectDeep @ 0x1C024E9B8 (TouchTargetingRankForRectDeep.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C024EDC0 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PtInRect(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( (int)a2 >= *a1 && (int)a2 < a1[2] )
  {
    v2 = HIDWORD(a2);
    if ( (int)v2 >= a1[1] && (int)v2 < a1[3] )
      return 1;
  }
  return result;
}
