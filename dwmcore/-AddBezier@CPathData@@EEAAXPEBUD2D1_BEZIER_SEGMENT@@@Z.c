/*
 * XREFs of ?AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z @ 0x18027C820
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FA90 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18027CA74 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::AddBezier(CPathData *this, const struct D2D1_BEZIER_SEGMENT *a2)
{
  D2D1_POINT_2F point1; // xmm0_8
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  D2D1_POINT_2F v6; // [rsp+28h] [rbp-20h]
  __int128 v7; // [rsp+30h] [rbp-18h]

  Path::Segment::Segment(v5, 5);
  point1 = a2->point1;
  v7 = *(_OWORD *)&a2->point2.x;
  v6 = point1;
  CPathData::AppendSegment(this, (struct Path::Segment *)v5);
}
