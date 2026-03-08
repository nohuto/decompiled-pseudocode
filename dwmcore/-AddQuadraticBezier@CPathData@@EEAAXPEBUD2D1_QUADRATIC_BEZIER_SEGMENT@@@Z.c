/*
 * XREFs of ?AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z @ 0x18027C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FA90 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18027CA74 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::AddQuadraticBezier(CPathData *this, const struct D2D1_QUADRATIC_BEZIER_SEGMENT *a2)
{
  FLOAT x; // xmm1_4
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  D2D1_POINT_2F point1; // [rsp+28h] [rbp-20h]
  FLOAT v7; // [rsp+30h] [rbp-18h]
  FLOAT y; // [rsp+34h] [rbp-14h]

  Path::Segment::Segment(v5, 4);
  x = a2->point2.x;
  point1 = a2->point1;
  y = a2->point2.y;
  v7 = x;
  CPathData::AppendSegment(this, (struct Path::Segment *)v5);
}
