/*
 * XREFs of ??0CRegionShape@@QEAA@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18012F78A
 * Callers:
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x18012FD7A (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800F0A30 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 */

__int64 __fastcall CRegionShape::CRegionShape(__int64 a1, const struct tagRECT *a2)
{
  *(_QWORD *)a1 = &CRegionShape::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  CRegionShape::BuildFromRects(a1, a2, 1u);
  return a1;
}
