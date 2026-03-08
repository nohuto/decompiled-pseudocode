/*
 * XREFs of xxxInternalGetMessage @ 0x1C00946B0
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0093CF0 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094570 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00948B0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BBA1C (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01EFB44 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0216788 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     xxxMNDoubleClick @ 0x1C021A56C (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022C64C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C022F438 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023257C (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C0232C4C (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x1C0003090 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall xxxInternalGetMessage(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 v7; // [rsp+20h] [rbp-18h]

  LODWORD(v7) = a5;
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage(a1, a2, a3, a4, v7, a6);
}
