void __fastcall CPathData::AddBeziers(CPathData *this, const struct D2D1_BEZIER_SEGMENT *a2, unsigned int a3)
{
  __int64 v4; // rdi
  FLOAT *p_y; // rbx
  int v7; // xmm1_4
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]

  v4 = a3;
  Path::Segment::Segment(v8, 5);
  if ( (_DWORD)v4 )
  {
    p_y = &a2->point3.y;
    do
    {
      v7 = *(_DWORD *)p_y;
      v9 = *(_OWORD *)(p_y - 5);
      v10 = *((_DWORD *)p_y - 1);
      v11 = v7;
      CPathData::AppendSegment(this, (struct Path::Segment *)v8);
      p_y += 6;
      --v4;
    }
    while ( v4 );
  }
}
