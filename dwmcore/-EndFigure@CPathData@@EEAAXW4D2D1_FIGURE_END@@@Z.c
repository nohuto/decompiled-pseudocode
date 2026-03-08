/*
 * XREFs of ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18027CB90
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FA90 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18027CA74 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::EndFigure(CPathData *this, enum D2D1_FIGURE_END a2)
{
  char v4; // [rsp+40h] [rbp+18h] BYREF
  bool v5; // [rsp+42h] [rbp+1Ah]

  Path::Segment::Segment(&v4, 1);
  v5 = a2 == D2D1_FIGURE_END_CLOSED;
  CPathData::AppendSegment(this, (struct Path::Segment *)&v4);
}
