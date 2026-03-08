/*
 * XREFs of GetThreadDesktopWindow @ 0x1C003BE08
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008920 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     NtUserBuildHwndList @ 0x1C003FD60 (NtUserBuildHwndList.c)
 *     GetLastTopMostWindow @ 0x1C0044610 (GetLastTopMostWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     NtUserSelectPalette @ 0x1C00D0140 (NtUserSelectPalette.c)
 *     xxxWindowFromPoint @ 0x1C00D6B18 (xxxWindowFromPoint.c)
 *     _SelectPalette @ 0x1C0125A20 (_SelectPalette.c)
 *     RemoteRedrawRectangle @ 0x1C01F6C78 (RemoteRedrawRectangle.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0212FB8 (fnHkINLPCBTCREATESTRUCT.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0217CA8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C022181C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C0227740 (xxxDrawAnimatedRects.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetThreadDesktopWindow(struct tagTHREADINFO *a1)
{
  __int64 v1; // rbx
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx

  v1 = 0LL;
  v2 = a1;
  if ( a1 || (v2 = PtiCurrentShared()) != 0LL )
  {
    v3 = *((_QWORD *)v2 + 58);
    if ( v3 )
      return *(_QWORD *)(v3 + 24);
  }
  return v1;
}
