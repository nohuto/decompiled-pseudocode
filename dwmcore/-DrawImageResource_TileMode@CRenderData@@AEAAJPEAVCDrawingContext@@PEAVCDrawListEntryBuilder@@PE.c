__int64 __fastcall CRenderData::DrawImageResource_TileMode(
        CRenderData *this,
        const struct CVisualTree **a2,
        struct CDrawListEntryBuilder *a3,
        struct CImageSource *a4,
        float a5,
        float *a6,
        float *a7)
{
  __int64 v7; // rax
  __int64 *v11; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm8_4
  float bottom; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm11_4
  float v25; // xmm0_4
  float v26; // xmm10_4
  float v27; // xmm13_4
  float v28; // xmm12_4
  float v29; // xmm9_4
  float v30; // xmm6_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm1_4
  bool v34; // zf
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm2_4
  int v41; // eax
  __int64 v42; // rcx
  float v43; // xmm0_4
  float v44; // xmm0_4
  __int64 v46; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v47; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v48[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v49; // [rsp+A8h] [rbp-60h]
  struct D2D_RECT_F v50; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v51; // [rsp+C8h] [rbp-40h] BYREF

  v7 = *((_QWORD *)a4 + 8);
  v49 = 0;
  v51 = 0LL;
  v11 = (__int64 *)((char *)a4 + *(int *)(v7 + 8) + 64);
  v13 = *v11;
  v46 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 64))(v11, &v46);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3AFu, 0LL);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __m128 *))(*(_QWORD *)v46 + 8LL))(v46, v48, &v51) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v48, (struct MilRectF *)&v51, &v50.left);
      top = v50.top;
      left = v50.left;
      bottom = v50.bottom;
      right = v50.right;
    }
    else
    {
      left = v51.m128_f32[0];
      LODWORD(top) = _mm_shuffle_ps(v51, v51, 85).m128_u32[0];
      LODWORD(right) = _mm_shuffle_ps(v51, v51, 170).m128_u32[0];
      LODWORD(bottom) = _mm_shuffle_ps(v51, v51, 255).m128_u32[0];
      v50 = (struct D2D_RECT_F)v51;
    }
    v21 = right - left;
    v22 = bottom - top;
    v23 = fmodf_0(*a6, v21);
    v24 = v23;
    if ( v23 < 0.0 )
      v24 = v23 + v21;
    v25 = fmodf_0(a6[1], v22);
    v26 = v25;
    if ( v25 < 0.0 )
      v26 = v25 + v22;
    v27 = v21 - v24;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v24) & _xmm) < 0.0000011920929 )
      v27 = v21;
    v28 = v22 - v26;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - v26) & _xmm) < 0.0000011920929 )
      v28 = v22;
    v29 = a7[1];
    if ( a7[3] > v29 )
    {
      while ( 1 )
      {
        v30 = *a7;
        v31 = a7[2];
        if ( v31 > *a7 )
          break;
LABEL_31:
        if ( v29 == a7[1] )
          v44 = v28;
        else
          v44 = v22;
        v29 = v29 + v44;
        if ( a7[3] <= v29 )
          goto LABEL_34;
      }
      v32 = *a7;
      while ( 1 )
      {
        v47.left = v30;
        v47.top = v29;
        if ( v30 == v32 )
          v33 = v27;
        else
          v33 = v21;
        v34 = v29 == a7[1];
        v35 = v33 + v30;
        v47.right = v35;
        if ( v34 )
          v36 = v28;
        else
          v36 = v22;
        v37 = v36 + v29;
        v47.bottom = v37;
        if ( v31 <= v35 )
        {
          v47.right = v31;
          v35 = v31;
        }
        v38 = a7[3];
        if ( v38 <= v37 )
        {
          v47.bottom = a7[3];
          v37 = v38;
        }
        v39 = v30 == v32 ? v24 : 0.0;
        v34 = v29 == a7[1];
        v50.left = v39;
        v40 = v34 ? v26 : 0.0;
        v50.top = v40;
        v50.right = (float)(v35 - v30) + v39;
        v50.bottom = (float)(v37 - v29) + v40;
        v41 = CRenderData::DrawImageResource_FillMode(this, a2, a3, a4, &v50, &v47, a5);
        v16 = v41;
        if ( v41 < 0 )
          break;
        v32 = *a7;
        if ( v30 == *a7 )
          v43 = v27;
        else
          v43 = v21;
        v31 = a7[2];
        v30 = v30 + v43;
        if ( v31 <= v30 )
          goto LABEL_31;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x3FDu, 0LL);
    }
  }
LABEL_34:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v46);
  return v16;
}
