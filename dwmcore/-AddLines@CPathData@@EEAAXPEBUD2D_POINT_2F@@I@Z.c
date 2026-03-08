/*
 * XREFs of ?AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18027C940
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18001FA90 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18027CA74 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::AddLines(CPathData *this, const struct D2D_POINT_2F *a2, unsigned int a3)
{
  __int64 v4; // rdi
  FLOAT y; // xmm1_4
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  FLOAT x; // [rsp+28h] [rbp-10h]
  FLOAT v9; // [rsp+2Ch] [rbp-Ch]

  v4 = a3;
  Path::Segment::Segment(v7, 2);
  if ( (_DWORD)v4 )
  {
    do
    {
      y = a2->y;
      x = a2->x;
      v9 = y;
      CPathData::AppendSegment(this, (struct Path::Segment *)v7);
      ++a2;
      --v4;
    }
    while ( v4 );
  }
}
