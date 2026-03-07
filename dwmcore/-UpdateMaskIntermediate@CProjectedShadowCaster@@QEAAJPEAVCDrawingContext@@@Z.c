__int64 __fastcall CProjectedShadowCaster::UpdateMaskIntermediate(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 *v6; // r14
  struct CBrush *EffectiveMaskBrush; // rax
  __int64 v8; // rdx
  struct CBrush *v9; // r12
  int v10; // eax
  __m128 v11; // xmm2
  int v12; // eax
  __m128 v13; // xmm2
  CGeometry *v14; // rcx
  int ShapeData; // eax
  __int64 v16; // rcx
  char v17; // cl
  int v18; // eax
  __int64 v19; // rcx
  char v21; // [rsp+28h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  char v23; // [rsp+48h] [rbp-28h]
  const char *v24; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+58h] [rbp-18h]
  _BYTE v26[16]; // [rsp+60h] [rbp-10h] BYREF
  float v27; // [rsp+B0h] [rbp+40h]
  struct D2D_SIZE_F v28; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int64 v29; // [rsp+C0h] [rbp+50h] BYREF

  v29 = *((_QWORD *)a2 + 1007);
  v4 = 0;
  v5 = *(_QWORD *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const *,>(
                    (__int64 *)this + 10,
                    (__int64)v26,
                    &v29);
  v6 = (__int64 *)(v5 + 80);
  if ( !*(_QWORD *)(v5 + 80) )
  {
    EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this);
    v8 = *((_QWORD *)this + 8);
    v9 = EffectiveMaskBrush;
    v28 = *(struct D2D_SIZE_F *)(v8 + 140);
    if ( (LODWORD(v28.width) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v11 = 0LL;
      v11.m128_f32[0] = (float)(int)v28.width - v28.width;
      v10 = (int)v28.width - _mm_cmple_ss(v11, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v27 = v28.width + 6291456.25;
      v10 = (int)(LODWORD(v27) << 10) >> 11;
    }
    v28.width = (float)v10;
    if ( (LODWORD(v28.height) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v13 = 0LL;
      v13.m128_f32[0] = (float)(int)v28.height - v28.height;
      v12 = (int)v28.height - _mm_cmple_ss(v13, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v27 = v28.height + 6291456.25;
      v12 = (int)(LODWORD(v27) << 10) >> 11;
    }
    v22 = 0LL;
    v23 = 0;
    v28.height = (float)v12;
    v14 = *(CGeometry **)(v8 + 248);
    if ( v14
      && (ShapeData = CGeometry::GetShapeData(v14, &v28, (struct CShapePtr *)&v22), v4 = ShapeData, ShapeData < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, ShapeData, 0x194u, 0LL);
    }
    else
    {
      Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v6);
      v17 = *(_BYTE *)(v5 + 76);
      v24 = "DWM ProjectedShadow Mask";
      v21 = v17;
      v25 = 24;
      v18 = ShadowHelpers::GenerateMaskIntermediate(&v24, a2, &v28, v9, v22, v21, v5 + 60, v6);
      v4 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1A0u, 0LL);
    }
    CShapePtr::Release((CShapePtr *)&v22);
  }
  return v4;
}
