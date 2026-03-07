__int64 __fastcall CRadialGradientBrush::GetBrushParameters(
        CRadialGradientEffect **this,
        struct CBrushDrawListGenerator *a2)
{
  int CurrentSurface; // eax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 *v7; // rax
  bool v8; // zf
  float *v9; // rdx
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  CRadialGradientEffect *v17; // rcx
  unsigned int v18; // ecx
  float *v19; // rax
  float v20; // xmm1_4
  struct D2D_SIZE_U Size; // rax
  float v22; // xmm6_4
  float v23; // xmm7_4
  struct D2D_SIZE_U v24; // rax
  CRadialGradientEffect *v25; // rcx
  float v26; // xmm3_4
  FLOAT v27; // xmm1_4
  CSurfaceDrawListBrush *v28; // rcx
  CSurfaceDrawListBrush *v29; // rax
  __int64 v30; // rcx
  unsigned int v32; // [rsp+28h] [rbp-99h]
  __int16 v33; // [rsp+38h] [rbp-89h] BYREF
  char v34; // [rsp+3Ah] [rbp-87h]
  struct D2D_POINT_2F v35; // [rsp+48h] [rbp-79h] BYREF
  struct IBitmapResource *v36; // [rsp+50h] [rbp-71h] BYREF
  CSurfaceDrawListBrush *v37; // [rsp+58h] [rbp-69h] BYREF
  __int128 v38; // [rsp+60h] [rbp-61h] BYREF
  char v39; // [rsp+70h] [rbp-51h]
  CSurfaceDrawListBrush **v40; // [rsp+78h] [rbp-49h] BYREF
  CSurfaceDrawListBrush *v41; // [rsp+80h] [rbp-41h] BYREF
  float v42; // [rsp+88h] [rbp-39h]
  float v43; // [rsp+8Ch] [rbp-35h]
  __int128 v44; // [rsp+90h] [rbp-31h] BYREF
  float v45; // [rsp+A0h] [rbp-21h]
  float v46; // [rsp+A4h] [rbp-1Dh]
  float v47; // [rsp+A8h] [rbp-19h]
  float v48; // [rsp+ACh] [rbp-15h]
  int v49; // [rsp+B0h] [rbp-11h]
  int v50; // [rsp+B4h] [rbp-Dh]
  float v51; // [rsp+B8h] [rbp-9h] BYREF
  float v52; // [rsp+BCh] [rbp-5h]
  float v53; // [rsp+C0h] [rbp-1h]
  float v54; // [rsp+C4h] [rbp+3h]
  float v55; // [rsp+C8h] [rbp+7h]
  float v56; // [rsp+CCh] [rbp+Bh]
  int v57; // [rsp+D0h] [rbp+Fh]
  int v58; // [rsp+D4h] [rbp+13h]
  int v59; // [rsp+D8h] [rbp+17h]

  v37 = 0LL;
  v36 = 0LL;
  v39 = 0;
  v38 = 0LL;
  v44 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v36);
  CurrentSurface = CGradientBrush::GetCurrentSurface((CGradientBrush *)this, *(_QWORD *)a2, &v36, (__int64)&v44);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v32 = 82;
    goto LABEL_22;
  }
  v7 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v40, v36);
  CDrawListBitmap::operator=((__int64 *)&v38, v7);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v41);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v40);
  CBrushDrawListGenerator::Reset(a2);
  v8 = *((_DWORD *)this + 39) == 1;
  v9 = (float *)((char *)a2 + 8);
  v10 = *((float *)this + 60);
  v11 = *((float *)this + 61);
  v12 = v10 + *((float *)this + 62);
  v51 = v10;
  v13 = v11 + *((float *)this + 63);
  v52 = v11;
  v54 = v11;
  v53 = v12;
  v55 = v10;
  v56 = v13;
  if ( v8 )
  {
    v14 = v10 * *v9;
    v15 = v12 * *v9;
    v16 = *((float *)a2 + 3) * v13;
    v52 = *((float *)a2 + 3) * v11;
    v54 = v52;
    v51 = v14;
    v53 = v15;
    v55 = v14;
    v56 = v16;
  }
  v17 = this[27];
  if ( v17 )
  {
    (*(void (__fastcall **)(CRadialGradientEffect *, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v17 + 208LL))(
      v17,
      v9,
      &v40);
    v18 = 0;
    v19 = &v51;
    do
    {
      ++v18;
      v20 = (float)(*((float *)&v41 + 1) * v19[1]) + (float)(*((float *)&v40 + 1) * *v19);
      *v19 = (float)((float)(*(float *)&v41 * v19[1]) + (float)(*(float *)&v40 * *v19)) + v42;
      v19[1] = v20 + v43;
      v19 += 2;
    }
    while ( v18 < 3 );
  }
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform((__int64)this, (__int64)&v51, (__int64)&v44);
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v32 = 122;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1803B55A8, 2u, CurrentSurface, v32, 0LL);
    goto LABEL_23;
  }
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)&v38, &v35);
  v22 = *((float *)&v44 + 1) + 0.5;
  v23 = 0.5 / (float)*(int *)Size.width;
  v24 = CDrawListBitmap::GetSize((CDrawListBitmap *)&v38, &v35);
  CRadialGradientEffect::SetCommonShaderConstants(this[29], v23, v22 / (float)*(int *)(*(_QWORD *)&v24 + 4LL));
  v25 = this[29];
  if ( !*((_BYTE *)v25 + 60) )
  {
    v26 = *((float *)&v44 + 2);
    if ( *((_BYTE *)this + 152) == 1 )
      v26 = *((float *)&v44 + 2) - 1.0;
    v27 = (float)(*((float *)this + 65) / *((float *)this + 63)) * (float)(v26 / *((float *)&v44 + 2));
    v35.x = (float)(*((float *)this + 64) / *((float *)this + 62)) * (float)(v26 / *((float *)&v44 + 2));
    v35.y = v27;
    CRadialGradientEffect::SetNonCenteredShaderConstants(v25, &v35, *((float *)&v44 + 2), v26);
  }
  v41 = 0LL;
  v53 = 0.0;
  v56 = 0.0;
  v51 = v45;
  v52 = v46;
  v54 = v47;
  v55 = v48;
  v57 = v49;
  v58 = v50;
  v40 = &v37;
  LOBYTE(v42) = 1;
  v59 = 1065353216;
  LOBYTE(v33) = InterpolationMode::FromD2D1InterpolationMode(1);
  HIBYTE(v33) = *((_BYTE *)this + 152);
  v34 = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform((struct CSurfaceDrawListBrush *)&v38, &v33, &v51, &v41);
  if ( LOBYTE(v42) )
  {
    v28 = *v40;
    *v40 = v41;
    if ( v28 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v28, &dword_1803B55A8, 2u, v6, 0xBBu, 0LL);
LABEL_23:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_24;
  }
  v29 = v37;
  v37 = 0LL;
  v35 = (struct D2D_POINT_2F)v29;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v35);
  if ( v35 )
    std::default_delete<CDrawListBrush>::operator()(v30, *(__int64 (__fastcall ****)(_QWORD, __int64))&v35);
  v6 = 0;
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v38 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v38);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v36);
  if ( v37 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v37, 1);
  return (unsigned int)v6;
}
