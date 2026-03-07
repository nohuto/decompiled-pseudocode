__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v8; // r15
  int v9; // edi
  unsigned int v10; // eax
  CSurfaceDrawListBrush *v11; // rcx
  int v12; // ebx
  int DrawList; // eax
  unsigned int v14; // ecx
  CGeometryOnlyDrawListBrush *v16; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CGeometryOnlyDrawListBrush *v19; // rax
  __int128 v20; // xmm0
  CGeometryOnlyDrawListBrush *v21; // rcx
  CSurfaceDrawListBrush *v22; // rax
  unsigned __int64 v23; // xmm1_8
  _BYTE v24[16]; // [rsp+30h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v25; // [rsp+40h] [rbp-C0h] BYREF
  struct CGeometryOnlyDrawListBrush *v26[2]; // [rsp+48h] [rbp-B8h] BYREF
  char v27; // [rsp+58h] [rbp-A8h]
  CSurfaceDrawListBrush *v28; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v30[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[6]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp-50h]
  unsigned int v33; // [rsp+B4h] [rbp-4Ch]
  int v34; // [rsp+C0h] [rbp-40h]
  _QWORD v35[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+12Ch] [rbp+2Ch]
  char v38; // [rsp+130h] [rbp+30h]
  __int128 v39; // [rsp+140h] [rbp+40h] BYREF
  char v40; // [rsp+150h] [rbp+50h]
  __int128 v41; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v42[16]; // [rsp+170h] [rbp+70h] BYREF
  int v43; // [rsp+180h] [rbp+80h]
  int v44; // [rsp+184h] [rbp+84h]
  int v45; // [rsp+188h] [rbp+88h]
  int v46; // [rsp+18Ch] [rbp+8Ch]
  int v47; // [rsp+190h] [rbp+90h]
  _BYTE v48[4480]; // [rsp+1C0h] [rbp+C0h] BYREF

  v34 = 0;
  v41 = 0LL;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a3, (CMILMatrix *)v31);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v41) )
  {
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v42, a2);
    v25 = 0LL;
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a3) )
    {
      v26[1] = 0LL;
      v26[0] = (struct CGeometryOnlyDrawListBrush *)&v25;
      v27 = 1;
      v12 = CGeometryOnlyDrawListBrush::Create(&v26[1]);
      if ( v27 )
      {
        v16 = *(CGeometryOnlyDrawListBrush **)v26[0];
        *(_QWORD *)v26[0] = v26[1];
        if ( v16 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v16, 1u);
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v12, 0x1C9u, 0LL);
        v21 = v25;
        if ( !v25 )
        {
LABEL_29:
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v42);
          return (unsigned int)v12;
        }
LABEL_28:
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v21, 1u);
        goto LABEL_29;
      }
      width = a3->width;
      height = a3->height;
      v19 = v25;
      v26[0] = 0LL;
      v26[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      v20 = *(_OWORD *)v26;
      *((_BYTE *)v25 + 52) = 1;
      *((_DWORD *)v19 + 12) = 50529027;
      *((_OWORD *)v19 + 2) = v20;
    }
    CDrawListBitmap::CDrawListBitmap(
      (CDrawListBitmap *)v29,
      (struct IBitmapResource *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v29) && *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = (int)FLOAT_1_0;
      v43 = 4;
    }
    else
    {
      v9 = 512;
      if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v29) )
        v9 = 514;
      v10 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a2 + 83));
      v24[0] = InterpolationMode::FromD2D1InterpolationMode(v10);
      v24[1] = 1;
      *(_QWORD *)&v39 = &v28;
      v28 = 0LL;
      *(_OWORD *)v26 = v41;
      *((_QWORD *)&v39 + 1) = 0LL;
      v40 = 1;
      v24[2] = 1;
      v12 = CSurfaceDrawListBrush::CreateWithContentRect(v29, v24, v26, (char *)&v39 + 8);
      if ( v40 )
      {
        v11 = *(CSurfaceDrawListBrush **)v39;
        *(_QWORD *)v39 = *((_QWORD *)&v39 + 1);
        if ( v11 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1u);
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v12, 0x1EBu, 0LL);
        if ( v28 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
        goto LABEL_35;
      }
      if ( v8 )
      {
        v22 = v28;
        *(_QWORD *)&v39 = v31[0];
        *((_QWORD *)&v39 + 1) = v31[2];
        v23 = _mm_unpacklo_ps((__m128)v32, (__m128)v33).m128_u64[0];
        *(_OWORD *)((char *)v28 + 8) = v39;
        *((_QWORD *)v22 + 3) = v23;
      }
      v26[0] = v28;
      v28 = 0LL;
      CBrushDrawListGenerator::AttachInput(v42, 0LL, v26);
      if ( v26[0] )
        std::default_delete<CDrawListBrush>::operator()();
      v43 = v9;
      if ( v28 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
    }
    v35[0] = v25;
    v35[1] = 0LL;
    v36 = 0;
    v37 = 257;
    v38 = 0;
    CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v48);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v42,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v35,
                 (struct CDrawListEntryBuilder *)v48);
    v12 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v48);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v48);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v30);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v29);
      if ( v25 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v25, 1u);
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v42);
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, DrawList, 0x204u, 0LL);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v48);
LABEL_35:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v30);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v29);
    v21 = v25;
    if ( !v25 )
      goto LABEL_29;
    goto LABEL_28;
  }
  return 0;
}
