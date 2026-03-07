void __fastcall CPathData::AddLine(CPathData *this, struct D2D_POINT_2F a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  struct D2D_POINT_2F v5; // [rsp+28h] [rbp-20h]

  Path::Segment::Segment(v4, 2);
  v5 = a2;
  CPathData::AppendSegment(this, (struct Path::Segment *)v4);
}
