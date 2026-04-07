/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800A3334
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800A4A40 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A2F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x180057E8A (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800A2AC8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x1800A2B94 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x1800A2C2C (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 */

__int64 __fastcall CTouchDragVisualHelper::TriangulatePathGeometry(
        float a1,
        __int64 a2,
        int *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int *v7; // rcx
  float v8; // xmm1_4
  int v9; // ebx
  __int64 *v10; // r10
  int v11; // esi
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // edx
  float v15; // xmm11_4
  int v16; // eax
  int v17; // r15d
  float v18; // xmm11_4
  float v19; // xmm12_4
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rax
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  double v30; // xmm0_8
  int v31; // eax
  int v32; // edx
  __int64 v33; // r8
  __int64 v34; // rdx
  float v35; // eax
  float v36; // xmm10_4
  float v37; // eax
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm8_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm3_4
  float v45; // xmm2_4
  float *v46; // rax
  __int64 v47; // rcx
  float v48; // xmm1_4
  unsigned int v49; // esi
  int v50; // eax
  __int64 v51; // r8
  float v52; // eax
  __m128 v53; // xmm14
  __m128 v54; // xmm15
  float v55; // xmm10_4
  float v56; // xmm11_4
  float v57; // xmm13_4
  float v58; // xmm12_4
  float v59; // eax
  float v60; // xmm7_4
  float v61; // xmm8_4
  float v62; // xmm9_4
  float v63; // xmm6_4
  char v64; // r8
  __int64 v65; // rcx
  __int64 v66; // rdx
  float v67; // eax
  float v68; // xmm0_4
  __m128 v69; // xmm1
  __m128 v70; // xmm2
  float v71; // xmm6_4
  _QWORD *v72; // r15
  __int64 v73; // r10
  unsigned int v74; // eax
  unsigned int v75; // edx
  int v76; // eax
  int v77; // ecx
  __int64 v78; // r15
  unsigned int v79; // eax
  int *v80; // r9
  unsigned int v81; // r8d
  int v82; // eax
  int v83; // ecx
  int v84; // ecx
  __int64 v85; // r15
  unsigned int v86; // eax
  int *v87; // r9
  unsigned int v88; // r8d
  int v89; // eax
  int v90; // r9d
  unsigned int v92; // [rsp+28h] [rbp-E0h]
  char v93; // [rsp+38h] [rbp-D0h]
  char v94; // [rsp+39h] [rbp-CFh]
  int v95; // [rsp+3Ch] [rbp-CCh] BYREF
  int v96; // [rsp+40h] [rbp-C8h]
  int v97; // [rsp+44h] [rbp-C4h]
  int v98; // [rsp+48h] [rbp-C0h] BYREF
  float v99; // [rsp+4Ch] [rbp-BCh]
  _QWORD *v100; // [rsp+50h] [rbp-B8h]
  unsigned int v101; // [rsp+58h] [rbp-B0h]
  __int64 v102; // [rsp+5Ch] [rbp-ACh]
  int v103; // [rsp+64h] [rbp-A4h]
  int v104; // [rsp+68h] [rbp-A0h]
  unsigned int v105; // [rsp+6Ch] [rbp-9Ch]
  __int64 v106; // [rsp+70h] [rbp-98h]
  __int64 v107; // [rsp+78h] [rbp-90h]
  float v108; // [rsp+80h] [rbp-88h]
  __int64 v109; // [rsp+88h] [rbp-80h]
  __int64 v110; // [rsp+90h] [rbp-78h]
  int *v111; // [rsp+98h] [rbp-70h]
  __int64 v112; // [rsp+A0h] [rbp-68h]
  __int128 v113; // [rsp+A8h] [rbp-60h] BYREF
  int v114; // [rsp+B8h] [rbp-50h]
  int v115; // [rsp+BCh] [rbp-4Ch]
  int v116; // [rsp+C0h] [rbp-48h]
  __int64 v117; // [rsp+C8h] [rbp-40h]
  __int64 *v118; // [rsp+D8h] [rbp-30h]
  float v119; // [rsp+E8h] [rbp-20h]
  float v120; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v121; // [rsp+100h] [rbp-8h] BYREF
  float v122; // [rsp+108h] [rbp+0h]
  __int64 v123; // [rsp+110h] [rbp+8h]
  __int64 v124; // [rsp+120h] [rbp+18h]
  float v125; // [rsp+128h] [rbp+20h]
  __int64 v126; // [rsp+130h] [rbp+28h]
  float v127; // [rsp+138h] [rbp+30h]
  __int64 v128; // [rsp+140h] [rbp+38h]
  float v129; // [rsp+148h] [rbp+40h]
  float v130[4]; // [rsp+150h] [rbp+48h] BYREF
  double v131[2]; // [rsp+160h] [rbp+58h] BYREF
  int v132; // [rsp+170h] [rbp+68h] BYREF
  int v133; // [rsp+174h] [rbp+6Ch]
  int v134; // [rsp+178h] [rbp+70h]
  int v135; // [rsp+17Ch] [rbp+74h]
  int v136; // [rsp+180h] [rbp+78h]
  int v137; // [rsp+184h] [rbp+7Ch]
  float v138[6]; // [rsp+188h] [rbp+80h] BYREF
  double v139; // [rsp+1A0h] [rbp+98h] BYREF
  double v140; // [rsp+1A8h] [rbp+A0h]
  double v141; // [rsp+1B0h] [rbp+A8h]
  double v142; // [rsp+1B8h] [rbp+B0h]

  v7 = a3;
  v8 = a1;
  v109 = a5;
  v9 = 0;
  v10 = (__int64 *)a2;
  v114 = 0;
  v11 = 0;
  v115 = 0;
  v12 = 0;
  v110 = a7;
  v13 = a3[3] - a3[1];
  *(float *)&v106 = a1;
  v118 = (__int64 *)a2;
  v14 = *(_DWORD *)(a2 + 24);
  v15 = (float)v13;
  v100 = a4;
  v111 = a3;
  v105 = v14;
  v101 = v14 - 1;
  v116 = 0;
  v16 = -1;
  v96 = -1;
  *(float *)&v17 = NAN;
  v97 = -1;
  v18 = v15 / (float)(int)(v14 - 1);
  v99 = v18;
  v113 = 0LL;
  if ( !v14 )
    goto LABEL_82;
  v19 = FLOAT_1_1920929eN7;
  v20 = 0LL;
  while ( 1 )
  {
    v21 = *((unsigned int *)a4 + 6);
    v104 = v16;
    v22 = *v10;
    v23 = v8 * *(float *)(v20 + *v10 + 16);
    v24 = v8 * *(float *)(v20 + *v10 + 20);
    v25 = v8 * *(float *)(v20 + *v10 + 24);
    v26 = *(float *)(v20 + *v10 + 12);
    v27 = v24 + *(float *)(v20 + *v10 + 8);
    v138[0] = v23 + *(float *)(v20 + *v10 + 4);
    v138[1] = v27;
    v138[2] = v25 + v26;
    v28 = *(float *)(v20 + v22 + 8) - v24;
    v29 = *(float *)(v20 + v22 + 12) - v25;
    v138[3] = *(float *)(v20 + v22 + 4) - v23;
    v30 = (double)*v7;
    v138[4] = v28;
    v139 = v30;
    *(float *)&v30 = (float)v7[1];
    v138[5] = v29;
    v141 = (double)v7[2];
    v140 = (float)((float)((float)(int)v12 * v18) + *(float *)&v30);
    v142 = v140;
    v31 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)a4, v138, 2u);
    v9 = v31;
    if ( v31 < 0 )
    {
      v92 = 237;
      goto LABEL_80;
    }
    v31 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v109, &v139, 2u);
    v9 = v31;
    if ( v31 < 0 )
    {
      v92 = 238;
      goto LABEL_80;
    }
    v95 = 255;
    v31 = DynArray<unsigned long,0>::AddAndSet(v110, 2u, &v95);
    v9 = v31;
    if ( v31 < 0 )
    {
      v92 = 239;
      goto LABEL_80;
    }
    if ( v12 )
    {
      v94 = 0;
      v32 = v12 - 1;
      if ( v17 >= 0 )
        v32 = v17;
      v33 = *v100;
      v95 = v32;
      v123 = *(_QWORD *)(v33 + 12 * v21);
      v117 = *(_QWORD *)(v33 + 12LL * (unsigned int)(v21 + 1));
      v34 = (unsigned int)v21 + 2 * (v32 - v12);
      v35 = *(float *)(v33 + 12 * v34 + 8);
      v124 = *(_QWORD *)(v33 + 12 * v34);
      v125 = v35;
      v36 = v35;
      v37 = *(float *)(v33 + 12LL * (unsigned int)(v34 + 1) + 8);
      v107 = *(_QWORD *)(v33 + 12LL * (unsigned int)(v34 + 1));
      v38 = *(float *)&v107 - *(float *)&v124;
      v39 = *((float *)&v107 + 1) - *((float *)&v124 + 1);
      v108 = v37;
      v40 = (float)((float)(*((float *)&v117 + 1) - *((float *)&v123 + 1)) * (float)(*(float *)&v107 - *(float *)&v124))
          - (float)((float)(*(float *)&v117 - *(float *)&v123) * (float)(*((float *)&v107 + 1) - *((float *)&v124 + 1)));
      if ( COERCE_FLOAT(LODWORD(v40) & _xmm) <= v19 )
        break;
      v41 = (float)((float)((float)(*(float *)&v117 - *(float *)&v123)
                          * (float)(*((float *)&v124 + 1) - *((float *)&v123 + 1)))
                  - (float)((float)(*((float *)&v117 + 1) - *((float *)&v123 + 1))
                          * (float)(*(float *)&v124 - *(float *)&v123)))
          / v40;
      v42 = (float)((float)(v38 * (float)(*((float *)&v124 + 1) - *((float *)&v123 + 1)))
                  - (float)(v39 * (float)(*(float *)&v124 - *(float *)&v123)))
          / v40;
      if ( v41 <= v19 )
        break;
      if ( v41 >= 0.99999988 )
        break;
      if ( v42 <= v19 )
        break;
      if ( v42 >= 0.99999988 )
        break;
      v130[0] = *(float *)&v124 + (float)(v38 * v41);
      v130[1] = *((float *)&v124 + 1) + (float)(v39 * v41);
      v130[2] = v36 + (float)((float)(v37 - v125) * v41);
      DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)&v113, v130, 1u);
      v17 = v95;
      v11 = v116;
      v94 = 1;
      v96 = v95;
      if ( v12 == v101 )
        break;
    }
LABEL_66:
    ++v12;
    v20 += 28LL;
    if ( v12 >= v105 )
      goto LABEL_82;
    v8 = *(float *)&v106;
    v17 = v96;
    v16 = v97;
    v7 = v111;
    a4 = v100;
    v10 = v118;
  }
  if ( v17 < 0 )
  {
LABEL_50:
    if ( !v94 )
    {
      v83 = v97;
      if ( v97 > 0 )
        v83 = -1;
      v97 = v83;
      v84 = v104;
      if ( v104 <= 0 )
        v84 = v21 - 2;
      if ( v17 >= 0 )
      {
        v97 = v21;
        v96 = -1;
      }
      v132 = v21;
      v134 = v84 + 1;
      v85 = 0LL;
      v135 = v84 + 1;
      v136 = v21 + 1;
      v133 = v84;
      v137 = v21;
      while ( 1 )
      {
        v86 = *(_DWORD *)(a6 + 24);
        v87 = &v132 + v85;
        v88 = v86 + 1;
        if ( v86 + 1 < v86 )
          break;
        if ( v88 > *(_DWORD *)(a6 + 20) )
        {
          v89 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v87);
          v9 = v89;
          if ( v89 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v89, 0xC0u);
          if ( v9 < 0 )
            goto LABEL_76;
        }
        else
        {
          v9 = 0;
          *(_DWORD *)(*(_QWORD *)a6 + 4LL * v86) = *v87;
          *(_DWORD *)(a6 + 24) = v88;
        }
        v85 = (unsigned int)(v85 + 1);
        if ( (unsigned int)v85 >= 6 )
          goto LABEL_66;
      }
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_76:
      v92 = 381;
      goto LABEL_70;
    }
    goto LABEL_66;
  }
  v43 = 0.0;
  v121 = 0LL;
  v44 = 0.0;
  v45 = 0.0;
  v122 = 0.0;
  v93 = 0;
  if ( v11 )
  {
    v43 = v122;
    v46 = (float *)(v113 + 8);
    v47 = (unsigned int)v11;
    do
    {
      v45 = v45 + *(v46 - 2);
      v44 = v44 + *(v46 - 1);
      v43 = v43 + *v46;
      v46 += 3;
      v121 = __PAIR64__(LODWORD(v44), LODWORD(v45));
      v122 = v43;
      --v47;
    }
    while ( v47 );
  }
  v116 = 0;
  v48 = 1.0 / (float)v11;
  *(float *)&v121 = v45 * v48;
  *((float *)&v121 + 1) = v44 * v48;
  v122 = v43 * v48;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v113, 0xCu);
  v49 = v17;
  if ( v17 >= v12 )
  {
LABEL_49:
    v11 = v116;
    goto LABEL_50;
  }
  v50 = 2 * v12;
  while ( 1 )
  {
    v51 = (unsigned int)v21 + 2 * v49 - v50;
    v103 = v21 + 2 * v49 - v50;
    v112 = *v100;
    v52 = *(float *)(v112 + 12 * v51 + 8);
    v126 = *(_QWORD *)(v112 + 12 * v51);
    v53 = (__m128)(unsigned int)v126;
    v54 = (__m128)HIDWORD(v126);
    v55 = *(float *)&v121 - *(float *)&v126;
    v127 = v52;
    v56 = *((float *)&v121 + 1) - *((float *)&v126 + 1);
    v57 = v52;
    v58 = v122 - v52;
    v59 = *(float *)(v112 + 12LL * (unsigned int)(v51 + 1) + 8);
    v128 = *(_QWORD *)(v112 + 12LL * (unsigned int)(v51 + 1));
    v60 = *(float *)&v121 - *(float *)&v128;
    v102 = v128;
    v61 = *((float *)&v121 + 1) - *((float *)&v128 + 1);
    v129 = v59;
    *(float *)&v98 = v59;
    v62 = v122 - v59;
    *(float *)&v95 = sqrtf_0(
                       (float)((float)((float)(*(float *)&v128 - *(float *)&v126)
                                     * (float)(*(float *)&v128 - *(float *)&v126))
                             + (float)((float)(*((float *)&v128 + 1) - *((float *)&v126 + 1))
                                     * (float)(*((float *)&v128 + 1) - *((float *)&v126 + 1))))
                     + (float)((float)(v59 - v57) * (float)(v59 - v57)));
    v63 = *(float *)&v95 / sqrtf_0((float)((float)(v55 * v55) + (float)(v56 * v56)) + (float)(v58 * v58));
    if ( v49 == v17 )
    {
      if ( v63 <= 2.0 )
      {
        v93 = 1;
LABEL_27:
        v65 = v112;
        v53.m128_f32[0] = v53.m128_f32[0] + (float)(v55 * v63);
        v54.m128_f32[0] = v54.m128_f32[0] + (float)(v56 * v63);
        v66 = 3LL * ((unsigned int)v21 + 2 * (v49 - v12) + 1);
        v119 = v57 + (float)(v58 * v63);
        v67 = v119;
        *(_QWORD *)(v112 + 12LL * ((unsigned int)v21 + 2 * (v49 - v12) + 1)) = _mm_unpacklo_ps(v53, v54).m128_u64[0];
        goto LABEL_29;
      }
      v64 = 0;
      v93 = 0;
    }
    else
    {
      v64 = v93;
    }
    if ( v64 )
      goto LABEL_27;
    v68 = sqrtf_0((float)((float)(v60 * v60) + (float)(v61 * v61)) + (float)(v62 * v62));
    v69 = (__m128)(unsigned int)v102;
    v70 = (__m128)HIDWORD(v102);
    v65 = v112;
    v71 = *(float *)&v95 / v68;
    v66 = 3LL * ((unsigned int)v21 + 2 * (v49 - v12));
    v69.m128_f32[0] = *(float *)&v102 + (float)(v60 * (float)(*(float *)&v95 / v68));
    v70.m128_f32[0] = *((float *)&v102 + 1) + (float)(v61 * (float)(*(float *)&v95 / v68));
    v120 = *(float *)&v98 + (float)(v62 * (float)(*(float *)&v95 / v68));
    v67 = v120;
    *(_QWORD *)(v112 + 12LL * ((unsigned int)v21 + 2 * (v49 - v12))) = _mm_unpacklo_ps(v69, v70).m128_u64[0];
    v63 = v71 / (float)(v71 - 1.0);
LABEL_29:
    *(float *)(v65 + 4 * v66 + 8) = v67;
    if ( v49 < v12 - 1 )
      break;
    v18 = v99;
LABEL_47:
    ++v49;
    v50 = 2 * v12;
    if ( v49 >= v12 )
    {
      v19 = FLOAT_1_1920929eN7;
      goto LABEL_49;
    }
  }
  v72 = v100;
  v31 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)v100, &v121, 1u);
  v9 = v31;
  if ( v31 < 0 )
  {
    v92 = 337;
    goto LABEL_80;
  }
  v18 = v99;
  v131[0] = (float)((float)((float)(v111[2] - *v111) / v63) + (float)*v111);
  v131[1] = (float)((float)((float)((float)(int)v49 * v99) + (float)v111[1]) + (float)(v99 * 0.5));
  v31 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v109, v131, 1u);
  v9 = v31;
  if ( v31 < 0 )
  {
    v92 = 340;
LABEL_80:
    v90 = v31;
    goto LABEL_81;
  }
  v73 = v110;
  v98 = 255;
  v74 = *(_DWORD *)(v110 + 24);
  v75 = v74 + 1;
  if ( v74 + 1 < v74 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_72:
    v92 = 341;
    goto LABEL_70;
  }
  if ( v75 > *(_DWORD *)(v110 + 20) )
  {
    v76 = DynArrayImpl<0>::AddMultipleAndSet(v110, 4u, 1, &v98);
    v9 = v76;
    if ( v76 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v76, 0xC0u);
    if ( v9 >= 0 )
      goto LABEL_38;
    goto LABEL_72;
  }
  *(_DWORD *)(*(_QWORD *)v110 + 4LL * v74) = 255;
  *(_DWORD *)(v73 + 24) = v75;
LABEL_38:
  v77 = *((_DWORD *)v72 + 6) - 1;
  v132 = v103;
  v134 = v77;
  v78 = 0LL;
  v137 = v77;
  v133 = v103 + 2;
  v135 = v103 + 1;
  v136 = v103 + 3;
  while ( 1 )
  {
    v79 = *(_DWORD *)(a6 + 24);
    v80 = &v132 + v78;
    v81 = v79 + 1;
    if ( v79 + 1 < v79 )
      break;
    if ( v81 > *(_DWORD *)(a6 + 20) )
    {
      v82 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v80);
      v9 = v82;
      if ( v82 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v82, 0xC0u);
      if ( v9 < 0 )
        goto LABEL_69;
    }
    else
    {
      v9 = 0;
      *(_DWORD *)(*(_QWORD *)a6 + 4LL * v79) = *v80;
      *(_DWORD *)(a6 + 24) = v81;
    }
    v78 = (unsigned int)(v78 + 1);
    if ( (unsigned int)v78 >= 6 )
    {
      v17 = v96;
      goto LABEL_47;
    }
  }
  v9 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_69:
  v92 = 353;
LABEL_70:
  v90 = v9;
LABEL_81:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v90, v92);
LABEL_82:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v113);
  return (unsigned int)v9;
}
