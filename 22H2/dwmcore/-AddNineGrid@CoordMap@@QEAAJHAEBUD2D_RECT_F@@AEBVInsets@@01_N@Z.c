/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1800F37B4
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000771C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x18000756C (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180008758 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x180042CE4 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x180042DE4 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        bool a7)
{
  float bottom; // xmm3_4
  float top; // xmm1_4
  float v9; // xmm13_4
  float v10; // xmm14_4
  float v11; // xmm0_4
  float v12; // xmm15_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  __int64 v16; // rcx
  __int64 *v17; // r8
  float *v18; // r10
  float v19; // xmm9_4
  float v20; // xmm2_4
  float v21; // xmm8_4
  float v22; // xmm4_4
  bool v23; // r12
  float v24; // xmm5_4
  float v25; // xmm13_4
  float v26; // xmm14_4
  bool v27; // al
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm5_4
  bool v31; // r15
  bool v32; // r14
  float v33; // xmm6_4
  float v34; // xmm15_4
  float v35; // xmm10_4
  float v36; // xmm7_4
  int v37; // eax
  unsigned int v38; // ebx
  float v39; // xmm9_4
  int v40; // eax
  float v41; // xmm0_4
  int v42; // eax
  __int64 *v43; // rdi
  bool v44; // zf
  const struct D2D_RECT_F *v45; // r15
  float v46; // xmm1_4
  int v47; // eax
  __int64 *v48; // rdi
  float v49; // xmm1_4
  int v50; // eax
  float v51; // xmm8_4
  int v52; // eax
  bool v53; // r15
  float v54; // xmm0_4
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  __int128 v59; // xmm6
  float v61; // [rsp+38h] [rbp-D0h] BYREF
  float left; // [rsp+3Ch] [rbp-CCh]
  float v63; // [rsp+40h] [rbp-C8h]
  float v64; // [rsp+44h] [rbp-C4h]
  bool v65; // [rsp+48h] [rbp-C0h]
  __int128 v66; // [rsp+50h] [rbp-B8h] BYREF
  float v67; // [rsp+60h] [rbp-A8h]
  float v68; // [rsp+64h] [rbp-A4h]
  __int64 *v69; // [rsp+68h] [rbp-A0h]
  const struct D2D_RECT_F *v70; // [rsp+70h] [rbp-98h]
  float right; // [rsp+78h] [rbp-90h]
  float v72; // [rsp+7Ch] [rbp-8Ch]
  float v73; // [rsp+80h] [rbp-88h]

  bottom = a3->bottom;
  top = a3->top;
  v9 = a5->right - a5->left;
  v10 = a5->bottom - a5->top;
  right = a3->right;
  v11 = right - a3->left;
  v73 = bottom;
  v70 = a3;
  v69 = (__int64 *)this;
  v68 = v11;
  v72 = top;
  v67 = bottom - top;
  Insets::Clamp((float *)&v66, (float *)a4, v11, bottom - top);
  v12 = *(float *)&v66;
  if ( *(float *)&v66 < 0.0000011920929 )
  {
    v12 = 0.0;
    LODWORD(v66) = 0;
  }
  v13 = *((float *)&v66 + 2);
  if ( *((float *)&v66 + 2) < 0.0000011920929 )
  {
    v13 = 0.0;
    DWORD2(v66) = 0;
  }
  v14 = *((float *)&v66 + 1);
  if ( *((float *)&v66 + 1) < 0.0000011920929 )
  {
    v14 = 0.0;
    DWORD1(v66) = 0;
  }
  v15 = *((float *)&v66 + 3);
  if ( *((float *)&v66 + 3) < 0.0000011920929 )
  {
    v15 = 0.0;
    HIDWORD(v66) = 0;
  }
  Insets::Clamp(&v61, (float *)a6, v9, v10);
  v19 = v61;
  if ( v61 < 0.0000011920929 )
  {
    v19 = 0.0;
    v61 = 0.0;
  }
  v20 = v63;
  if ( v63 < 0.0000011920929 )
  {
    v20 = 0.0;
    v63 = 0.0;
  }
  v21 = left;
  if ( left < 0.0000011920929 )
  {
    v21 = 0.0;
    left = 0.0;
  }
  v22 = v64;
  if ( v64 < 0.0000011920929 )
  {
    v22 = 0.0;
    v64 = 0.0;
  }
  v23 = a7;
  if ( !a7 )
    goto LABEL_25;
  v24 = v67;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v68 - (float)(v13 + v12)) & _xmm) <= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v67 - (float)(v15 + v14)) & _xmm) <= 0.0000011920929 )
  {
    v23 = 0;
  }
  if ( v23 )
  {
    v25 = v63;
    v26 = v64;
  }
  else
  {
LABEL_25:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 - v19) - v20) - (float)((float)(v68 - v12) - v13)) & _xmm) > 0.0000011920929 )
      goto LABEL_27;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - v12) & _xmm) <= 0.0000011920929 )
    {
      v12 = 0.0;
      v19 = 0.0;
      LODWORD(v66) = 0;
      v61 = 0.0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v13) & _xmm) > 0.0000011920929 )
    {
LABEL_27:
      v25 = v63;
    }
    else
    {
      v13 = 0.0;
      v25 = 0.0;
      DWORD2(v66) = 0;
      v63 = 0.0;
    }
    v24 = v67;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 - v21) - v22) - (float)((float)(v67 - v14) - v15)) & _xmm) > 0.0000011920929 )
      goto LABEL_33;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v14) & _xmm) <= 0.0000011920929 )
    {
      v14 = 0.0;
      v21 = 0.0;
      DWORD1(v66) = 0;
      left = 0.0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - v15) & _xmm) > 0.0000011920929 )
    {
LABEL_33:
      v26 = v64;
    }
    else
    {
      v15 = 0.0;
      v26 = 0.0;
      HIDWORD(v66) = 0;
      v64 = 0.0;
    }
    if ( !v23 && Insets::IsEmpty((const struct Insets *)&v66) && Insets::IsEmpty((const struct Insets *)&v61) )
      return 0;
  }
  v27 = v12 > 0.0;
  LODWORD(v28) = COERCE_UNSIGNED_INT(v68 - (float)(v13 + v12)) & _xmm;
  v29 = *v18;
  LODWORD(v30) = COERCE_UNSIGNED_INT(v24 - (float)(v15 + v14)) & _xmm;
  v31 = v13 > 0.0;
  v32 = v30 <= 0.0000011920929;
  v33 = *v18 + v12;
  v65 = v15 > 0.0;
  if ( v28 <= 0.0000011920929 )
    v34 = v33;
  else
    v34 = right - v13;
  v35 = v72 + v14;
  if ( v30 <= 0.0000011920929 )
    v36 = v72 + v14;
  else
    v36 = v73 - v15;
  if ( !v27 )
  {
    if ( v28 <= 0.0000011920929 )
      goto LABEL_54;
    goto LABEL_51;
  }
  v61 = v29;
  left = a5->left;
  v63 = left;
  v37 = CoordMap::AddEntry(v16, v17, (__int64)v17, (__int64)&v61, 0);
  v38 = v37;
  if ( v37 >= 0 )
  {
    v17 = v69;
LABEL_51:
    v39 = v19 + a5->left;
    v61 = v33;
    left = v39;
    v63 = v39;
    v40 = CoordMap::AddEntry(v16, v17, (__int64)v17, (__int64)&v61, 2);
    v38 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v40, 0x163u, 0LL);
      return v38;
    }
    v17 = v69;
LABEL_54:
    if ( v31 || v28 > 0.0000011920929 )
    {
      v41 = a5->right - v25;
      v61 = v34;
      left = v41;
      v63 = v41;
      v42 = CoordMap::AddEntry(v16, v17, (__int64)v17, (__int64)&v61, 2);
      v38 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v42, 0x16Au, 0LL);
        return v38;
      }
      v43 = v69;
      v44 = !v31;
      v45 = v70;
      if ( !v44 )
      {
        v46 = a5->right;
        v61 = v70->right;
        left = v46;
        v63 = v46;
        v47 = CoordMap::AddEntry(v16, v69, (__int64)v17, (__int64)&v61, 0);
        v38 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v47, 0x16Fu, 0LL);
          return v38;
        }
      }
    }
    else
    {
      v43 = v69;
      v45 = v70;
    }
    v48 = v43 + 23;
    if ( v14 <= 0.0 )
    {
      if ( v32 )
        goto LABEL_67;
    }
    else
    {
      v49 = a5->top;
      v61 = v45->top;
      left = v49;
      v63 = v49;
      v50 = CoordMap::AddEntry(v16, v48, (__int64)v17, (__int64)&v61, 0);
      v38 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v50, 0x174u, 0LL);
        return v38;
      }
    }
    v51 = v21 + a5->top;
    v61 = v35;
    left = v51;
    v63 = v51;
    v52 = CoordMap::AddEntry(v16, v48, (__int64)v17, (__int64)&v61, 2);
    v38 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v52, 0x17Bu, 0LL);
      return v38;
    }
LABEL_67:
    v53 = v65;
    if ( v65 || !v32 )
    {
      v54 = a5->bottom - v26;
      v61 = v36;
      left = v54;
      v63 = v54;
      v55 = CoordMap::AddEntry(v16, v48, (__int64)v17, (__int64)&v61, 2);
      v38 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x182u, 0LL);
        return v38;
      }
      if ( v53 )
      {
        left = a5->bottom;
        v63 = left;
        v61 = v70->bottom;
        v57 = CoordMap::AddEntry(v56, v48, (__int64)v17, (__int64)&v61, 0);
        v38 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x187u, 0LL);
          return v38;
        }
      }
    }
    if ( v23 )
    {
      *(_QWORD *)&v66 = __PAIR64__(LODWORD(v35), LODWORD(v33));
      *((_QWORD *)&v66 + 1) = __PAIR64__(LODWORD(v36), LODWORD(v34));
      v59 = v66;
      *(_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                   (void **)v69 + 46,
                   (v69[47] - v69[46]) >> 4,
                   (__int64)v17) = v59;
    }
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v37, 0x15Cu, 0LL);
  return v38;
}
