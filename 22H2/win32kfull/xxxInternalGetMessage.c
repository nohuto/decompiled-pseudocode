/*
 * XREFs of xxxInternalGetMessage @ 0x1C006A4F0
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C00697C0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0069B30 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006A3B0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA87C (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01EE980 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0213BC0 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 *     xxxMNDoubleClick @ 0x1C02179AC (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022992C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022F868 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C022FF38 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x1C000359C (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall xxxInternalGetMessage(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage((_DWORD)a1, a2, a3, a4, a5, a6);
}
