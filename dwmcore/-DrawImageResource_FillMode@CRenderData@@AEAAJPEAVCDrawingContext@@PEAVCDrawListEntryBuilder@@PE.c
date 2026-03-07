__int64 __fastcall CRenderData::DrawImageResource_FillMode(
        CRenderData *this,
        const struct CVisualTree **a2,
        struct CDrawListEntryBuilder *a3,
        struct CImageSource *a4,
        const struct D2D_RECT_F *a5,
        const struct D2D_RECT_F *a6,
        float a7)
{
  int v7; // ebx
  struct IBitmapResource *v12; // rdx
  int v13; // esi
  struct D2D_MATRIX_3X2_F *v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  char v20; // al
  CSurfaceDrawListBrush *v21; // rcx
  CSurfaceDrawListBrush *v22; // rax
  __int64 v23; // xmm1_8
  __int64 v24; // rcx
  __int64 v25; // r9
  int DrawList; // eax
  unsigned int v27; // ecx
  CSurfaceDrawListBrush *v29; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v30; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v31[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_RECT_F v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+DCh] [rbp-24h]
  char v38; // [rsp+E0h] [rbp-20h]
  _BYTE v39[64]; // [rsp+F0h] [rbp-10h] BYREF
  int v40; // [rsp+130h] [rbp+30h]
  struct D2D_RECT_F v41; // [rsp+140h] [rbp+40h] BYREF
  struct D2D_RECT_F v42; // [rsp+150h] [rbp+50h] BYREF
  char v43; // [rsp+160h] [rbp+60h]
  _BYTE v44[16]; // [rsp+170h] [rbp+70h] BYREF
  int v45; // [rsp+180h] [rbp+80h]
  int v46; // [rsp+184h] [rbp+84h]
  int v47; // [rsp+188h] [rbp+88h]
  int v48; // [rsp+18Ch] [rbp+8Ch]
  float v49; // [rsp+190h] [rbp+90h]

  v7 = 0;
  if ( a4 )
    v12 = (struct CImageSource *)((char *)a4 + *(int *)(*((_QWORD *)a4 + 8) + 8LL) + 64);
  else
    v12 = 0LL;
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v31, v12);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v44, (struct CDrawingContext *)a2);
  v37 = 257;
  v36 = 0;
  v35 = 0LL;
  v38 = 0;
  if ( v32 )
  {
    if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v31) && *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = *(float *)&FLOAT_1_0;
      v45 = 4;
    }
    else
    {
      v49 = a7;
      v13 = 512;
      v46 = 1065353216;
      v47 = 1065353216;
      v48 = 1065353216;
      if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v31) )
        v13 = 514;
      if ( (*(unsigned __int8 (__fastcall **)(struct CImageSource *, __int64))(*(_QWORD *)a4 + 56LL))(a4, 18LL)
        && CCachedVisualImage::IsSameVisualTree(a4, a2[1007]) )
      {
        v13 |= 0x100u;
      }
      v45 = v13;
      if ( a5 && a6 )
        goto LABEL_30;
      v15 = *((_QWORD *)a4 + 8);
      v40 = 0;
      v41 = 0LL;
      v16 = (__int64 *)((char *)a4 + *(int *)(v15 + 8) + 64);
      v17 = *v16;
      v29 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64 *, CSurfaceDrawListBrush **))(v17 + 64))(v16, &v29);
      v7 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x458u, 0LL);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
        goto LABEL_28;
      }
      v20 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _BYTE *, struct D2D_RECT_F *))(*(_QWORD *)v29 + 8LL))(
              v29,
              v39,
              &v41);
      v30 = v41;
      if ( v20 )
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v39, (struct MilRectF *)&v41);
      else
        v42 = v41;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
      if ( a5 )
LABEL_30:
        v30 = *a5;
      if ( a6 )
        v42 = *a6;
      if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v30, &v42, &v33, v14) )
      {
        v29 = 0LL;
        *(_QWORD *)&v42.left = &v29;
        LOWORD(v41.left) = SamplerMode::k_ClampClampLinear;
        BYTE2(v41.left) = 1;
        *(_QWORD *)&v42.right = 0LL;
        v43 = 1;
        v7 = CSurfaceDrawListBrush::CreateWithContentRect(
               (CDrawListBitmap *)v31,
               (__int16 *)&v41,
               &v30.left,
               (__int64 *)&v42.right);
        if ( v43 )
        {
          v21 = **(CSurfaceDrawListBrush ***)&v42.left;
          **(_QWORD **)&v42.left = *(_QWORD *)&v42.right;
          if ( v21 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1u);
        }
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, 0LL, 0, v7, 0x480u, 0LL);
        }
        else
        {
          v22 = v29;
          v23 = v34;
          *(struct D2D_RECT_F *)((char *)v29 + 8) = v33;
          *((_QWORD *)v22 + 3) = v23;
          *(_QWORD *)&v41.left = v29;
          v29 = 0LL;
          CBrushDrawListGenerator::AttachInput((__int64)v44, 0, (__int64 *)&v41);
          if ( *(_QWORD *)&v41.left )
            std::default_delete<CDrawListBrush>::operator()(v24, *(__int64 (__fastcall ****)(_QWORD, __int64))&v41.left);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)v44,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v35,
                       a3,
                       v25);
          v7 = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, DrawList, 0x485u, 0LL);
        }
        if ( v29 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v29, 1u);
      }
    }
  }
LABEL_28:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v44);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v31);
  return (unsigned int)v7;
}
