void __fastcall EmitterShapes::CPathEmitterArea::AddTriangles(
        EmitterShapes::CPathEmitterArea *this,
        const struct D2D1_TRIANGLE *a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  FLOAT *p_y; // rbx
  __int128 v6; // xmm1
  __int64 v7; // rdx
  __int64 v8; // xmm0_8
  float v9; // eax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  float v12; // [rsp+38h] [rbp-20h]

  if ( a3 )
  {
    v4 = a3;
    p_y = &a2->point2.y;
    do
    {
      v12 = (float)((float)((float)((float)(p_y[2] - *(p_y - 2)) * *(p_y - 1))
                          + (float)((float)(*p_y - p_y[2]) * *(p_y - 3)))
                  + (float)((float)(*(p_y - 2) - *p_y) * p_y[1]))
          * 0.5;
      *((float *)this + 4) = v12 + *((float *)this + 4);
      v6 = *(_OWORD *)(p_y - 3);
      v7 = *((_QWORD *)this + 4);
      v8 = *(_QWORD *)(p_y + 1);
      v10 = v6;
      v11 = v8;
      if ( v7 == *((_QWORD *)this + 5) )
      {
        std::vector<EmitterShapes::CPathEmitterArea::AreaTriangle>::_Emplace_reallocate<EmitterShapes::CPathEmitterArea::AreaTriangle const &>(
          (const void **)this + 3,
          (_BYTE *)v7,
          (__int64)&v10);
      }
      else
      {
        v9 = v12;
        *(_OWORD *)v7 = v6;
        *(_QWORD *)(v7 + 16) = v8;
        *(float *)(v7 + 24) = v9;
        *((_QWORD *)this + 4) += 28LL;
      }
      p_y += 6;
      --v4;
    }
    while ( v4 );
  }
}
