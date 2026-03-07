__int64 __fastcall CRenderData::TryDrawCommandAsDrawList(
        CRenderData *this,
        struct CDrawingContext *a2,
        __int64 a3,
        struct CDrawListEntryBuilder *a4,
        int a5,
        CRenderData *a6,
        _BYTE *a7)
{
  unsigned int v7; // ebx
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r14
  CRectangleGeometry *v19; // rdi
  __m128 v20; // xmm6
  struct CFloatResource *v21; // rdx
  float v22; // xmm0_4
  float v23; // xmm0_4
  __int64 v24; // rax
  CRenderData *v25; // rcx
  __int64 v27; // rdi
  struct CImageSource *v28; // rdi
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // ecx
  __m128 v33; // xmm6
  struct CFloatResource *v34; // rdx
  float v35; // xmm0_4
  CRenderData *v36; // rcx
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // r8
  int BoundsSafe; // eax
  unsigned int v42; // ecx
  float Opacity; // xmm0_4
  const struct D2D_RECT_F *v44; // rcx
  int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rsi
  __int64 v48; // r14
  __int64 v49; // rdi
  __int64 i; // rax
  int v51; // eax
  __m128 v52; // xmm2
  struct CFloatResource *v53; // rdx
  float v54; // xmm0_4
  int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // rdi
  struct CImageSource *v58; // rcx
  int v59; // eax
  unsigned int v60; // ecx
  int v61; // eax
  unsigned int v62; // ecx
  __int64 v63; // rcx
  int v64; // eax
  CRenderData *v65; // rcx
  int v66; // eax
  unsigned int v67; // ecx
  int ShapeData; // eax
  unsigned int v69; // ecx
  __int64 v70; // rdi
  struct MilRectF *v71; // rsi
  CRenderData *v72; // rcx
  const struct MilRectF *v73; // r14
  int v74; // eax
  struct MilRectF *v75[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v76; // [rsp+58h] [rbp-51h]
  struct D2D_RECT_F v77; // [rsp+60h] [rbp-49h] BYREF
  struct D2D_RECT_F v78; // [rsp+70h] [rbp-39h] BYREF
  struct CImageSource *v79[2]; // [rsp+80h] [rbp-29h] BYREF
  struct D2D_RECT_F v80; // [rsp+90h] [rbp-19h] BYREF

  v7 = 0;
  *(_QWORD *)&v77.left = a7;
  *a7 = 0;
  switch ( a5 )
  {
    case 443:
      v28 = *(struct CImageSource **)(*((_QWORD *)this + 17) + 8LL * *(unsigned int *)(*((_QWORD *)a6 + 1) + 4LL));
      if ( v28 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CImageSource *, __int64))(*(_QWORD *)v28 + 56LL))(v28, 85LL) )
        {
          if ( !*(_QWORD *)(a3 + 32) )
          {
            v29 = CRenderData::DrawImageResource_FillMode(this, a2, a4, v28, 0LL, 0LL, 1.0);
            v7 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x279u, 0LL);
              return v7;
            }
          }
        }
      }
      goto LABEL_26;
    case 444:
      v16 = *((_QWORD *)a6 + 1);
      v17 = *((_QWORD *)this + 17);
      v18 = *(_QWORD *)(v17 + 8LL * *(unsigned int *)(v16 + 4));
      v19 = *(CRectangleGeometry **)(v17 + 8LL * *(unsigned int *)(v16 + 8));
      if ( !v18 || !v19 )
        goto LABEL_17;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 56LL))(v18, 175LL) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 56LL))(v18, 84LL) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v19 + 56LL))(v19, 138LL) )
          {
            v79[0] = *(struct CImageSource **)(v18 + 184);
            if ( !CRectangleGeometry::IsRoundedRectangleGeometry(v19) && !*(_QWORD *)(a3 + 32) && v40 )
            {
              v78 = 0LL;
              BoundsSafe = CGeometry::GetBoundsSafe(v39, 0LL, &v78);
              v7 = BoundsSafe;
              if ( BoundsSafe < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, BoundsSafe, 0x2D6u, 0LL);
                return v7;
              }
              v80 = v78;
              Opacity = CLegacyMilBrush::GetOpacity(*(float *)(v18 + 64), *(struct CFloatResource **)(v18 + 72));
              v45 = CRenderData::DrawImageResource_FillMode(this, a2, a4, v79[0], v44, &v80, Opacity);
              v7 = v45;
              if ( v45 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x2F4u, 0LL);
                return v7;
              }
            }
          }
        }
        goto LABEL_17;
      }
      v20 = (__m128)_mm_loadu_si128((const __m128i *)(v18 + 96));
      v21 = *(struct CFloatResource **)(v18 + 72);
      v22 = *(float *)(v18 + 64);
      LODWORD(v78.left) = v20.m128_i32[0];
      LODWORD(v78.top) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
      LODWORD(v78.right) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
      v23 = CLegacyMilBrush::GetOpacity(v22, v21);
      v24 = *(_QWORD *)v19;
      v78.bottom = v23 * _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
      if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(v24 + 56))(v19, 142LL) )
      {
        if ( !*(_QWORD *)(a3 + 32) )
        {
          v47 = *((_QWORD *)v19 + 18);
          v48 = *((_QWORD *)v19 + 19);
          if ( v47 != v48 )
          {
            v49 = *((_QWORD *)v19 + 18);
            while ( 1 )
            {
              for ( i = 0LL; i < 4; ++i )
                *((float *)v79 + i) = (float)*(int *)(v49 + 4 * i);
              v51 = CRenderData::DrawSolidColorRectangle(
                      v25,
                      a2,
                      a4,
                      (const struct MilRectF *)v79,
                      (const struct _D3DCOLORVALUE *)&v78);
              v7 = v51;
              if ( v51 < 0 )
                break;
              v47 += 16LL;
              v49 += 16LL;
              if ( v47 == v48 )
                goto LABEL_17;
            }
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v51, 0x29Au, 0LL);
            return v7;
          }
        }
        goto LABEL_17;
      }
      if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v19 + 56LL))(v19, 138LL) )
      {
        if ( !CRectangleGeometry::IsRoundedRectangleGeometry(v19) && !*(_QWORD *)(a3 + 32) )
        {
          *(_OWORD *)v79 = 0LL;
          v64 = CGeometry::GetBoundsSafe(v63, 0LL, v79);
          v7 = v64;
          if ( v64 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v65, 0LL, 0, v64, 0x2A7u, 0LL);
            return v7;
          }
          v66 = CRenderData::DrawSolidColorRectangle(
                  v65,
                  a2,
                  a4,
                  (const struct MilRectF *)v79,
                  (const struct _D3DCOLORVALUE *)&v78);
          v7 = v66;
          if ( v66 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x2A8u, 0LL);
            return v7;
          }
        }
        goto LABEL_17;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v19 + 56LL))(v19, 27LL) )
      {
LABEL_17:
        **(_BYTE **)&v77.left = 1;
        return v7;
      }
      v79[0] = 0LL;
      LOBYTE(v79[1]) = 0;
      ShapeData = CGeometry::GetShapeData(v19, 0LL, (struct CShapePtr *)v79);
      v7 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, ShapeData, 0x2B2u, 0LL);
LABEL_91:
        CShapePtr::Release((CShapePtr *)v79);
        return v7;
      }
      if ( v79[0]
        && (*(unsigned __int8 (__fastcall **)(struct CImageSource *, struct D2D_RECT_F *))(*(_QWORD *)v79[0] + 64LL))(
             v79[0],
             &v80)
        && !*(_QWORD *)(a3 + 32) )
      {
        v76 = 0LL;
        v70 = 0LL;
        *(_OWORD *)v75 = 0LL;
        if ( LODWORD(v80.left) )
        {
          std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Resize_reallocate<std::_Value_init_tag>(
            v75,
            LODWORD(v80.left));
          v70 = v76;
        }
        v71 = v75[0];
        if ( !(*(unsigned __int8 (__fastcall **)(struct CImageSource *, struct MilRectF *))(*(_QWORD *)v79[0] + 80LL))(
                v79[0],
                v75[0]) )
        {
          v7 = -2003304309;
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v72, 0LL, 0, -2003304309, 0x2BFu, 0LL);
LABEL_82:
          if ( v71 )
            std::_Deallocate<16,0>(v71, (v70 - (_QWORD)v71) & 0xFFFFFFFFFFFFFFF0uLL);
          goto LABEL_91;
        }
        v73 = v71;
        if ( v71 != v75[1] )
        {
          while ( 1 )
          {
            v74 = CRenderData::DrawSolidColorRectangle(v72, a2, a4, v73, (const struct _D3DCOLORVALUE *)&v78);
            v7 = v74;
            if ( v74 < 0 )
              break;
            v73 = (const struct MilRectF *)((char *)v73 + 16);
            if ( v73 == v75[1] )
              goto LABEL_87;
          }
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v72, 0LL, 0, v74, 0x2C4u, 0LL);
          goto LABEL_82;
        }
LABEL_87:
        if ( v71 )
          std::_Deallocate<16,0>(v71, (v70 - (_QWORD)v71) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      CShapePtr::Release((CShapePtr *)v79);
      goto LABEL_17;
    case 446:
      v57 = *((_QWORD *)a6 + 1);
      v58 = *(struct CImageSource **)(*((_QWORD *)this + 17) + 8LL * *(unsigned int *)(v57 + 4));
      v79[0] = v58;
      if ( v58 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CImageSource *, __int64))(*(_QWORD *)v58 + 56LL))(v58, 85LL) )
        {
          if ( !*(_QWORD *)(a3 + 32) )
          {
            v78 = *(struct D2D_RECT_F *)(v57 + 8);
            v59 = CRenderData::DrawImageResource_FillMode(this, a2, a4, v79[0], &v78, 1.0);
            v7 = v59;
            if ( v59 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x261u, 0LL);
              return v7;
            }
          }
        }
      }
      goto LABEL_26;
    case 448:
      *(_QWORD *)&v80.left = *((_QWORD *)a6 + 1);
      v27 = *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * *(unsigned int *)(*(_QWORD *)&v80.left + 4LL));
      if ( v27 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 56LL))(v27, 175LL) )
        {
          if ( !*(_QWORD *)(a3 + 32) )
          {
            v33 = (__m128)_mm_loadu_si128((const __m128i *)(v27 + 96));
            v34 = *(struct CFloatResource **)(v27 + 72);
            v35 = *(float *)(v27 + 64);
            LODWORD(v78.left) = v33.m128_i32[0];
            LODWORD(v78.top) = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
            LODWORD(v78.right) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
            v78.bottom = CLegacyMilBrush::GetOpacity(v35, v34) * _mm_shuffle_ps(v33, v33, 255).m128_f32[0];
            v37 = CRenderData::DrawSolidColorRectangle(
                    v36,
                    a2,
                    a4,
                    (const struct MilRectF *)(*(_QWORD *)&v80.left + 8LL),
                    (const struct _D3DCOLORVALUE *)&v78);
            v7 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x202u, 0LL);
              return v7;
            }
          }
        }
        else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 56LL))(v27, 100LL) )
        {
          if ( !*(_QWORD *)(a3 + 32) )
          {
            v61 = CLinearGradientLegacyMilBrush::Draw(
                    (CLinearGradientLegacyMilBrush *)v27,
                    a2,
                    a4,
                    (const struct MilRectF *)(*(_QWORD *)&v80.left + 8LL));
            v7 = v61;
            if ( v61 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x20Eu, 0LL);
              return v7;
            }
          }
        }
        else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 56LL))(v27, 84LL) )
        {
          v79[0] = *(struct CImageSource **)(v27 + 184);
          if ( v79[0] )
          {
            if ( CImageLegacyMilBrush::ReducesToFillImage((CImageLegacyMilBrush *)v27) && !*(_QWORD *)(a3 + 32) )
            {
              v52 = (__m128)_mm_loadu_si128((const __m128i *)(v27 + 120));
              v53 = *(struct CFloatResource **)(v27 + 72);
              v77 = *(struct D2D_RECT_F *)(*(_QWORD *)&v80.left + 8LL);
              LODWORD(v78.left) = v52.m128_i32[0];
              LODWORD(v78.top) = _mm_shuffle_ps(v52, v52, 85).m128_u32[0];
              LODWORD(v78.right) = _mm_shuffle_ps(v52, v52, 170).m128_u32[0];
              LODWORD(v78.bottom) = _mm_shuffle_ps(v52, v52, 255).m128_u32[0];
              v54 = CLegacyMilBrush::GetOpacity(*(float *)(v27 + 64), v53);
              v55 = CRenderData::DrawImageResource_FillMode(this, a2, a4, v79[0], &v78, &v77, v54);
              v7 = v55;
              if ( v55 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x221u, 0LL);
                return v7;
              }
            }
          }
        }
      }
      goto LABEL_26;
    case 449:
      if ( !*(_QWORD *)(a3 + 32) )
      {
        v31 = CRenderData::DrawSolidColorRectangle(
                a6,
                a2,
                a4,
                (const struct MilRectF *)(*((_QWORD *)a6 + 1) + 4LL),
                (const struct _D3DCOLORVALUE *)(*((_QWORD *)a6 + 1) + 20LL));
        v7 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x233u, 0LL);
          return v7;
        }
      }
      goto LABEL_26;
    case 450:
      v12 = *((_QWORD *)a6 + 1);
      v13 = *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * *(unsigned int *)(v12 + 4));
      *(_QWORD *)&v80.left = v13;
      if ( v13 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 56LL))(v13, 85LL) )
        {
          if ( !*(_QWORD *)(a3 + 32) )
          {
            v78 = *(struct D2D_RECT_F *)(v12 + 8);
            v14 = CRenderData::DrawImageResource_TileMode(
                    this,
                    a2,
                    a4,
                    *(struct CImageSource **)&v80.left,
                    *(float *)(v12 + 24),
                    v12 + 28,
                    (__int64)&v78);
            v7 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x24Au, 0LL);
              return v7;
            }
          }
        }
      }
LABEL_26:
      *a7 = 1;
      break;
  }
  return v7;
}
