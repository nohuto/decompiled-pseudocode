__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v1; // rsi
  int v3; // eax
  unsigned int v4; // ecx
  _DWORD *v5; // r12
  _DWORD *v6; // r15
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  CGeometry *v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdi
  CGeometryOnlyDrawListBrush *v19; // rcx
  __int64 (__fastcall *v20)(__int64, _QWORD, _DWORD *, CGeometryOnlyDrawListBrush **); // rsi
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  CGeometryOnlyDrawListBrush *v25; // rcx
  CGeometry *v26; // rcx
  int ShapeData; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // r13
  int v32; // eax
  float v33; // xmm1_4
  struct CShape *v34; // rsi
  struct ID2D1Brush *v35; // rdi
  int v36; // eax
  unsigned int v37; // ecx
  CGeometry *v38; // rcx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rcx
  int v44; // eax
  float v45; // xmm1_4
  float v46; // xmm3_4
  int v47; // eax
  unsigned int v48; // ecx
  float v49; // xmm6_4
  float v50; // xmm7_4
  struct CDrawingContext *v51; // rdx
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // ecx
  CGeometryOnlyDrawListBrush *v56; // rcx
  int v57; // edi
  __int64 v58; // rcx
  int v59; // xmm1_4
  CGeometryOnlyDrawListBrush *v60; // rax
  __int64 v61; // xmm1_8
  int DrawList; // eax
  unsigned int v63; // ecx
  int v64; // eax
  unsigned int v65; // ecx
  CGeometry *v66; // rcx
  int v67; // eax
  unsigned int v68; // ecx
  int v69; // eax
  unsigned int v70; // ecx
  __int64 v71; // rsi
  __int64 (__fastcall *v72)(__int64, _QWORD, _DWORD *, CGeometryOnlyDrawListBrush **); // rdi
  int v73; // eax
  unsigned int v74; // ecx
  int v75; // eax
  unsigned int v76; // ecx
  CGeometryOnlyDrawListBrush *v77; // rcx
  int v78; // edi
  struct CShape **v79; // rcx
  struct CShape **v80; // rcx
  struct ID2D1StrokeStyle1 *v81; // [rsp+20h] [rbp-E0h]
  CGeometryOnlyDrawListBrush *v82; // [rsp+30h] [rbp-D0h] BYREF
  CDrawListCache *v83; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F *v84; // [rsp+40h] [rbp-C0h]
  CGeometryOnlyDrawListBrush *v85; // [rsp+48h] [rbp-B8h] BYREF
  struct CShape *v86; // [rsp+50h] [rbp-B0h] BYREF
  char v87; // [rsp+58h] [rbp-A8h]
  struct CShape *v88; // [rsp+60h] [rbp-A0h] BYREF
  char v89; // [rsp+68h] [rbp-98h]
  struct CShape *v90; // [rsp+70h] [rbp-90h] BYREF
  char v91; // [rsp+78h] [rbp-88h]
  struct CShape *v92; // [rsp+80h] [rbp-80h] BYREF
  char v93; // [rsp+88h] [rbp-78h]
  struct D2D_SIZE_F v94; // [rsp+90h] [rbp-70h] BYREF
  CGeometryOnlyDrawListBrush *v95; // [rsp+98h] [rbp-68h] BYREF
  __int128 v96; // [rsp+A0h] [rbp-60h]
  _DWORD *v97; // [rsp+B0h] [rbp-50h]
  __int128 v98; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-38h]
  _QWORD v100[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v101; // [rsp+E0h] [rbp-20h]
  int v102; // [rsp+12Ch] [rbp+2Ch]
  char v103; // [rsp+130h] [rbp+30h]
  struct CGeometryOnlyDrawListBrush *v104[2]; // [rsp+140h] [rbp+40h] BYREF
  int v105; // [rsp+150h] [rbp+50h]
  int v106; // [rsp+154h] [rbp+54h]
  __int128 v107; // [rsp+158h] [rbp+58h] BYREF
  struct _D3DCOLORVALUE v108; // [rsp+168h] [rbp+68h] BYREF
  struct D2D_MATRIX_3X2_F v109; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v110[40]; // [rsp+190h] [rbp+90h] BYREF
  int v111; // [rsp+1D8h] [rbp+D8h]
  _BYTE v112[4480]; // [rsp+1E0h] [rbp+E0h] BYREF

  v1 = &v109;
  v84 = &v109;
  *(_QWORD *)&v109.m[2][0] = 0LL;
  *((_BYTE *)this + 528) = 0;
  *((_BYTE *)this + 530) = 0;
  *(_OWORD *)&v109.m11 = *(_OWORD *)&_xmm;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v112);
  v83 = 0LL;
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v83);
  v3 = CDrawListCache::InternalCreate(1, &v83);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x39u, 0LL);
    goto LABEL_7;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 63);
  v97 = (_DWORD *)*((_QWORD *)this + 64);
  if ( v5 == v97 )
    goto LABEL_7;
  v6 = v5 + 10;
  while ( 1 )
  {
    switch ( *v5 )
    {
      case 1:
        v1 = (struct D2D_MATRIX_3X2_F *)(v6 - 8);
        *((_BYTE *)this + 528) = 1;
        v84 = (struct D2D_MATRIX_3X2_F *)(v6 - 8);
        goto LABEL_6;
      case 2:
        v26 = (CGeometry *)*((_QWORD *)v6 - 4);
        v88 = 0LL;
        v89 = 0;
        ShapeData = CGeometry::GetShapeData(v26, 0LL, (struct CShapePtr *)&v88);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, ShapeData, 0x4Bu, 0LL);
        }
        else
        {
          v29 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x50u, 0LL);
          }
          else
          {
            v31 = *((_QWORD *)this + 41);
            v107 = *(_OWORD *)(v6 - 6);
            v32 = *(_DWORD *)(v31 + 3248);
            if ( v32 )
              v33 = *(float *)(*(_QWORD *)(v31 + 3264) + 4LL * (unsigned int)(v32 - 1));
            else
              v33 = *(float *)&FLOAT_1_0;
            v34 = v88;
            *((float *)&v107 + 3) = *((float *)&v107 + 3) * v33;
            v35 = *(struct ID2D1Brush **)(*(_QWORD *)(v31 + 40) + 328LL);
            (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v35 + 64LL))(v35, &v107);
            v36 = CDrawingContext::FillShapeWithBrush((CDrawingContext *)v31, v34, v35);
            if ( v36 >= 0 )
            {
              if ( v89 && v88 )
                (**(void (__fastcall ***)(struct CShape *, __int64))v88)(v88, 1LL);
              v88 = 0LL;
              v89 = 0;
              goto LABEL_29;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x56u, 0LL);
          }
        }
        v80 = &v88;
LABEL_106:
        CShapePtr::Release((CShapePtr *)v80);
        goto LABEL_7;
      case 3:
        v13 = (CGeometry *)*((_QWORD *)v6 - 4);
        v82 = 0LL;
        v86 = 0LL;
        v87 = 0;
        v14 = CGeometry::GetShapeData(v13, 0LL, (struct CShapePtr *)&v86);
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x62u, 0LL);
        }
        else
        {
          v16 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x67u, 0LL);
          }
          else
          {
            v18 = *((_QWORD *)v6 - 1);
            v19 = v82;
            v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v18 + 336LL);
            if ( v82 )
            {
              v82 = 0LL;
              (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v19 + 16LL))(v19);
            }
            v21 = v20(v18, *((_QWORD *)this + 41), v6 - 6, &v82);
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x6Bu, 0LL);
            }
            else
            {
              (*(void (**)(void))(*(_QWORD *)v82 + 32LL))();
              v23 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 41), v86, v82);
              if ( v23 >= 0 )
              {
                if ( v87 && v86 )
                  (**(void (__fastcall ***)(struct CShape *, __int64))v86)(v86, 1LL);
                v25 = v82;
                v86 = 0LL;
                v87 = 0;
                if ( v82 )
                {
                  v82 = 0LL;
                  (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v25 + 16LL))(v25);
                }
LABEL_29:
                v1 = v84;
                goto LABEL_6;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x6Fu, 0LL);
            }
          }
        }
        v79 = &v86;
        goto LABEL_101;
    }
    if ( *v5 != 4 )
    {
      if ( *v5 != 5 )
      {
        if ( *v5 != 6 )
          goto LABEL_6;
        v66 = (CGeometry *)*((_QWORD *)v6 - 4);
        v82 = 0LL;
        v90 = 0LL;
        v91 = 0;
        v67 = CGeometry::GetShapeData(v66, 0LL, (struct CShapePtr *)&v90);
        if ( v67 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0xD5u, 0LL);
LABEL_82:
          v79 = &v90;
LABEL_101:
          CShapePtr::Release((CShapePtr *)v79);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v82);
          goto LABEL_7;
        }
        v69 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
        if ( v69 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0xDAu, 0LL);
          goto LABEL_82;
        }
        v71 = *((_QWORD *)v6 - 1);
        v72 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v71 + 336LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v82);
        v73 = v72(v71, *((_QWORD *)this + 41), v6 - 6, &v82);
        if ( v73 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0xDEu, 0LL);
          goto LABEL_82;
        }
        (*(void (**)(void))(*(_QWORD *)v82 + 32LL))();
        v75 = CDrawingContext::StrokeShapeWithBrush(
                *((CDrawingContext **)this + 41),
                v90,
                v82,
                *(float *)v6,
                *((struct ID2D1StrokeStyle1 **)v6 + 1));
        if ( v75 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v75, 0xE4u, 0LL);
          goto LABEL_82;
        }
        CShapePtr::Release((CShapePtr *)&v90);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v82);
        goto LABEL_29;
      }
      v38 = (CGeometry *)*((_QWORD *)v6 - 4);
      v92 = 0LL;
      v93 = 0;
      v39 = CGeometry::GetShapeData(v38, 0LL, (struct CShapePtr *)&v92);
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xBBu, 0LL);
      }
      else
      {
        v41 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xC0u, 0LL);
        }
        else
        {
          v43 = *((_QWORD *)this + 41);
          *(struct _D3DCOLORVALUE *)&v108.r = *(struct _D3DCOLORVALUE *)(v6 - 6);
          v44 = *(_DWORD *)(v43 + 3248);
          if ( v44 )
            v45 = *(float *)(*(_QWORD *)(v43 + 3264) + 4LL * (unsigned int)(v44 - 1));
          else
            v45 = *(float *)&FLOAT_1_0;
          v46 = *((float *)v6 - 2);
          v81 = *(struct ID2D1StrokeStyle1 **)v6;
          v108.a = v108.a * v45;
          v47 = CDrawingContext::StrokeShapeWithColor((CDrawingContext *)v43, v92, &v108, v46, v81);
          if ( v47 >= 0 )
          {
            CShapePtr::Release((CShapePtr *)&v92);
            goto LABEL_6;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0xC9u, 0LL);
        }
      }
      v80 = &v92;
      goto LABEL_106;
    }
    v49 = *((float *)v6 - 6) - *((float *)v6 - 8);
    v50 = *((float *)v6 - 5) - *((float *)v6 - 7);
    v51 = (struct CDrawingContext *)*((_QWORD *)this + 41);
    v82 = 0LL;
    v94.width = v49;
    v94.height = v50;
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v110, v51, &v94);
    v52 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)v6 - 2) + 312LL))(*((_QWORD *)v6 - 2), v110);
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x80u, 0LL);
      goto LABEL_94;
    }
    v54 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, 0LL);
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x82u, 0LL);
      goto LABEL_94;
    }
    if ( !v111 )
      break;
LABEL_58:
    v59 = *(v6 - 7);
    *(_OWORD *)v104 = *(_OWORD *)&_xmm;
    v105 = *(v6 - 8);
    v106 = v59;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v98,
      (const struct D2D1::Matrix3x2F *)v104,
      (const struct D2D1::Matrix3x2F *)v1);
    v61 = v99;
    *(_OWORD *)((char *)v60 + 8) = v98;
    *((_QWORD *)v60 + 3) = v61;
    if ( *((_BYTE *)v60 + 52) )
    {
      v104[1] = 0LL;
      v104[0] = (struct CGeometryOnlyDrawListBrush *)&v82;
      LOBYTE(v105) = 1;
      v78 = CGeometryOnlyDrawListBrush::Create(&v104[1]);
      if ( (_BYTE)v105 )
      {
        v77 = *(CGeometryOnlyDrawListBrush **)v104[0];
        *(_QWORD *)v104[0] = v104[1];
        if ( v77 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v77, 1u);
      }
      if ( v78 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v77, 0LL, 0, v78, 0x9Du, 0LL);
        goto LABEL_94;
      }
      v60 = v82;
    }
    *(_QWORD *)&v96 = 0LL;
    *((_BYTE *)v60 + 52) = 1;
    *((_DWORD *)v60 + 12) = 50529027;
    *((_QWORD *)&v96 + 1) = __PAIR64__(LODWORD(v50), LODWORD(v49));
    v100[1] = 0LL;
    v101 = 0;
    *((_OWORD *)v60 + 2) = v96;
    v100[0] = v82;
    v102 = 257;
    v103 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v110,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v100,
                 (struct CDrawListEntryBuilder *)v112);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, DrawList, 0xACu, 0LL);
      goto LABEL_94;
    }
    CDrawListCache::Update(v83, *((struct CDrawingContext **)this + 41), (struct CDrawListEntryBuilder *)v112);
    v64 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 41), v83);
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0xAFu, 0LL);
      goto LABEL_94;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v112);
    CDrawListCache::Invalidate(v83);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v110);
    if ( v82 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v82, 1u);
LABEL_6:
    v5 += 14;
    v6 += 14;
    if ( v5 == v97 )
      goto LABEL_7;
  }
  v85 = 0LL;
  v104[0] = (struct CGeometryOnlyDrawListBrush *)&v85;
  v104[1] = 0LL;
  LOBYTE(v105) = 1;
  v57 = CGeometryOnlyDrawListBrush::Create(&v104[1]);
  if ( (_BYTE)v105 )
  {
    v56 = *(CGeometryOnlyDrawListBrush **)v104[0];
    *(_QWORD *)v104[0] = v104[1];
    if ( v56 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v56, 1u);
  }
  if ( v57 >= 0 )
  {
    v95 = v85;
    v85 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)v110, 0, (__int64 *)&v95);
    if ( v95 )
      std::default_delete<CDrawListBrush>::operator()(v58, (__int64 (__fastcall ***)(_QWORD, __int64))v95);
    if ( v85 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v85, 1u);
    goto LABEL_58;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v56, 0LL, 0, v57, 0x88u, 0LL);
  if ( v85 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v85, 1u);
LABEL_94:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v110);
  if ( v82 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v82, 1u);
LABEL_7:
  if ( *((_BYTE *)this + 530) )
  {
    v7 = *((_QWORD *)this + 41);
    v8 = *(_DWORD *)(v7 + 368);
    if ( v8 )
    {
      v9 = (unsigned int)(v8 - 1);
      *(_DWORD *)(v7 + 368) = v9;
      v107 = *(_OWORD *)(*(_QWORD *)(v7 + 384) + 16 * v9);
    }
    if ( *((_QWORD *)&v107 + 1) )
      CWatermarkStack<unsigned int,64,2,10>::Pop(v7 + 464);
    v10 = *(_DWORD *)(v7 + 400);
    if ( v10 )
      *(_DWORD *)(v7 + 400) = v10 - 1;
    v11 = *(_DWORD *)(v7 + 432);
    if ( v11 )
      *(_DWORD *)(v7 + 432) = v11 - 1;
    *((_BYTE *)this + 530) = 0;
  }
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v83);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v112);
  return 0LL;
}
