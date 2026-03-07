__int64 __fastcall CBitmapResourceRenderStrategy::GetBrushParametersWorker(
        const struct CSurfaceBrush *a1,
        struct IBitmapResource *a2,
        struct CContent::LayoutData *a3,
        int a4,
        struct CBrushDrawListGenerator *a5)
{
  int v9; // esi
  int v10; // r12d
  CSurfaceDrawListBrush *v11; // rcx
  CSurfaceDrawListBrush *v12; // rax
  CSurfaceDrawListBrush *v13; // r8
  CSurfaceDrawListBrush **v14; // rax
  CSurfaceDrawListBrush *v15; // rcx
  CSurfaceDrawListBrush *v16; // rbx
  CSurfaceDrawListBrush *v17; // rdx
  int v18; // eax
  CSurfaceDrawListBrush *v20; // rax
  unsigned __int64 v21; // xmm0_8
  char v22; // [rsp+30h] [rbp-50h] BYREF
  __int16 v23; // [rsp+31h] [rbp-4Fh]
  CSurfaceDrawListBrush *v24; // [rsp+40h] [rbp-40h] BYREF
  char v25; // [rsp+48h] [rbp-38h] BYREF
  CSurfaceDrawListBrush **v26; // [rsp+50h] [rbp-30h]
  CSurfaceDrawListBrush *v27; // [rsp+58h] [rbp-28h] BYREF
  char v28; // [rsp+60h] [rbp-20h]
  char v29[8]; // [rsp+68h] [rbp-18h] BYREF
  char v30[16]; // [rsp+70h] [rbp-10h] BYREF

  v9 = 0;
  CBrushDrawListGenerator::Reset(a5);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v29, a2);
  v10 = 0;
  if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v29) )
    v10 = 2;
  if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)v29) && *(_BYTE *)(*((_QWORD *)a1 + 2) + 1274LL) )
  {
    *(_OWORD *)((char *)a5 + 20) = _xmm;
LABEL_19:
    *((_DWORD *)a5 + 4) = v10;
    goto LABEL_20;
  }
  v24 = 0LL;
  v26 = &v24;
  v27 = 0LL;
  v28 = 1;
  v22 = InterpolationMode::FromD2D1InterpolationMode(a4);
  v23 = 257;
  v9 = CSurfaceDrawListBrush::CreateWithContentRect(
         (CDrawListBitmap *)v29,
         (__int16 *)&v22,
         (float *)a3 + 6,
         (__int64 *)&v27);
  if ( v28 )
  {
    v11 = *v26;
    *v26 = v27;
    if ( v11 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1u);
  }
  if ( v9 >= 0 )
  {
    v12 = v24;
    *(_OWORD *)((char *)v24 + 8) = *(_OWORD *)a3;
    *((_QWORD *)v12 + 3) = *((_QWORD *)a3 + 2);
    if ( (*(unsigned __int8 (__fastcall **)(const struct CSurfaceBrush *))(*(_QWORD *)a1 + 304LL))(a1) )
    {
      v20 = v24;
      v21 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 6), (__m128)*((unsigned int *)a3 + 7)).m128_u64[0];
      *((_BYTE *)v24 + 148) = 1;
      *((_QWORD *)v20 + 17) = v21;
    }
    v13 = v24;
    v14 = (CSurfaceDrawListBrush **)((char *)a5 + 40);
    v15 = 0LL;
    v24 = 0LL;
    v16 = v13;
    if ( (char *)a5 + 40 != &v25 )
    {
      v17 = *v14;
      v16 = 0LL;
      *v14 = v13;
      if ( v17 )
      {
        std::default_delete<CDrawListBrush>::operator()(0LL, (__int64 (__fastcall ***)(_QWORD, __int64))v17);
        v15 = v24;
      }
    }
    v18 = 1;
    if ( *((_DWORD *)a5 + 18) > 1u )
      v18 = *((_DWORD *)a5 + 18);
    *((_DWORD *)a5 + 18) = v18;
    if ( v16 )
    {
      std::default_delete<CDrawListBrush>::operator()((__int64)v15, (__int64 (__fastcall ***)(_QWORD, __int64))v16);
      v15 = v24;
    }
    if ( v15 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1u);
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v9, 0x2C8u, 0LL);
  if ( v24 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v24, 1u);
LABEL_20:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v30);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v29);
  return (unsigned int)v9;
}
