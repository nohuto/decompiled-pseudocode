/*
 * XREFs of GrePolyPatBlt @ 0x1C00C1D4C
 * Callers:
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00BAA6C (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00BD7A4 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00BE6B4 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     DrawFrameControl @ 0x1C00BF6FC (DrawFrameControl.c)
 *     DrawEdge @ 0x1C00C17C0 (DrawEdge.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00C2950 (-UT_InvertCaret@@YAXXZ.c)
 *     DrawFrame @ 0x1C00C35F4 (DrawFrame.c)
 *     DrawSize @ 0x1C0241420 (DrawSize.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C02470DC (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C02488F8 (xxxMenuBarDraw.c)
 *     xxxDrawState @ 0x1C024DD1C (xxxDrawState.c)
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C025A874 (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 *     ClientFrame @ 0x1C025AC14 (ClientFrame.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0042444 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, int a2, struct _POLYPATBLT *a3, int a4)
{
  unsigned int v7; // ebx
  _QWORD v9[6]; // [rsp+50h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v7 = 0;
  if ( v9[0] )
    v7 = GrePolyPatBltInternal(
           (struct XDCOBJ *)v9,
           a2,
           a3,
           a4,
           0,
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 184LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 176LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 188LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 180LL));
  else
    EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v7;
}
