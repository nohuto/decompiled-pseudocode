__int64 __fastcall CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(CDrawingContext *this)
{
  unsigned int v2; // ebx
  CComposition *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbx
  gsl::details *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *i; // rsi
  _QWORD *DirtyRegionVisualizationData; // rdi
  unsigned int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 *v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  _QWORD v34[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v35; // [rsp+48h] [rbp-C0h]
  int v36; // [rsp+4Ch] [rbp-BCh]
  unsigned int v37; // [rsp+50h] [rbp-B8h]
  struct _D3DCOLORVALUE v38; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v39; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v40[4]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v41[4]; // [rsp+98h] [rbp-70h] BYREF
  int v42; // [rsp+D8h] [rbp-30h]
  __int128 X; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v44; // [rsp+F8h] [rbp-10h] BYREF

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1007) + 184LL))(*((_QWORD *)this + 1007)) )
  {
    CComposition::CurrentRedrawRegionColor(v3, &v38);
    v35 = 0;
    v4 = *((_QWORD *)this + 3);
    v36 = 0;
    v37 = 0;
    v44 = 0LL;
    X = 0LL;
    *(_OWORD *)&v34[1] = 0LL;
    v5 = (*(__int64 (__fastcall **)(char *))(v4 + 32))((char *)this + 24);
    CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this, v5, &v44);
    v6 = *((_OWORD *)this + 6);
    v7 = *((_OWORD *)this + 7);
    v42 = *((_DWORD *)this + 40);
    v41[0] = v6;
    v8 = *((_OWORD *)this + 8);
    v41[1] = v7;
    v9 = *((_OWORD *)this + 9);
    v41[2] = v8;
    v41[3] = v9;
    CMILMatrix::Invert((CMILMatrix *)v41, v10, v11);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v41, (struct MilRectF *)&v44, (float *)&X);
    v12 = *(float *)&X;
    if ( COERCE_FLOAT(X & _xmm) < 8388608.0 )
      v12 = (float)(int)floorf_0(*(float *)&X);
    *(float *)&X = v12;
    v13 = *((float *)&X + 1);
    if ( COERCE_FLOAT(DWORD1(X) & _xmm) < 8388608.0 )
      v13 = (float)(int)floorf_0(*((float *)&X + 1));
    v14 = *((float *)&X + 2);
    *((float *)&X + 1) = v13;
    if ( COERCE_FLOAT(DWORD2(X) & _xmm) < 8388608.0 )
      v14 = (float)(int)ceilf_0(*((float *)&X + 2));
    v15 = *((float *)&X + 3);
    *((float *)&X + 2) = v14;
    if ( COERCE_FLOAT(HIDWORD(X) & _xmm) < 8388608.0 )
      v15 = (float)(int)ceilf_0(*((float *)&X + 3));
    *((float *)&X + 3) = v15;
    v16 = CDrawingContext::PushTransformInternal(this, 0LL, (CDrawingContext *)((char *)this + 96), 0, 0);
    v2 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1915u, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v34[1]);
    }
    else
    {
      LOBYTE(v18) = (*(_BYTE *)(v5 + 101) & 4) != 0;
      (*(void (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD *))(**((_QWORD **)this + 1007) + 224LL))(
        *((_QWORD *)this + 1007),
        &X,
        v18,
        &v34[1]);
      if ( (*(_BYTE *)(v5 + 101) & 4) != 0 )
      {
        if ( (**(_DWORD **)(v5 + 232) & 0x80000) != 0 )
        {
          for ( i = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(v5, v19, v20);
                i[4];
                std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::pop_front(i) )
          {
            v19 = *(_QWORD *)(i[1] + 8 * (i[3] & (i[2] - 1LL)));
            if ( (*(_BYTE *)(*(_QWORD *)(v19 + 32) + 580LL) & 1) != 0 )
              break;
          }
        }
        if ( v37 )
          CVisual::AppendDirtyRegionVisualizationRects(v5, &v34[1]);
        if ( (**(_DWORD **)(v5 + 232) & 0x80000) != 0 )
        {
          DirtyRegionVisualizationData = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(v5, v19, v20);
          if ( DirtyRegionVisualizationData[4] )
          {
            v27 = 0;
            v28 = 0LL;
            while ( 1 )
            {
              v29 = *(_QWORD *)(DirtyRegionVisualizationData[1]
                              + 8 * ((DirtyRegionVisualizationData[2] - 1LL) & (DirtyRegionVisualizationData[3] + v28)));
              v39 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v29 + 24) + 88LL));
              if ( _mm_shuffle_ps(v39, v39, 255).m128_f32[0] > 0.0 )
              {
                std::vector<MilRectF>::vector<MilRectF>(v40, v29);
                v30 = (__int64 *)gsl::span<MilRectF,-1>::span<MilRectF,-1>((gsl::details *)&v44, v40);
                gsl::span<unsigned char const,-1>::span<unsigned char const,-1>(&v38, v30);
                v31 = CDrawingContext::FillRectanglesWithSolidColor(this, &v38, (__int64)&v39);
                v2 = v31;
                if ( v31 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x1949u, 0LL);
                  std::vector<MilRectF>::_Tidy((__int64)v40);
                  break;
                }
                std::vector<MilRectF>::_Tidy((__int64)v40);
              }
              v28 = ++v27;
              if ( (unsigned __int64)v27 >= DirtyRegionVisualizationData[4] )
              {
                *((_BYTE *)g_pComposition + 1277) = 1;
                break;
              }
            }
          }
        }
      }
      else
      {
        v21 = v34[1];
        gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v44, v37);
        *((_QWORD *)&v44 + 1) = v21;
        if ( (_QWORD)v44 == -1LL || !v21 && (_QWORD)v44 )
        {
          gsl::details::terminate(v22);
          __debugbreak();
        }
        gsl::span<unsigned char const,-1>::span<unsigned char const,-1>(&v39, (__int64 *)&v44);
        v23 = CDrawingContext::FillRectanglesWithSolidColor(this, &v39, (__int64)&v38);
        v2 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1920u, 0LL);
      }
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v34[1]);
      CDrawingContext::PopTransformInternal(this, 0);
    }
  }
  return v2;
}
