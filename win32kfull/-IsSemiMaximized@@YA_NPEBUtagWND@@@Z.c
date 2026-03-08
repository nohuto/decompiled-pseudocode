/*
 * XREFs of ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0011794 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0014F28 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00A5C50 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C00E6C80 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00FB208 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C00FD258 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     CkptUpdate @ 0x1C0100B24 (CkptUpdate.c)
 *     NtUserShellSetWindowPos @ 0x1C01DF140 (NtUserShellSetWindowPos.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C01EB434 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C01EB47C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01EB67C (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z @ 0x1C01EB814 (-RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01ECE40 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxHandleNCMouseGuys @ 0x1C02035C0 (xxxHandleNCMouseGuys.c)
 *     _anonymous_namespace_::GetWindowStateForPartNotification @ 0x1C021FD2C (_anonymous_namespace_--GetWindowStateForPartNotification.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C021FDB0 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0227CCC (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023E6EC (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSemiMaximized(const struct tagWND *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 80);
  return (v1 & 0x4000000) != 0 || (v1 & 0x8000000) != 0;
}
