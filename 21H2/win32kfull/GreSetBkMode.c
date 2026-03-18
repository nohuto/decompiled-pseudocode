/*
 * XREFs of GreSetBkMode @ 0x1C00BFC20
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     DrawFrameControl @ 0x1C00BF6FC (DrawFrameControl.c)
 *     FinalUserInit @ 0x1C00D43C4 (FinalUserInit.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C021CC64 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023EB00 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C024DD1C (xxxDrawState.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetBkMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_QWORD *)(v6[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 224);
    *(_DWORD *)(v4 + 224) = a2;
    if ( (unsigned int)(a2 - 1) > 1 )
      LOBYTE(a2) = 1;
    *(_BYTE *)(*(_QWORD *)(v6[0] + 976LL) + 213LL) = a2;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v3;
}
