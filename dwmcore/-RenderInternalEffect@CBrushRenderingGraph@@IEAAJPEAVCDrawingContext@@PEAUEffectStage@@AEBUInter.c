__int64 __fastcall CBrushRenderingGraph::RenderInternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct EffectStage *a3,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a4,
        struct EffectInput *a5)
{
  __m128 *v7; // r9
  __m128 v8; // xmm1
  int *v9; // r13
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  int v14; // eax
  __int64 v15; // rcx
  int v16; // esi
  unsigned int v17; // edx
  unsigned int v18; // ebx
  CBrushRenderingGraph *v19; // rcx
  char *v20; // rax
  int v21; // xmm0_4
  int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // xmm1_4
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rcx
  struct CGeometryOnlyDrawListBrush *v34; // rcx
  CGeometryOnlyDrawListBrush *v35; // r8
  CGeometryOnlyDrawListBrush *v36; // rax
  CBrushRenderingGraph *v37; // rcx
  struct CDrawListCache *v38; // rdi
  int updated; // eax
  int v40; // eax
  __int64 v41; // rcx
  struct IBitmapRealization *v42; // rdx
  __int64 *v43; // rax
  float *v44; // rax
  int v46; // r9d
  __int64 v47; // [rsp+20h] [rbp-E0h]
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  struct CDrawListCache *v49; // [rsp+30h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v50; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  CBrushRenderingGraph *v52; // [rsp+48h] [rbp-B8h] BYREF
  struct EffectInput *v53; // [rsp+50h] [rbp-B0h] BYREF
  float v54; // [rsp+58h] [rbp-A8h] BYREF
  float v55; // [rsp+5Ch] [rbp-A4h]
  float v56; // [rsp+60h] [rbp-A0h]
  float v57; // [rsp+64h] [rbp-9Ch]
  _DWORD v58[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B4h] [rbp-4Ch]
  int v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BCh] [rbp-44h]
  int v64; // [rsp+C0h] [rbp-40h]
  struct CGeometryOnlyDrawListBrush *v65[2]; // [rsp+D0h] [rbp-30h] BYREF
  char *v66; // [rsp+E0h] [rbp-20h]

  v52 = this;
  v51 = 0LL;
  v50 = 0LL;
  CMILMatrix::SetToIdentity((CMILMatrix *)v58);
  v8 = *v7;
  v9 = (int *)((char *)a5 + 48);
  v49 = 0LL;
  v66 = (char *)v7[1].m128_u64[0];
  v10 = 1.0 / v8.m128_f32[0];
  v53 = a5;
  *(__m128 *)v65 = v8;
  v54 = *(float *)&FLOAT_1_0;
  v11 = 1.0 / _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
  v55 = *(float *)&FLOAT_1_0;
  v56 = 1.0 / v8.m128_f32[0];
  v57 = v11;
  v12 = *(float *)&FLOAT_1_0;
  *(_QWORD *)((char *)a5 + 84) = 0LL;
  *((_DWORD *)a5 + 23) = 1065353216;
  *((_DWORD *)a5 + 24) = 1065353216;
  v13 = *(float *)&FLOAT_1_0;
  *(_QWORD *)((char *)a5 + 52) = 0LL;
  *((float *)a5 + 12) = 1.0 / v8.m128_f32[0];
  *((float *)a5 + 16) = v11;
  *((float *)a5 + 18) = 0.0 - (float)((float)(1.0 / v8.m128_f32[0]) * 0.0);
  *((_DWORD *)a5 + 15) = 0;
  *((_DWORD *)a5 + 17) = 0;
  *((_DWORD *)a5 + 20) = 1065353216;
  *((float *)a5 + 19) = 0.0 - (float)(v11 * 0.0);
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)&v49);
  v14 = CDrawListCache::InternalCreate(1, &v49);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x19Fu, 0LL);
    goto LABEL_24;
  }
  v17 = *((_DWORD *)a3 + 1);
  v18 = 0;
  if ( v17 )
  {
    do
    {
      v19 = (CBrushRenderingGraph *)(104LL * v18);
      v20 = (char *)a3 + (_QWORD)v19 + 8;
      v66 = v20;
      if ( v20[44] && v20[101] && v17 == 1 )
        CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
          (FLOAT *)v65,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v53);
      else
        CBrushRenderingGraph::ConfigureIntermediateFromInput(
          v19,
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v65,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v53);
      v17 = *((_DWORD *)a3 + 1);
      ++v18;
    }
    while ( v18 < v17 );
    v11 = v57;
    v10 = v56;
    v13 = v55;
    v12 = v54;
  }
  v21 = *v9;
  v22 = *((_DWORD *)a5 + 13);
  v58[2] = 0;
  v58[6] = 0;
  v62 = 0;
  v58[0] = v21;
  v23 = *((_DWORD *)a5 + 14);
  v58[1] = v22;
  v24 = *((_DWORD *)a5 + 15);
  v58[3] = v23;
  v25 = *((_DWORD *)a5 + 16);
  v58[4] = v24;
  v26 = *((_DWORD *)a5 + 17);
  v58[5] = v25;
  v58[7] = v26;
  v60 = *((_DWORD *)a5 + 18);
  v27 = *((_DWORD *)a5 + 20);
  v59 = _xmm;
  v61 = *((_DWORD *)a5 + 19);
  v63 = v27;
  v64 = 0;
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v51);
  v28 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
  LODWORD(v65[1]) = 32;
  v65[0] = (struct CGeometryOnlyDrawListBrush *)"DWM Internal Effect intermediate";
  LODWORD(v47) = 3;
  v29 = CDrawingContext::PushOffScreenRenderingLayer(
          a2,
          (__int64)v65,
          &v54,
          *(unsigned int *)(v28 + 8),
          v47,
          (__int64)&v51);
  v16 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1C2u, 0LL);
    goto LABEL_24;
  }
  v31 = v51;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 8LL))(v51, 1LL);
  v32 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v58, 0, 1);
  v16 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1C7u, 0LL);
    goto LABEL_38;
  }
  v65[1] = 0LL;
  v65[0] = (struct CGeometryOnlyDrawListBrush *)&v50;
  LOBYTE(v66) = 1;
  v16 = CGeometryOnlyDrawListBrush::Create(&v65[1]);
  if ( (_BYTE)v66 )
  {
    v34 = v65[0];
    v35 = *(CGeometryOnlyDrawListBrush **)v65[0];
    *(_QWORD *)v65[0] = v65[1];
    if ( v35 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v35, 1);
  }
  if ( v16 < 0 )
  {
    v46 = v16;
    v48 = 460;
    goto LABEL_36;
  }
  v36 = v50;
  v65[0] = 0LL;
  v37 = v52;
  *((_DWORD *)v50 + 12) = 0;
  v38 = v49;
  *((_BYTE *)v36 + 52) = 1;
  *(float *)&v65[1] = v12 / v10;
  *((float *)&v65[1] + 1) = v13 / v11;
  *((_OWORD *)v36 + 2) = *(_OWORD *)v65;
  updated = CBrushRenderingGraph::UpdateDrawListCache(v37, a2, v50, a3, 0, v38);
  v16 = updated;
  if ( updated < 0 )
  {
    v48 = 472;
    goto LABEL_34;
  }
  updated = CDrawListCache::Render((__int64)v38, a2, (CMILMatrix *)v58, 1.0);
  v16 = updated;
  if ( updated < 0 )
  {
    v48 = 477;
LABEL_34:
    v46 = updated;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v34, 0LL, 0, v46, v48, 0LL);
    CDrawingContext::PopTransformInternal(a2, 1);
LABEL_38:
    CDrawingContext::PopLayer(a2);
    goto LABEL_24;
  }
  CDrawingContext::PopTransformInternal(a2, 1);
  v40 = CDrawingContext::PopLayer(a2);
  v16 = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x1E4u, 0LL);
  }
  else
  {
    if ( v31 )
      v42 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v31 + 8) + 16LL) + v31 + 8);
    else
      v42 = 0LL;
    v43 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v65, v42);
    CDrawListBitmap::operator=((__int64 *)a5, v43);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v65[1]);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v65);
    CDrawListBitmap::GetSize(a5, &v52);
    HIDWORD(v65[0]) = 0;
    LODWORD(v65[1]) = 0;
    *(float *)v65 = 1.0 / (float)(int)v52;
    *((float *)&v65[1] + 1) = 1.0 / (float)SHIDWORD(v52);
    *(float *)&v66 = 0.0 - (float)(*(float *)v65 * 0.0);
    *((float *)&v66 + 1) = 0.0 - (float)(*((float *)&v65[1] + 1) * 0.0);
    v44 = Matrix3x3::operator*((float *)a5 + 12, (float *)&v53, (float *)v65);
    *(_OWORD *)v9 = *(_OWORD *)v44;
    *((_OWORD *)a5 + 4) = *((_OWORD *)v44 + 1);
    *((float *)a5 + 20) = v44[8];
    if ( (*((_BYTE *)v38 + 88) & 2) != 0 )
      *((_DWORD *)a5 + 10) |= 2u;
    if ( (*((_BYTE *)v38 + 88) & 4) != 0 )
      *((_DWORD *)a5 + 10) |= 4u;
    if ( (*((_DWORD *)v38 + 22) & 0x100) != 0 )
      *((_DWORD *)a5 + 10) |= 0x100u;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((volatile signed __int32 **)&v49);
  if ( v50 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v50, 1);
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v51);
  return (unsigned int)v16;
}
