/*
 * XREFs of GreGetTextAlign @ 0x1C02D9A84
 * Callers:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C01116B0 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C02284EC (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     _ServerFixupMenuDC @ 0x1C0237764 (_ServerFixupMenuDC.c)
 *     xxxMNInvertItem @ 0x1C02382C8 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 *     CreateCompatiblePublicDC @ 0x1C02421AC (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x1C02423C0 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C024FEBC (DrawTextExWorker.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextAlign(HDC a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  result = v3[0];
  if ( v3[0] )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 276LL);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return v2;
  }
  return result;
}
