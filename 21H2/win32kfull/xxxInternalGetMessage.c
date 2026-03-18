/*
 * XREFs of xxxInternalGetMessage @ 0x1C00A4B4C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A4A14 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00A64D0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00A65F0 (xxxSetCsrssThreadDesktop.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020E0F0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C022D4FC (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxMNDoubleClick @ 0x1C0231350 (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0240F90 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02442A8 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C0244970 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     ClientGetMessageMPH @ 0x1C00E3BC8 (ClientGetMessageMPH.c)
 */

__int64 __fastcall xxxInternalGetMessage(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 v7; // [rsp+20h] [rbp-18h]

  LODWORD(v7) = a5;
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
    return ClientGetMessageMPH((_DWORD)a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage(a1, a2, a3, a4, v7, a6);
}
