struct D2D_RECT_F *__fastcall StretchAlign::Arrange(
        StretchAlign *this,
        struct D2D_RECT_F *__return_ptr retstr,
        const struct D2D_SIZE_F *a3,
        const struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5)
{
  int v5; // r10d
  float width; // xmm2_4
  float height; // xmm3_4
  int v8; // r10d
  float v9; // xmm1_4
  __m128 v10; // xmm2
  unsigned int v11; // xmm1_4
  __m128 v13; // [rsp+0h] [rbp-18h]
  __m128 v14; // [rsp+0h] [rbp-18h]

  v5 = *((_DWORD *)this + 2);
  width = 0.0;
  height = 0.0;
  if ( !v5 )
    goto LABEL_10;
  v8 = v5 - 1;
  if ( v8 )
  {
    if ( (unsigned int)(v8 - 1) > 1 )
      goto LABEL_11;
    width = a4->width;
    if ( a3->width != a4->width || a3->height != a4->height )
    {
      v9 = a3->width / a3->height;
      height = width / v9;
      if ( (float)(width / v9) >= a4->height != (*((_DWORD *)this + 2) == 3) )
      {
        height = a4->height;
        width = height * v9;
      }
      goto LABEL_11;
    }
LABEL_10:
    LODWORD(width) = *(const struct D2D_SIZE_F *)&a3->width;
    LODWORD(height) = HIDWORD(*(unsigned __int64 *)a3);
LABEL_11:
    v14.m128_f32[1] = (float)(a4->height - height) * *((float *)this + 1);
    v14.m128_f32[0] = (float)(a4->width - width) * *(float *)this;
    v14.m128_f32[3] = v14.m128_f32[1] + height;
    v14.m128_f32[2] = width + v14.m128_f32[0];
    v10 = v14;
    *(float *)&v11 = fminf(_mm_shuffle_ps(v14, v14, 170).m128_f32[0], a4->width);
    v14.m128_u64[0] = __PAIR64__(
                        COERCE_UNSIGNED_INT(fmaxf(0.0, _mm_shuffle_ps(v10, v10, 85).m128_f32[0])),
                        COERCE_UNSIGNED_INT(fmaxf(0.0, v14.m128_f32[0])));
    v14.m128_u64[1] = __PAIR64__(COERCE_UNSIGNED_INT(fminf(_mm_shuffle_ps(v10, v10, 255).m128_f32[0], a4->height)), v11);
    *retstr = (struct D2D_RECT_F)v14;
    if ( a5 )
      *a5 = (struct D2D_RECT_F)v10;
    return retstr;
  }
  v13.m128_u64[0] = 0LL;
  *(struct D2D_SIZE_F *)&v13.m128_u16[4] = *a4;
  *retstr = (struct D2D_RECT_F)v13;
  if ( a5 )
    *a5 = (struct D2D_RECT_F)v13;
  return retstr;
}
