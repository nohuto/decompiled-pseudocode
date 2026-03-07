__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CSurfaceDrawListBrush **a3)
{
  __int64 v5; // rcx
  int v6; // edi
  void (__fastcall ***v8)(_QWORD, __int64 *); // rcx
  unsigned int v9; // ebx
  float v10; // xmm12_4
  float v11; // xmm9_4
  rsize_t v12; // rdx
  __int64 v13; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v14; // r8
  int v15; // edi
  gsl::details *v16; // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, __int64); // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 *Bounds; // rax
  int v23; // xmm1_4
  int v24; // xmm0_4
  float left; // xmm3_4
  float top; // xmm2_4
  float right; // xmm1_4
  float bottom; // xmm0_4
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm4_4
  float v36; // xmm1_4
  __int64 v37; // rcx
  float *v38; // r9
  bool v39; // zf
  float m11; // xmm2_4
  float dx; // xmm4_4
  __int64 v42; // rcx
  __m128 v43; // xmm3
  float v44; // xmm10_4
  float v45; // xmm11_4
  __m128 v46; // xmm0
  __m128 v47; // xmm1
  float v48; // xmm8_4
  float v49; // xmm6_4
  CDrawingContext *v50; // rbx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r9
  int DrawList; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  volatile signed __int32 *v61; // rbx
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  struct IBitmapRealization *v66; // rdx
  CSurfaceDrawListBrush *v67; // rcx
  struct D2D_MATRIX_3X2_F *v68; // r9
  __int64 v69; // r10
  __int64 v70; // xmm1_8
  volatile signed __int32 *v71; // rcx
  __int64 v73; // [rsp+20h] [rbp-E0h]
  __int128 v74; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v75; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+58h] [rbp-A8h] BYREF
  struct D2D_RECT_F v77; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+70h] [rbp-90h]
  __int64 v79; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v80[4]; // [rsp+80h] [rbp-80h] BYREF
  int v81; // [rsp+C0h] [rbp-40h]
  _BYTE v82[80]; // [rsp+D0h] [rbp-30h] BYREF
  struct D2D_RECT_F v83; // [rsp+120h] [rbp+20h] BYREF
  __int128 v84; // [rsp+130h] [rbp+30h] BYREF
  int v85; // [rsp+140h] [rbp+40h]
  int v86; // [rsp+144h] [rbp+44h]
  struct D2D_RECT_F v87; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v88[4480]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD Destination[4]; // [rsp+12E0h] [rbp+11E0h] BYREF
  int v90; // [rsp+1320h] [rbp+1220h]
  _QWORD v91[6]; // [rsp+1330h] [rbp+1230h] BYREF

  v5 = *(_QWORD *)this;
  v83 = (struct D2D_RECT_F)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = 0;
  v79 = 0LL;
  v81 = 0;
  v87 = 0LL;
  CMatrixStack::Top((CMatrixStack *)(v5 + 400), (struct CMILMatrix *)v80);
  v8 = (void (__fastcall ***)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)this + 32LL)
                                                + 8LL
                                                + *(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 16LL));
  (**v8)(v8, &v76);
  v9 = *((_DWORD *)this + 18);
  v10 = (float)(int)v76;
  v11 = (float)SHIDWORD(v76);
  memcpy_s_0(Destination, v12, (char *)this + 40, 8LL * v9);
  if ( *(_QWORD *)a2 )
    *((_QWORD *)Destination + v9++) = *(_QWORD *)a2;
  if ( !v9 )
  {
LABEL_13:
    if ( *((_BYTE *)a2 + 93) )
    {
      v87 = v83;
      v90 = v81;
      Destination[0] = v80[0];
      Destination[1] = v80[1];
      Destination[2] = v80[2];
      Destination[3] = v80[3];
      if ( CMILMatrix::Invert((CMILMatrix *)Destination, v13, v14) )
      {
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 24LL) + 32LL))(*(_QWORD *)this + 24LL);
        Bounds = CVisual::GetBounds(v21, *(_QWORD *)(*(_QWORD *)this + 8056LL));
        v23 = *((_DWORD *)Bounds + 5);
        v24 = *((_DWORD *)Bounds + 4);
        *(_QWORD *)&v84 = 0LL;
        v85 = v24;
        v86 = v23;
        *((_QWORD *)&v84 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v10));
        CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)Destination, (float *)&v84, (float *)&v84);
        left = v83.left;
        v10 = *((float *)&v84 + 2) - *(float *)&v84;
        v11 = *((float *)&v84 + 3) - *((float *)&v84 + 1);
        if ( *(float *)&v84 > v83.left )
        {
          LODWORD(v83.left) = v84;
          left = *(float *)&v84;
        }
        top = v83.top;
        if ( *((float *)&v84 + 1) > v83.top )
        {
          v83.top = *((FLOAT *)&v84 + 1);
          top = *((float *)&v84 + 1);
        }
        right = v83.right;
        if ( v83.right > *((float *)&v84 + 2) )
        {
          v83.right = *((FLOAT *)&v84 + 2);
          right = *((float *)&v84 + 2);
        }
        bottom = v83.bottom;
        if ( v83.bottom > *((float *)&v84 + 3) )
        {
          v83.bottom = *((FLOAT *)&v84 + 3);
          bottom = *((float *)&v84 + 3);
        }
        if ( right <= left || bottom <= top )
          v83 = (struct D2D_RECT_F)0LL;
      }
    }
    if ( !*((_BYTE *)a2 + 92) )
    {
LABEL_43:
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v83.left) )
      {
        *a3 = 0LL;
        goto LABEL_91;
      }
      CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v80, (float *)&v84, (float *)&v74, &v87.left);
      v39 = *((_DWORD *)this + 18) == 1;
      LODWORD(v75.m11) = (_DWORD)FLOAT_1_0;
      m11 = *(float *)&FLOAT_1_0;
      LODWORD(v75.dx) = (_DWORD)FLOAT_1_0;
      dx = *(float *)&FLOAT_1_0;
      if ( v39 )
      {
        v42 = *((_QWORD *)this + 5);
        if ( v42 )
        {
          D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)(v42 + 8), &v75, &v75.dx, v38);
          m11 = v75.m11;
          dx = v75.dx;
        }
      }
      v43 = 0LL;
      v44 = v83.right - v83.left;
      v45 = v83.bottom - v83.top;
      v46 = 0LL;
      v47.m128_f32[0] = (float)(*(float *)&v84 / fmaxf(1.0, m11 * *(float *)&v84)) * (float)(v83.right - v83.left);
      v46.m128_f32[0] = (float)(int)v47.m128_f32[0];
      LODWORD(v84) = _mm_cmplt_ss(v46, v47).m128_u32[0];
      v48 = (float)((int)v47.m128_f32[0] - v84);
      *(float *)&v84 = v48;
      v47.m128_f32[0] = (float)(*(float *)&v74 / fmaxf(1.0, dx * *(float *)&v74)) * (float)(v83.bottom - v83.top);
      v43.m128_f32[0] = (float)(int)v47.m128_f32[0];
      LODWORD(v74) = _mm_cmplt_ss(v43, v47).m128_u32[0];
      v49 = (float)((int)v47.m128_f32[0] - v74);
      *((float *)&v84 + 1) = v49;
      if ( v48 > v10 )
      {
        *(float *)&v84 = v10;
        v48 = v10;
      }
      if ( v49 > v11 )
      {
        v49 = v11;
        *((float *)&v84 + 1) = v11;
      }
      v50 = *(CDrawingContext **)this;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v79);
      v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 24LL) + 40LL))(*(_QWORD *)this + 24LL);
      LODWORD(v87.right) = 31;
      *(_QWORD *)&v87.left = "DWM Drawlist Brush intermediate";
      LODWORD(v73) = 2;
      v52 = CDrawingContext::PushOffScreenRenderingLayer(
              v50,
              (__int64)&v87,
              (float *)&v84,
              *(unsigned int *)(v51 + 8),
              v73,
              (__int64)&v79);
      v6 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x352u, 0LL);
        goto LABEL_91;
      }
      CMILMatrix::SetToIdentity((CMILMatrix *)v82);
      CMILMatrix::Translate(
        (CMILMatrix *)v82,
        COERCE_FLOAT(LODWORD(v83.left) ^ _xmm),
        COERCE_FLOAT(LODWORD(v83.top) ^ _xmm));
      CMILMatrix::Scale((CMILMatrix *)v82, v48 / v44, v49 / v45, 1.0);
      v54 = CDrawingContext::PushTransformInternal(*(CDrawingContext **)this, 0LL, (const struct CMILMatrix *)v82, 0, 1);
      v6 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x35Bu, 0LL);
        goto LABEL_89;
      }
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v88);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(this, a2, (struct CDrawListEntryBuilder *)v88, v56);
      v6 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, DrawList, 0x35Fu, 0LL);
        goto LABEL_87;
      }
      *(_QWORD *)&v74 = 0LL;
      v59 = CDrawListCache::InternalCreate(1, (struct CDrawListCache **)&v74);
      v6 = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x362u, 0LL);
        v71 = (volatile signed __int32 *)v74;
        if ( !(_QWORD)v74 )
          goto LABEL_87;
      }
      else
      {
        v61 = (volatile signed __int32 *)v74;
        CDrawListCache::Update(
          (CDrawListCache *)v74,
          *(struct CDrawingContext **)this,
          (struct CDrawListEntryBuilder *)v88);
        v62 = CDrawListCache::Render((__int64)v61, *(CDrawingContext **)this, (CMILMatrix *)v82, 1.0);
        v6 = v62;
        if ( v62 >= 0 )
        {
          CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
          v64 = CDrawingContext::PopLayer(*(CDrawingContext **)this);
          v6 = v64;
          if ( v64 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x371u, 0LL);
            if ( v61 )
              CMILRefCountBaseT<IMILRefCount>::InternalRelease(v61);
            CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v88);
          }
          else
          {
            if ( v61 )
              CMILRefCountBaseT<IMILRefCount>::InternalRelease(v61);
            CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v88);
            *(_QWORD *)&v74 = 0LL;
            if ( v79 )
              v66 = (struct IBitmapRealization *)(v79 + *(int *)(*(_QWORD *)(v79 + 8) + 16LL) + 8LL);
            else
              v66 = 0LL;
            CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v84, v66);
            CDrawListBitmap::GetSize((CDrawListBitmap *)&v84, &v76);
            v87.left = 0.0;
            v87.top = 0.0;
            *(_QWORD *)&v77.right = 0LL;
            LOBYTE(v78) = 1;
            *(_QWORD *)&v77.left = &v74;
            LOWORD(v75.m11) = SamplerMode::k_ClampClampLinear;
            v87.right = (float)(int)v76;
            v87.bottom = (float)SHIDWORD(v76);
            BYTE2(v75._11) = 1;
            v6 = CSurfaceDrawListBrush::CreateWithContentRect(
                   (CDrawListBitmap *)&v84,
                   (__int16 *)&v75,
                   &v87.left,
                   (__int64 *)&v77.right);
            if ( (_BYTE)v78 )
            {
              v67 = **(CSurfaceDrawListBrush ***)&v77.left;
              **(_QWORD **)&v77.left = *(_QWORD *)&v77.right;
              if ( v67 )
                CSurfaceDrawListBrush::`vector deleting destructor'(v67, 1);
            }
            if ( v6 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v67, 0LL, 0, v6, 0x387u, 0LL);
            }
            else
            {
              v87 = v83;
              D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)(v74 + 32), &v87, &v77, v68);
              v69 = v74;
              v70 = v78;
              *(struct D2D_RECT_F *)(v74 + 8) = v77;
              *(_QWORD *)(v69 + 24) = v70;
              *a3 = (struct CSurfaceDrawListBrush *)v74;
              *(_QWORD *)&v74 = 0LL;
            }
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v84 + 8);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v84);
            if ( (_QWORD)v74 )
              CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v74, 1);
          }
          goto LABEL_91;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x36Au, 0LL);
        if ( !v61 )
          goto LABEL_87;
        v71 = v61;
      }
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v71);
LABEL_87:
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v88);
      CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
LABEL_89:
      CDrawingContext::PopLayer(*(CDrawingContext **)this);
      goto LABEL_91;
    }
    CCpuClip::CCpuClip((CCpuClip *)Destination);
    CDrawingContext::GetCpuClip(*(CDrawingContext **)this, (struct CCpuClip *)Destination);
    if ( *(_QWORD *)&Destination[0] || v91[0] )
    {
      v29 = CCpuClip::ResolveClip((CCpuClip *)Destination, (const struct CShape **)&v74, 0LL);
      v6 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x303u, 0LL);
      }
      else
      {
        v84 = 0LL;
        v31 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v74 + 48LL))(v74, &v84, 0LL);
        v6 = v31;
        if ( v31 >= 0 )
        {
          v33 = v83.left;
          if ( *(float *)&v84 > v83.left )
          {
            LODWORD(v83.left) = v84;
            v33 = *(float *)&v84;
          }
          v34 = v83.top;
          if ( *((float *)&v84 + 1) > v83.top )
          {
            v83.top = *((FLOAT *)&v84 + 1);
            v34 = *((float *)&v84 + 1);
          }
          v35 = v83.right;
          if ( v83.right > *((float *)&v84 + 2) )
          {
            v83.right = *((FLOAT *)&v84 + 2);
            v35 = *((float *)&v84 + 2);
          }
          v36 = v83.bottom;
          if ( v83.bottom > *((float *)&v84 + 3) )
          {
            v83.bottom = *((FLOAT *)&v84 + 3);
            v36 = *((float *)&v84 + 3);
          }
          if ( v35 <= v33 || v36 <= v34 )
            v83 = (struct D2D_RECT_F)0LL;
          goto LABEL_42;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x306u, 0LL);
      }
      CShapePtr::Release((CShapePtr *)v91);
      goto LABEL_91;
    }
LABEL_42:
    CShapePtr::Release((CShapePtr *)v91);
    goto LABEL_43;
  }
  v15 = *((_DWORD *)a2 + 4);
  *(_QWORD *)&v77.left = &v74;
  *(_QWORD *)&v74 = 0LL;
  *(_QWORD *)&v77.right = 0LL;
  LOBYTE(v78) = 1;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v84, v9);
  if ( (_QWORD)v84 == -1LL )
  {
    gsl::details::terminate(v16);
    __debugbreak();
  }
  *((_QWORD *)&v84 + 1) = Destination;
  v6 = CBrushDrawListGenerator::ComputeBrushClamp((gsl::details *)&v84, v15, (float *)a2 + 5, (__int64 *)&v77.right);
  if ( (_BYTE)v78 )
  {
    v17 = *(_QWORD *)&v77.right;
    v18 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v77.left;
    **(_QWORD **)&v77.left = *(_QWORD *)&v77.right;
    if ( v18 )
      std::default_delete<CShape>::operator()(v17, v18);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v6, 0x2D3u, 0LL);
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v74 + 48LL))(v74, &v83, 0LL);
    v6 = v19;
    if ( v19 >= 0 )
    {
      v13 = v74;
      if ( (_QWORD)v74 )
        std::default_delete<CShape>::operator()(v20, (__int64 (__fastcall ***)(_QWORD, __int64))v74);
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2D5u, 0LL);
  }
  if ( (_QWORD)v74 )
    std::default_delete<CShape>::operator()(v37, (__int64 (__fastcall ***)(_QWORD, __int64))v74);
LABEL_91:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v79);
  return (unsigned int)v6;
}
