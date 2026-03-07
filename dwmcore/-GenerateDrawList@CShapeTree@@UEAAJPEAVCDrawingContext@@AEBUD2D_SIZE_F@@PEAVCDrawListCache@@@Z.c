__int64 __fastcall CShapeTree::GenerateDrawList(
        CShapeTree *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // edi
  float v9; // xmm9_4
  float v10; // xmm6_4
  float width; // xmm0_4
  float height; // xmm2_4
  float v13; // xmm10_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm8_4
  float v17; // xmm4_4
  float v18; // xmm7_4
  unsigned __int8 v19; // r14
  __int64 v20; // rdx
  float v21; // xmm11_4
  float v22; // xmm12_4
  float v23; // xmm13_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  void (__fastcall ***v26)(_QWORD, _DWORD *); // rcx
  float v27; // xmm10_4
  float v28; // xmm9_4
  void (__fastcall **v29)(_QWORD, _DWORD *); // rax
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm10_4
  float v35; // xmm9_4
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  struct IBitmapRealization *v45; // rdx
  CDrawListBitmap *v46; // rax
  CSurfaceDrawListBrush *v47; // rcx
  CSurfaceDrawListBrush *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r9
  int DrawList; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v56; // [rsp+20h] [rbp-E0h]
  __int64 v57[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v58; // [rsp+40h] [rbp-C0h] BYREF
  char v59; // [rsp+42h] [rbp-BEh]
  CSurfaceDrawListBrush *v60; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v61[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+70h] [rbp-90h]
  int v64; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+BCh] [rbp-44h]
  char v66; // [rsp+C0h] [rbp-40h]
  __int128 v67; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v68; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v69; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v72; // [rsp+118h] [rbp+18h] BYREF
  char v73; // [rsp+120h] [rbp+20h]
  float v74; // [rsp+128h] [rbp+28h] BYREF
  float v75; // [rsp+12Ch] [rbp+2Ch]
  float v76; // [rsp+130h] [rbp+30h]
  float v77; // [rsp+134h] [rbp+34h]
  _BYTE v78[16]; // [rsp+140h] [rbp+40h] BYREF
  int v79; // [rsp+150h] [rbp+50h]
  _BYTE v80[4480]; // [rsp+190h] [rbp+90h] BYREF

  v8 = 0;
  v68 = *((_OWORD *)this + 5);
  if ( *((_BYTE *)this + 97) )
  {
    v9 = *(float *)&v68;
    v10 = 0.0;
    width = a3->width;
    height = a3->height;
    if ( *(float *)&v68 < 0.0 )
    {
      v9 = 0.0;
      LODWORD(v68) = 0;
    }
    v13 = *((float *)&v68 + 1);
    v14 = *((float *)&v68 + 1);
    if ( *((float *)&v68 + 1) < 0.0 )
    {
      v13 = 0.0;
      v14 = 0.0;
      DWORD1(v68) = 0;
    }
    v15 = *((float *)&v68 + 2);
    v16 = *((float *)&v68 + 2);
    v17 = *((float *)&v68 + 2);
    if ( *((float *)&v68 + 2) > width )
    {
      *((float *)&v68 + 2) = width;
      v15 = width;
      v16 = width;
      v17 = width;
    }
    v18 = *((float *)&v68 + 3);
    if ( *((float *)&v68 + 3) > height )
    {
      *((float *)&v68 + 3) = height;
      v18 = height;
      v16 = v17;
    }
    if ( v15 > v9 && v18 > v14 )
    {
      v64 = 0;
      v19 = 0;
      CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)&v62);
      CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)&v62, (float *)v57, (float *)v57 + 1, (float *)&v68);
      v20 = *((_QWORD *)a2 + 4);
      v75 = 0.0;
      v21 = 0.0;
      v22 = 0.0;
      v23 = 0.0;
      v74 = 0.0;
      v24 = (float)(v16 - v9) * *(float *)v57;
      v25 = (float)(v18 - v13) * *((float *)v57 + 1);
      v26 = (void (__fastcall ***)(_QWORD, _DWORD *))(v20 + 8 + *(int *)(*(_QWORD *)(v20 + 8) + 16LL));
      v76 = v24;
      v71 = 0LL;
      v27 = v24;
      v77 = v25;
      v28 = v25;
      v29 = *v26;
      v72 = __PAIR64__(LODWORD(v25), LODWORD(v24));
      (*v29)(v26, v61);
      if ( fmaxf(v24 - 0.0, v25 - 0.0) > fmaxf((float)v61[0], (float)v61[1]) )
      {
        v19 = 1;
        v67 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v62, (struct MilRectF *)&v68, (float *)&v67);
        v69 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)a2, (float *)&v69);
        v30 = *(float *)&v67;
        if ( *(float *)&v69 > *(float *)&v67 )
        {
          LODWORD(v67) = v69;
          v30 = *(float *)&v69;
        }
        v31 = *((float *)&v67 + 1);
        if ( *((float *)&v69 + 1) > *((float *)&v67 + 1) )
        {
          DWORD1(v67) = DWORD1(v69);
          v31 = *((float *)&v69 + 1);
        }
        v32 = *((float *)&v67 + 2);
        if ( *((float *)&v67 + 2) > *((float *)&v69 + 2) )
        {
          DWORD2(v67) = DWORD2(v69);
          v32 = *((float *)&v69 + 2);
        }
        v33 = *((float *)&v67 + 3);
        if ( *((float *)&v67 + 3) > *((float *)&v69 + 3) )
        {
          HIDWORD(v67) = HIDWORD(v69);
          v33 = *((float *)&v69 + 3);
        }
        if ( v32 <= v30 || v33 <= v31 )
          v67 = 0uLL;
        if ( !CShapeTree::ComputePartialIntermediate(
                (struct CMILMatrix *)&v62,
                (float *)v57,
                (float *)&v68,
                (int *)&v67,
                (float *)&v71) )
          return v8;
        v23 = *((float *)&v71 + 1);
        v22 = *(float *)&v71;
        v25 = v25 + COERCE_FLOAT(HIDWORD(v71) ^ _xmm);
        v28 = *((float *)&v72 + 1);
        v24 = v24 + COERCE_FLOAT(v71 ^ _xmm);
        v27 = *(float *)&v72;
        v21 = COERCE_FLOAT(v71 ^ _xmm) + 0.0;
        v77 = v25;
        v76 = v24;
        v75 = COERCE_FLOAT(HIDWORD(v71) ^ _xmm) + 0.0;
        v10 = v75;
        v74 = v21;
      }
      v34 = v27 - v22;
      if ( v34 >= 1.0 )
      {
        v35 = v28 - v23;
        if ( v35 >= 1.0 )
        {
          v57[0] = 0LL;
          Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v57);
          *(_QWORD *)&v69 = "DWM ShapeVisual intermediate";
          *(_QWORD *)&v67 = __PAIR64__(LODWORD(v35), LODWORD(v34));
          DWORD2(v69) = 28;
          LODWORD(v56) = 2 * (v19 ^ 1) + 2;
          v36 = CDrawingContext::PushOffScreenRenderingLayer(
                  a2,
                  (__int64)&v69,
                  (float *)&v67,
                  DisplayId::None,
                  v56,
                  (__int64)v57);
          v8 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xBEu, 0LL);
LABEL_55:
            Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v57);
            return v8;
          }
          v38 = v57[0];
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v57[0] + 16LL))(v57[0], 0LL);
          CMILMatrix::InferAffineMatrix((CMILMatrix *)&v62);
          v39 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v62, 0, 1);
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xC6u, 0LL);
            Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v57);
          }
          else
          {
            v41 = CShapeTree::DrawShapes(this, a2, a3);
            if ( v41 >= 0 )
            {
              CDrawingContext::PopTransformInternal(a2, 1);
              v43 = CDrawingContext::PopLayer(a2);
              v8 = v43;
              if ( v43 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0xCFu, 0LL);
              }
              else
              {
                CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v78, a2);
                v63 = 0;
                v62 = 0LL;
                v65 = 257;
                v66 = 0;
                CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v80);
                *(_QWORD *)&v69 = __PAIR64__(LODWORD(v10), LODWORD(v21));
                *((_QWORD *)&v69 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v24));
                v60 = 0LL;
                v71 = (__int64)&v60;
                v72 = 0LL;
                v73 = 1;
                if ( v38 )
                  v45 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v38 + 8) + 16LL) + v38 + 8);
                else
                  v45 = 0LL;
                v46 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v67, v45);
                v58 = 257;
                v59 = 1;
                v8 = CSurfaceDrawListBrush::CreateWithContentRect(v46, &v58, (float *)&v69, (__int64 *)&v72);
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v67 + 8);
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v67);
                if ( v73 )
                {
                  v47 = *(CSurfaceDrawListBrush **)v71;
                  *(_QWORD *)v71 = v72;
                  if ( v47 )
                    CSurfaceDrawListBrush::`vector deleting destructor'(v47, 1);
                }
                if ( (v8 & 0x80000000) != 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v47, 0LL, 0, v8, 0xDCu, 0LL);
                }
                else
                {
                  MILMatrix3x2::InferAffineMatrix((__int64)&v69, &v74, (float *)&v68);
                  v48 = v60;
                  *(_OWORD *)((char *)v60 + 8) = v69;
                  *((_QWORD *)v48 + 3) = v70;
                  *(_QWORD *)&v67 = v60;
                  v60 = 0LL;
                  CBrushDrawListGenerator::AttachInput((__int64)v78, 0, (__int64 *)&v67);
                  if ( (_QWORD)v67 )
                    std::default_delete<CDrawListBrush>::operator()(v49, (__int64 (__fastcall ***)(_QWORD, __int64))v67);
                  v79 = v19 != 0 ? 256 : 64;
                  DrawList = CBrushDrawListGenerator::GenerateDrawList(
                               (CBrushDrawListGenerator *)v78,
                               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v62,
                               (struct CDrawListEntryBuilder *)v80,
                               v50);
                  v8 = DrawList;
                  if ( DrawList < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, DrawList, 0xEEu, 0LL);
                  else
                    CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v80);
                }
                if ( v60 )
                  CSurfaceDrawListBrush::`vector deleting destructor'(v60, 1);
                CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v80);
                CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v78);
              }
              goto LABEL_55;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xC9u, 0LL);
            Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v57);
            CDrawingContext::PopTransformInternal(a2, 1);
          }
          v53 = CDrawingContext::PopLayer(a2);
          v8 = v53;
          if ( v53 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0xFBu, 0LL);
        }
      }
    }
  }
  return v8;
}
