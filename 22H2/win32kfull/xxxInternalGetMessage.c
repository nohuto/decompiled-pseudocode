/*
 * XREFs of xxxInternalGetMessage @ 0x1C00D9C60
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00D79AC (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00D8E60 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00D90F0 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D9B74 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F43B0 (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020E8F0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C02336B4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
 *     xxxMNDoubleClick @ 0x1C0237DB8 (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244A64 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0247450 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02480D4 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C02487D8 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C024FBDC (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x1C00542B8 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
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
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage((__int64)a1, a2, a3, a4, v7, a6);
}
