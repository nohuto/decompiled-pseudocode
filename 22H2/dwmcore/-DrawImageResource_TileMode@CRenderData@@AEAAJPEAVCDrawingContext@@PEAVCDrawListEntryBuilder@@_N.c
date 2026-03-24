/*
 * XREFs of ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C6598
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180069D3C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800C696C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800C696C.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800F3FAB (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_TileMode(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        bool a4,
        struct CImageSource *a5,
        float a6,
        float *a7,
        float *a8)
{
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm8_4
  float bottom; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm11_4
  float v24; // xmm0_4
  float v25; // xmm10_4
  float v26; // xmm13_4
  float v27; // xmm12_4
  float v28; // xmm9_4
  float v29; // xmm6_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm1_4
  bool v33; // zf
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  int v40; // eax
  __int64 v41; // rcx
  float v42; // xmm0_4
  float v43; // xmm0_4
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_RECT_F v47; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v48[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v49; // [rsp+A8h] [rbp-60h]
  struct D2D_RECT_F v50; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v51; // [rsp+C8h] [rbp-40h] BYREF

  v49 = 0;
  v51 = 0LL;
  v11 = (__int64 *)((char *)a5 + *(int *)(*((_QWORD *)a5 + 7) + 8LL) + 56);
  v12 = *v11;
  v46 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 48))(v11, &v46);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x3D3u, 0LL);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __m128 *))(*(_QWORD *)v46 + 8LL))(v46, v48, &v51) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v48, (__int64)&v51, &v50.left);
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
    v20 = right - left;
    v21 = bottom - top;
    v22 = fmodf_0(*a7, v20);
    v23 = v22;
    if ( v22 < 0.0 )
      v23 = v22 + v20;
    v24 = fmodf_0(a7[1], v21);
    v25 = v24;
    if ( v24 < 0.0 )
      v25 = v24 + v21;
    v26 = v20 - v23;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v23) & _xmm) < 0.0000011920929 )
      v26 = v20;
    v27 = v21 - v25;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v25) & _xmm) < 0.0000011920929 )
      v27 = v21;
    v28 = a8[1];
    if ( a8[3] > v28 )
    {
      while ( 1 )
      {
        v29 = *a8;
        v30 = a8[2];
        if ( v30 > *a8 )
          break;
LABEL_31:
        if ( v28 == a8[1] )
          v43 = v27;
        else
          v43 = v21;
        v28 = v28 + v43;
        if ( a8[3] <= v28 )
          goto LABEL_34;
      }
      v31 = *a8;
      while ( 1 )
      {
        v47.left = v29;
        v47.top = v28;
        if ( v29 == v31 )
          v32 = v26;
        else
          v32 = v20;
        v33 = v28 == a8[1];
        v34 = v32 + v29;
        v47.right = v34;
        if ( v33 )
          v35 = v27;
        else
          v35 = v21;
        v36 = v35 + v28;
        v47.bottom = v36;
        if ( v30 <= v34 )
        {
          v47.right = v30;
          v34 = v30;
        }
        v37 = a8[3];
        if ( v37 <= v36 )
        {
          v47.bottom = a8[3];
          v36 = v37;
        }
        v38 = v29 == v31 ? v23 : 0.0;
        v33 = v28 == a8[1];
        v50.left = v38;
        v39 = v33 ? v25 : 0.0;
        v50.top = v39;
        v50.right = (float)(v34 - v29) + v38;
        v50.bottom = (float)(v36 - v28) + v39;
        v40 = CRenderData::DrawImageResource_FillMode(this, a2, a3, a4, a5, &v50, &v47, a6);
        v15 = v40;
        if ( v40 < 0 )
          break;
        v31 = *a8;
        if ( v29 == *a8 )
          v42 = v26;
        else
          v42 = v20;
        v30 = a8[2];
        v29 = v29 + v42;
        if ( v30 <= v29 )
          goto LABEL_31;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x427u, 0LL);
    }
  }
LABEL_34:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v46);
  return v15;
}
