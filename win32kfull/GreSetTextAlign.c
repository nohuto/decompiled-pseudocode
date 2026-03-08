/*
 * XREFs of GreSetTextAlign @ 0x1C02D9B10
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
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  char v6; // dl
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    v4 = *(_QWORD *)(v8[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 276) = a2;
    v5 = *(_QWORD *)(v8[0] + 976LL);
    v6 = a2 ^ 2;
    if ( (a2 & 6) == 6 || (*(_BYTE *)(v5 + 108) & 1) == 0 )
      v6 = a2;
    *(_DWORD *)(v5 + 272) = v6 & 0x1F;
    if ( v8[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}
