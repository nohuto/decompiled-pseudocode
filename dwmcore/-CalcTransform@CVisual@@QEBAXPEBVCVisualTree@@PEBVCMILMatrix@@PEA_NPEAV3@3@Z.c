void __fastcall CVisual::CalcTransform(
        CVisual *this,
        CVisual **a2,
        const struct CMILMatrix *a3,
        bool *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  _DWORD *v6; // rax
  char v10; // r15
  CTransform3D *v11; // r12
  bool *v12; // rdx
  float v13; // xmm4_4
  __m128 *v14; // rdi
  __int64 v15; // rax
  char v16; // r15
  bool v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  bool *v20; // rdi
  float v21; // xmm11_4
  float v22; // xmm5_4
  char v23; // r8
  char v24; // al
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  const struct D2D_SIZE_F *v29; // rdx
  char v30; // cl
  __int32 v31; // eax
  __int64 v32; // rdx
  __m128 v33; // xmm14
  __m128 v34; // xmm13
  __m128 v35; // xmm11
  char v36; // al
  __m128 v37; // xmm12
  char v38; // r8
  char v39; // al
  char v40; // al
  char v41; // cl
  char v42; // al
  char v43; // al
  bool v44; // r9
  char v45; // al
  char v46; // al
  bool v47; // r9
  bool v48; // r8
  int v49; // eax
  char v50; // al
  char v51; // al
  char v52; // al
  bool v53; // al
  bool v54; // al
  char v55; // cl
  char v56; // al
  char v57; // al
  bool v58; // cl
  __m128 v59; // xmm0
  __m128 v60; // xmm1
  __m128 v61; // xmm0
  __m128 v62; // xmm1
  const struct CMILMatrix *Matrix; // rax
  int v64; // xmm0_4
  int v65; // xmm1_4
  struct CEffect *v66; // rax
  __m128 v67; // xmm0
  __m128 v68; // xmm4
  float v69; // xmm1_4
  float v70; // xmm2_4
  float v71; // xmm3_4
  __m128 v72; // xmm0
  __m128 v73; // xmm4
  char v74; // cl
  float v75; // xmm0_4
  float v76; // xmm4_4
  char v77; // r11
  float v78; // xmm6_4
  float v79; // xmm7_4
  int v80; // xmm1_4
  int v81; // xmm0_4
  int v82; // xmm1_4
  int v83; // xmm0_4
  int v84; // xmm1_4
  __m128 v85; // xmm12
  __m128 v86; // xmm11
  float v87; // xmm0_4
  __m128 *v88; // rax
  char v89; // al
  const struct CMILMatrix *v90; // rax
  unsigned int v91; // r9d
  int v92; // xmm1_4
  int v93; // xmm0_4
  int v94; // xmm1_4
  int v95; // xmm0_4
  int v96; // xmm1_4
  int v97; // xmm0_4
  int v98; // xmm1_4
  int v99; // xmm0_4
  int v100; // xmm1_4
  int v101; // xmm0_4
  int v102; // xmm1_4
  int v103; // xmm0_4
  int v104; // xmm1_4
  int v105; // xmm0_4
  int v106; // xmm1_4
  int v107; // ecx
  int v108; // r8d
  int v109; // r9d
  int v110; // xmm1_4
  int v111; // xmm0_4
  int v112; // xmm1_4
  int v113; // xmm0_4
  int v114; // xmm1_4
  int v115; // xmm0_4
  int v116; // xmm1_4
  int v117; // xmm0_4
  int v118; // xmm1_4
  int v119; // xmm0_4
  int v120; // xmm1_4
  int v121; // xmm0_4
  int v122; // xmm1_4
  int v123; // xmm0_4
  int v124; // xmm1_4
  int v125; // ecx
  int v126; // r8d
  int v127; // r9d
  char v128; // [rsp+B8h] [rbp-80h]
  bool v129; // [rsp+B9h] [rbp-7Fh]
  bool *v130; // [rsp+C0h] [rbp-78h] BYREF
  __m128 v131; // [rsp+C8h] [rbp-70h] BYREF
  __m128 v132; // [rsp+D8h] [rbp-60h]
  __m128 v133; // [rsp+E8h] [rbp-50h]
  __m128 v134; // [rsp+F8h] [rbp-40h]
  __int32 v135; // [rsp+108h] [rbp-30h]
  int v136; // [rsp+118h] [rbp-20h] BYREF
  int v137; // [rsp+11Ch] [rbp-1Ch] BYREF
  int v138; // [rsp+120h] [rbp-18h] BYREF
  int v139; // [rsp+124h] [rbp-14h] BYREF
  int v140; // [rsp+128h] [rbp-10h] BYREF
  int v141; // [rsp+12Ch] [rbp-Ch] BYREF
  int v142; // [rsp+130h] [rbp-8h] BYREF
  int v143; // [rsp+134h] [rbp-4h] BYREF
  int v144; // [rsp+138h] [rbp+0h] BYREF
  int v145; // [rsp+13Ch] [rbp+4h] BYREF
  int v146; // [rsp+140h] [rbp+8h] BYREF
  int v147; // [rsp+144h] [rbp+Ch] BYREF
  int v148; // [rsp+148h] [rbp+10h] BYREF
  int v149; // [rsp+14Ch] [rbp+14h] BYREF
  struct CEffect *EffectInternal; // [rsp+150h] [rbp+18h] BYREF
  struct CInteraction *InteractionInternal; // [rsp+158h] [rbp+20h] BYREF
  struct CInteraction *v152; // [rsp+160h] [rbp+28h] BYREF
  char v153[64]; // [rsp+168h] [rbp+30h] BYREF
  _DWORD v154[6]; // [rsp+1A8h] [rbp+70h] BYREF
  _QWORD v155[3]; // [rsp+1C0h] [rbp+88h] BYREF
  float v156[6]; // [rsp+1D8h] [rbp+A0h] BYREF

  v6 = (_DWORD *)*((_QWORD *)this + 29);
  v10 = 0;
  v130 = a4;
  v11 = 0LL;
  v128 = 0;
  if ( (*v6 & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           187LL) )
    {
      v11 = EffectInternal;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                EffectInternal,
                58LL) )
    {
      v11 = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
  }
  v12 = v130;
  *v130 = 0;
  if ( a3 )
  {
    v10 = 1;
    v128 = 1;
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *((_OWORD *)a5 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a5 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a5 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)a5 + 16) = *((_DWORD *)a3 + 16);
  }
  if ( this != a2[8] )
  {
    v13 = *((float *)this + 31);
    if ( v13 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      if ( v10 )
      {
        v21 = *((float *)this + 30);
        v22 = *((float *)this + 32);
        if ( COERCE_FLOAT(LODWORD(v13) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(LODWORD(v22) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.000081380211 )
        {
          v23 = *((_BYTE *)a5 + 65);
          v24 = (char)(4 * v23) >> 6;
          v25 = v13 * *((float *)a5 + 2);
          v26 = (float)((float)(v22 * *((float *)a5 + 5)) + (float)(v13 * *((float *)a5 + 1)))
              + (float)(v21 * *((float *)a5 + 9));
          v27 = v21 * *((float *)a5 + 10);
          *((float *)a5 + 12) = (float)((float)((float)(v22 * *((float *)a5 + 4)) + (float)(v13 * *(float *)a5))
                                      + (float)(v21 * *((float *)a5 + 8)))
                              + *((float *)a5 + 12);
          v28 = (float)(v22 * *((float *)a5 + 6)) + v25;
          *((float *)a5 + 13) = v26 + *((float *)a5 + 13);
          *((float *)a5 + 14) = (float)(v28 + v27) + *((float *)a5 + 14);
          if ( v24 )
          {
            if ( v24 != 1
              || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a5 + 11) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
            {
              v24 = 0;
            }
          }
          else
          {
            LODWORD(v75) = *((_DWORD *)a5 + 11) & _xmm;
            v24 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                 (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a5 + 7) & _xmm) * 61440.0)
                                               + (float)(COERCE_FLOAT(*((_DWORD *)a5 + 3) & _xmm) * 61440.0))
                                       + COERCE_FLOAT(*((_DWORD *)a5 + 15) & _xmm))
                               - 1.0) & _xmm) < 0.000081380211;
            v12 = v130;
            *((_BYTE *)a5 + 65) = v23 ^ (v23 ^ (-16 - 32 * v24)) & 0x30;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v75 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
              v24 = 0;
          }
          if ( v24 )
          {
            *((_BYTE *)a5 + 64) &= 0xFCu;
          }
          else
          {
            v76 = v13 * *((float *)a5 + 3);
            *((_DWORD *)a5 + 16) = 0;
            *((float *)a5 + 15) = (float)((float)(v76 + (float)(v22 * *((float *)a5 + 7)))
                                        + (float)(v21 * *((float *)a5 + 11)))
                                + *((float *)a5 + 15);
          }
        }
      }
      else
      {
        v64 = *((_DWORD *)this + 32);
        v10 = 1;
        v65 = *((_DWORD *)this + 30);
        *(_QWORD *)a5 = 1065353216LL;
        *((_QWORD *)a5 + 1) = 0LL;
        *((_DWORD *)a5 + 4) = 0;
        *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
        *(_QWORD *)((char *)a5 + 28) = 0LL;
        *((_DWORD *)a5 + 9) = 0;
        *((_QWORD *)a5 + 5) = 1065353216LL;
        *((float *)a5 + 12) = v13;
        *((_DWORD *)a5 + 13) = v64;
        *((_DWORD *)a5 + 14) = v65;
        *((_DWORD *)a5 + 15) = 1065353216;
        v128 = 1;
        *((_BYTE *)a5 + 64) = 84;
        *((_BYTE *)a5 + 65) = *((_BYTE *)a5 + 65) & 0xC0 | 0x17;
      }
      *v12 = 1;
    }
    v14 = (__m128 *)*((_QWORD *)this + 30);
    if ( v14 )
    {
      v29 = (const struct D2D_SIZE_F *)((char *)this + 140);
      if ( !v10 )
      {
        Matrix = CTransform3D::GetMatrix(*((CTransform3D **)this + 30), v29);
        v10 = 1;
        v128 = 1;
        *(_OWORD *)a5 = *(_OWORD *)Matrix;
        *((_OWORD *)a5 + 1) = *((_OWORD *)Matrix + 1);
        *((_OWORD *)a5 + 2) = *((_OWORD *)Matrix + 2);
        *((_OWORD *)a5 + 3) = *((_OWORD *)Matrix + 3);
        v49 = *((_DWORD *)Matrix + 16);
        goto LABEL_87;
      }
      v30 = v14[2].m128_i8[0] & 1;
      if ( this != (CVisual *)-140LL )
      {
        if ( (v14[2].m128_i8[0] & 1) == 0
          && v14[9].m128_i8[12]
          && (v14[9].m128_f32[1] != v29->width || v14[9].m128_f32[2] != *((float *)this + 36)) )
        {
          v30 = 1;
        }
        *(struct D2D_SIZE_F *)&v14[9].m128_i16[2] = *v29;
      }
      if ( v30 )
      {
        (*(void (__fastcall **)(__m128 *, const struct D2D_SIZE_F *, __m128 *))(v14->m128_u64[0] + 200))(
          v14,
          v29,
          v14 + 5);
        v14[2].m128_i32[0] &= ~1u;
      }
      v31 = v14[9].m128_i32[0];
      v32 = (unsigned __int8)v31;
      v33 = v14[5];
      v135 = v31;
      v34 = v14[6];
      v35 = v14[7];
      v36 = (char)((_BYTE)v31 << 6) >> 6;
      v131 = v33;
      v132 = v34;
      v133 = v35;
      v37 = v14[8];
      v134 = v37;
      if ( v36 )
      {
        if ( v36 == 1 )
          goto LABEL_85;
LABEL_93:
        v50 = (char)(*((_BYTE *)a5 + 64) << 6) >> 6;
        if ( v50 )
        {
          v54 = v50 == 1;
LABEL_104:
          if ( v54 )
            goto LABEL_86;
          v56 = (char)(16 * *((_BYTE *)a5 + 65)) >> 6;
          if ( v56 )
          {
            if ( v56 == 1 )
            {
LABEL_107:
              if ( CMILMatrix::ProducesUniformZ<1>((__int64)a5) )
              {
                v57 = (char)(4 * *((_BYTE *)a5 + 64)) >> 6;
                if ( v57 )
                {
                  v58 = v57 == 1;
                }
                else
                {
                  v58 = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a5)
                     && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a5 - 1.0) & _xmm) < 0.000081380211
                     && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 5) - 1.0) & _xmm) < 0.000081380211;
                  *((_BYTE *)a5 + 64) &= 0xCFu;
                  *((_BYTE *)a5 + 64) |= (v77 - 32 * v58) & 0x30;
                }
                if ( v58 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 10) - 1.0) & _xmm) < 0.000081380211 )
                  goto LABEL_112;
              }
            }
          }
          else
          {
            if ( CMILMatrix::IsAffine<1>((__int64)a5, 0)
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 8) - 0.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 9) - 0.0) & _xmm) < 0.000081380211 )
            {
              *((_BYTE *)a5 + 65) &= ~8u;
              *((_BYTE *)a5 + 65) |= 4u;
              goto LABEL_107;
            }
            *((_BYTE *)a5 + 65) |= 0xCu;
          }
          if ( CMILMatrix::IsTranslate<1>((__int64)&v131, v32) )
          {
            v67 = *(__m128 *)a5;
            v68 = *((__m128 *)a5 + 1);
            v135 = *((_DWORD *)a5 + 16);
            v69 = v134.m128_f32[0];
            v70 = v134.m128_f32[1];
            v71 = v134.m128_f32[2];
            v131 = v67;
            v72 = *((__m128 *)a5 + 2);
            v132 = v68;
            v73 = *((__m128 *)a5 + 3);
            v133 = v72;
            v134 = v73;
            CMILMatrix::PrependTranslate((CMILMatrix *)&v131, v69, v70, v71);
            goto LABEL_113;
          }
          if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a5) )
          {
            if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v131)
              && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a5) )
            {
              v78 = v133.m128_f32[2];
              v79 = v134.m128_f32[2];
              v155[0] = v131.m128_u64[0];
              v155[1] = v132.m128_u64[0];
              v155[2] = v134.m128_u64[0];
              v80 = *((_DWORD *)a5 + 1);
              v154[0] = *(_DWORD *)a5;
              v81 = *((_DWORD *)a5 + 4);
              v154[1] = v80;
              v82 = *((_DWORD *)a5 + 5);
              v154[2] = v81;
              v83 = *((_DWORD *)a5 + 12);
              v154[3] = v82;
              v84 = *((_DWORD *)a5 + 13);
              v154[4] = v83;
              v154[5] = v84;
              D2D1::Matrix3x2F::SetProduct(
                (D2D1::Matrix3x2F *)v156,
                (const struct D2D1::Matrix3x2F *)v155,
                (const struct D2D1::Matrix3x2F *)v154);
              CMILMatrix::Set2DAffineMatrix((CMILMatrix *)&v131, v156[0], v156[1], v156[2], v156[3], v156[4], v156[5]);
              v34 = v132;
              v33 = v131;
              v85 = _mm_shuffle_ps(v134, v134, 210);
              v86 = _mm_shuffle_ps(v133, v133, 210);
              v87 = (float)(*((float *)a5 + 10) * v79) + *((float *)a5 + 14);
              v86.m128_f32[0] = *((float *)a5 + 10) * v78;
              v35 = _mm_shuffle_ps(v86, v86, 201);
              v133 = v35;
              v85.m128_f32[0] = v87;
              v37 = _mm_shuffle_ps(v85, v85, 201);
              v134 = v37;
            }
            else
            {
              v88 = (__m128 *)Windows::Foundation::Numerics::operator*(v153, &v131, a5);
              v33 = *v88;
              v131 = *v88;
              v34 = v88[1];
              v132 = v34;
              v35 = v88[2];
              v133 = v35;
              v37 = v88[3];
              v135 = 0;
            }
            goto LABEL_86;
          }
          CMILMatrix::Scale((CMILMatrix *)&v131, *(float *)a5, *((float *)a5 + 5), *((float *)a5 + 10));
LABEL_112:
          CMILMatrix::Translate((CMILMatrix *)&v131, *((float *)a5 + 12), *((float *)a5 + 13), *((float *)a5 + 14));
LABEL_113:
          v37 = v134;
          v35 = v133;
          v34 = v132;
          v33 = v131;
          goto LABEL_86;
        }
        v51 = (char)(16 * *((_BYTE *)a5 + 65)) >> 6;
        if ( v51 )
        {
          if ( v51 != 1 )
            goto LABEL_102;
        }
        else
        {
          if ( !CMILMatrix::IsAffine<1>((__int64)a5, 0)
            || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 8) - 0.0) & _xmm) >= 0.000081380211
            || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 9) - 0.0) & _xmm) >= 0.000081380211 )
          {
            *((_BYTE *)a5 + 65) |= 0xCu;
            goto LABEL_102;
          }
          *((_BYTE *)a5 + 65) &= ~8u;
          *((_BYTE *)a5 + 65) |= 4u;
        }
        if ( CMILMatrix::ProducesUniformZ<1>((__int64)a5) )
        {
          v52 = (char)(4 * *((_BYTE *)a5 + 64)) >> 6;
          if ( v52 )
          {
            v53 = v52 == 1;
          }
          else
          {
            if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a5)
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a5 - 1.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 5) - 1.0) & _xmm) < 0.000081380211 )
            {
              v53 = 1;
              v74 = 16;
            }
            else
            {
              v53 = 0;
              v74 = 48;
            }
            *((_BYTE *)a5 + 64) &= 0xCFu;
            *((_BYTE *)a5 + 64) |= v74;
          }
          if ( v53
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 10) - 1.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 12) - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 13) - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 14) - 0.0) & _xmm) < 0.000081380211 )
          {
            v54 = 1;
            v55 = 1;
            goto LABEL_103;
          }
        }
LABEL_102:
        v54 = 0;
        v55 = 3;
LABEL_103:
        *((_BYTE *)a5 + 64) &= 0xFCu;
        *((_BYTE *)a5 + 64) |= v55;
        goto LABEL_104;
      }
      v38 = BYTE1(v135);
      v39 = (char)(16 * BYTE1(v135)) >> 6;
      if ( v39 )
      {
        if ( v39 != 1 )
          goto LABEL_92;
      }
      else
      {
        v40 = (char)(4 * BYTE1(v135)) >> 6;
        if ( v40 )
        {
          if ( v40 != 1
            || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(_mm_shuffle_ps(v35, v35, 255).m128_u32[0] & _xmm)
                                                      * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
          {
            v40 = 0;
          }
        }
        else
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(v132.m128_i32[3] & _xmm) * 61440.0)
                                            + (float)(COERCE_FLOAT(v131.m128_i32[3] & _xmm) * 61440.0))
                                    + COERCE_FLOAT(v134.m128_i32[3] & _xmm))
                            - 1.0) & _xmm) >= 0.000081380211 )
          {
            v40 = 0;
            v41 = 48;
          }
          else
          {
            v40 = 1;
            v41 = 16;
          }
          v38 = v41 | BYTE1(v135) & 0xCF;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(_mm_shuffle_ps(v35, v35, 255).m128_u32[0] & _xmm)
                                                      * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
            v40 = 0;
        }
        if ( !v40
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v35.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v35, v35, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
        {
          BYTE1(v135) = v38 | 0xC;
          goto LABEL_92;
        }
        v38 = v38 & 0xF3 | 4;
        BYTE1(v135) = v38;
      }
      v42 = (char)(16 * v32) >> 6;
      if ( v42 )
      {
        if ( v42 == 1 )
        {
LABEL_67:
          v45 = (char)(4 * v32) >> 6;
          if ( v45 )
          {
            v48 = v45 == 1;
            goto LABEL_79;
          }
          if ( (char)v32 >> 6 )
          {
            if ( (char)v32 >> 6 != 1 )
            {
              v48 = 0;
              goto LABEL_78;
            }
          }
          else
          {
            v46 = (char)(4 * v38) >> 6;
            if ( v46 )
            {
              v47 = v46 == 1;
            }
            else
            {
              v47 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                   (float)((float)((float)(COERCE_FLOAT(v132.m128_i32[3] & _xmm) * 61440.0)
                                                 + (float)(COERCE_FLOAT(v131.m128_i32[3] & _xmm) * 61440.0))
                                         + COERCE_FLOAT(v134.m128_i32[3] & _xmm))
                                 - 1.0) & _xmm) < 0.000081380211;
              BYTE1(v135) = (v38 ^ (-16 - 32 * v47)) & 0x30 ^ v38;
            }
            if ( !v47
              || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v33, v33, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
              || COERCE_FLOAT(COERCE_UNSIGNED_INT(v34.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
            {
              LOBYTE(v32) = v32 | 0xC0;
              goto LABEL_123;
            }
            LOBYTE(v32) = v32 & 0x3F | 0x40;
          }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v33.m128_f32[0] - 1.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v34, v34, 85).m128_f32[0] - 1.0) & _xmm) < 0.000081380211 )
          {
            v48 = 1;
LABEL_78:
            LOBYTE(v32) = (v32 ^ (-16 - 32 * v48)) & 0x30 ^ v32;
LABEL_79:
            if ( v48
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v35, v35, 170).m128_f32[0] - 1.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v37.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v37, v37, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v37, v37, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
            {
              LOBYTE(v135) = v32 & 0xFC | 1;
LABEL_85:
              v33 = *(__m128 *)a5;
              v135 = *((_DWORD *)a5 + 16);
              v34 = *((__m128 *)a5 + 1);
              v35 = *((__m128 *)a5 + 2);
              v37 = *((__m128 *)a5 + 3);
LABEL_86:
              v49 = v135;
              *(__m128 *)a5 = v33;
              *((__m128 *)a5 + 1) = v34;
              *((__m128 *)a5 + 2) = v35;
              *((__m128 *)a5 + 3) = v37;
LABEL_87:
              v12 = v130;
              *((_DWORD *)a5 + 16) = v49;
              *v12 = 1;
              goto LABEL_9;
            }
            goto LABEL_92;
          }
LABEL_123:
          v48 = 0;
          goto LABEL_78;
        }
      }
      else
      {
        v43 = (char)(4 * v38) >> 6;
        if ( v43 )
        {
          v44 = v43 == 1;
        }
        else
        {
          v44 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                               (float)((float)((float)(COERCE_FLOAT(v132.m128_i32[3] & _xmm) * 61440.0)
                                             + (float)(COERCE_FLOAT(v131.m128_i32[3] & _xmm) * 61440.0))
                                     + COERCE_FLOAT(v134.m128_i32[3] & _xmm))
                             - 1.0) & _xmm) < 0.000081380211;
          v38 ^= (v38 ^ (-16 - 32 * v44)) & 0x30;
          BYTE1(v135) = v38;
        }
        if ( v44
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v33, v33, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
        {
          LOBYTE(v32) = v32 & 0xF3 | 4;
          goto LABEL_67;
        }
        LOBYTE(v32) = v32 | 0xC;
      }
LABEL_92:
      LOBYTE(v32) = v32 | 3;
      LOBYTE(v135) = v32;
      goto LABEL_93;
    }
  }
LABEL_9:
  if ( a6 )
  {
    if ( v10 )
    {
      *(_OWORD *)a6 = *(_OWORD *)a5;
      *((_OWORD *)a6 + 1) = *((_OWORD *)a5 + 1);
      *((_OWORD *)a6 + 2) = *((_OWORD *)a5 + 2);
      *((_OWORD *)a6 + 3) = *((_OWORD *)a5 + 3);
      *((_DWORD *)a6 + 16) = *((_DWORD *)a5 + 16);
    }
    else
    {
      CMILMatrix::SetToIdentity(a6);
    }
  }
  if ( v11 )
  {
    if ( *((_DWORD *)this + 27) != 2 )
      goto LABEL_200;
    v15 = *((_QWORD *)this + 11);
  }
  else
  {
    v15 = *((_QWORD *)this + 11);
    if ( *((_DWORD *)this + 27) == 1 )
    {
      v16 = 0;
      goto LABEL_13;
    }
  }
  v16 = 1;
LABEL_13:
  v17 = v15 && *(_DWORD *)(v15 + 108) == 1;
  v18 = *((_QWORD *)this + 10);
  if ( (v18 & 2) != 0 )
    v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v18) = v18 & 1;
  v129 = 0;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    v66 = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v66 + 56LL))(v66, 61LL) )
      v129 = 1;
  }
  v19 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this);
  if ( v19 )
    LOBYTE(v19) = 1;
  if ( !v16 )
    goto LABEL_198;
  if ( !v17 )
  {
LABEL_24:
    v10 = v128;
    goto LABEL_25;
  }
  if ( !(_DWORD)v18 )
  {
LABEL_198:
    if ( !v17 || !v129 && !(_BYTE)v19 )
      goto LABEL_24;
  }
  v10 = v128;
  v12 = v130;
LABEL_200:
  if ( !v10 )
  {
    CMILMatrix::SetToIdentity(a5);
    v10 = 1;
  }
  v89 = *((_BYTE *)a5 + 64);
  *((_QWORD *)a5 + 4) = 0LL;
  *((_QWORD *)a5 + 5) = 0LL;
  *((_BYTE *)a5 + 64) = v89 & 0xF0 | 3;
  *v12 = 1;
LABEL_25:
  if ( v11 )
  {
    v90 = CTransform3D::GetMatrix(v11, (const struct D2D_SIZE_F *)((char *)this + 140));
    if ( v10 )
    {
      CMILMatrix::Multiply(v90, a5, a5);
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)v90;
      *((_OWORD *)a5 + 1) = *((_OWORD *)v90 + 1);
      *((_OWORD *)a5 + 2) = *((_OWORD *)v90 + 2);
      *((_OWORD *)a5 + 3) = *((_OWORD *)v90 + 3);
      *((_DWORD *)a5 + 16) = *((_DWORD *)v90 + 16);
    }
    v20 = v130;
    *v130 = 1;
  }
  else
  {
    if ( !v10 )
    {
      *(_QWORD *)a5 = 1065353216LL;
      *((_QWORD *)a5 + 1) = 0LL;
      *((_DWORD *)a5 + 4) = 0;
      *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
      *(_QWORD *)((char *)a5 + 28) = 0LL;
      *((_DWORD *)a5 + 9) = 0;
      *((_QWORD *)a5 + 5) = 1065353216LL;
      *((_QWORD *)a5 + 6) = 0LL;
      *((_DWORD *)a5 + 14) = 0;
      *((_DWORD *)a5 + 15) = 1065353216;
      *((_BYTE *)a5 + 64) = 85;
      *((_BYTE *)a5 + 65) = *((_BYTE *)a5 + 65) & 0xC0 | 0x17;
      goto LABEL_29;
    }
    v20 = v130;
  }
  if ( *((char *)this + 101) < 0 )
  {
    if ( !a5 )
      goto LABEL_128;
    if ( CMILMatrix::Is2DAxisAlignedPreserving(a5) )
    {
      v59 = *(__m128 *)a5;
      v60 = *((__m128 *)a5 + 1);
      v135 = *((_DWORD *)a5 + 16);
      v131 = v59;
      v61 = *((__m128 *)a5 + 2);
      v132 = v60;
      v62 = *((__m128 *)a5 + 3);
      v133 = v61;
      v134 = v62;
      CMILMatrix::RoundOffsets((CMILMatrix *)&v131);
      if ( !CMILMatrix::IsEqualTo<0>((float *)a5, v131.m128_f32) )
      {
LABEL_128:
        CMILMatrix::RoundOffsets(a5);
        *v20 = 1;
      }
    }
  }
LABEL_29:
  if ( (*((_BYTE *)this + 272) & 8) != 0 )
  {
    v91 = dword_1803E07D0;
    if ( (unsigned int)dword_1803E07D0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 2LL) )
    {
      v92 = *((_DWORD *)a5 + 14);
      v136 = *((_DWORD *)a5 + 15);
      v93 = *((_DWORD *)a5 + 13);
      v137 = v92;
      v94 = *((_DWORD *)a5 + 12);
      v138 = v93;
      v95 = *((_DWORD *)a5 + 11);
      v139 = v94;
      v96 = *((_DWORD *)a5 + 10);
      v140 = v95;
      v97 = *((_DWORD *)a5 + 9);
      v141 = v96;
      v98 = *((_DWORD *)a5 + 8);
      v142 = v97;
      v99 = *((_DWORD *)a5 + 7);
      v143 = v98;
      v100 = *((_DWORD *)a5 + 6);
      v144 = v99;
      v101 = *((_DWORD *)a5 + 5);
      v145 = v100;
      v102 = *((_DWORD *)a5 + 4);
      v146 = v101;
      v103 = *((_DWORD *)a5 + 3);
      v147 = v102;
      v104 = *((_DWORD *)a5 + 2);
      v148 = v103;
      v105 = *((_DWORD *)a5 + 1);
      v149 = v104;
      v106 = *(_DWORD *)a5;
      LODWORD(EffectInternal) = v105;
      LODWORD(v130) = v106;
      InteractionInternal = CVisual::GetInteractionInternal(this);
      v152 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v107,
        (unsigned int)&unk_18037C7C5,
        v108,
        v109,
        (__int64)&v152,
        (__int64)&InteractionInternal,
        (__int64)&v130,
        (__int64)&EffectInternal,
        (__int64)&v149,
        (__int64)&v148,
        (__int64)&v147,
        (__int64)&v146,
        (__int64)&v145,
        (__int64)&v144,
        (__int64)&v143,
        (__int64)&v142,
        (__int64)&v141,
        (__int64)&v140,
        (__int64)&v139,
        (__int64)&v138,
        (__int64)&v137,
        (__int64)&v136);
      v91 = dword_1803E07D0;
    }
    if ( a3 && v91 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 2LL) )
      {
        v110 = *((_DWORD *)a3 + 14);
        LODWORD(v130) = *((_DWORD *)a3 + 15);
        v111 = *((_DWORD *)a3 + 13);
        LODWORD(EffectInternal) = v110;
        v112 = *((_DWORD *)a3 + 12);
        v149 = v111;
        v113 = *((_DWORD *)a3 + 11);
        v148 = v112;
        v114 = *((_DWORD *)a3 + 10);
        v147 = v113;
        v115 = *((_DWORD *)a3 + 9);
        v146 = v114;
        v116 = *((_DWORD *)a3 + 8);
        v145 = v115;
        v117 = *((_DWORD *)a3 + 7);
        v144 = v116;
        v118 = *((_DWORD *)a3 + 6);
        v143 = v117;
        v119 = *((_DWORD *)a3 + 5);
        v142 = v118;
        v120 = *((_DWORD *)a3 + 4);
        v141 = v119;
        v121 = *((_DWORD *)a3 + 3);
        v140 = v120;
        v122 = *((_DWORD *)a3 + 2);
        v139 = v121;
        v123 = *((_DWORD *)a3 + 1);
        v138 = v122;
        v124 = *(_DWORD *)a3;
        v137 = v123;
        v136 = v124;
        v152 = CVisual::GetInteractionInternal(this);
        InteractionInternal = this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v125,
          (unsigned int)&unk_18037C944,
          v126,
          v127,
          (__int64)&InteractionInternal,
          (__int64)&v152,
          (__int64)&v136,
          (__int64)&v137,
          (__int64)&v138,
          (__int64)&v139,
          (__int64)&v140,
          (__int64)&v141,
          (__int64)&v142,
          (__int64)&v143,
          (__int64)&v144,
          (__int64)&v145,
          (__int64)&v146,
          (__int64)&v147,
          (__int64)&v148,
          (__int64)&v149,
          (__int64)&EffectInternal,
          (__int64)&v130);
      }
    }
  }
}
