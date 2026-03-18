/*
 * XREFs of xxxReleaseCapture @ 0x1C00AA35C
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserReleaseCapture @ 0x1C00AA320 (NtUserReleaseCapture.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0107A0C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020FDCC (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxMNReleaseCapture @ 0x1C023346C (xxxMNReleaseCapture.c)
 *     xxxEndScroll @ 0x1C0241878 (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02442A8 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C0244970 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 * Callees:
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x100000) != 0 )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 672LL) && (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
  {
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
    v1 = *(_QWORD *)(gptiCurrent + 672LL);
    if ( (*(_DWORD *)(v1 + 200) & 0x20) == 0 )
      xxxDrawDragRectEx((struct MOVESIZEDATA *)v1, 0LL, 2u, (struct tagRECT *)(v1 + 24));
    *(_DWORD *)(gptiCurrent + 488LL) &= 0xFFFF7FEF;
  }
  xxxCapture(gptiCurrent, 0LL, 0LL);
  return 1LL;
}
