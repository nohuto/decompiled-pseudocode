// local variable allocation has failed, the output may be wrong!
struct Path::Segment *__fastcall CTrimPathOperation::InterpolateSegment(
        CTrimPathOperation *this,
        const struct Path::Segment *a2,
        double a3,
        float a4,
        struct D2D_POINT_2F *a5)
{
  float v6; // xmm6_4
  char *v8; // rdi
  float *v9; // rax
  float v10; // xmm1_4
  struct D2D_POINT_2F v12; // xmm0_8
  __m128 v13; // xmm3
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = *(float *)&a3;
  if ( *(_BYTE *)a2 != 2 )
  {
    if ( *(_BYTE *)a2 != 5 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    v8 = (char *)this + 80;
    *((_QWORD *)this + 10) = *(_QWORD *)a2;
    *((_QWORD *)this + 11) = *((_QWORD *)a2 + 1);
    *((_QWORD *)this + 12) = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 13) = *((_QWORD *)a2 + 3);
    if ( CTrimPathOperation::InterpolateBezier(this, *(float *)&a3, a4, a5 != 0LL) )
    {
      *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)this + 120);
      *((_QWORD *)this + 13) = *((_QWORD *)this + 17);
      if ( !a5 )
        return (struct Path::Segment *)v8;
      v12 = (struct D2D_POINT_2F)*((_QWORD *)this + 14);
    }
    else
    {
      v13 = (__m128)(unsigned int)FLOAT_1_0;
      v8 = (char *)this + 64;
      *((_BYTE *)this + 65) = *((_BYTE *)this + 81);
      v14 = *((float *)this + 9);
      v15 = *((float *)this + 26);
      v16 = (float)((float)(1.0 - a4) * *((float *)this + 10)) + (float)(a4 * *((float *)this + 27));
      *((float *)this + 18) = (float)(v15 * a4) + (float)(v14 * (float)(1.0 - a4));
      *((float *)this + 19) = v16;
      if ( !a5 )
        return (struct Path::Segment *)v8;
      v13.m128_f32[0] = 1.0 - v6;
      v17 = v13;
      v13.m128_f32[0] = (float)((float)(1.0 - v6) * *((float *)this + 10)) + (float)(v6 * *((float *)this + 27));
      v17.m128_f32[0] = (float)(v17.m128_f32[0] * v14) + (float)(v15 * v6);
      v12 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v17, v13).m128_u64[0];
    }
    *a5 = v12;
    return (struct Path::Segment *)v8;
  }
  v8 = (char *)this + 64;
  *((_QWORD *)this + 8) = *(_QWORD *)a2;
  v9 = (float *)((char *)this + 72);
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 1);
  if ( a5 )
  {
    v18 = *(__m128 *)&a3;
    v19 = (__m128)(unsigned int)FLOAT_1_0;
    v19.m128_f32[0] = (float)((float)(1.0 - v6) * *((float *)this + 10)) + (float)(v6 * *((float *)this + 19));
    v18.m128_f32[0] = (float)(v6 * *v9) + (float)((float)(1.0 - v6) * *((float *)this + 9));
    *a5 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v18, v19).m128_u64[0];
  }
  v10 = (float)(a4 * *v9) + (float)((float)(1.0 - a4) * *((float *)this + 9));
  *((float *)this + 19) = (float)((float)(1.0 - a4) * *((float *)this + 10)) + (float)(a4 * *((float *)this + 19));
  *v9 = v10;
  return (struct Path::Segment *)v8;
}
