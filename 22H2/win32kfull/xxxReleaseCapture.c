/*
 * XREFs of xxxReleaseCapture @ 0x1C0011688
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0011604 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA87C (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     NtUserReleaseCapture @ 0x1C01D9A80 (NtUserReleaseCapture.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F19F0 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxMNReleaseCapture @ 0x1C0219A20 (xxxMNReleaseCapture.c)
 *     xxxEndScroll @ 0x1C022A170 (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022F868 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C022FF38 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 * Callees:
 *     xxxCapture @ 0x1C00117FC (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C006EAD0 (bSetDevDragRect.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) & 0x100000) != 0 )
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
