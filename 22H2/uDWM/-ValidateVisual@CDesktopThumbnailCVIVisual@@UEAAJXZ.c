/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800B7130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000E2A4 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000E900 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001FEE0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800C0324 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(struct CRectangleGeometryProxy **this)
{
  int RectangleGeometry; // edi
  __int64 v3; // rdx
  char v5; // cl
  struct CRectangleGeometryProxy *v6; // rdx
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  float v10; // ecx
  __m128i *v11; // rdx
  int v12; // ecx
  int v13; // r12d
  __int32 v14; // r15d
  unsigned __int64 v15; // r8
  __m128i v16; // xmm0
  int v17; // ecx
  double v18; // xmm0_8
  __m128i v19; // xmm2
  int v20; // eax
  double v21; // xmm2_8
  double v22; // xmm4_8
  int v23; // eax
  CRectResourceProxy *v24; // rcx
  float v25; // xmm3_4
  float v26; // xmm1_4
  int v27[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  float v29; // [rsp+48h] [rbp-28h]
  float v30; // [rsp+4Ch] [rbp-24h]
  __m128i v31; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  RectangleGeometry = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  if ( RectangleGeometry < 0 )
  {
    v3 = 390LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)RectangleGeometry);
    return (unsigned int)RectangleGeometry;
  }
  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 337) || (v5 = 1, (*((_DWORD *)this + 85) & 0x100000) != 0) )
      v5 = 0;
    if ( this[35] )
    {
      if ( this[36] )
      {
        v6 = this[39];
        if ( v6 )
        {
          v7 = *((_DWORD *)this + 30);
          v31.m128i_i64[1] = __PAIR64__(*((_DWORD *)this + 31), v7);
          v31.m128i_i64[0] = 0LL;
          *(__m128i *)v27 = v31;
          if ( v5 )
          {
            *(float *)&v8 = 0.0;
            LODWORD(v28) = -*((_DWORD *)this + 28);
            HIDWORD(v28) = -*((_DWORD *)this + 29);
            if ( *((_DWORD *)v6 + 47) - *((_DWORD *)v6 + 45) >= 0 )
              v8 = *((_DWORD *)v6 + 47) - *((_DWORD *)v6 + 45);
            v9 = *((_DWORD *)v6 + 48) - *((_DWORD *)v6 + 46);
            v29 = *(float *)&v8;
            v10 = 0.0;
            if ( v9 >= 0 )
              v10 = *(float *)&v9;
            v30 = v10;
            IntersectRectT<MilPointAndSizeL>(v27, &v28, &v31);
          }
          v11 = (__m128i *)this[38];
          v12 = *((_DWORD *)this + 82);
          v13 = *((_DWORD *)this + 80);
          v15 = _mm_srli_si128(v11[2], 8).m128i_u64[0];
          v16 = _mm_cvtsi32_si128(v11[3].m128i_u32[0]);
          v31 = v11[2];
          v14 = v31.m128i_i32[0];
          v17 = v12 - v13;
          *(_QWORD *)&v18 = *(_OWORD *)&_mm_cvtepi32_pd(v16);
          v19 = _mm_cvtsi32_si128((int)v15 - v31.m128i_i32[0]);
          v20 = 0;
          if ( v17 >= 0 )
            v20 = v17;
          v21 = _mm_cvtepi32_pd(v19).m128d_f64[0];
          v22 = (double)v7 * v21 / ((double)v20 * v18);
          if ( (*((_DWORD *)this + 85) & 0x100000) == 0 )
            goto LABEL_22;
          if ( !*((_BYTE *)this + 338) )
          {
            v28 = 0LL;
            LODWORD(v29) = (int)(v21 / v22);
            LODWORD(v30) = (int)((double)(HIDWORD(v15) - v31.m128i_i32[1]) / v22);
            IntersectRectT<MilPointAndSizeL>(v27, &v28, v27);
LABEL_22:
            v23 = *((_DWORD *)this + 81) - v31.m128i_i32[1];
            v24 = this[36];
            v25 = (double)(v13 - v14) + (double)v27[0] / v22;
            *(float *)&v28 = v25;
            *((float *)&v28 + 1) = (double)v23 + (double)v27[1] / v22;
            v26 = (double)v27[2] / v22;
            v29 = v26 + v25;
            v30 = (float)((double)v27[3] / v22) + *((float *)&v28 + 1);
            RectangleGeometry = CRectResourceProxy::Update(v24, (const struct MilRectF *)&v28);
            if ( RectangleGeometry < 0 )
            {
              v3 = 441LL;
              goto LABEL_3;
            }
            RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v27[0], v27[1], v27[2], v27[3], this + 35);
            if ( RectangleGeometry < 0 )
            {
              v3 = 443LL;
              goto LABEL_3;
            }
            *((_BYTE *)this + 338) = 1;
          }
        }
      }
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  return 0LL;
}
