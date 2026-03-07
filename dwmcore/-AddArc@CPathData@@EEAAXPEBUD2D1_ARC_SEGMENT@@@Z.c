void __fastcall CPathData::AddArc(CPathData *this, const struct D2D1_ARC_SEGMENT *a2)
{
  D2D1_POINT_2F point; // xmm0_8
  FLOAT width; // xmm1_4
  bool v6; // zf
  FLOAT rotationAngle; // xmm1_4
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  D2D1_POINT_2F v9; // [rsp+28h] [rbp-20h]
  FLOAT v10; // [rsp+30h] [rbp-18h]
  FLOAT height; // [rsp+34h] [rbp-14h]
  FLOAT v12; // [rsp+38h] [rbp-10h]

  Path::Segment::Segment(v8, 3);
  point = a2->point;
  width = a2->size.width;
  v8[2] = a2->sweepDirection == D2D1_SWEEP_DIRECTION_CLOCKWISE;
  v6 = a2->arcSize == D2D1_ARC_SIZE_LARGE;
  v10 = width;
  rotationAngle = a2->rotationAngle;
  v8[3] = v6;
  v9 = point;
  height = a2->size.height;
  v12 = rotationAngle;
  CPathData::AppendSegment(this, (struct Path::Segment *)v8);
}
