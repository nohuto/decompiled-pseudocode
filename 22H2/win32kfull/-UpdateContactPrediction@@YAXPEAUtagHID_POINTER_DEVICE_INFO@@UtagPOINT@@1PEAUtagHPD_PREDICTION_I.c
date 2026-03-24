/*
 * XREFs of ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01ECF3C
 * Callers:
 *     DoPrediction @ 0x1C01EE070 (DoPrediction.c)
 * Callees:
 *     ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x1C01EBBF4 (-DeltaOvershootCompensation@Prediction@@YA_J_J0@Z.c)
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x1C01EBC50 (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01EBCF4 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01ECDAC (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 */

void __fastcall UpdateContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  struct tagHPD_PREDICTION_INFO *v6; // r10
  int v7; // r9d
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  signed __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  struct tagHPD_PREDICTION_INFO *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // r14
  signed __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  struct tagHPD_PREDICTION_INFO *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r14
  signed __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r9
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rcx
  int v46; // r11d
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  __int64 *v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rbx
  signed __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r9
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // r11
  unsigned __int64 v72; // rcx
  int v73; // r10d
  __int64 v74; // r8
  unsigned __int64 v75; // rdx
  struct tagHPD_PREDICTION_INFO *v76; // rsi
  __int64 *v77; // rax
  __int64 *v78; // rax
  __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // rbx
  signed __int64 v88; // rdx
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rsi
  unsigned __int64 v91; // r8
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rdx
  __int64 v97; // r9
  unsigned __int64 v98; // rsi
  unsigned __int64 v99; // r11
  unsigned __int64 v100; // rcx
  int v101; // r10d
  __int64 v102; // r8
  unsigned __int64 v103; // rdx
  __int64 *v104; // rax
  __int64 *v105; // rax
  __int64 v106; // rax
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rax
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rbx
  __int64 v114; // rbx
  signed __int64 v115; // rax
  signed __int64 v116; // rdx
  __int64 v117; // r12
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // rsi
  unsigned __int64 v120; // r8
  unsigned __int64 v121; // rcx
  unsigned __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r14
  unsigned __int64 v127; // rsi
  unsigned __int64 v128; // rdx
  __int64 *v129; // rax
  __int64 *v130; // r14
  __int64 *v131; // rax
  __int64 v132; // rax
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rax
  int v137; // eax
  __int64 v138; // rcx
  LONG x; // edx
  LONG v140; // eax
  LONG v141; // eax
  LONG y; // edx
  LONG v143; // eax
  LONG v144; // eax
  LONG v145; // eax
  LONG v146; // edx
  LONG v147; // edx
  LONG v148; // eax
  LONG v149; // edx
  LONG v150; // edx
  int v151; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v152; // [rsp+38h] [rbp-38h] BYREF
  __int64 v153; // [rsp+40h] [rbp-30h]
  __int64 v154; // [rsp+48h] [rbp-28h]
  __int64 v155; // [rsp+50h] [rbp-20h]
  __int64 v156; // [rsp+58h] [rbp-18h]
  __int64 v157; // [rsp+60h] [rbp-10h] BYREF
  __int64 v158; // [rsp+68h] [rbp-8h] BYREF

  v6 = a4;
  if ( gbTOUCH_DRIVER_HW_STACK_TIMESTAMP != 1 || (v7 = *((_DWORD *)a1 + 197) - *((_DWORD *)a1 + 198)) == 0 )
    v7 = glTOUCH_DRIVER_HW_STACK_SAMPLETIME;
  if ( !v7 )
  {
    *a5 = a2;
    *a6 = a3;
    return;
  }
  v8 = 0LL;
  v151 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v152 = (__int64)glTOUCH_DRIVER_HW_STACK_LATENCY << 32;
  v11 = 0LL;
  v154 = (__int64)a3.x << 32;
  v155 = (__int64)a3.y << 32;
  v12 = (__int64)a2.y << 32;
  v13 = (__int64)v7 << 32;
  v156 = (__int64)a2.x << 32;
  v153 = v12;
  v14 = v156 - *((_QWORD *)v6 + 270);
  if ( v14 )
  {
    v15 = (Div128by64(v14 >> 32, v14 << 32, v13, &v157) + 0x80000000) & 0xFFFFFFFF00000000uLL;
    v16 = Div128by64((__int64)(v15 - *((_QWORD *)a4 + 262)) >> 32, (v15 - *((_QWORD *)a4 + 262)) << 32, v13, &v157);
    v17 = v16;
    if ( v16 < 0 )
      v16 = -v16;
    v6 = a4;
    v18 = *((_QWORD *)a4 + 266);
    if ( v16 > v18 )
    {
      v18 = v17;
      if ( v17 < 0 )
        v18 = -v17;
      *((_QWORD *)a4 + 266) = v18;
    }
    if ( v18 )
    {
      v19 = v17;
      if ( v17 < 0 )
        v19 = -v17;
      v20 = Div128by64(v19 >> 32, v19 << 32, v18, &v157);
      v6 = a4;
      v21 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1888);
      if ( (__int64 *)((char *)a4 + 1888) != &v157 )
        *(_QWORD *)v21 = v20;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1856) != v21 )
        *((_QWORD *)a4 + 232) = *(_QWORD *)v21;
    }
    v22 = *((_QWORD *)v6 + 264);
    v23 = v17;
    if ( v17 < 0 )
      v23 = -v17;
    if ( v22 < 0 )
      v22 = -v22;
    v8 = v23 - v22;
    *((_QWORD *)v6 + 262) = v15;
    v12 = v153;
    *((_QWORD *)v6 + 264) = v17;
  }
  if ( v12 != *((_QWORD *)v6 + 271) )
  {
    v24 = (Div128by64((v12 - *((_QWORD *)v6 + 271)) >> 32, (v12 - *((_QWORD *)v6 + 271)) << 32, v13, &v157) + 0x80000000) & 0xFFFFFFFF00000000uLL;
    v25 = Div128by64((__int64)(v24 - *((_QWORD *)a4 + 263)) >> 32, (v24 - *((_QWORD *)a4 + 263)) << 32, v13, &v157);
    v26 = v25;
    if ( v25 < 0 )
      v25 = -v25;
    v6 = a4;
    v27 = *((_QWORD *)a4 + 267);
    if ( v25 > v27 )
    {
      v27 = v26;
      if ( v26 < 0 )
        v27 = -v26;
      *((_QWORD *)a4 + 267) = v27;
    }
    if ( v27 )
    {
      v28 = v26;
      if ( v26 < 0 )
        v28 = -v26;
      v29 = Div128by64(v28 >> 32, v28 << 32, v27, &v157);
      v6 = a4;
      v30 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1904);
      if ( (__int64 *)((char *)a4 + 1904) != &v157 )
        *(_QWORD *)v30 = v29;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1872) != v30 )
        *((_QWORD *)a4 + 234) = *(_QWORD *)v30;
    }
    v31 = *((_QWORD *)v6 + 265);
    v32 = v26;
    if ( v26 < 0 )
      v32 = -v26;
    if ( v31 < 0 )
      v31 = -v31;
    v11 = v32 - v31;
    *((_QWORD *)v6 + 263) = v24;
    *((_QWORD *)v6 + 265) = v26;
  }
  v33 = v154 - *((_QWORD *)v6 + 268);
  if ( v154 == *((_QWORD *)v6 + 268) )
  {
    v54 = *((_QWORD *)v6 + 272);
    v34 = v152;
  }
  else
  {
    v34 = v152;
    v35 = Div128by64(v33 >> 32, v33 << 32, v13, &v157);
    v152 = (__int64)(v152 ^ v35) >> 63;
    if ( v35 < 0 )
      v35 = -v35;
    v36 = -v34;
    if ( v34 >= 0 )
      v36 = v34;
    v157 = (unsigned int)v36 * (unsigned __int64)(unsigned int)v35;
    v37 = HIDWORD(v36);
    v38 = HIDWORD(v157) + (unsigned int)v36 * (unsigned __int64)HIDWORD(v35);
    v39 = v152 ^ ((unsigned int)(v38 + v35 * v37) | ((unsigned __int64)(unsigned int)((((unsigned int)v38
                                                                                      + (unsigned int)v35 * v37) >> 32)
                                                                                    + HIDWORD(v35) * v37
                                                                                    + HIDWORD(v38)) << 32));
    v40 = v39 - v152;
    if ( (_DWORD)v157 )
      v40 = v39;
    if ( v8 < 0 )
    {
      v41 = *((_QWORD *)a4 + 232);
      v42 = 0x100000000LL - v41;
      v157 = (v40 ^ (0x100000000LL - v41)) >> 63;
      if ( v40 < 0 )
        v40 = -v40;
      if ( v42 < 0 )
        v42 = v41 - 0x100000000LL;
      v43 = (unsigned int)v40;
      v152 = (unsigned int)v42 * (unsigned __int64)(unsigned int)v40;
      v44 = HIDWORD(v40);
      v45 = HIDWORD(v152) + (unsigned int)v42 * HIDWORD(v40);
      v46 = v44 * HIDWORD(v42);
      v47 = (unsigned int)v45 + v43 * HIDWORD(v42);
      v48 = v157 ^ ((unsigned int)v47 | ((unsigned __int64)(unsigned int)(HIDWORD(v47)
                                                                        + v44 * HIDWORD(v42)
                                                                        + HIDWORD(v45)) << 32));
      v40 = (v157 ^ ((unsigned int)v47 | ((unsigned __int64)(unsigned int)(HIDWORD(v47) + v46 + HIDWORD(v45)) << 32)))
          - v157;
      if ( (_DWORD)v152 )
        v40 = v48;
    }
    v157 = v40;
    v152 = v33;
    v49 = Prediction::tagRlsFilter::Filter(a4, &v158, (__int64)&v152, (__int64)&v157, &v151);
    if ( &v152 != (unsigned __int64 *)v49 )
      v9 = *v49;
    v157 = v9;
    v50 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 232, &v158, &v157);
    if ( v151 )
    {
      if ( &v152 != (unsigned __int64 *)v50 )
        v10 = *v50;
      v6 = a4;
      v55 = v154;
      v56 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 276) += v10;
      v54 = *((_QWORD *)a4 + 276) + v55;
      *((_QWORD *)a4 + 272) = v54;
      if ( (__int64 *)((char *)a4 + 1856) != &v158 )
        *((_QWORD *)a4 + 232) = v56;
      if ( (__int64 *)((char *)a4 + 1864) != &v158 )
        *((_QWORD *)a4 + 233) = 0LL;
    }
    else
    {
      if ( &v152 != (unsigned __int64 *)v50 )
        v10 = *v50;
      v51 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 276), v33);
      v53 = v51 + v52 + v154;
      *((_QWORD *)v6 + 276) = v51 + v52;
      v54 = v10 + v53;
    }
    v57 = 1;
    if ( v33 < 0 )
      v57 = -1;
    v58 = *((_QWORD *)v6 + 272);
    if ( v57 == 1 )
    {
      if ( v54 > v58 )
        v58 = v54;
    }
    else if ( v54 < v58 )
    {
      goto LABEL_78;
    }
    v54 = v58;
  }
LABEL_78:
  v59 = v156;
  *((_QWORD *)v6 + 272) = v54;
  a6->x = (unsigned __int64)(v54 + 0x80000000LL) >> 32;
  v60 = v59 - *((_QWORD *)v6 + 270);
  if ( v60 )
  {
    v61 = Div128by64(v60 >> 32, v60 << 32, v13, &v158);
    v157 = (v34 ^ v61) >> 63;
    if ( v61 < 0 )
      v61 = -v61;
    v62 = -v34;
    if ( v34 >= 0 )
      v62 = v34;
    v152 = (unsigned int)v62 * (unsigned __int64)(unsigned int)v61;
    v63 = HIDWORD(v62);
    v64 = HIDWORD(v152) + (unsigned int)v62 * (unsigned __int64)HIDWORD(v61);
    v65 = v157 ^ ((unsigned int)(v64 + v61 * v63) | ((unsigned __int64)(unsigned int)((((unsigned int)v64
                                                                                      + (unsigned int)v61 * v63) >> 32)
                                                                                    + HIDWORD(v61) * v63
                                                                                    + HIDWORD(v64)) << 32));
    v66 = v65 - v157;
    if ( (_DWORD)v152 )
      v66 = v65;
    if ( v8 < 0 )
    {
      v67 = *((_QWORD *)a4 + 236);
      v68 = 0x100000000LL - v67;
      v157 = (v66 ^ (0x100000000LL - v67)) >> 63;
      if ( v66 < 0 )
        v66 = -v66;
      if ( v68 < 0 )
        v68 = v67 - 0x100000000LL;
      v69 = (unsigned int)v66;
      v70 = (unsigned int)v68 * (unsigned __int64)(unsigned int)v66;
      v71 = HIDWORD(v66);
      v72 = HIDWORD(v70) + (unsigned int)v68 * HIDWORD(v66);
      v73 = v71 * HIDWORD(v68);
      v74 = (unsigned int)v72 + v69 * HIDWORD(v68);
      v75 = v157 ^ ((unsigned int)v74 | ((unsigned __int64)(unsigned int)(HIDWORD(v74)
                                                                        + v71 * HIDWORD(v68)
                                                                        + HIDWORD(v72)) << 32));
      v66 = (v157 ^ ((unsigned int)v74 | ((unsigned __int64)(unsigned int)(HIDWORD(v74) + v73 + HIDWORD(v72)) << 32)))
          - v157;
      if ( (_DWORD)v70 )
        v66 = v75;
    }
    v76 = a4;
    v157 = v66;
    v152 = v60;
    v77 = Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 108, &v158, (__int64)&v152, (__int64)&v157, &v151);
    if ( &v152 != (unsigned __int64 *)v77 )
      v9 = *v77;
    v157 = v9;
    v78 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 236, &v158, &v157);
    if ( v151 )
    {
      if ( &v152 != (unsigned __int64 *)v78 )
        v10 = *v78;
      *((_QWORD *)a4 + 278) += v10;
      v82 = v156 + *((_QWORD *)a4 + 278);
      v83 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 274) = v82;
      if ( (__int64 *)((char *)a4 + 1888) != &v158 )
        *((_QWORD *)a4 + 236) = v83;
      if ( (__int64 *)((char *)a4 + 1896) != &v158 )
        *((_QWORD *)a4 + 237) = 0LL;
    }
    else
    {
      if ( &v152 != (unsigned __int64 *)v78 )
        v10 = *v78;
      v79 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 278), v60);
      v81 = v79 + v80 + v156;
      *((_QWORD *)a4 + 278) = v79 + v80;
      v82 = v10 + v81;
    }
    v84 = 1;
    if ( v60 < 0 )
      v84 = -1;
    v85 = *((_QWORD *)a4 + 274);
    if ( v84 == 1 )
    {
      if ( v82 > v85 )
        v85 = v82;
    }
    else if ( v82 < v85 )
    {
      goto LABEL_113;
    }
    v82 = v85;
  }
  else
  {
    v76 = a4;
    v82 = *((_QWORD *)a4 + 274);
  }
LABEL_113:
  v86 = v155;
  *((_QWORD *)v76 + 274) = v82;
  a5->x = (unsigned __int64)(v82 + 0x80000000LL) >> 32;
  v87 = v86 - *((_QWORD *)v76 + 269);
  if ( v87 )
  {
    v88 = Div128by64(v87 >> 32, v87 << 32, v13, &v158);
    v157 = (v34 ^ v88) >> 63;
    if ( v88 < 0 )
      v88 = -v88;
    v89 = -v34;
    if ( v34 >= 0 )
      v89 = v34;
    v90 = (unsigned int)v89 * (unsigned __int64)(unsigned int)v88;
    v91 = HIDWORD(v89);
    v92 = HIDWORD(v90) + (unsigned int)v89 * (unsigned __int64)HIDWORD(v88);
    v93 = v157 ^ ((unsigned int)(v92 + v88 * v91) | ((unsigned __int64)(unsigned int)((((unsigned int)v92
                                                                                      + (unsigned int)v88 * v91) >> 32)
                                                                                    + HIDWORD(v88) * v91
                                                                                    + HIDWORD(v92)) << 32));
    v94 = v93 - v157;
    if ( (_DWORD)v90 )
      v94 = v93;
    if ( v11 < 0 )
    {
      v95 = *((_QWORD *)a4 + 234);
      v96 = 0x100000000LL - v95;
      v157 = (v94 ^ (0x100000000LL - v95)) >> 63;
      if ( v94 < 0 )
        v94 = -v94;
      if ( v96 < 0 )
        v96 = v95 - 0x100000000LL;
      v97 = (unsigned int)v94;
      v98 = (unsigned int)v96 * (unsigned __int64)(unsigned int)v94;
      v99 = HIDWORD(v94);
      v100 = HIDWORD(v98) + (unsigned int)v96 * HIDWORD(v94);
      v101 = v99 * HIDWORD(v96);
      v102 = (unsigned int)v100 + v97 * HIDWORD(v96);
      v103 = v157 ^ ((unsigned int)v102 | ((unsigned __int64)(unsigned int)(HIDWORD(v102)
                                                                          + v99 * HIDWORD(v96)
                                                                          + HIDWORD(v100)) << 32));
      v94 = (v157 ^ ((unsigned int)v102 | ((unsigned __int64)(unsigned int)(HIDWORD(v102) + v101 + HIDWORD(v100)) << 32)))
          - v157;
      if ( (_DWORD)v98 )
        v94 = v103;
    }
    v76 = a4;
    v157 = v94;
    v152 = v87;
    v104 = Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 54, &v158, (__int64)&v152, (__int64)&v157, &v151);
    if ( &v152 != (unsigned __int64 *)v104 )
      v9 = *v104;
    v157 = v9;
    v105 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 234, &v158, &v157);
    if ( v151 )
    {
      if ( &v152 != (unsigned __int64 *)v105 )
        v10 = *v105;
      *((_QWORD *)a4 + 277) += v10;
      v109 = *((_QWORD *)a4 + 277) + v155;
      v110 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 273) = v109;
      if ( (__int64 *)((char *)a4 + 1872) != &v158 )
        *((_QWORD *)a4 + 234) = v110;
      if ( (__int64 *)((char *)a4 + 1880) != &v158 )
        *((_QWORD *)a4 + 235) = 0LL;
    }
    else
    {
      if ( &v152 != (unsigned __int64 *)v105 )
        v10 = *v105;
      v106 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 277), v87);
      v108 = v106 + v107 + v155;
      *((_QWORD *)a4 + 277) = v106 + v107;
      v109 = v10 + v108;
    }
    v111 = 1;
    if ( v87 < 0 )
      v111 = -1;
    v112 = *((_QWORD *)a4 + 273);
    if ( v111 == 1 )
    {
      if ( v109 > v112 )
        v112 = v109;
    }
    else if ( v109 < v112 )
    {
      goto LABEL_148;
    }
    v109 = v112;
  }
  else
  {
    v109 = *((_QWORD *)v76 + 273);
  }
LABEL_148:
  v113 = v153;
  *((_QWORD *)v76 + 273) = v109;
  a6->y = (unsigned __int64)(v109 + 0x80000000LL) >> 32;
  v114 = v113 - *((_QWORD *)v76 + 271);
  if ( !v114 )
  {
    v135 = *((_QWORD *)v76 + 275);
    goto LABEL_183;
  }
  v115 = Div128by64(v114 >> 32, v114 << 32, v13, &v158);
  v116 = v115;
  v117 = (v34 ^ v115) >> 63;
  if ( v115 < 0 )
    v116 = -v115;
  v118 = -v34;
  if ( v34 >= 0 )
    v118 = v34;
  v119 = (unsigned int)v118 * (unsigned __int64)(unsigned int)v116;
  v120 = HIDWORD(v118);
  v121 = HIDWORD(v119) + (unsigned int)v118 * (unsigned __int64)HIDWORD(v116);
  v122 = v117 ^ ((unsigned int)(v121 + v116 * v120) | ((unsigned __int64)(unsigned int)((((unsigned int)v121
                                                                                        + (unsigned int)v116 * v120) >> 32)
                                                                                      + HIDWORD(v116) * v120
                                                                                      + HIDWORD(v121)) << 32));
  v123 = v122 - v117;
  if ( (_DWORD)v119 )
    v123 = v122;
  if ( v11 < 0 )
  {
    v124 = *((_QWORD *)a4 + 238);
    v125 = 0x100000000LL - v124;
    v126 = ((0x100000000LL - v124) ^ v123) >> 63;
    if ( v123 < 0 )
      v123 = -v123;
    if ( v125 < 0 )
      v125 = v124 - 0x100000000LL;
    v127 = (unsigned int)v125 * (unsigned __int64)(unsigned int)v123;
    v128 = v126 ^ ((unsigned int)(HIDWORD(v127) + v125 * HIDWORD(v123) + v123 * HIDWORD(v125)) | ((unsigned __int64)(unsigned int)((((unsigned int)(HIDWORD(v127) + v125 * HIDWORD(v123)) + (unsigned int)v123 * (unsigned __int64)HIDWORD(v125)) >> 32) + HIDWORD(v123) * HIDWORD(v125) + ((HIDWORD(v127) + (unsigned int)v125 * HIDWORD(v123)) >> 32)) << 32));
    v123 = v128 - v126;
    if ( (_DWORD)v127 )
      v123 = v128;
  }
  v76 = a4;
  v157 = v123;
  v152 = v114;
  v129 = Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 162, &v158, (__int64)&v152, (__int64)&v157, &v151);
  if ( &v152 != (unsigned __int64 *)v129 )
    v9 = *v129;
  v130 = (__int64 *)((char *)a4 + 1904);
  v157 = v9;
  v131 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 238, &v158, &v157);
  if ( v151 )
  {
    if ( &v152 != (unsigned __int64 *)v131 )
      v10 = *v131;
    *((_QWORD *)a4 + 279) += v10;
    v135 = *((_QWORD *)a4 + 279) + v153;
    v136 = gPredictorRLSExpoSmoothAlpha;
    *((_QWORD *)a4 + 275) = v135;
    if ( v130 != &v158 )
      *v130 = v136;
    if ( (__int64 *)((char *)a4 + 1912) != &v158 )
      *((_QWORD *)a4 + 239) = 0LL;
  }
  else
  {
    if ( &v152 != (unsigned __int64 *)v131 )
      v10 = *v131;
    v132 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 279), v114);
    v134 = v132 + v133 + v153;
    *((_QWORD *)a4 + 279) = v132 + v133;
    v135 = v10 + v134;
  }
  v137 = 1;
  if ( v114 < 0 )
    v137 = -1;
  v138 = *((_QWORD *)a4 + 275);
  if ( v137 == 1 )
  {
    if ( v135 > v138 )
      v138 = v135;
    goto LABEL_181;
  }
  if ( v135 >= v138 )
LABEL_181:
    v135 = v138;
LABEL_183:
  *((_QWORD *)v76 + 275) = v135;
  a5->y = (unsigned __int64)(v135 + 0x80000000LL) >> 32;
  *((_QWORD *)v76 + 268) = v154;
  *((_QWORD *)v76 + 269) = v155;
  *((_QWORD *)v76 + 270) = v156;
  *((_QWORD *)v76 + 271) = v153;
  x = a6->x;
  v140 = *((_DWORD *)a1 + 40);
  if ( a6->x < v140 )
  {
    a6->x = v140;
    x = v140;
  }
  v141 = *((_DWORD *)a1 + 42) - 1;
  if ( x > v141 )
    a6->x = v141;
  y = a6->y;
  v143 = *((_DWORD *)a1 + 41);
  if ( y < v143 )
  {
    a6->y = v143;
    y = v143;
  }
  v144 = *((_DWORD *)a1 + 43) - 1;
  if ( y > v144 )
    a6->y = v144;
  v145 = a5->x;
  v146 = *((_DWORD *)a1 + 44);
  if ( a5->x < v146 )
  {
    a5->x = v146;
    v145 = v146;
  }
  v147 = *((_DWORD *)a1 + 46);
  if ( v145 > v147 )
    a5->x = v147;
  v148 = a5->y;
  v149 = *((_DWORD *)a1 + 45);
  if ( v148 < v149 )
  {
    a5->y = v149;
    v148 = v149;
  }
  v150 = *((_DWORD *)a1 + 47);
  if ( v148 > v150 )
    a5->y = v150;
}
