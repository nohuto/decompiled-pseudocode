/*
 * XREFs of xxxReleaseCapture @ 0x1C00DAE50
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00468C8 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     xxxDCETrackCaptionButton @ 0x1C00D7CFC (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01F4970 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EF28 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0210C94 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNReleaseCapture @ 0x1C023AAFC (xxxMNReleaseCapture.c)
 *     xxxEndScroll @ 0x1C0245904 (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C0247A10 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0248694 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C0248D98 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C025019C (xxxHelpLoop.c)
 * Callees:
 *     bSetDevDragRect @ 0x1C0029500 (bSetDevDragRect.c)
 *     xxxCapture @ 0x1C00C062C (xxxCapture.c)
 *     xxxDrawDragRect @ 0x1C02114E8 (xxxDrawDragRect.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x100000) != 0 )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 672LL) && (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
  {
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    v1 = *(_QWORD *)(gptiCurrent + 672LL);
    if ( (*(_DWORD *)(v1 + 196) & 0x20) == 0 )
      xxxDrawDragRect(v1, 0LL, 2LL);
    *(_DWORD *)(gptiCurrent + 488LL) &= 0xFFFF7FEF;
  }
  xxxCapture(gptiCurrent, 0LL, 0);
  return 1LL;
}
