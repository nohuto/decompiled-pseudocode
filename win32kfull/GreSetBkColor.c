/*
 * XREFs of GreSetBkColor @ 0x1C0113964
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0013CD4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawPushButton @ 0x1C0086E34 (DrawPushButton.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     FinalUserInit @ 0x1C00C1B24 (FinalUserInit.c)
 *     RecolorDeskPattern @ 0x1C00F5B00 (RecolorDeskPattern.c)
 *     BltIcon @ 0x1C011375C (BltIcon.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0114038 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C012E4C8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C020BF00 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0228B58 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0236044 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 *     BltColor @ 0x1C0242064 (BltColor.c)
 *     xxxDrawState @ 0x1C02423C0 (xxxDrawState.c)
 *     xxxPSMTextOut @ 0x1C0244494 (xxxPSMTextOut.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0050964 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetBkColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v3 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  if ( v8 )
  {
    v4 = *(_QWORD *)(v8 + 976);
    v3 = *(_DWORD *)(v4 + 180);
    *(_DWORD *)(v4 + 180) = a2;
    v5 = a2 & 0x13FFFFFF;
    v6 = v8;
    if ( v5 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v8 + 976) + 176LL) = v5;
      *(_DWORD *)(*(_QWORD *)(v8 + 976) + 152LL) |= 0xBu;
      v6 = v8;
    }
    if ( v6 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v8);
  }
  return v3;
}
