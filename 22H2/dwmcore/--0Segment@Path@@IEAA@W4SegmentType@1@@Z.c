/*
 * XREFs of ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FB80
 * Callers:
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x18001536C (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1800153E0 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18001548C (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z @ 0x18027FEE0 (-AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z.c)
 *     ?AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z @ 0x18027FF60 (-AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z.c)
 *     ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x18027FFB0 (-AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z @ 0x180280030 (-AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z.c)
 *     ?AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180280080 (-AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z @ 0x1802800F0 (-AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z.c)
 *     ?AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z @ 0x180280150 (-AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z.c)
 *     ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180280260 (-BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x1802802D0 (-EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1800F2B48 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 */

_BYTE *__fastcall Path::Segment::Segment(_BYTE *a1, char a2)
{
  _BYTE *v2; // rdi
  unsigned int Size; // eax

  v2 = a1;
  LOBYTE(a1) = a2;
  Size = Path::Segment::GetSize(a1);
  memset_0(v2, 0, Size);
  *v2 = a2;
  return v2;
}
