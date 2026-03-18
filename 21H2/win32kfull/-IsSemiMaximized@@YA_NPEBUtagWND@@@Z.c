/*
 * XREFs of ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00692F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C006F94C (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     CkptUpdate @ 0x1C007CA54 (CkptUpdate.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00CA638 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00CA700 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C010DEDC (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     NtUserShellSetWindowPos @ 0x1C01FEFF0 (NtUserShellSetWindowPos.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020AA90 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C020AD78 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C021D324 (xxxHandleNCMouseGuys.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C0236424 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::NotifyPartEnter @ 0x1C0236504 (_anonymous_namespace_--NotifyPartEnter.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023DD00 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSemiMaximized(const struct tagWND *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 80);
  return (v1 & 0x4000000) != 0 || (v1 & 0x8000000) != 0;
}
