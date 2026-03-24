/*
 * XREFs of GreGetTextAlign @ 0x1C0125448
 * Callers:
 *     xxxMenuDraw @ 0x1C0043668 (xxxMenuDraw.c)
 *     DrawFrameControl @ 0x1C0045B98 (DrawFrameControl.c)
 *     _ServerFixupMenuDC @ 0x1C0106800 (_ServerFixupMenuDC.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011B78C (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0158B14 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0159590 (CreateCompatiblePublicDC.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242388 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C0250784 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C025E630 (DrawTextExWorker.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetTextAlign(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 276LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
