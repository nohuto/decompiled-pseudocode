/*
 * XREFs of GetMonitorWorkRectForWindow @ 0x1C00C39DC
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00C190C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00CFAA0 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     NtUserSetWindowShowState @ 0x1C01DD4C0 (NtUserSetWindowShowState.c)
 *     _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1C01E8ED4 (_lambda_55b845ca2123bba9cc6e2775260ddcb2_--operator().c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01E9C18 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01ED128 (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     UpdateSizeTrackingInfo @ 0x1C01F2298 (UpdateSizeTrackingInfo.c)
 *     IsSmallerThanScreen @ 0x1C0221EB0 (IsSmallerThanScreen.c)
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1C00AAE34 (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00EDC80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

_OWORD *__fastcall GetMonitorWorkRectForWindow(_OWORD *a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorWorkRectForDpi(a1, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
