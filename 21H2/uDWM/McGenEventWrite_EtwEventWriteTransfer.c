/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x180085268
 * Callers:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18000A40C (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18000ABB4 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000B148 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18000B954 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180012CA4 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180018490 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x18003635C (-OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18003AA80 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003EEE0 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003FAEC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800484B0 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180048668 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004BF70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18004D5C0 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1800852C8 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180085700 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086FB0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     McTemplateU0qqq_EtwEventWriteTransfer @ 0x180087BE8 (McTemplateU0qqq_EtwEventWriteTransfer.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x180093968 (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     McTemplateU0z_EtwEventWriteTransfer @ 0x1800939E0 (McTemplateU0z_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180095960 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800959C4 (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180097B60 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x18009A788 (McTemplateU0pd_EtwEventWriteTransfer.c)
 *     McTemplateU0pddddd_EtwEventWriteTransfer @ 0x18009A804 (McTemplateU0pddddd_EtwEventWriteTransfer.c)
 *     McTemplateU0ppd_EtwEventWriteTransfer @ 0x18009A8C8 (McTemplateU0ppd_EtwEventWriteTransfer.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18009BA84 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009BCE0 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     McTemplateU0dddd_EtwEventWriteTransfer @ 0x18009BF28 (McTemplateU0dddd_EtwEventWriteTransfer.c)
 *     ?UpdateTransition@CRippleEffect@@AEAAJXZ @ 0x18009C5A0 (-UpdateTransition@CRippleEffect@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009C7EC (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENT.c)
 *     ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009C8B4 (-OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIF.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009C990 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A1564 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CTextTetherVisual@@QEAAJXZ @ 0x1800A2974 (-Start@CTextTetherVisual@@QEAAJXZ.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x1800A2A20 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A4684 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800A4BF0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800A5648 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800A56F0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800A7040 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800A73F0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 *     McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer @ 0x1800A9098 (McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer.c)
 *     McTemplateU0ddqqqqqqp_EtwEventWriteTransfer @ 0x1800A9248 (McTemplateU0ddqqqqqqp_EtwEventWriteTransfer.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x1800A9F10 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 *     McTemplateU0qffff_EtwEventWriteTransfer @ 0x1800A9F90 (McTemplateU0qffff_EtwEventWriteTransfer.c)
 *     McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x1800ABBBC (McTemplateU0pddddddd_EtwEventWriteTransfer.c)
 *     McTemplateU0pddddq_EtwEventWriteTransfer @ 0x1800ABCA0 (McTemplateU0pddddq_EtwEventWriteTransfer.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800AC438 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800AC7A4 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800ACAB0 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800ACD40 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800ACF4C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800AD1C4 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800AD3B4 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 *     McTemplateU0qq_EtwEventWriteTransfer @ 0x1800AE528 (McTemplateU0qq_EtwEventWriteTransfer.c)
 *     McTemplateU0qd_EtwEventWriteTransfer @ 0x1800B57E0 (McTemplateU0qd_EtwEventWriteTransfer.c)
 *     McTemplateU0tttt_EtwEventWriteTransfer @ 0x1800B5860 (McTemplateU0tttt_EtwEventWriteTransfer.c)
 *     McTemplateU0pdd_EtwEventWriteTransfer @ 0x1800B60CC (McTemplateU0pdd_EtwEventWriteTransfer.c)
 *     McTemplateU0qqqp_EtwEventWriteTransfer @ 0x1800BA0A4 (McTemplateU0qqqp_EtwEventWriteTransfer.c)
 *     McTemplateU0j_EtwEventWriteTransfer @ 0x1800BAAD0 (McTemplateU0j_EtwEventWriteTransfer.c)
 *     McTemplateU0jdd_EtwEventWriteTransfer @ 0x1800BAB2C (McTemplateU0jdd_EtwEventWriteTransfer.c)
 *     McTemplateU0ji_EtwEventWriteTransfer @ 0x1800BABAC (McTemplateU0ji_EtwEventWriteTransfer.c)
 *     McTemplateU0jqi_EtwEventWriteTransfer @ 0x1800BAC20 (McTemplateU0jqi_EtwEventWriteTransfer.c)
 *     McTemplateU0jq_EtwEventWriteTransfer @ 0x1800BADE0 (McTemplateU0jq_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite_EtwEventWriteTransfer(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  int v7; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    *(_QWORD *)a5 = v5;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v7 = 0;
  }
  *(_DWORD *)(a5 + 8) = v7;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(*a1, a2);
}
