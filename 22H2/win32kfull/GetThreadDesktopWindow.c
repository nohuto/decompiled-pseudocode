/*
 * XREFs of GetThreadDesktopWindow @ 0x1C00EC080
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxWindowFromPoint @ 0x1C008C498 (xxxWindowFromPoint.c)
 *     NtUserSelectPalette @ 0x1C009A090 (NtUserSelectPalette.c)
 *     NtUserBuildHwndList @ 0x1C00D1F70 (NtUserBuildHwndList.c)
 *     GetLastTopMostWindow @ 0x1C00ECD80 (GetLastTopMostWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SelectPalette @ 0x1C0131050 (_SelectPalette.c)
 *     RemoteRedrawRectangle @ 0x1C01F5AA8 (RemoteRedrawRectangle.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C02103E8 (fnHkINLPCBTCREATESTRUCT.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C02150E8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021EBEC (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C0224A30 (xxxDrawAnimatedRects.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
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
