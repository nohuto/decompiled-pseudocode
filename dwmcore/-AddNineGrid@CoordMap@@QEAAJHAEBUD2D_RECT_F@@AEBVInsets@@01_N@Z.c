/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x18002F33C
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18002F110 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18002E040 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x18002F9B0 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180030A6C (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x1800F54F8 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
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
  float bottom; // xmm0_4
  float top; // xmm2_4
  float v9; // xmm13_4
  float v10; // xmm14_4
  float v11; // xmm1_4
  __int64 v12; // r8
  float v13; // xmm15_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm12_4
  unsigned int v17; // ecx
  __int64 v18; // r8
  float *v19; // r10
  float v20; // xmm9_4
  float v21; // xmm2_4
  float v22; // xmm8_4
  float v23; // xmm4_4
  bool v24; // r13
  float v25; // xmm5_4
  float v26; // xmm13_4
  float v27; // xmm14_4
  bool v28; // al
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm5_4
  bool v32; // r15
  bool v33; // r14
  float v34; // xmm6_4
  float v35; // xmm15_4
  float v36; // xmm10_4
  float v37; // xmm7_4
  int v38; // eax
  unsigned int v39; // ebx
  float v40; // xmm9_4
  int v41; // eax
  float v42; // xmm0_4
  int v43; // eax
  bool v44; // zf
  CoordMap *v45; // r15
  int v46; // eax
  int v47; // eax
  float v48; // xmm8_4
  int v49; // eax
  float v50; // xmm0_4
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // eax
  unsigned int v54; // ecx
  __int64 v55; // rdx
  __int128 v56; // xmm6
  bool IsEmpty; // al
  float v59; // [rsp+38h] [rbp-D0h] BYREF
  float left; // [rsp+3Ch] [rbp-CCh]
  float v61; // [rsp+40h] [rbp-C8h]
  float v62; // [rsp+44h] [rbp-C4h]
  bool v63; // [rsp+48h] [rbp-C0h]
  __int128 v64; // [rsp+50h] [rbp-B8h] BYREF
  float v65; // [rsp+60h] [rbp-A8h]
  float v66; // [rsp+64h] [rbp-A4h]
  CoordMap *v67; // [rsp+68h] [rbp-A0h]
  float right; // [rsp+70h] [rbp-98h]
  float v69; // [rsp+74h] [rbp-94h]
  __int64 v70; // [rsp+78h] [rbp-90h]
  const struct D2D_RECT_F *v71; // [rsp+80h] [rbp-88h]

  bottom = a3->bottom;
  top = a3->top;
  v9 = a5->right - a5->left;
  v10 = a5->bottom - a5->top;
  right = a3->right;
  v11 = right - a3->left;
  *(float *)&v70 = bottom;
  v69 = top;
  v71 = a3;
  v67 = this;
  v66 = v11;
  v65 = bottom - top;
  Insets::Clamp(&v64, a4, this);
  v13 = *(float *)&v64;
  if ( *(float *)&v64 < 0.0000011920929 )
  {
    v13 = 0.0;
    LODWORD(v64) = 0;
  }
  v14 = *((float *)&v64 + 2);
  if ( *((float *)&v64 + 2) < 0.0000011920929 )
  {
    v14 = 0.0;
    DWORD2(v64) = 0;
  }
  v15 = *((float *)&v64 + 1);
  if ( *((float *)&v64 + 1) < 0.0000011920929 )
  {
    v15 = 0.0;
    DWORD1(v64) = 0;
  }
  v16 = *((float *)&v64 + 3);
  if ( *((float *)&v64 + 3) < 0.0000011920929 )
  {
    v16 = 0.0;
    HIDWORD(v64) = 0;
  }
  Insets::Clamp(&v59, a6, v12);
  v20 = v59;
  if ( v59 < 0.0000011920929 )
  {
    v20 = 0.0;
    v59 = 0.0;
  }
  v21 = v61;
  if ( v61 < 0.0000011920929 )
  {
    v21 = 0.0;
    v61 = 0.0;
  }
  v22 = left;
  if ( left < 0.0000011920929 )
  {
    v22 = 0.0;
    left = 0.0;
  }
  v23 = v62;
  if ( v62 < 0.0000011920929 )
  {
    v23 = 0.0;
    v62 = 0.0;
  }
  v24 = a7;
  v25 = v65;
  if ( a7 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v66 - (float)(v14 + v13)) & _xmm) > 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v65 - (float)(v16 + v15)) & _xmm) > 0.0000011920929 )
    {
      v26 = v61;
      v27 = v62;
      goto LABEL_21;
    }
    v24 = 0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 - v20) - v21) - (float)((float)(v66 - v13) - v14)) & _xmm) > 0.0000011920929 )
    goto LABEL_46;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v13) & _xmm) <= 0.0000011920929 )
  {
    v13 = 0.0;
    v20 = 0.0;
    LODWORD(v64) = 0;
    v59 = 0.0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v14) & _xmm) > 0.0000011920929 )
  {
LABEL_46:
    v26 = v61;
  }
  else
  {
    v14 = 0.0;
    v26 = 0.0;
    DWORD2(v64) = 0;
    v61 = 0.0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 - v22) - v23) - (float)((float)(v65 - v15) - v16)) & _xmm) > 0.0000011920929 )
    goto LABEL_48;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - v15) & _xmm) <= 0.0000011920929 )
  {
    v15 = 0.0;
    v22 = 0.0;
    DWORD1(v64) = 0;
    left = 0.0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - v16) & _xmm) > 0.0000011920929 )
  {
LABEL_48:
    v27 = v62;
  }
  else
  {
    v16 = 0.0;
    v27 = 0.0;
    HIDWORD(v64) = 0;
    v62 = 0.0;
  }
  if ( v24 || !Insets::IsEmpty((const struct Insets *)&v64) || !(IsEmpty = Insets::IsEmpty((const struct Insets *)&v59)) )
  {
LABEL_21:
    v28 = v13 > 0.0;
    LODWORD(v29) = COERCE_UNSIGNED_INT(v66 - (float)(v14 + v13)) & _xmm;
    v30 = *v19;
    LODWORD(v31) = COERCE_UNSIGNED_INT(v25 - (float)(v16 + v15)) & _xmm;
    v32 = v14 > 0.0;
    v63 = v15 > 0.0;
    v33 = v31 <= 0.0000011920929;
    v34 = v30 + v13;
    if ( v29 <= 0.0000011920929 )
      v35 = v30 + v13;
    else
      v35 = right - v14;
    v36 = v69 + v15;
    if ( v31 <= 0.0000011920929 )
      v37 = v69 + v15;
    else
      v37 = *(float *)&v70 - v16;
    if ( v28 )
    {
      v59 = v30;
      left = a5->left;
      v61 = left;
      v38 = CoordMap::AddEntry(v17, v18, v18, (unsigned int)&v59, 0);
      v39 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v38, 0x15Cu, 0LL);
        return v39;
      }
      LODWORD(v18) = (_DWORD)v67;
    }
    else if ( v29 <= 0.0000011920929 )
    {
      goto LABEL_30;
    }
    v40 = v20 + a5->left;
    v59 = v34;
    left = v40;
    v61 = v40;
    v41 = CoordMap::AddEntry(v17, v18, v18, (unsigned int)&v59, 2u);
    v39 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v41, 0x163u, 0LL);
      return v39;
    }
    v18 = (__int64)v67;
LABEL_30:
    if ( v32 || v29 > 0.0000011920929 )
    {
      v42 = a5->right - v26;
      v59 = v35;
      left = v42;
      v61 = v42;
      v43 = CoordMap::AddEntry(v17, v18, v18, (unsigned int)&v59, 2u);
      v39 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v43, 0x16Au, 0LL);
        return v39;
      }
      v44 = !v32;
      v45 = v67;
      if ( !v44 )
      {
        left = a5->right;
        v61 = left;
        v59 = v71->right;
        v46 = CoordMap::AddEntry(v17, (_DWORD)v67, v18, (unsigned int)&v59, 0);
        v39 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v46, 0x16Fu, 0LL);
          return v39;
        }
      }
    }
    else
    {
      v45 = v67;
    }
    if ( v63 )
    {
      left = a5->top;
      v61 = left;
      v59 = v71->top;
      v47 = CoordMap::AddEntry(v17, (int)v45 + 184, v18, (unsigned int)&v59, 0);
      v39 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v47, 0x174u, 0LL);
        return v39;
      }
    }
    else if ( v33 )
    {
LABEL_37:
      if ( v16 > 0.0 || !v33 )
      {
        v50 = a5->bottom - v27;
        v59 = v37;
        left = v50;
        v61 = v50;
        v51 = CoordMap::AddEntry(v17, (int)v45 + 184, v18, (unsigned int)&v59, 2u);
        v39 = v51;
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x182u, 0LL);
          return v39;
        }
        if ( v16 > 0.0 )
        {
          left = a5->bottom;
          v61 = left;
          v59 = v71->bottom;
          v53 = CoordMap::AddEntry(v52, (int)v45 + 184, v18, (unsigned int)&v59, 0);
          v39 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x187u, 0LL);
            return v39;
          }
        }
      }
      if ( v24 )
      {
        *(_QWORD *)&v64 = __PAIR64__(LODWORD(v36), LODWORD(v34));
        v55 = (__int64)(*((_QWORD *)v45 + 47) - *((_QWORD *)v45 + 46)) >> 4;
        *((_QWORD *)&v64 + 1) = __PAIR64__(LODWORD(v37), LODWORD(v35));
        v56 = v64;
        *(_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                     (CoordMap *)((char *)v45 + 368),
                     v55,
                     v18) = v56;
      }
      return 0;
    }
    v48 = v22 + a5->top;
    v59 = v36;
    left = v48;
    v61 = v48;
    v49 = CoordMap::AddEntry(v17, (int)v45 + 184, v18, (unsigned int)&v59, 2u);
    v39 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v49, 0x17Bu, 0LL);
      return v39;
    }
    goto LABEL_37;
  }
  return 0;
}
