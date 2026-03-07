__int64 __fastcall CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
        CDrawingContext *this,
        struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  unsigned int v4; // esi
  struct EffectInput *v5; // r15
  float v6; // xmm9_4
  __m128i v7; // xmm8
  float v8; // xmm10_4
  struct IBitmapRealization *v9; // r14
  struct EffectInput *v10; // r8
  FLOAT height; // xmm1_4
  CMILMatrix *TopByReference; // rax
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  char *v17; // r12
  char v18; // r13
  __int64 v19; // rbx
  CDrawingContext *v20; // rsi
  const struct CVisualTree **v21; // rdi
  struct CTreeData *v22; // r8
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rdi
  struct IBitmapRealization *RealizationForEffectInput; // rax
  __int64 v25; // xmm1_8
  CVisual *v26; // rax
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  __int64 v28; // xmm1_8
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm1_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  __int64 v34; // rax
  __int64 v35; // rax
  bool v36; // di
  CVisual *v37; // rax
  struct CCachedWindowBackgroundTreatment *v38; // r10
  int v39; // eax
  unsigned int v40; // ecx
  CDrawListBitmap *v41; // rax
  int v43; // eax
  int v44; // eax
  unsigned int v45; // ecx
  CVisual *v46; // rax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  const struct CMILMatrix *v51; // rax
  int v52; // eax
  unsigned int v53; // ecx
  bool v54[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct CCachedWindowBackgroundTreatment *v55; // [rsp+40h] [rbp-C8h] BYREF
  CDrawingContext *v56; // [rsp+48h] [rbp-C0h]
  _QWORD v57[3]; // [rsp+50h] [rbp-B8h] BYREF
  struct D2D_SIZE_F *v58; // [rsp+68h] [rbp-A0h]
  int v59[4]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v60; // [rsp+88h] [rbp-80h]
  __int128 v61; // [rsp+98h] [rbp-70h]
  __int128 v62; // [rsp+A8h] [rbp-60h]
  int v63; // [rsp+B8h] [rbp-50h]
  __int64 v64; // [rsp+C8h] [rbp-40h] BYREF
  int v65; // [rsp+D0h] [rbp-38h]
  __int64 v66; // [rsp+D4h] [rbp-34h]
  int v67; // [rsp+DCh] [rbp-2Ch]
  __int64 v68; // [rsp+E0h] [rbp-28h]
  int v69; // [rsp+E8h] [rbp-20h]
  CMatrixStack *v70; // [rsp+F0h] [rbp-18h]
  _OWORD v71[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v72; // [rsp+138h] [rbp+30h]
  _BYTE v73[64]; // [rsp+148h] [rbp+40h] BYREF
  int v74; // [rsp+188h] [rbp+80h]
  _BYTE v75[24]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v76; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v77; // [rsp+1C0h] [rbp+B8h] BYREF
  float v78; // [rsp+1D0h] [rbp+C8h]
  float v79; // [rsp+1D4h] [rbp+CCh]
  __int128 v80; // [rsp+1D8h] [rbp+D0h]

  v56 = this;
  v4 = 0;
  v57[0] = a3;
  v54[1] = 0;
  v5 = a3;
  v58 = a2;
  CMILMatrix::SetToIdentity((CMILMatrix *)v59);
  v74 = 0;
  v6 = *(float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v7 = 0LL;
  v8 = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
       + 1);
  v9 = 0LL;
  *(_OWORD *)&v75[8] = *(__int128 *)((char *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                                   + 8);
  *(_QWORD *)v75 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)&v57[1] = 0LL;
  EffectInput::Reset(v10);
  *(_QWORD *)&v77 = 0LL;
  *((_BYTE *)v5 + 44) = 1;
  *((_BYTE *)v5 + 100) = 1;
  *((_BYTE *)v5 + 102) = 1;
  height = v58->height;
  DWORD2(v77) = LODWORD(v58->width);
  *((FLOAT *)&v77 + 3) = height;
  v80 = 0LL;
  v70 = (CDrawingContext *)((char *)this + 400);
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, (struct MilRectF *)&v77);
  v76 = 0LL;
  CDrawingContext::GetClipBoundsWorld(this, &v76);
  v13 = *(float *)&v76;
  if ( *(float *)&v80 > *(float *)&v76 )
    v13 = *(float *)&v80;
  v14 = *((float *)&v76 + 1);
  if ( *((float *)&v80 + 1) > *((float *)&v76 + 1) )
    v14 = *((float *)&v80 + 1);
  v15 = *((float *)&v76 + 2);
  if ( *((float *)&v76 + 2) > *((float *)&v80 + 2) )
    v15 = *((float *)&v80 + 2);
  v16 = *((float *)&v76 + 3);
  if ( *((float *)&v76 + 3) > *((float *)&v80 + 3) )
    v16 = *((float *)&v80 + 3);
  if ( v15 <= v13 || v16 <= v14 )
    goto LABEL_52;
  v17 = (char *)this + 24;
  v54[0] = 0;
  v18 = 0;
  v19 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  if ( !v19 )
    goto LABEL_25;
  v20 = v56;
  v21 = (const struct CVisualTree **)((char *)this + 8056);
  do
  {
    if ( (**(_DWORD **)(v19 + 232) & 0x200000) != 0 )
      break;
    v21 = (const struct CVisualTree **)((char *)v20 + 8056);
    CVisual::CalcTransform(
      (CVisual *)v19,
      *((const struct CVisualTree **)v20 + 1007),
      0LL,
      &v54[1],
      (struct CMILMatrix *)v73,
      0LL);
    CMILMatrix::Multiply((const struct CMILMatrix *)v59, (const struct CMILMatrix *)v73, (struct CMILMatrix *)v59);
    if ( CVisual::FindTreeData((CVisual *)v19, *((const struct CVisualTree **)v20 + 1007))
      && CVisual::GetParentTreeData((CVisual *)v19, *v21, v22, &v54[2])
      && v54[2] )
    {
      v18 = 1;
    }
    v19 = *(_QWORD *)(v19 + 88);
  }
  while ( v19 );
  v5 = (struct EffectInput *)v57[0];
  v4 = 0;
  if ( !v19 || !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)*v21 + 184LL))(*v21) )
  {
LABEL_25:
    v26 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v17 + 32LL))(v17);
    CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(v26);
    if ( CachedWindowBackgroundTreatment && !*((_BYTE *)CachedWindowBackgroundTreatment + 140) )
    {
      v9 = (struct IBitmapRealization *)*((_QWORD *)CachedWindowBackgroundTreatment + 3);
      if ( v9 )
      {
        v28 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 116);
        *(_OWORD *)v75 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 100);
        v8 = *(float *)&v75[4];
        v6 = *(float *)v75;
        *(_OWORD *)v59 = *((_OWORD *)CachedWindowBackgroundTreatment + 2);
        *(_QWORD *)&v75[16] = v28;
        v60 = *((_OWORD *)CachedWindowBackgroundTreatment + 3);
        v61 = *((_OWORD *)CachedWindowBackgroundTreatment + 4);
        v62 = *((_OWORD *)CachedWindowBackgroundTreatment + 5);
        v63 = *((_DWORD *)CachedWindowBackgroundTreatment + 24);
      }
      else
      {
        v7 = _mm_loadu_si128((const __m128i *)((char *)CachedWindowBackgroundTreatment + 124));
        *(__m128i *)&v57[1] = v7;
      }
      v54[0] = 1;
      goto LABEL_30;
    }
    if ( !v19 )
    {
      v7 = (__m128i)_xmm;
      goto LABEL_52;
    }
  }
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v19);
  if ( CWindowBackgroundTreatment::HasValidSource(WindowBackgroundTreatmentInternal) )
  {
    RealizationForEffectInput = CWindowBackgroundTreatment::GetRealizationForEffectInput(WindowBackgroundTreatmentInternal);
    v57[0] = RealizationForEffectInput;
    if ( RealizationForEffectInput )
    {
      if ( v18 )
      {
        v47 = *((_OWORD *)WindowBackgroundTreatmentInternal + 10);
        v48 = *((_OWORD *)WindowBackgroundTreatmentInternal + 11);
        v72 = *((_DWORD *)WindowBackgroundTreatmentInternal + 56);
        v71[0] = v47;
        v49 = *((_OWORD *)WindowBackgroundTreatmentInternal + 12);
        v71[1] = v48;
        v50 = *((_OWORD *)WindowBackgroundTreatmentInternal + 13);
        v71[2] = v49;
        v71[3] = v50;
        if ( !CMILMatrix::Invert((CMILMatrix *)v71) )
          goto LABEL_52;
        v51 = CMatrixStack::GetTopByReference(v70);
        CMILMatrix::Multiply(v51, (const struct CMILMatrix *)v71, (struct CMILMatrix *)v59);
        RealizationForEffectInput = (struct IBitmapRealization *)v57[0];
      }
      v9 = RealizationForEffectInput;
      v25 = *((_QWORD *)WindowBackgroundTreatmentInternal + 13);
      *(_OWORD *)v75 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 88);
      v8 = *(float *)&v75[4];
      v6 = *(float *)v75;
      *(_QWORD *)&v75[16] = v25;
LABEL_31:
      v29 = *(float *)&v75[8] - v6;
      v30 = *(float *)&v75[12] - v8;
      v76 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v59, (struct MilRectF *)&v77);
      v31 = *((float *)&v76 + 3) - v8;
      v32 = *((float *)&v76 + 1) - v8;
      v33 = *((float *)&v76 + 2) - v6;
      *((float *)v5 + 21) = *(float *)&v76 - v6;
      *((float *)v5 + 22) = v32;
      *((float *)v5 + 23) = v33;
      *((float *)v5 + 24) = v31;
      v64 = *(_QWORD *)v59;
      v65 = v59[3];
      v66 = v60;
      v67 = HIDWORD(v60);
      v68 = v62;
      v69 = HIDWORD(v62);
      v77 = *(_OWORD *)&_xmm;
      LODWORD(v78) = LODWORD(v6) ^ _xmm;
      LODWORD(v79) = LODWORD(v8) ^ _xmm;
      v34 = Matrix3x3::operator*(&v64, v71, &v77);
      *(_QWORD *)((char *)&v77 + 4) = 0LL;
      *(float *)&v77 = 1.0 / v29;
      *((float *)&v77 + 3) = 1.0 / v30;
      v78 = 0.0 - (float)((float)(1.0 / v29) * 0.0);
      v79 = 0.0 - (float)((float)(1.0 / v30) * 0.0);
      v35 = Matrix3x3::operator*(v34, &v64, &v77);
      *((_OWORD *)v5 + 3) = *(_OWORD *)v35;
      *((_OWORD *)v5 + 4) = *(_OWORD *)(v35 + 16);
      *((_DWORD *)v5 + 20) = *(_DWORD *)(v35 + 32);
LABEL_32:
      v36 = v54[0];
      if ( !v19 )
        goto LABEL_38;
      goto LABEL_33;
    }
    v7 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)WindowBackgroundTreatmentInternal + 9) + 88LL));
    *(__m128i *)&v57[1] = v7;
LABEL_30:
    if ( !v9 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v36 = 0;
LABEL_33:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v56 + 1007) + 184LL))(*((_QWORD *)v56 + 1007)) && !v36 )
  {
    v37 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v17 + 32LL))(v17);
    v55 = CVisual::GetCachedWindowBackgroundTreatment(v37);
    if ( v55 )
    {
      CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v19);
      v39 = CCachedWindowBackgroundTreatment::Update(v38, (__int64)v75, (__int64)&v57[1]);
      v4 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x7DCu, 0LL);
        return v4;
      }
    }
    else
    {
      v43 = (unsigned int)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v19);
      v44 = CCachedWindowBackgroundTreatment::Create(v43, (int)v9, (int)v59, (int)v75, &v57[1], (__int64)&v55);
      v4 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x7E5u, 0LL);
        return v4;
      }
      v46 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v17 + 32LL))(v17);
      CVisual::SetCachedWindowBackgroundTreatment(v46, v55);
    }
    v7 = *(__m128i *)&v57[1];
  }
LABEL_38:
  if ( v9 )
  {
    v41 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v75, v9);
    CDrawListBitmap::operator=(v5, v41);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v75[8]);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v75);
    *((_DWORD *)v5 + 10) |= 0x800u;
    return v4;
  }
LABEL_52:
  v52 = CDrawingContext::SetEffectInputToTransparentBlack(v56, v58, v5);
  v4 = v52;
  if ( v52 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x7FCu, 0LL);
  else
    *(__m128i *)((char *)v5 + 24) = v7;
  return v4;
}
