/*
 * XREFs of GetThreadDesktopWindow @ 0x1C00F26A0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowFromPoint @ 0x1C006561C (xxxWindowFromPoint.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserBuildHwndList @ 0x1C0070A10 (NtUserBuildHwndList.c)
 *     GetLastTopMostWindow @ 0x1C0085494 (GetLastTopMostWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00CDA30 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _SelectPalette @ 0x1C00EE130 (_SelectPalette.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C013F9B0 (fnHkINLPCBTCREATESTRUCT.c)
 *     ?_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBGK@Z @ 0x1C015B434 (-_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBGK@Z.c)
 *     RemoteRedrawRectangle @ 0x1C0211BD4 (RemoteRedrawRectangle.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C022EA2C (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02377B8 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C023DA38 (xxxDrawAnimatedRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax

  v1 = 0LL;
  v2 = a1;
  if ( a1 )
    goto LABEL_5;
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( v2 )
  {
LABEL_5:
    v4 = *(_QWORD *)(v2 + 464);
    if ( v4 )
      return *(_QWORD *)(v4 + 24);
  }
  return v1;
}
