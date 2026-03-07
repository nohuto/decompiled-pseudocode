__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        const struct CShape *a4,
        bool a5,
        int a6)
{
  int v10; // xmm1_4
  unsigned int v11; // xmm2_4
  unsigned int v12; // xmm3_4
  int v13; // xmm4_4
  int v14; // xmm5_4
  bool v15; // bl
  char *v16; // r9
  void (__fastcall *v17)(struct IBitmapResource *, bool, void *, _QWORD); // r12
  __int64 (__fastcall ***v18)(_QWORD, _DWORD *); // rcx
  __int64 v19; // rax
  int *v20; // r15
  int v21; // ecx
  void *v22; // r8
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // r12d
  __int64 v27; // rsi
  struct CShape **v28; // rcx
  unsigned int v29; // r13d
  void *v30; // r11
  __int64 v31; // r11
  __int64 v32; // rax
  int v33; // eax
  CMILMatrix *v34; // rcx
  void (__fastcall ***v35)(_QWORD, _DWORD *); // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // ecx
  __m128 v39; // xmm1
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm5_4
  float v45; // xmm7_4
  float v46; // xmm3_4
  float v47; // xmm8_4
  float v48; // xmm1_4
  float v49; // xmm9_4
  float v50; // xmm0_4
  unsigned int v51; // r9d
  __int64 v52; // r8
  float v53; // xmm10_4
  __int64 v54; // rdx
  unsigned int v55; // r13d
  struct CShape *v56; // rdx
  int v57; // eax
  __int64 v58; // rcx
  char *v59; // rcx
  float v61; // xmm3_4
  float v62; // xmm2_4
  float v63; // xmm4_4
  float v64; // xmm6_4
  float v65; // xmm1_4
  float v66; // xmm0_4
  float v67; // xmm1_4
  float v68; // xmm6_4
  float v69; // xmm5_4
  float v70; // xmm0_4
  const struct CMILMatrix *TopByReference; // rax
  __int64 (__fastcall *v72)(const struct CShape *, __int128 *, const struct CMILMatrix *, unsigned __int64 *); // r11
  int v73; // eax
  unsigned int v74; // ecx
  const struct CMILMatrix *v75; // rax
  int v76; // xmm1_4
  unsigned int v77; // xmm0_4
  int v78; // xmm1_4
  int v79; // eax
  unsigned int v80; // ecx
  unsigned int v81; // ebx
  int v82; // eax
  unsigned int v83; // ecx
  __int64 v84; // rcx
  struct CShape *v85; // rdx
  __int64 v86; // rcx
  struct IBitmapRealization *v88; // [rsp+38h] [rbp-C8h] BYREF
  struct CShape *v89; // [rsp+40h] [rbp-C0h] BYREF
  struct CShape **v90; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v91; // [rsp+50h] [rbp-B0h] BYREF
  int v92; // [rsp+58h] [rbp-A8h]
  int v93; // [rsp+5Ch] [rbp-A4h]
  _BYTE v94[24]; // [rsp+60h] [rbp-A0h] BYREF
  __m128 v95; // [rsp+78h] [rbp-88h] BYREF
  __int128 v96; // [rsp+88h] [rbp-78h]
  _DWORD v97[4]; // [rsp+98h] [rbp-68h] BYREF
  __m128 v98; // [rsp+A8h] [rbp-58h]
  __int128 v99; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v100; // [rsp+C8h] [rbp-38h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)a4 + 16LL))(a4) )
    return 0LL;
  v10 = *((_DWORD *)a3 + 1);
  v11 = *((_DWORD *)a3 + 4);
  v12 = *((_DWORD *)a3 + 5);
  v13 = *((_DWORD *)a3 + 12);
  v14 = *((_DWORD *)a3 + 13);
  LODWORD(v90) = *(_DWORD *)a3;
  HIDWORD(v90) = v10;
  v91 = __PAIR64__(v12, v11);
  v92 = v13;
  v93 = v14;
  MILMatrix3x2::SetInverse((MILMatrix3x2 *)v94, (const struct MILMatrix3x2 *)&v90);
  if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)a2 + 16LL))(a2) )
    a5 = 1;
  v15 = *((_QWORD *)this + 6) && !*((_BYTE *)g_pComposition + 1274);
  v16 = (char *)this + 164;
  if ( !*((_BYTE *)this + 192) )
    v16 = 0LL;
  (*(void (__fastcall **)(struct IBitmapResource *, bool, _QWORD, char *))(*(_QWORD *)a2 + 40LL))(a2, v15, 0LL, v16);
  v17 = *(void (__fastcall **)(struct IBitmapResource *, bool, void *, _QWORD))(*(_QWORD *)a2 + 48LL);
  v18 = (__int64 (__fastcall ***)(_QWORD, _DWORD *))(*((_QWORD *)this + 4)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL));
  v19 = (**v18)(v18, v97);
  v20 = (int *)((char *)this + 400);
  v21 = *((_DWORD *)this + 100);
  if ( v21 )
    v22 = (void *)(*((_QWORD *)this + 52) + 68LL * (unsigned int)(v21 - 1));
  else
    v22 = &CMILMatrix::Identity;
  v17(a2, v15, v22, *(unsigned int *)(v19 + 8));
  v23 = *(_QWORD *)a2;
  v88 = 0LL;
  v24 = (*(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapRealization **))(v23 + 64))(a2, &v88);
  v26 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x83Bu, 0LL);
    goto LABEL_97;
  }
  v27 = *((_QWORD *)this + 1009);
  v28 = &v89;
  v89 = 0LL;
  v29 = -2003304309;
  v90 = &v89;
  LOBYTE(v92) = 1;
  v91 = 0LL;
  if ( v27 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *, _QWORD))(*(_QWORD *)a4 + 64LL))(a4, 0LL)
      || !a6
      || (**((unsigned __int8 (__fastcall ***)(char *))this + 3))((char *)this + 24)
      || (!*v20
        ? (v30 = &CMILMatrix::Identity)
        : (v30 = (void *)(*((_QWORD *)this + 52) + 68LL * (unsigned int)(*v20 - 1))),
          !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v30)
       && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v31)
       || (v32 = *(_QWORD *)a4,
           v100 = 0LL,
           (*(int (__fastcall **)(const struct CShape *, __int128 *, _QWORD))(v32 + 48))(a4, &v100, 0LL) < 0)) )
    {
LABEL_41:
      v28 = v90;
      goto LABEL_42;
    }
    v33 = *v20;
    v96 = 0LL;
    v95 = 0LL;
    if ( v33 )
      v34 = (CMILMatrix *)(*((_QWORD *)this + 52) + 68LL * (unsigned int)(v33 - 1));
    else
      v34 = (CMILMatrix *)&CMILMatrix::Identity;
    CMILMatrix::Transform2DBoundsHelper<1>(v34, (struct MilRectF *)&v100);
    v35 = (void (__fastcall ***)(_QWORD, _DWORD *))(*((_QWORD *)this + 4)
                                                  + 8LL
                                                  + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL));
    (**v35)(v35, v97);
    v98.m128_u64[0] = 0LL;
    v36 = *((_QWORD *)this + 113);
    v98.m128_f32[2] = (float)v97[0];
    v98.m128_f32[3] = (float)v97[1];
    v37 = v36 - *((_QWORD *)this + 112);
    if ( v37 && *(_QWORD *)(v36 - 184) )
    {
      v38 = *((_DWORD *)this + 796);
      if ( !v38 )
      {
        v41 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v42 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v43 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v40 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
LABEL_26:
        if ( *(_QWORD *)(v36 - 168) )
        {
          v95 = 0LL;
          CBaseClipStack::Top((char *)this + 3216, &v95);
          if ( v95.m128_f32[0] > v41 )
            v41 = v95.m128_f32[0];
          v68 = v42;
          if ( v95.m128_f32[1] > v42 )
          {
            v42 = v95.m128_f32[1];
            v68 = v95.m128_f32[1];
          }
          v69 = v43;
          if ( v43 > v95.m128_f32[2] )
          {
            v43 = v95.m128_f32[2];
            v69 = v95.m128_f32[2];
          }
          v70 = v40;
          if ( v40 > v95.m128_f32[3] )
          {
            v40 = v95.m128_f32[3];
            v70 = v95.m128_f32[3];
          }
          if ( v69 <= v41 || v70 <= v68 )
          {
            v40 = 0.0;
            v43 = 0.0;
            v42 = 0.0;
            v41 = 0.0;
          }
        }
        goto LABEL_27;
      }
      v39 = *(__m128 *)(*((_QWORD *)this + 400) + 16LL * (unsigned int)(v38 - 1));
      LODWORD(v40) = _mm_shuffle_ps(v39, v39, 255).m128_u32[0];
      v95 = v39;
    }
    else
    {
      v95 = v98;
      v40 = v98.m128_f32[3];
      if ( !v37 )
      {
        v43 = v95.m128_f32[2];
        v42 = v95.m128_f32[1];
        v41 = v95.m128_f32[0];
LABEL_27:
        v44 = *(float *)&v96;
        if ( v41 > *(float *)&v96 )
          v44 = v41;
        v45 = *((float *)&v96 + 1);
        v46 = *((float *)&v96 + 1);
        if ( v42 > *((float *)&v96 + 1) )
        {
          v45 = v42;
          v46 = v42;
        }
        v47 = *((float *)&v96 + 2);
        v48 = *((float *)&v96 + 2);
        if ( *((float *)&v96 + 2) > v43 )
        {
          v47 = v43;
          v48 = v43;
        }
        v49 = *((float *)&v96 + 3);
        v50 = *((float *)&v96 + 3);
        if ( *((float *)&v96 + 3) > v40 )
        {
          v49 = v40;
          v50 = v40;
        }
        if ( v48 <= v44 || v50 <= v46 )
        {
          v49 = 0.0;
          v47 = 0.0;
          v45 = 0.0;
          v44 = 0.0;
        }
        v51 = *(_DWORD *)(v27 + 472);
        v52 = 0LL;
        v53 = 0.0;
        v96 = 0LL;
        if ( v51 )
        {
          v54 = *(_QWORD *)(v27 + 448);
          do
          {
            if ( *(_DWORD *)(v54 + 36 * v52 + 16) >= a6 )
              break;
            v61 = *(float *)(v54 + 36 * v52 + 8);
            v62 = *(float *)(v54 + 36 * v52);
            if ( v61 > v62 && *(float *)(v54 + 36 * v52 + 12) > *(float *)(v54 + 36 * v52 + 4) )
            {
              v63 = v44;
              v64 = v45;
              v65 = v47;
              if ( v62 > v44 )
                v63 = *(float *)(v54 + 36 * v52);
              if ( *(float *)(v54 + 36 * v52 + 4) > v45 )
                v64 = *(float *)(v54 + 36 * v52 + 4);
              if ( v47 > v61 )
                v65 = *(float *)(v54 + 36 * v52 + 8);
              v66 = v49;
              if ( v49 > *(float *)(v54 + 36 * v52 + 12) )
                v66 = *(float *)(v54 + 36 * v52 + 12);
              if ( v65 > v63 && v66 > v64 )
              {
                v67 = (float)(v65 - v63) * (float)(v66 - v64);
                if ( v67 > v53 )
                {
                  v53 = v67;
                  v96 = *(_OWORD *)(v54 + 36 * v52);
                }
              }
            }
            v52 = (unsigned int)(v52 + 1);
          }
          while ( (unsigned int)v52 < v51 );
          if ( v53 > 0.0 )
          {
            v99 = v96;
            TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
            v73 = v72(a4, &v99, TopByReference, &v91);
            v29 = v73;
            if ( v73 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x148Au, 0LL);
          }
        }
        goto LABEL_41;
      }
    }
    v41 = v95.m128_f32[0];
    v42 = v95.m128_f32[1];
    v43 = v95.m128_f32[2];
    goto LABEL_26;
  }
LABEL_42:
  v55 = v29 >> 31;
  if ( (_BYTE)v92 )
  {
    v56 = *v28;
    *v28 = (struct CShape *)v91;
    if ( v56 )
      std::default_delete<CShape>::operator()(v28, v56);
  }
  if ( (_BYTE)v55 )
  {
    v57 = CDrawingContext::FillShapeWithBitmapRealization(this, v88, a4, (const struct MILMatrix3x2 *)v94, a5);
    v26 = v57;
    if ( v57 >= 0 )
    {
LABEL_47:
      if ( v89 )
        std::default_delete<CShape>::operator()(v58, v89);
      if ( v88 )
      {
        v59 = (char *)v88 + *(int *)(*((_QWORD *)v88 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v59 + 16LL))(v59);
      }
      return v26;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x864u, 0LL);
    v85 = v89;
    if ( v89 )
      goto LABEL_102;
    goto LABEL_97;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)v89 + 16LL))(v89) )
    goto LABEL_47;
  v75 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
  v76 = *((_DWORD *)v75 + 1);
  LODWORD(v90) = *(_DWORD *)v75;
  v77 = *((_DWORD *)v75 + 4);
  HIDWORD(v90) = v76;
  v91 = __PAIR64__(*((_DWORD *)v75 + 5), v77);
  v78 = *((_DWORD *)v75 + 13);
  v92 = *((_DWORD *)v75 + 12);
  v93 = v78;
  MILMatrix3x2::SetInverse((MILMatrix3x2 *)&v100, (const struct MILMatrix3x2 *)&v90);
  MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v90, (const struct MILMatrix3x2 *)&v100, (const struct MILMatrix3x2 *)v94);
  v79 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v81 = v79;
  if ( v79 >= 0 )
  {
    v82 = CDrawingContext::FillShapeWithBitmapRealization(this, v88, v89, (const struct MILMatrix3x2 *)&v90, a5);
    v26 = v82;
    if ( v82 >= 0 )
    {
      CDrawingContext::PopTransformInternal(this, 1);
      goto LABEL_47;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x85Cu, 0LL);
    CDrawingContext::PopTransformInternal(this, 1);
    v85 = v89;
    if ( v89 )
LABEL_102:
      std::default_delete<CShape>::operator()(v84, v85);
LABEL_97:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v88);
    return v26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0x853u, 0LL);
  if ( v89 )
    std::default_delete<CShape>::operator()(v86, v89);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v88);
  return v81;
}
