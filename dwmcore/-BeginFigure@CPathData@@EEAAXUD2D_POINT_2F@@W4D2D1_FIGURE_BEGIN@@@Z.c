/*
 * XREFs of ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18027CB20
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FA90 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18027CA74 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::BeginFigure(CPathData *this, struct D2D_POINT_2F a2, enum D2D1_FIGURE_BEGIN a3)
{
  char v6; // al
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  struct D2D_POINT_2F v8; // [rsp+28h] [rbp-20h]

  Path::Segment::Segment(v7, 0);
  v6 = *((_BYTE *)this + 48);
  v8 = a2;
  v7[2] = v6;
  v7[3] = a3 == D2D1_FIGURE_BEGIN_HOLLOW;
  CPathData::AppendSegment(this, (struct Path::Segment *)v7);
  *((_BYTE *)this + 48) = 0;
}
