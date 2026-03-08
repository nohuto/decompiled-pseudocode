/*
 * XREFs of ?AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z @ 0x18027CA10
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FA90 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18027CA74 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::AddQuadraticBeziers(
        CPathData *this,
        const struct D2D1_QUADRATIC_BEZIER_SEGMENT *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  FLOAT *p_y; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]

  v4 = a3;
  Path::Segment::Segment(v7, 4);
  if ( (_DWORD)v4 )
  {
    p_y = &a2->point1.y;
    do
    {
      v8 = *(_OWORD *)(p_y - 1);
      CPathData::AppendSegment(this, (struct Path::Segment *)v7);
      p_y += 4;
      --v4;
    }
    while ( v4 );
  }
}
