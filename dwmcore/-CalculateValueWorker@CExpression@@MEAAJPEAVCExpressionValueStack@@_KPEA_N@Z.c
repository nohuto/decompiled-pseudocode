__int64 __fastcall CExpression::CalculateValueWorker(
        CExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  unsigned __int64 v5; // rdx
  __int64 v7; // r8
  unsigned int v8; // r12d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  _DWORD *v12; // rbx
  int v13; // r15d
  unsigned int v14; // r8d
  int *v15; // rsi
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  __int64 v61; // rax
  CExpressionValue *v62; // rax
  float v63; // xmm0_4
  int v64; // eax
  int v65; // eax
  __int64 v66; // rax
  CExpressionValue *v67; // rax
  float v68; // xmm0_4
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  unsigned int v82; // eax
  __int64 v83; // rax
  CExpressionValue *v84; // rax
  __int64 v85; // rax
  CExpressionValue *v86; // rax
  _DWORD *v87; // rax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  unsigned int v95; // esi
  unsigned int v96; // eax
  __int64 v97; // rax
  CExpressionValue *v98; // rax
  _DWORD *v99; // rax
  int v100; // xmm1_4
  int v101; // xmm0_4
  __int64 v102; // rax
  CExpressionValue *v103; // rax
  __int64 v104; // rax
  CExpressionValue *v105; // rax
  int *v106; // rax
  int v107; // xmm1_4
  int v108; // xmm0_4
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // eax
  unsigned int v141; // edx
  unsigned int v142; // r14d
  int v143; // eax
  struct ExpressionConditionalNode *v144; // rdx
  unsigned int v145; // ecx
  int v146; // eax
  int v147; // eax
  int v148; // eax
  unsigned int v149; // ecx
  int v150; // xmm6_4
  int v151; // eax
  unsigned int v152; // ecx
  int v153; // r14d
  __int64 v154; // rcx
  int v155; // eax
  int v156; // ecx
  __int64 v157; // r8
  unsigned __int64 v158; // rdi
  unsigned int v159; // ecx
  unsigned int v160; // ecx
  unsigned int v161; // ecx
  unsigned int v162; // ecx
  unsigned int v163; // ecx
  unsigned int v164; // ecx
  int v166; // r8d
  int v167; // r9d
  unsigned int v168; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v169; // [rsp+40h] [rbp-C0h] BYREF
  bool v170; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v171; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v172; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v173[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v174; // [rsp+A0h] [rbp-60h] BYREF
  int v175; // [rsp+A8h] [rbp-58h]
  char v176; // [rsp+ACh] [rbp-54h]
  _BYTE v177[80]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v178[80]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v179[80]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v180[80]; // [rsp+1A0h] [rbp+A0h] BYREF

  *a4 = 0;
  v5 = *((unsigned int *)this + 87);
  v7 = *((_QWORD *)this + 42);
  v8 = 0;
  v9 = *(unsigned int *)(v7 + 72);
  if ( v5 >= v9 || (v10 = *((unsigned int *)this + 86), v9 -= v5, v10 > v9) || (v9 = *(_QWORD *)(v7 + 80)) == 0 )
  {
    v158 = 0LL;
LABEL_327:
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, -2147024882, 0x270u, 0LL);
    goto LABEL_328;
  }
  v11 = v5 + v9;
  v169 = v5 + v9;
  if ( !(v5 + v9) )
  {
    v158 = v5 + v9;
    goto LABEL_327;
  }
  *((_DWORD *)this + 95) = v10;
  v12 = &CExpressionValueStack::s_emptyValue;
  while ( v8 >= (unsigned int)v10 )
  {
LABEL_275:
    v156 = *((_DWORD *)this + 102);
    if ( !v156 )
      return 0LL;
    v157 = *((_QWORD *)this + 48);
    LODWORD(v9) = v156 - 1;
    LODWORD(v10) = *(_DWORD *)(v157 + 8LL * (unsigned int)v9);
    *((_DWORD *)this + 95) = v10;
    v8 = *(_DWORD *)(v157 + 8LL * (unsigned int)v9 + 4);
    *((_DWORD *)this + 102) = v9;
  }
  while ( 1 )
  {
    v13 = 4;
    v14 = *((_DWORD *)this + 86) - v8;
    if ( v14 < 4 )
    {
      v168 = 646;
      goto LABEL_278;
    }
    v15 = (int *)(v11 + v8);
    v16 = *v15;
    if ( *v15 == 9 )
    {
      v13 = 8;
      if ( v14 < 8 )
      {
        v168 = 755;
        goto LABEL_278;
      }
      v155 = CExpressionValueStack::ProcessReferenceNode(
               a2,
               this,
               (struct ExpressionReferenceNode *)(v11 + v8),
               (unsigned __int64)a4);
      v18 = v155;
      if ( v155 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v155, 0x301u, 0LL);
        goto LABEL_280;
      }
    }
    else if ( v16 == 1 )
    {
      v13 = 8;
      if ( v14 < 8 )
      {
        v168 = 667;
        goto LABEL_278;
      }
      v149 = *((_DWORD *)a2 + 4);
      v150 = v15[1];
      if ( ~v149 < 5 )
      {
        v18 = -2147418113;
        v153 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(
          v149,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147418113,
          0x52u,
          0LL);
        goto LABEL_319;
      }
      if ( *((_DWORD *)a2 + 12) == v149 )
      {
        v174 = 0LL;
        v175 = 18;
        v176 = 0;
        memset(v173, 0, sizeof(v173));
        v151 = DynArray<CExpressionValue,1>::AddAndSet((char *)a2 + 24, _ImageBase, v173);
        v153 = v151;
        v18 = v151;
        if ( v151 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            v152,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v151,
            0x5Bu,
            0LL);
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v174);
LABEL_319:
          MilInstrumentationCheckHR_MaybeFailFast(
            v163,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v153,
            0x1CBu,
            0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v164, &dword_18033A620, 2u, v153, 0x29Fu, 0LL);
          goto LABEL_280;
        }
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v174);
      }
      v154 = *((unsigned int *)a2 + 4);
      *((_DWORD *)a2 + 4) = v154 + 1;
      v9 = *((_QWORD *)a2 + 3) + 80 * v154;
      *(_DWORD *)v9 = v150;
      *(_DWORD *)(v9 + 72) = 18;
      *(_BYTE *)(v9 + 76) = 1;
    }
    else if ( v16 == 15 )
    {
      v148 = CExpressionValueStack::Multiply(a2);
      v18 = v148;
      if ( v148 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v148, 0x316u, 0LL);
        goto LABEL_280;
      }
    }
    else
    {
      switch ( v16 )
      {
        case 0:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 656;
            goto LABEL_278;
          }
          v17 = CExpressionValueStack::PushConstant(a2, *((_BYTE *)v15 + 4));
          v18 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v17, 0x294u, 0LL);
            goto LABEL_280;
          }
          break;
        case 2:
          v13 = 12;
          if ( v14 < 0xC )
          {
            v168 = 678;
            goto LABEL_278;
          }
          v19 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector2 *)(v15 + 1));
          v18 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v19, 0x2AAu, 0LL);
            goto LABEL_280;
          }
          break;
        case 3:
          v13 = 16;
          if ( v14 < 0x10 )
          {
            v168 = 689;
            goto LABEL_278;
          }
          v20 = CExpressionValueStack::EnsureAvailablePushSpace(a2);
          v18 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              v21,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v20,
              0x1EDu,
              0LL);
            v168 = 693;
            goto LABEL_279;
          }
          v22 = *((unsigned int *)a2 + 4);
          *((_DWORD *)a2 + 4) = v22 + 1;
          v9 = *((_QWORD *)a2 + 3) + 80 * v22;
          *(_DWORD *)(v9 + 72) = 52;
          *(_QWORD *)v9 = *(_QWORD *)(v15 + 1);
          *(_DWORD *)(v9 + 8) = v15[3];
          *(_BYTE *)(v9 + 76) = 1;
          break;
        case 4:
          v13 = 20;
          if ( v14 < 0x14 )
          {
            v168 = 700;
LABEL_278:
            v18 = -2147467259;
LABEL_279:
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v18, v168, 0LL);
            goto LABEL_280;
          }
          v23 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector4 *)(v15 + 1));
          v18 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v23, 0x2C0u, 0LL);
            goto LABEL_280;
          }
          break;
        case 5:
          v13 = 20;
          if ( v14 < 0x14 )
          {
            v168 = 711;
            goto LABEL_278;
          }
          v24 = CExpressionValueStack::PushConstant(a2, (const struct _D3DCOLORVALUE *)(v15 + 1));
          v18 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v24, 0x2CBu, 0LL);
            goto LABEL_280;
          }
          break;
        case 6:
          v13 = 20;
          if ( v14 < 0x14 )
          {
            v168 = 722;
            goto LABEL_278;
          }
          v25 = CExpressionValueStack::PushConstant(a2, (const struct D2DQuaternion *)(v15 + 1));
          v18 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v25, 0x2D6u, 0LL);
            goto LABEL_280;
          }
          break;
        case 7:
          v13 = 28;
          if ( v14 < 0x1C )
          {
            v168 = 733;
            goto LABEL_278;
          }
          v26 = CExpressionValueStack::PushConstant(a2, (const struct D2D_MATRIX_3X2_F *)(v15 + 1));
          v18 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v26, 0x2E1u, 0LL);
            goto LABEL_280;
          }
          break;
        case 8:
          v13 = 68;
          if ( v14 < 0x44 )
          {
            v168 = 744;
            goto LABEL_278;
          }
          v27 = CExpressionValueStack::PushConstant(a2, (const struct D2DMatrix *)(v15 + 1));
          v18 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v27, 0x2ECu, 0LL);
            goto LABEL_280;
          }
          break;
        case 11:
          v28 = CExpressionValueStack::Absolute(a2);
          v18 = v28;
          if ( v28 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v28, 0x306u, 0LL);
          goto LABEL_280;
        case 12:
          v29 = CExpressionValueStack::Negate(a2);
          v18 = v29;
          if ( v29 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v29, 0x30Au, 0LL);
          goto LABEL_280;
        case 13:
          v30 = CExpressionValueStack::Add(a2);
          v18 = v30;
          if ( v30 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v30, 0x30Eu, 0LL);
          goto LABEL_280;
        case 14:
          v31 = CExpressionValueStack::Subtract(a2);
          v18 = v31;
          if ( v31 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v31, 0x312u, 0LL);
          goto LABEL_280;
        case 16:
          v32 = CExpressionValueStack::Divide(a2);
          v18 = v32;
          if ( v32 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v32, 0x31Au, 0LL);
          goto LABEL_280;
        case 17:
          v33 = CExpressionValueStack::Modulus(a2);
          v18 = v33;
          if ( v33 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v33, 0x31Eu, 0LL);
          goto LABEL_280;
        case 18:
          v43 = CExpressionValueStack::Min(a2);
          v18 = v43;
          if ( v43 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v43, 0x346u, 0LL);
          goto LABEL_280;
        case 19:
          v44 = CExpressionValueStack::Max(a2);
          v18 = v44;
          if ( v44 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v44, 0x34Au, 0LL);
          goto LABEL_280;
        case 20:
          v45 = CExpressionValueStack::Clamp(a2);
          v18 = v45;
          if ( v45 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v45, 0x34Eu, 0LL);
          goto LABEL_280;
        case 21:
          v46 = CExpressionValueStack::Scale(a2);
          v18 = v46;
          if ( v46 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v46, 0x352u, 0LL);
          goto LABEL_280;
        case 22:
          v47 = CExpressionValueStack::Transform(a2);
          v18 = v47;
          if ( v47 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v47, 0x356u, 0LL);
          goto LABEL_280;
        case 23:
          v48 = CExpressionValueStack::Inverse(a2);
          v18 = v48;
          if ( v48 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v48, 0x35Au, 0LL);
          goto LABEL_280;
        case 24:
          v49 = CExpressionValueStack::Lerp(a2);
          v18 = v49;
          if ( v49 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v49, 0x35Eu, 0LL);
          goto LABEL_280;
        case 25:
          v50 = CExpressionValueStack::ColorLerpHsl(a2);
          v18 = v50;
          if ( v50 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v50, 0x362u, 0LL);
          goto LABEL_280;
        case 26:
          v51 = CExpressionValueStack::ColorLerpHsl(a2);
          v18 = v51;
          if ( v51 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v51, 0x366u, 0LL);
          goto LABEL_280;
        case 27:
          v52 = CExpressionValueStack::ColorLerpRgb(a2);
          v18 = v52;
          if ( v52 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v52, 0x36Au, 0LL);
          goto LABEL_280;
        case 28:
          v53 = CExpressionValueStack::Length(a2);
          v18 = v53;
          if ( v53 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v53, 0x36Eu, 0LL);
          goto LABEL_280;
        case 29:
          v54 = CExpressionValueStack::LengthSquared(a2);
          v18 = v54;
          if ( v54 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v54, 0x372u, 0LL);
          goto LABEL_280;
        case 30:
          v55 = CExpressionValueStack::Distance(a2);
          v18 = v55;
          if ( v55 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v55, 0x376u, 0LL);
          goto LABEL_280;
        case 31:
          v56 = CExpressionValueStack::DistanceSquared(a2);
          v18 = v56;
          if ( v56 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v56, 0x37Au, 0LL);
          goto LABEL_280;
        case 32:
          v57 = CExpressionValueStack::Normalize(a2);
          v18 = v57;
          if ( v57 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v57, 0x37Eu, 0LL);
          goto LABEL_280;
        case 33:
          v58 = CExpressionValueStack::Slerp(a2);
          v18 = v58;
          if ( v58 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v58, 0x382u, 0LL);
          goto LABEL_280;
        case 34:
          v59 = CExpressionValueStack::Concatenate(a2);
          v18 = v59;
          if ( v59 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v59, 0x386u, 0LL);
          goto LABEL_280;
        case 35:
          v60 = *((_DWORD *)a2 + 4);
          if ( v60 )
          {
            v61 = (unsigned int)(v60 - 1);
            if ( (unsigned int)v61 < *((_DWORD *)a2 + 12) )
            {
              v12 = (_DWORD *)(*((_QWORD *)a2 + 3) + 80 * v61);
            }
            else
            {
              v62 = CExpressionValue::CExpressionValue((CExpressionValue *)v173);
              CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v62);
              CExpressionValue::~CExpressionValue((CExpressionValue *)v173);
            }
            if ( v12[18] != 18 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                v9,
                &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                -2147467259,
                0xFF3u,
                0LL);
              goto LABEL_291;
            }
            v63 = *(float *)v12;
            v12[18] = 18;
            *(float *)v12 = sinf_0(v63);
            *((_BYTE *)v12 + 76) = 1;
            break;
          }
          MilInstrumentationCheckHR_MaybeFailFast(
            v9,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147467259,
            0xFD9u,
            0LL);
LABEL_291:
          v18 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(v159, &dword_18033A620, 2u, -2147467259, 0x38Au, 0LL);
LABEL_280:
          v158 = v169;
LABEL_328:
          if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0
            && v8 < *((_DWORD *)this + 86)
            && (unsigned int)dword_1803E07D0 > 4 )
          {
            if ( tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
            {
              v172 = v18;
              LODWORD(v171) = *(_DWORD *)(v8 + v158);
              LODWORD(v169) = CBaseExpression::GetTracingCookie(this);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (unsigned int)&dword_1803E07D0,
                (unsigned int)&unk_18037D84C,
                v166,
                v167,
                (__int64)&v169,
                (__int64)&v171,
                (__int64)&v172);
            }
          }
          return v18;
        case 36:
          v64 = CExpressionValueStack::Asin(a2);
          v18 = v64;
          if ( v64 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v64, 0x38Eu, 0LL);
          goto LABEL_280;
        case 37:
          v65 = *((_DWORD *)a2 + 4);
          if ( !v65 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              v9,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              0x1061u,
              0LL);
LABEL_294:
            v18 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(v160, &dword_18033A620, 2u, -2147467259, 0x392u, 0LL);
            goto LABEL_280;
          }
          v66 = (unsigned int)(v65 - 1);
          if ( (unsigned int)v66 < *((_DWORD *)a2 + 12) )
          {
            v12 = (_DWORD *)(*((_QWORD *)a2 + 3) + 80 * v66);
          }
          else
          {
            v67 = CExpressionValue::CExpressionValue((CExpressionValue *)v173);
            CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v67);
            CExpressionValue::~CExpressionValue((CExpressionValue *)v173);
          }
          if ( v12[18] != 18 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              v9,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              0x107Du,
              0LL);
            goto LABEL_294;
          }
          v68 = *(float *)v12;
          v12[18] = 18;
          *(float *)v12 = cosf_0(v68);
          *((_BYTE *)v12 + 76) = 1;
          break;
        case 38:
          v69 = CExpressionValueStack::Acos(a2);
          v18 = v69;
          if ( v69 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v69, 0x396u, 0LL);
          goto LABEL_280;
        case 39:
          v70 = CExpressionValueStack::Tan(a2);
          v18 = v70;
          if ( v70 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v70, 0x39Au, 0LL);
          goto LABEL_280;
        case 40:
          v71 = CExpressionValueStack::Atan(a2);
          v18 = v71;
          if ( v71 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v71, 0x39Eu, 0LL);
          goto LABEL_280;
        case 41:
          v72 = CExpressionValueStack::Ceil(a2);
          v18 = v72;
          if ( v72 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v72, 0x3A2u, 0LL);
          goto LABEL_280;
        case 42:
          v73 = CExpressionValueStack::Floor(a2);
          v18 = v73;
          if ( v73 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v73, 0x3A6u, 0LL);
          goto LABEL_280;
        case 43:
          v74 = CExpressionValueStack::Round(a2);
          v18 = v74;
          if ( v74 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v74, 0x3AAu, 0LL);
          goto LABEL_280;
        case 44:
          v75 = CExpressionValueStack::Sqrt(a2);
          v18 = v75;
          if ( v75 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v75, 0x3AEu, 0LL);
          goto LABEL_280;
        case 45:
          v76 = CExpressionValueStack::Pow(a2);
          v18 = v76;
          if ( v76 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v76, 0x3B2u, 0LL);
          goto LABEL_280;
        case 46:
          v77 = CExpressionValueStack::Square(a2);
          v18 = v77;
          if ( v77 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v77, 0x3B6u, 0LL);
          goto LABEL_280;
        case 47:
          v78 = CExpressionValueStack::Log10(a2);
          v18 = v78;
          if ( v78 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v78, 0x3BAu, 0LL);
          goto LABEL_280;
        case 48:
          v79 = CExpressionValueStack::Ln(a2);
          v18 = v79;
          if ( v79 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v79, 0x3BEu, 0LL);
          goto LABEL_280;
        case 49:
          v80 = CExpressionValueStack::ToDegrees(a2);
          v18 = v80;
          if ( v80 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v80, 0x3C2u, 0LL);
          goto LABEL_280;
        case 50:
          v81 = CExpressionValueStack::ToRadians(a2);
          v18 = v81;
          if ( v81 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v81, 0x3C6u, 0LL);
          goto LABEL_280;
        case 51:
          if ( v14 < 0xC )
          {
            v168 = 1204;
            goto LABEL_278;
          }
          v141 = v15[2] + v15[1] + 12;
          v142 = v141 + v8;
          if ( v141 > v14 )
          {
            v168 = 1214;
            goto LABEL_278;
          }
          LODWORD(v171) = *((_DWORD *)this + 95);
          HIDWORD(v171) = v141 + v8;
          v143 = DynArray<ConditionalBasicBlock,1>::AddMultipleAndSet((__int64)this + 384, &v171);
          v18 = v143;
          if ( v143 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v145, &dword_18033A620, 2u, v143, 0x4C7u, 0LL);
            goto LABEL_280;
          }
          v146 = CExpressionValueStack::Conditional(a2, v144, &v170);
          v18 = v146;
          if ( v146 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v146, 0x4CAu, 0LL);
            goto LABEL_280;
          }
          v147 = v15[1];
          if ( v170 )
          {
            v13 = 12;
            v142 = v147 + v8 + 12;
          }
          else
          {
            v13 = v147 + 12;
          }
          *((_DWORD *)this + 95) = v142;
          break;
        case 53:
          v34 = CExpressionValueStack::Equals(a2);
          v18 = v34;
          if ( v34 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v34, 0x322u, 0LL);
          goto LABEL_280;
        case 54:
          v35 = CExpressionValueStack::NotEquals(a2);
          v18 = v35;
          if ( v35 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v35, 0x326u, 0LL);
          goto LABEL_280;
        case 55:
          v36 = CExpressionValueStack::LessThan(a2);
          v18 = v36;
          if ( v36 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v36, 0x32Au, 0LL);
          goto LABEL_280;
        case 56:
          v37 = CExpressionValueStack::LessThanEquals(a2);
          v18 = v37;
          if ( v37 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v37, 0x32Eu, 0LL);
          goto LABEL_280;
        case 57:
          v38 = CExpressionValueStack::GreaterThan(a2);
          v18 = v38;
          if ( v38 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v38, 0x332u, 0LL);
          goto LABEL_280;
        case 58:
          v39 = CExpressionValueStack::GreaterThanEquals(a2);
          v18 = v39;
          if ( v39 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v39, 0x336u, 0LL);
          goto LABEL_280;
        case 59:
          v40 = CExpressionValueStack::And(a2);
          v18 = v40;
          if ( v40 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v40, 0x33Au, 0LL);
          goto LABEL_280;
        case 60:
          v41 = CExpressionValueStack::Or(a2);
          v18 = v41;
          if ( v41 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v41, 0x33Eu, 0LL);
          goto LABEL_280;
        case 61:
          v42 = CExpressionValueStack::Not(a2);
          v18 = v42;
          if ( v42 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v42, 0x342u, 0LL);
          goto LABEL_280;
        case 62:
          v82 = *((_DWORD *)a2 + 4);
          if ( v82 < 2 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              v9,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              0x1405u,
              0LL);
LABEL_297:
            v18 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(v161, &dword_18033A620, 2u, -2147467259, 0x3CAu, 0LL);
            goto LABEL_280;
          }
          v83 = v82 - 2;
          if ( (unsigned int)v83 < *((_DWORD *)a2 + 12) )
          {
            v12 = (_DWORD *)(*((_QWORD *)a2 + 3) + 80 * v83);
          }
          else
          {
            v84 = CExpressionValue::CExpressionValue((CExpressionValue *)v173);
            CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v84);
            CExpressionValue::~CExpressionValue((CExpressionValue *)v173);
          }
          v85 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
          if ( (unsigned int)v85 < *((_DWORD *)a2 + 12) )
          {
            v87 = (_DWORD *)(*((_QWORD *)a2 + 3) + 80 * v85);
          }
          else
          {
            v86 = CExpressionValue::CExpressionValue((CExpressionValue *)v177);
            CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v86);
            CExpressionValue::~CExpressionValue((CExpressionValue *)v177);
            v87 = &CExpressionValueStack::s_emptyValue;
          }
          if ( v12[18] != 18 || v87[18] != 18 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              v9,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              0x1413u,
              0LL);
            goto LABEL_297;
          }
          v12[1] = *v87;
          v12[18] = 35;
          *((_BYTE *)v12 + 76) = 1;
          --*((_DWORD *)a2 + 4);
          break;
        case 63:
          v88 = CExpressionValueStack::Vector3(a2);
          v18 = v88;
          if ( v88 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v88, 0x3CEu, 0LL);
          goto LABEL_280;
        case 64:
          v89 = CExpressionValueStack::Vector4(a2);
          v18 = v89;
          if ( v89 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v89, 0x3D2u, 0LL);
          goto LABEL_280;
        case 65:
          v90 = CExpressionValueStack::ColorHsl(a2);
          v18 = v90;
          if ( v90 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v90, 0x3D6u, 0LL);
          goto LABEL_280;
        case 66:
          v91 = CExpressionValueStack::ColorRgb(a2);
          v18 = v91;
          if ( v91 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v91, 0x3DAu, 0LL);
          goto LABEL_280;
        case 67:
          v92 = CExpressionValueStack::Quaternion(a2);
          v18 = v92;
          if ( v92 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v92, 0x3DEu, 0LL);
          goto LABEL_280;
        case 68:
          v93 = CExpressionValueStack::Matrix3x2(a2);
          v18 = v93;
          if ( v93 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v93, 0x3E2u, 0LL);
          goto LABEL_280;
        case 69:
          v94 = CExpressionValueStack::Matrix4x4(a2);
          v18 = v94;
          if ( v94 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v94, 0x3E6u, 0LL);
          goto LABEL_280;
        case 70:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 1054;
            goto LABEL_278;
          }
          v113 = CExpressionValueStack::Matrix3x2FromRotation(a2, v15[1]);
          v18 = v113;
          if ( v113 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v113, 0x421u, 0LL);
            goto LABEL_280;
          }
          break;
        case 71:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 1024;
            goto LABEL_278;
          }
          v110 = CExpressionValueStack::Matrix3x2FromScale(a2, v15[1]);
          v18 = v110;
          if ( v110 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v110, 0x403u, 0LL);
            goto LABEL_280;
          }
          break;
        case 72:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 1044;
            goto LABEL_278;
          }
          v112 = CExpressionValueStack::Matrix3x2FromSkew(a2, v15[1]);
          v18 = v112;
          if ( v112 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v112, 0x417u, 0LL);
            goto LABEL_280;
          }
          break;
        case 73:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 1004;
            goto LABEL_278;
          }
          v95 = v15[1];
          v96 = *((_DWORD *)a2 + 4);
          if ( v96 < v95 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              v9,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              0x1626u,
              0LL);
LABEL_300:
            v18 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(v162, &dword_18033A620, 2u, -2147467259, 0x3EFu, 0LL);
            goto LABEL_280;
          }
          if ( v95 == 1 )
          {
            v97 = v96 - 1;
            if ( (unsigned int)v97 < *((_DWORD *)a2 + 12) )
            {
              v99 = (_DWORD *)(*((_QWORD *)a2 + 3) + 80 * v97);
            }
            else
            {
              v98 = CExpressionValue::CExpressionValue((CExpressionValue *)v178);
              CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v98);
              CExpressionValue::~CExpressionValue((CExpressionValue *)v178);
              v99 = &CExpressionValueStack::s_emptyValue;
            }
            if ( v99[18] != 35 )
              goto LABEL_298;
            v100 = *v99;
            v101 = v99[1];
            v99[18] = 104;
            *(_QWORD *)v99 = 1065353216LL;
            v99[2] = 0;
            v99[3] = 1065353216;
            v99[4] = v100;
            v99[5] = v101;
            *((_BYTE *)v99 + 76) = 1;
            *((_DWORD *)a2 + 4) = *((_DWORD *)a2 + 4);
          }
          else
          {
            if ( v95 != 2 )
              goto LABEL_298;
            v102 = v96 - 2;
            if ( (unsigned int)v102 < *((_DWORD *)a2 + 12) )
            {
              v12 = (_DWORD *)(*((_QWORD *)a2 + 3) + 80 * v102);
            }
            else
            {
              v103 = CExpressionValue::CExpressionValue((CExpressionValue *)v179);
              CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v103);
              CExpressionValue::~CExpressionValue((CExpressionValue *)v179);
            }
            v104 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
            if ( (unsigned int)v104 < *((_DWORD *)a2 + 12) )
            {
              v106 = (int *)(*((_QWORD *)a2 + 3) + 80 * v104);
            }
            else
            {
              v105 = CExpressionValue::CExpressionValue((CExpressionValue *)v180);
              CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v105);
              CExpressionValue::~CExpressionValue((CExpressionValue *)v180);
              v106 = (int *)&CExpressionValueStack::s_emptyValue;
            }
            if ( v12[18] != 18 || v106[18] != 18 )
            {
LABEL_298:
              MilInstrumentationCheckHR_MaybeFailFast(
                v9,
                &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                -2147467259,
                0x164Fu,
                0LL);
              goto LABEL_300;
            }
            v107 = *v106;
            v108 = *v12;
            v12[18] = 104;
            *(_QWORD *)v12 = 1065353216LL;
            v12[2] = 0;
            v12[3] = 1065353216;
            v12[4] = v108;
            v12[5] = v107;
            *((_BYTE *)v12 + 76) = 1;
            --*((_DWORD *)a2 + 4);
          }
          break;
        case 74:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 1034;
            goto LABEL_278;
          }
          v111 = CExpressionValueStack::Matrix4x4FromScale(a2, v15[1]);
          v18 = v111;
          if ( v111 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v111, 0x40Du, 0LL);
            goto LABEL_280;
          }
          break;
        case 75:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 1014;
            goto LABEL_278;
          }
          v109 = CExpressionValueStack::Matrix4x4FromTranslation(a2, v15[1]);
          v18 = v109;
          if ( v109 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v109, 0x3F9u, 0LL);
            goto LABEL_280;
          }
          break;
        case 76:
          v114 = CExpressionValueStack::Matrix4x4FromAxisAngle(a2);
          v18 = v114;
          if ( v114 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v114, 0x426u, 0LL);
          goto LABEL_280;
        case 77:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 1068;
            goto LABEL_278;
          }
          v115 = CExpressionValueStack::Matrix4x4FromRotationX(a2, v15[1]);
          v18 = v115;
          if ( v115 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v115, 0x42Fu, 0LL);
            goto LABEL_280;
          }
          break;
        case 78:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 1078;
            goto LABEL_278;
          }
          v116 = CExpressionValueStack::Matrix4x4FromRotationY(a2, v15[1]);
          v18 = v116;
          if ( v116 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v116, 0x439u, 0LL);
            goto LABEL_280;
          }
          break;
        case 79:
          v13 = 8;
          if ( v14 < 8 )
          {
            v168 = 1088;
            goto LABEL_278;
          }
          v117 = CExpressionValueStack::Matrix4x4FromRotationZ(a2, v15[1]);
          v18 = v117;
          if ( v117 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v117, 0x443u, 0LL);
            goto LABEL_280;
          }
          break;
        case 80:
          v118 = CExpressionValueStack::Matrix4x4FromPerspective(a2);
          v18 = v118;
          if ( v118 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v118, 0x448u, 0LL);
          goto LABEL_280;
        case 81:
          v119 = CExpressionValueStack::Matrix4x4FromPerspectiveFieldOfView(a2);
          v18 = v119;
          if ( v119 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v119, 0x44Cu, 0LL);
          goto LABEL_280;
        case 82:
          v120 = CExpressionValueStack::Matrix4x4FromPerspectiveOffCenter(a2);
          v18 = v120;
          if ( v120 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v120, 0x450u, 0LL);
          goto LABEL_280;
        case 83:
          v121 = CExpressionValueStack::Matrix4x4FromQuaternion(a2);
          v18 = v121;
          if ( v121 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v121, 0x454u, 0LL);
          goto LABEL_280;
        case 84:
          v122 = CExpressionValueStack::Matrix4x4FromYawPitchRoll(a2);
          v18 = v122;
          if ( v122 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v122, 0x458u, 0LL);
          goto LABEL_280;
        case 85:
          v123 = CExpressionValueStack::QuaternionFromAxisAngle(a2);
          v18 = v123;
          if ( v123 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v123, 0x45Cu, 0LL);
          goto LABEL_280;
        case 86:
          v124 = CExpressionValueStack::QuaternionFromLerp(a2);
          v18 = v124;
          if ( v124 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v124, 0x460u, 0LL);
          goto LABEL_280;
        case 87:
          v125 = CExpressionValueStack::QuaternionFromRotationMatrix(a2);
          v18 = v125;
          if ( v125 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v125, 0x464u, 0LL);
          goto LABEL_280;
        case 88:
          v126 = CExpressionValueStack::QuaternionFromYawPitchRoll(a2);
          v18 = v126;
          if ( v126 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v126, 0x468u, 0LL);
          goto LABEL_280;
        case 89:
          v127 = CExpressionValueStack::TimeSpanFrom(a2, 1u);
          v18 = v127;
          if ( v127 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v127, 0x46Cu, 0LL);
          goto LABEL_280;
        case 90:
          v128 = CExpressionValueStack::TimeSpanFrom(a2, 0x3E8u);
          v18 = v128;
          if ( v128 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v128, 0x470u, 0LL);
          goto LABEL_280;
        case 91:
          v129 = CExpressionValueStack::TimeSpanFrom(a2, 0xEA60u);
          v18 = v129;
          if ( v129 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v129, 0x474u, 0LL);
          goto LABEL_280;
        case 92:
          v130 = CExpressionValueStack::Vector2Dot(a2);
          v18 = v130;
          if ( v130 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v130, 0x478u, 0LL);
          goto LABEL_280;
        case 93:
          v131 = CExpressionValueStack::Vector2Transform(a2);
          v18 = v131;
          if ( v131 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v131, 0x47Cu, 0LL);
          goto LABEL_280;
        case 94:
          v132 = CExpressionValueStack::Vector2TransformNormal(a2);
          v18 = v132;
          if ( v132 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v132, 0x480u, 0LL);
          goto LABEL_280;
        case 95:
          v133 = CExpressionValueStack::Vector3Cross(a2);
          v18 = v133;
          if ( v133 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v133, 0x484u, 0LL);
          goto LABEL_280;
        case 96:
          v134 = CExpressionValueStack::Vector3Dot(a2);
          v18 = v134;
          if ( v134 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v134, 0x488u, 0LL);
          goto LABEL_280;
        case 97:
          v135 = CExpressionValueStack::Vector3Transform(a2);
          v18 = v135;
          if ( v135 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v135, 0x48Cu, 0LL);
          goto LABEL_280;
        case 98:
          v136 = CExpressionValueStack::Vector3TransformNormal(a2);
          v18 = v136;
          if ( v136 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v136, 0x490u, 0LL);
          goto LABEL_280;
        case 99:
          v137 = CExpressionValueStack::Vector4Dot(a2);
          v18 = v137;
          if ( v137 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v137, 0x494u, 0LL);
          goto LABEL_280;
        case 100:
          v138 = CExpressionValueStack::Vector4Transform(a2);
          v18 = v138;
          if ( v138 >= 0 )
            break;
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v138, 0x498u, 0LL);
          goto LABEL_280;
        case 101:
          v13 = 16;
          if ( v14 < 0x10 )
          {
            v168 = 1182;
            goto LABEL_278;
          }
          v139 = CExpressionValueStack::Swizzle(a2, (struct ExpressionNode *)(v11 + v8));
          v18 = v139;
          if ( v139 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v139, 0x4A2u, 0LL);
            goto LABEL_280;
          }
          break;
        case 102:
          v13 = 24;
          if ( v14 < 0x18 )
          {
            v168 = 1193;
            goto LABEL_278;
          }
          v140 = CExpressionValueStack::Swizzle(a2, (struct ExpressionNode *)(v11 + v8));
          v18 = v140;
          if ( v140 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18033A620, 2u, v140, 0x4ADu, 0LL);
            goto LABEL_280;
          }
          break;
        default:
          v168 = 1253;
          goto LABEL_278;
      }
    }
    v11 = v169;
    v12 = &CExpressionValueStack::s_emptyValue;
    v8 += v13;
    if ( v8 >= *((_DWORD *)this + 95) )
      goto LABEL_275;
  }
}
