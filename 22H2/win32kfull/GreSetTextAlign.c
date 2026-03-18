/*
 * XREFs of GreSetTextAlign @ 0x1C02D7D04
 * Callers:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C00247BC (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     DrawFrameControl @ 0x1C01197C0 (DrawFrameControl.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C02257F4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     _ServerFixupMenuDC @ 0x1C0234AFC (_ServerFixupMenuDC.c)
 *     xxxMNInvertItem @ 0x1C0235660 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C02361F4 (xxxMenuDraw.c)
 *     CreateCompatiblePublicDC @ 0x1C023F4DC (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x1C023F6F0 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C024D1FC (DrawTextExWorker.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 276) = a2;
    v5 = *(_QWORD *)(v7[0] + 976LL);
    if ( (*(_DWORD *)(v5 + 108) & 1) != 0 && (a2 & 6) != 6 )
      LOBYTE(a2) = a2 ^ 2;
    *(_DWORD *)(v5 + 272) = a2 & 0x1F;
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  return v3;
}
