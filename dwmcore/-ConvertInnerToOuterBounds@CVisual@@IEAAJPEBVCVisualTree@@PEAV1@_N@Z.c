__int64 __fastcall CVisual::ConvertInnerToOuterBounds(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        char a4)
{
  __int64 v4; // rax
  float v6; // xmm7_4
  unsigned __int64 *v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  _DWORD *v11; // r8
  float *v12; // r11
  __int64 v13; // rax
  float v14; // xmm1_4
  float *v15; // rsi
  float *v16; // r14
  int v17; // ecx
  float *v18; // r13
  float *v19; // r12
  float *v20; // r15
  unsigned int v21; // eax
  char v22; // dl
  float v23; // xmm1_4
  __m128 *v24; // r9
  float *v25; // r10
  float *v27; // rdx
  bool v28; // al
  __int32 v29; // eax
  __int64 v30; // rdx
  __m128 v31; // xmm5
  __m128 v32; // xmm4
  __m128 v33; // xmm2
  char v34; // al
  __m128 v35; // xmm3
  char v36; // r8
  char v37; // al
  char v38; // al
  __m128 *v39; // rcx
  char v40; // al
  char v41; // al
  bool v42; // r11
  char v43; // al
  char v44; // al
  bool v45; // r11
  bool v46; // r8
  float *v47; // rdi
  char v48; // al
  char v49; // cl
  char v50; // al
  __int64 v51; // rdx
  _BYTE *v52; // rax
  __int64 i; // rcx
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  float v57; // edx
  float *v58; // rcx
  struct CEffect *EffectInternal; // rdi
  CVisual *v60; // rcx
  float v61; // xmm1_4
  float v62; // xmm2_4
  float v63; // xmm3_4
  float v64; // xmm7_4
  float v65; // xmm6_4
  __m128 v66; // xmm3
  __m128 v67; // xmm2
  __m128 *v68; // rax
  char v70; // [rsp+48h] [rbp-C0h]
  __m128 *v71; // [rsp+50h] [rbp-B8h]
  float *v72; // [rsp+58h] [rbp-B0h]
  __int128 v73; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v74; // [rsp+78h] [rbp-90h]
  __m128 v75; // [rsp+88h] [rbp-80h]
  __m128 v76; // [rsp+98h] [rbp-70h]
  __int32 v77; // [rsp+A8h] [rbp-60h]
  unsigned int v78; // [rsp+B8h] [rbp-50h]
  __m128 *v79; // [rsp+C0h] [rbp-48h]
  __int128 v80; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v81; // [rsp+D8h] [rbp-30h]
  __int128 v82; // [rsp+E8h] [rbp-20h]
  __int128 v83; // [rsp+F8h] [rbp-10h]
  int v84; // [rsp+108h] [rbp+0h]
  const struct CVisualTree *v85; // [rsp+118h] [rbp+10h]
  CVisual *v86; // [rsp+120h] [rbp+18h]
  _BYTE v87[64]; // [rsp+138h] [rbp+30h] BYREF
  int v88; // [rsp+178h] [rbp+70h]
  __int128 v89; // [rsp+188h] [rbp+80h] BYREF
  __int64 v90; // [rsp+198h] [rbp+90h]
  _QWORD v91[3]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v92[3]; // [rsp+1B8h] [rbp+B0h] BYREF

  v4 = *(_QWORD *)this;
  v78 = 0;
  v86 = a3;
  v85 = a2;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(v4 + 56))(this, 93LL)
    && (*((_QWORD *)this + 89) || *((_QWORD *)this + 88))
    && !*((_BYTE *)this + 728) )
  {
    *((_DWORD *)this + 45) = *((_DWORD *)this + 35);
    *((_DWORD *)this + 46) = *((_DWORD *)this + 36);
    *(_QWORD *)((char *)this + 172) = 0LL;
  }
  v6 = *(float *)&FLOAT_1_0;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           58LL) )
    {
      v6 = *((float *)EffectInternal + 20);
    }
  }
  v7 = (unsigned __int64 *)((char *)this + 148);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v6, 0.0))) & _xmm) < 0.0000011920929 )
  {
    *(_QWORD *)((char *)this + 164) = 0LL;
    *(_QWORD *)((char *)this + 156) = 0LL;
    *v7 = 0LL;
  }
  else
  {
    v8 = CVisual::CalcRootBounds(this);
    v78 = v8;
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x57Au, 0LL);
      return v10;
    }
  }
  v11 = (_DWORD *)*((_QWORD *)this + 29);
  v12 = (float *)((char *)this + 148);
  if ( (*v11 & 0x4000000) != 0 )
  {
    v51 = (unsigned int)v11[1];
    v52 = v11 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v51; ++v52 )
    {
      if ( *v52 == 6 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v51 )
      v54 = 0LL;
    else
      v54 = (__int64 *)((char *)v11 + v51 + 8 * i - (((_BYTE)v51 + 15) & 7) + 15);
    v55 = *v54;
    if ( v55 )
    {
      *(_OWORD *)(v55 + 72) = *(_OWORD *)v7;
      *(_QWORD *)(v55 + 88) = *(_QWORD *)((char *)this + 164);
    }
  }
  v13 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v13 + 4) & 0x8000000) != 0 )
  {
    v57 = *(float *)(v13 + 12);
    v58 = (float *)(v13 + 12);
    if ( (LODWORD(v57) & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v58 = (float *)((char *)v58 + (LODWORD(v57) & 0xFFFFFF) + 4);
        v57 = *v58;
      }
      while ( (*(_DWORD *)v58 & 0x7F000000) != 0x5000000 );
    }
    v14 = v58[1];
  }
  else
  {
    v14 = *(float *)&FLOAT_1_0;
  }
  v15 = (float *)((char *)this + 164);
  v16 = (float *)((char *)this + 168);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v14, 0.0))) & _xmm) < 0.0000011920929 )
  {
    *((_DWORD *)this + 40) = 0;
    v19 = (float *)((char *)this + 160);
    *((_DWORD *)this + 39) = 0;
    v18 = (float *)((char *)this + 156);
    *v15 = 0.0;
    *v16 = 0.0;
    v20 = (float *)((char *)this + 152);
    *((_DWORD *)this + 38) = 0;
    *(_DWORD *)v7 = 0;
    goto LABEL_22;
  }
  v17 = (*v16 <= *v15) + 1;
  v18 = (float *)((char *)this + 156);
  v19 = (float *)((char *)this + 160);
  v20 = (float *)((char *)this + 152);
  if ( *((float *)this + 39) > *(float *)v7 )
    v17 = *v16 <= *v15;
  v21 = v17 + 1;
  if ( *((float *)this + 40) > *v20 )
    v21 = v17;
  if ( v21 > 1 )
    goto LABEL_22;
  if ( !a4 )
  {
    v22 = 0;
    v84 = 0;
    v81 = _xmm;
    v83 = _xmm;
    v23 = *((float *)this + 31);
    v70 = 0;
    LOWORD(v84) = 5973;
    v80 = _xmm;
    v82 = _xmm;
    if ( v23 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      v22 = 1;
      *(_QWORD *)&v83 = __PAIR64__(*((_DWORD *)this + 32), LODWORD(v23));
      DWORD2(v83) = *((_DWORD *)this + 30);
      LOBYTE(v84) = 84;
      v70 = 1;
    }
    v24 = (__m128 *)*((_QWORD *)this + 30);
    v25 = (float *)((char *)this + 148);
    v79 = v24;
    v72 = (float *)((char *)this + 148);
    if ( !v24 )
      goto LABEL_19;
    v27 = (float *)((char *)this + 140);
    v28 = (v24[2].m128_i8[0] & 1) != 0;
    if ( this != (CVisual *)-140LL )
    {
      if ( (v24[2].m128_i8[0] & 1) == 0
        && v24[9].m128_i8[12]
        && (v24[9].m128_f32[1] != *v27 || v24[9].m128_f32[2] != *((float *)this + 36)) )
      {
        v28 = 1;
      }
      *(unsigned __int64 *)((char *)v24[9].m128_u64 + 4) = *(_QWORD *)v27;
    }
    if ( v28 )
    {
      (*(void (__fastcall **)(__m128 *, float *, __m128 *))(v24->m128_u64[0] + 200))(v24, v27, v24 + 5);
      v24 = v79;
      v12 = (float *)((char *)this + 148);
      v79[2].m128_i32[0] &= ~1u;
    }
    v29 = v24[9].m128_i32[0];
    v30 = (unsigned __int8)v29;
    v31 = v24[5];
    v77 = v29;
    v32 = v24[6];
    v33 = v24[7];
    v34 = (char)((_BYTE)v29 << 6) >> 6;
    v73 = (__int128)v31;
    v74 = v32;
    v75 = v33;
    v35 = v24[8];
    v76 = v35;
    if ( v34 )
    {
      v72 = v12;
      v25 = v12;
      if ( v34 == 1 )
        goto LABEL_68;
      v39 = (__m128 *)((char *)this + 148);
      v71 = (__m128 *)((char *)this + 148);
LABEL_71:
      v47 = v25;
      v48 = (char)((_BYTE)v84 << 6) >> 6;
      v79 = v39;
      if ( v48 )
      {
        v7 = (unsigned __int64 *)v71;
        if ( v48 == 1 )
          goto LABEL_73;
      }
      else
      {
        if ( CMILMatrix::IsTranslate<1>((__int64)&v80, v30)
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v83 - 0.0) & _xmm) < 0.000081380211 )
        {
          v25 = v47;
          v72 = v47;
          v7 = (unsigned __int64 *)v79;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v83 + 1) - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v83 + 2) - 0.0) & _xmm) < 0.000081380211 )
          {
            v35 = v76;
            v33 = v75;
            v32 = v74;
            v31 = (__m128)v73;
            goto LABEL_73;
          }
          v72 = v25;
        }
        else
        {
          v7 = (unsigned __int64 *)v71;
        }
        LOBYTE(v84) = v84 | 3;
      }
      if ( !CMILMatrix::IsTranslate<1>((__int64)&v80, v30) )
      {
        if ( CMILMatrix::IsTranslate<1>((__int64)&v73, v56) )
        {
          v61 = v76.m128_f32[0];
          v62 = v76.m128_f32[1];
          v63 = v76.m128_f32[2];
          v73 = v80;
          v74 = (__m128)v81;
          v75 = (__m128)v82;
          v76 = (__m128)v83;
          v77 = v84;
          CMILMatrix::PrependTranslate((CMILMatrix *)&v73, v61, v62, v63);
          goto LABEL_97;
        }
        if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(&v80) )
        {
          if ( !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v73)
            || !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v80) )
          {
            v68 = (__m128 *)Windows::Foundation::Numerics::operator*(v87, &v73, &v80);
            v31 = *v68;
            v73 = (__int128)*v68;
            v32 = v68[1];
            v74 = v32;
            v33 = v68[2];
            v75 = v33;
            v35 = v68[3];
            v77 = 0;
            goto LABEL_99;
          }
          v64 = v75.m128_f32[2];
          v65 = v76.m128_f32[2];
          v92[0] = v73;
          v92[1] = v74.m128_u64[0];
          v92[2] = v76.m128_u64[0];
          v91[0] = v80;
          v91[1] = v81;
          v91[2] = v83;
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v89,
            (const struct D2D1::Matrix3x2F *)v92,
            (const struct D2D1::Matrix3x2F *)v91);
          CMILMatrix::Set2DAffineMatrix(
            (CMILMatrix *)&v73,
            *(float *)&v89,
            *((float *)&v89 + 1),
            *((float *)&v89 + 2),
            *((float *)&v89 + 3),
            *(float *)&v90,
            *((float *)&v90 + 1));
          v66 = _mm_shuffle_ps(v76, v76, 210);
          v67 = _mm_shuffle_ps(v75, v75, 210);
          v67.m128_f32[0] = v64 * *((float *)&v82 + 2);
          v33 = _mm_shuffle_ps(v67, v67, 201);
          v66.m128_f32[0] = (float)(v65 * *((float *)&v82 + 2)) + *((float *)&v83 + 2);
          v75 = v33;
          v35 = _mm_shuffle_ps(v66, v66, 201);
          v76 = v35;
LABEL_98:
          v32 = v74;
          v31 = (__m128)v73;
LABEL_99:
          v25 = v72;
          goto LABEL_73;
        }
        CMILMatrix::Scale((CMILMatrix *)&v73, *(float *)&v80, *((float *)&v81 + 1), *((float *)&v82 + 2));
      }
      CMILMatrix::Translate((CMILMatrix *)&v73, *(float *)&v83, *((float *)&v83 + 1), *((float *)&v83 + 2));
LABEL_97:
      v35 = v76;
      v33 = v75;
      goto LABEL_98;
    }
    v36 = BYTE1(v77);
    v37 = (char)(16 * BYTE1(v77)) >> 6;
    if ( !v37 )
    {
      v38 = (char)(4 * BYTE1(v77)) >> 6;
      if ( v38 )
      {
        if ( v38 != 1
          || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(_mm_shuffle_ps(v33, v33, 255).m128_u32[0] & _xmm)
                                                    * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
        {
          v38 = 0;
        }
      }
      else
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(v74.m128_i32[3] & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(HIDWORD(v73) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(v76.m128_i32[3] & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
        {
          v49 = 0;
          v50 = 48;
        }
        else
        {
          v49 = 1;
          v50 = 16;
        }
        v36 = v50 | BYTE1(v77) & 0xCF;
        v38 = v49 & (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                    (float)(COERCE_FLOAT(_mm_shuffle_ps(v33, v33, 255).m128_u32[0] & _xmm) * 61440.0)
                                  - 0.0) & _xmm) < 0.000081380211);
      }
      v72 = v12;
      v39 = (__m128 *)((char *)this + 148);
      v71 = (__m128 *)((char *)this + 148);
      v25 = v12;
      if ( v38 )
      {
        v72 = v12;
        v71 = (__m128 *)((char *)this + 148);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v33.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v33, v33, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
          {
            v36 = v36 & 0xF3 | 4;
            BYTE1(v77) = v36;
LABEL_43:
            v79 = v39;
            v40 = (char)(16 * v30) >> 6;
            if ( v40 )
            {
              if ( v40 == 1 )
              {
LABEL_50:
                v72 = v25;
                v43 = (char)(4 * v30) >> 6;
                v71 = v39;
                v79 = v39;
                if ( v43 )
                {
                  v71 = v39;
                  v72 = v25;
                  v46 = v43 == 1;
                  goto LABEL_62;
                }
                if ( !((char)v30 >> 6) )
                {
                  v44 = (char)(4 * v36) >> 6;
                  if ( v44 )
                  {
                    v45 = v44 == 1;
                  }
                  else
                  {
                    v45 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                         (float)((float)((float)(COERCE_FLOAT(v74.m128_i32[3] & _xmm) * 61440.0)
                                                       + (float)(COERCE_FLOAT(HIDWORD(v73) & _xmm) * 61440.0))
                                               + COERCE_FLOAT(v76.m128_i32[3] & _xmm))
                                       - 1.0) & _xmm) < 0.000081380211;
                    BYTE1(v77) = (v36 ^ (-16 - 32 * v45)) & 0x30 ^ v36;
                  }
                  if ( v45 )
                  {
                    v72 = v25;
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v31, v31, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                    {
                      v71 = v79;
                      v39 = v79;
                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                      {
                        LOBYTE(v30) = v30 & 0x3F | 0x40;
LABEL_58:
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v31.m128_f32[0] - 1.0) & _xmm) < 0.000081380211 )
                        {
                          v72 = v25;
                          v71 = v39;
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v32, v32, 85).m128_f32[0] - 1.0) & _xmm) < 0.000081380211 )
                          {
                            v46 = 1;
LABEL_61:
                            LOBYTE(v30) = (v30 ^ (-16 - 32 * v46)) & 0x30 ^ v30;
LABEL_62:
                            if ( v46
                              && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v33, v33, 170).m128_f32[0] - 1.0) & _xmm) < 0.000081380211 )
                            {
                              v72 = v25;
                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v35.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
                                && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v35, v35, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
                                && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v35, v35, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                              {
                                v7 = (unsigned __int64 *)v39;
LABEL_68:
                                v31 = (__m128)v80;
                                v32 = (__m128)v81;
                                v33 = (__m128)v82;
                                v35 = (__m128)v83;
                                v77 = v84;
LABEL_73:
                                v22 = 1;
                                v70 = 1;
                                v80 = (__int128)v31;
                                v81 = (__int128)v32;
                                v82 = (__int128)v33;
                                v83 = (__int128)v35;
                                v84 = v77;
LABEL_19:
                                if ( !v86 )
                                {
                                  if ( v22 )
                                    CMILMatrix::Transform3DBoundsHelper<0>((CMILMatrix *)&v80, v25, v25);
                                  goto LABEL_22;
                                }
                                v60 = (CVisual *)*((_QWORD *)this + 11);
                                v88 = 0;
                                CVisual::GetWorldTransform(v60, v85, 1, (struct CMILMatrix *)v87, 0LL, 0LL);
                                if ( CMILMatrix::Invert((CMILMatrix *)v87) )
                                {
                                  v77 = 0;
                                  CVisual::GetWorldTransform(v86, v85, 1, (struct CMILMatrix *)&v73, 0LL, 0LL);
                                  if ( v70 )
                                    CMILMatrix::Multiply(
                                      (const struct CMILMatrix *)&v80,
                                      (const struct CMILMatrix *)&v73,
                                      (struct CMILMatrix *)&v73);
                                  v90 = 0LL;
                                  v89 = 0LL;
                                  CMILMatrix::Transform3DBoundsHelper<0>((CMILMatrix *)&v73, v72, (float *)&v89);
                                  CMILMatrix::Transform3DBoundsHelper<0>((CMILMatrix *)v87, (float *)&v89, v72);
                                  goto LABEL_22;
                                }
                                goto LABEL_147;
                              }
                              v71 = v39;
                              v72 = v25;
                            }
                            goto LABEL_70;
                          }
                          v71 = v39;
                          v72 = v25;
                        }
LABEL_88:
                        v46 = 0;
                        goto LABEL_61;
                      }
                      v72 = v25;
                    }
                    v71 = v39;
                  }
                  LOBYTE(v30) = v30 | 0xC0;
                  goto LABEL_88;
                }
                v71 = v39;
                v72 = v25;
                if ( (char)v30 >> 6 != 1 )
                  goto LABEL_88;
                goto LABEL_58;
              }
            }
            else
            {
              v41 = (char)(4 * v36) >> 6;
              if ( v41 )
              {
                v42 = v41 == 1;
              }
              else
              {
                v42 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                     (float)((float)((float)(COERCE_FLOAT(v74.m128_i32[3] & _xmm) * 61440.0)
                                                   + (float)(COERCE_FLOAT(HIDWORD(v73) & _xmm) * 61440.0))
                                           + COERCE_FLOAT(v76.m128_i32[3] & _xmm))
                                   - 1.0) & _xmm) < 0.000081380211;
                v36 ^= (v36 ^ (-16 - 32 * v42)) & 0x30;
                v39 = v71;
                BYTE1(v77) = v36;
              }
              if ( v42
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v31, v31, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
              {
                v39 = v79;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v32, v32, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                {
                  LOBYTE(v30) = v30 & 0xF3 | 4;
                  goto LABEL_50;
                }
                v71 = v79;
                v72 = v25;
              }
              LOBYTE(v30) = v30 | 0xC;
            }
LABEL_70:
            LOBYTE(v30) = v30 | 3;
            LOBYTE(v77) = v30;
            goto LABEL_71;
          }
          v71 = (__m128 *)((char *)this + 148);
          v72 = v12;
        }
      }
      BYTE1(v77) = v36 | 0xC;
      goto LABEL_70;
    }
    v72 = v12;
    v39 = (__m128 *)((char *)this + 148);
    v71 = (__m128 *)((char *)this + 148);
    v25 = v12;
    if ( v37 != 1 )
      goto LABEL_70;
    goto LABEL_43;
  }
LABEL_147:
  *(_OWORD *)v7 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v7[2] = qword_1803E1FC8;
LABEL_22:
  if ( *v18 < *(float *)v7 || *v19 < *v20 || *v16 < *v15 )
  {
    *(_OWORD *)v7 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v7[2] = qword_1803E1FC8;
  }
  return v78;
}
