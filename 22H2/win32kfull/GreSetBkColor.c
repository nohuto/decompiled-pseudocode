/*
 * XREFs of GreSetBkColor @ 0x1C0027760
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0014A74 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     BltIcon @ 0x1C00274A8 (BltIcon.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0027824 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     DrawPushButton @ 0x1C00286BC (DrawPushButton.c)
 *     FinalUserInit @ 0x1C003E45C (FinalUserInit.c)
 *     RecolorDeskPattern @ 0x1C00BDFC0 (RecolorDeskPattern.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C013BB08 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0209330 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0225E60 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0233414 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxDrawMenuItem @ 0x1C0234CAC (xxxDrawMenuItem.c)
 *     BltColor @ 0x1C023F394 (BltColor.c)
 *     xxxDrawState @ 0x1C023F6F0 (xxxDrawState.c)
 *     xxxPSMTextOut @ 0x1C02417C4 (xxxPSMTextOut.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011CD7C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBkColor(HDC a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h]
  int v11; // [rsp+2Ch] [rbp-24h]
  _BYTE v12[32]; // [rsp+30h] [rbp-20h] BYREF

  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v4 = -1;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v12);
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  if ( v9 )
  {
    v5 = *(_QWORD *)(v9 + 976);
    v4 = *(_DWORD *)(v5 + 180);
    *(_DWORD *)(v5 + 180) = a2;
    v6 = a2 & 0x13FFFFFF;
    v7 = v9;
    if ( v6 != v4 )
    {
      *(_DWORD *)(*(_QWORD *)(v9 + 976) + 176LL) = v6;
      *(_DWORD *)(*(_QWORD *)(v9 + 976) + 152LL) |= 0xBu;
      v7 = v9;
    }
    if ( v7 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v9);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v12);
  return v4;
}
