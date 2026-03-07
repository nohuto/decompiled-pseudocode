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
