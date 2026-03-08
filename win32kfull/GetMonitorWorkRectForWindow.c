/*
 * XREFs of GetMonitorWorkRectForWindow @ 0x1C00FF4A0
 * Callers:
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00A1EF8 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00FB938 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserSetWindowShowState @ 0x1C01DE4F0 (NtUserSetWindowShowState.c)
 *     _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1C01E9FC4 (_lambda_55b845ca2123bba9cc6e2775260ddcb2_--operator().c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01EADC8 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01EE2EC (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     UpdateSizeTrackingInfo @ 0x1C01F3478 (UpdateSizeTrackingInfo.c)
 *     IsSmallerThanScreen @ 0x1C0224BC0 (IsSmallerThanScreen.c)
 *     FindBestPos @ 0x1C0234EF4 (FindBestPos.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0044A68 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetMonitorWorkRectForDpi @ 0x1C00E1F04 (GetMonitorWorkRectForDpi.c)
 */

__m128i *__fastcall GetMonitorWorkRectForWindow(__m128i *a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorWorkRectForDpi(a1, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
