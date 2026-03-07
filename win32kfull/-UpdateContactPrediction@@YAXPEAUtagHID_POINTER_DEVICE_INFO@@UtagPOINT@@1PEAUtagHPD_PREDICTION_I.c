void __fastcall UpdateContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  struct tagHPD_PREDICTION_INFO *v6; // rsi
  int v7; // r9d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  signed __int64 v16; // rbx
  unsigned __int64 v17; // rax
  signed __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  struct tagHPD_PREDICTION_INFO *v22; // rcx
  __int64 v23; // rcx
  signed __int64 v24; // r15
  unsigned __int64 v25; // rsi
  signed __int64 v26; // rbx
  unsigned __int64 v27; // rax
  signed __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  struct tagHPD_PREDICTION_INFO *v32; // rcx
  __int64 v33; // rcx
  signed __int64 v34; // r13
  __int64 v35; // rbx
  __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rsi
  __int64 v40; // r9
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  __int64 *v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rsi
  unsigned __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned __int64 v62; // rsi
  __int64 v63; // r9
  unsigned __int64 v64; // r11
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  __int64 *v68; // r15
  __int64 v69; // rdx
  unsigned __int64 v70; // r15
  __int64 v71; // r11
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rdx
  bool v74; // zf
  __int64 *v75; // rax
  __int64 *v76; // rax
  __int64 v77; // rax
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rbx
  __int64 v85; // rsi
  signed __int64 v86; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // r15
  __int64 v89; // rdx
  unsigned __int64 v90; // rsi
  __int64 v91; // r9
  unsigned __int64 v92; // r11
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rdx
  signed __int64 v95; // rax
  __int64 *v96; // r15
  __int64 v97; // rdx
  unsigned __int64 v98; // r15
  int v99; // r11d
  unsigned __int64 v100; // r8
  unsigned __int64 v101; // r9
  __int64 *v102; // rax
  __int64 *v103; // rax
  __int64 v104; // rax
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 *v108; // rcx
  __int64 v109; // rax
  struct tagPOINT *v110; // r8
  __int64 v111; // rbx
  __int64 v112; // rbx
  signed __int64 v113; // rax
  unsigned __int64 v114; // rcx
  signed __int64 v115; // rdx
  __int64 v116; // r15
  unsigned __int64 v117; // rsi
  unsigned __int64 v118; // r8
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rdx
  __int64 v121; // rax
  __int64 *v122; // r12
  __int64 v123; // rdx
  __int64 v124; // r13
  int v125; // r15d
  __int64 v126; // r9
  int v127; // r11d
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rdx
  __int64 *v130; // rax
  __int64 *v131; // rax
  __int64 v132; // rax
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 *v136; // rcx
  __int64 v137; // rax
  LONG x; // edx
  LONG v139; // eax
  int v140; // eax
  LONG y; // edx
  LONG v142; // eax
  int v143; // eax
  LONG v144; // eax
  LONG v145; // edx
  LONG v146; // edx
  LONG v147; // eax
  LONG v148; // edx
  LONG v149; // edx
  __int64 v150; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v151; // [rsp+38h] [rbp-48h] BYREF
  __int64 v152; // [rsp+40h] [rbp-40h] BYREF
  int v153; // [rsp+48h] [rbp-38h] BYREF
  __int64 v154; // [rsp+50h] [rbp-30h] BYREF
  __int64 v155; // [rsp+58h] [rbp-28h]
  __int64 v156; // [rsp+60h] [rbp-20h]
  __int64 v157; // [rsp+68h] [rbp-18h]
  __int64 v158; // [rsp+70h] [rbp-10h]

  v6 = a4;
  if ( gbTOUCH_DRIVER_HW_STACK_TIMESTAMP == 1 && (v7 = *((_DWORD *)a1 + 209) - *((_DWORD *)a1 + 210)) != 0
    || (v7 = glTOUCH_DRIVER_HW_STACK_SAMPLETIME) != 0 )
  {
    v8 = 0LL;
    v153 = 0;
    v9 = 0LL;
    v10 = 0LL;
    v154 = (__int64)glTOUCH_DRIVER_HW_STACK_LATENCY << 32;
    v11 = 0LL;
    v156 = (__int64)a3.x << 32;
    v157 = (__int64)a3.y << 32;
    v12 = (__int64)a2.y << 32;
    v13 = (__int64)v7 << 32;
    v158 = (__int64)a2.x << 32;
    v155 = v12;
    v14 = v158 - *((_QWORD *)v6 + 270);
    if ( v14 )
    {
      v15 = (Div128by64(v14 >> 32, v14 << 32, v13, &v150) + 0x80000000) & 0xFFFFFFFF00000000uLL;
      v16 = Div128by64((__int64)(v15 - *((_QWORD *)a4 + 262)) >> 32, (v15 - *((_QWORD *)a4 + 262)) << 32, v13, &v150);
      v17 = -v16;
      v151 = -v16;
      if ( v16 >= 0 )
      {
        v18 = v16;
        v151 = -v16;
      }
      else
      {
        v18 = -v16;
      }
      v19 = *((_QWORD *)a4 + 266);
      if ( v18 > v19 )
      {
        v19 = v16;
        if ( v16 < 0 )
          v19 = -v16;
        *((_QWORD *)a4 + 266) = v19;
      }
      if ( v19 )
      {
        v20 = v16;
        if ( v16 < 0 )
          v20 = -v16;
        v21 = Div128by64(v20 >> 32, v20 << 32, v19, &v150);
        v22 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1888);
        if ( (__int64 *)((char *)a4 + 1888) != &v150 )
          *(_QWORD *)v22 = v21;
        if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1856) != v22 )
          *((_QWORD *)a4 + 232) = *(_QWORD *)v22;
        v17 = v151;
      }
      v23 = *((_QWORD *)a4 + 264);
      v24 = v16;
      if ( v16 < 0 )
        v24 = v17;
      if ( v23 < 0 )
        v23 = -v23;
      v12 = v155;
      v10 = v24 - v23;
      *((_QWORD *)a4 + 262) = v15;
      v6 = a4;
      *((_QWORD *)a4 + 264) = v16;
    }
    if ( v12 != *((_QWORD *)v6 + 271) )
    {
      v25 = (Div128by64((v12 - *((_QWORD *)v6 + 271)) >> 32, (v12 - *((_QWORD *)v6 + 271)) << 32, v13, &v150)
           + 0x80000000) & 0xFFFFFFFF00000000uLL;
      v26 = Div128by64((__int64)(v25 - *((_QWORD *)a4 + 263)) >> 32, (v25 - *((_QWORD *)a4 + 263)) << 32, v13, &v150);
      v27 = -v26;
      v151 = -v26;
      if ( v26 >= 0 )
      {
        v28 = v26;
        v151 = -v26;
      }
      else
      {
        v28 = -v26;
      }
      v29 = *((_QWORD *)a4 + 267);
      if ( v28 > v29 )
      {
        v29 = v26;
        if ( v26 < 0 )
          v29 = -v26;
        *((_QWORD *)a4 + 267) = v29;
      }
      if ( v29 )
      {
        v30 = v26;
        if ( v26 < 0 )
          v30 = -v26;
        v31 = Div128by64(v30 >> 32, v30 << 32, v29, &v150);
        v32 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1904);
        if ( (__int64 *)((char *)a4 + 1904) != &v150 )
          *(_QWORD *)v32 = v31;
        if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1872) != v32 )
          *((_QWORD *)a4 + 234) = *(_QWORD *)v32;
        v27 = v151;
      }
      v33 = *((_QWORD *)a4 + 265);
      v34 = v26;
      if ( v26 < 0 )
        v34 = v27;
      if ( v33 < 0 )
        v33 = -v33;
      v11 = v34 - v33;
      *((_QWORD *)a4 + 263) = v25;
      v6 = a4;
      *((_QWORD *)a4 + 265) = v26;
    }
    v35 = v156 - *((_QWORD *)v6 + 268);
    if ( v156 == *((_QWORD *)v6 + 268) )
    {
      v55 = (__int64 *)((char *)v6 + 2176);
      v56 = *((_QWORD *)v6 + 272);
    }
    else
    {
      v36 = v154;
      v151 = v154;
      v37 = Div128by64(v35 >> 32, v35 << 32, v13, &v150);
      v150 = (__int64)(v36 ^ v37) >> 63;
      if ( (v37 & 0x8000000000000000uLL) != 0LL )
        v37 = -(__int64)v37;
      if ( v36 >= 0 )
        v38 = v151;
      else
        v38 = -v36;
      v39 = (unsigned int)v38 * (unsigned __int64)(unsigned int)v37;
      v40 = (unsigned int)v37;
      v41 = HIDWORD(v37);
      v42 = HIDWORD(v39) + (unsigned int)v38 * HIDWORD(v37);
      v43 = v150 ^ ((unsigned int)(v42 + v40 * HIDWORD(v38)) | ((unsigned __int64)(unsigned int)((((unsigned int)v42
                                                                                                 + v40
                                                                                                 * (unsigned __int64)HIDWORD(v38)) >> 32)
                                                                                               + v41 * HIDWORD(v38)
                                                                                               + HIDWORD(v42)) << 32));
      v44 = v43 - v150;
      if ( (_DWORD)v39 )
        v44 = v43;
      if ( v10 < 0 )
      {
        v45 = 0x100000000LL - *((_QWORD *)a4 + 232);
        v150 = (v44 ^ v45) >> 63;
        if ( v44 < 0 )
          v44 = -v44;
        if ( v45 < 0 )
          v45 = -v45;
        v46 = v45;
        v151 = (unsigned int)v45 * (unsigned __int64)(unsigned int)v44;
        v47 = HIDWORD(v151) + (unsigned int)v45 * HIDWORD(v44);
        v48 = v150 ^ ((unsigned int)(v47 + v44 * HIDWORD(v46)) | ((unsigned __int64)(unsigned int)(HIDWORD(v47)
                                                                                                 + HIDWORD(v44)
                                                                                                 * HIDWORD(v46)
                                                                                                 + (((unsigned int)v47 + (unsigned int)v44 * HIDWORD(v46)) >> 32)) << 32));
        v44 = v48 - v150;
        if ( (_DWORD)v151 )
          v44 = v48;
      }
      v6 = a4;
      v150 = v44;
      v151 = v35;
      v49 = Prediction::tagRlsFilter::Filter(a4, &v152, (__int64)&v151, (__int64)&v150, &v153);
      if ( &v151 != (unsigned __int64 *)v49 )
        v9 = *v49;
      v150 = v9;
      v50 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 232, &v152, &v150);
      if ( v153 )
      {
        if ( &v151 != (unsigned __int64 *)v50 )
          v8 = *v50;
        *((_QWORD *)a4 + 276) += v8;
        v54 = v156 + *((_QWORD *)a4 + 276);
        v55 = (__int64 *)((char *)a4 + 2176);
        *((_QWORD *)a4 + 272) = v54;
        if ( (__int64 *)((char *)a4 + 1856) != &v152 )
          *((_QWORD *)a4 + 232) = gPredictorRLSExpoSmoothAlpha;
        if ( (__int64 *)((char *)a4 + 1864) != &v152 )
          *((_QWORD *)a4 + 233) = 0LL;
      }
      else
      {
        if ( &v151 != (unsigned __int64 *)v50 )
          v8 = *v50;
        v51 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 276), v35);
        v53 = v51 + v52 + v156;
        *((_QWORD *)a4 + 276) = v51 + v52;
        v54 = v8 + v53;
        v55 = (__int64 *)((char *)a4 + 2176);
      }
      v56 = *v55;
      if ( v35 < 0 )
      {
        if ( v54 >= v56 )
          v54 = *v55;
        v56 = v54;
      }
      else if ( v54 > v56 )
      {
        v56 = v54;
      }
    }
    v57 = v158;
    *v55 = v56;
    a6->x = (unsigned __int64)(v56 + 0x80000000LL) >> 32;
    v58 = v57 - *((_QWORD *)v6 + 270);
    if ( v58 )
    {
      v59 = v154;
      v150 = v154;
      v60 = Div128by64(v58 >> 32, v58 << 32, v13, &v152);
      v151 = (__int64)(v59 ^ v60) >> 63;
      if ( (v60 & 0x8000000000000000uLL) != 0LL )
        v60 = -(__int64)v60;
      if ( v59 >= 0 )
        v61 = v150;
      else
        v61 = -v59;
      v62 = (unsigned int)v61 * (unsigned __int64)(unsigned int)v60;
      v63 = (unsigned int)v60;
      v64 = HIDWORD(v60);
      v65 = HIDWORD(v62) + (unsigned int)v61 * HIDWORD(v60);
      v66 = v151 ^ ((unsigned int)(v65 + v63 * HIDWORD(v61)) | ((unsigned __int64)(unsigned int)((((unsigned int)v65
                                                                                                 + v63
                                                                                                 * (unsigned __int64)HIDWORD(v61)) >> 32)
                                                                                               + v64 * HIDWORD(v61)
                                                                                               + HIDWORD(v65)) << 32));
      v67 = v66 - v151;
      if ( (_DWORD)v62 )
        v67 = v66;
      if ( v10 < 0 )
      {
        v151 = (unsigned __int64)a4 + 1888;
        v69 = 0x100000000LL - *((_QWORD *)a4 + 236);
        v150 = (v67 ^ v69) >> 63;
        if ( v67 < 0 )
          v67 = -v67;
        if ( v69 < 0 )
          v69 = -v69;
        v70 = (unsigned int)v69 * (unsigned __int64)(unsigned int)v67;
        v71 = HIDWORD(v69);
        v72 = HIDWORD(v70) + (unsigned int)v69 * HIDWORD(v67);
        v6 = a4;
        v73 = v150 ^ ((unsigned int)(v72 + v67 * v71) | ((unsigned __int64)(unsigned int)(HIDWORD(v72)
                                                                                        + v71 * HIDWORD(v67)
                                                                                        + (((unsigned int)v72
                                                                                          + (unsigned __int64)(unsigned int)v67
                                                                                          * v71) >> 32)) << 32));
        v67 = v73 - v150;
        v74 = (_DWORD)v70 == 0;
        v68 = (__int64 *)v151;
        if ( !v74 )
          v67 = v73;
      }
      else
      {
        v6 = a4;
        v68 = (__int64 *)((char *)a4 + 1888);
      }
      v150 = v67;
      v151 = v58;
      v75 = Prediction::tagRlsFilter::Filter((_QWORD *)v6 + 108, &v152, (__int64)&v151, (__int64)&v150, &v153);
      if ( &v151 != (unsigned __int64 *)v75 )
        v9 = *v75;
      v150 = v9;
      v76 = Prediction::tagExpoSmoother::Smooth(v68, &v152, &v150);
      if ( v153 )
      {
        if ( &v151 != (unsigned __int64 *)v76 )
          v8 = *v76;
        *((_QWORD *)v6 + 278) += v8;
        v81 = (__int64 *)((char *)v6 + 2192);
        v80 = v158 + *((_QWORD *)v6 + 278);
        *((_QWORD *)v6 + 274) = v80;
        if ( v68 != &v152 )
          *v68 = gPredictorRLSExpoSmoothAlpha;
        if ( (__int64 *)((char *)v6 + 1896) != &v152 )
          *((_QWORD *)v6 + 237) = 0LL;
      }
      else
      {
        if ( &v151 != (unsigned __int64 *)v76 )
          v8 = *v76;
        v77 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v6 + 278), v58);
        v79 = v77 + v78 + v158;
        *((_QWORD *)v6 + 278) = v77 + v78;
        v80 = v8 + v79;
        v81 = (__int64 *)((char *)v6 + 2192);
      }
      v82 = *v81;
      if ( v58 < 0 )
      {
        if ( v80 >= v82 )
          v80 = *v81;
        v82 = v80;
      }
      else if ( v80 > v82 )
      {
        v82 = v80;
      }
    }
    else
    {
      v81 = (__int64 *)((char *)v6 + 2192);
      v82 = *((_QWORD *)v6 + 274);
    }
    v83 = v157;
    *v81 = v82;
    a5->x = (unsigned __int64)(v82 + 0x80000000LL) >> 32;
    v84 = v83 - *((_QWORD *)v6 + 269);
    if ( v84 )
    {
      v85 = v154;
      v150 = v154;
      v86 = Div128by64(v84 >> 32, v84 << 32, v13, &v152);
      v87 = v86;
      v88 = (v85 ^ v86) >> 63;
      if ( v86 < 0 )
        v87 = -v86;
      if ( v85 >= 0 )
        v89 = v150;
      else
        v89 = -v85;
      v90 = (unsigned int)v89 * (unsigned __int64)(unsigned int)v87;
      v91 = (unsigned int)v87;
      v92 = HIDWORD(v87);
      v93 = HIDWORD(v90) + (unsigned int)v89 * HIDWORD(v87);
      v94 = v88 ^ ((unsigned int)(v93 + v91 * HIDWORD(v89)) | ((unsigned __int64)(unsigned int)((((unsigned int)v93
                                                                                                + v91
                                                                                                * (unsigned __int64)HIDWORD(v89)) >> 32)
                                                                                              + v92 * HIDWORD(v89)
                                                                                              + HIDWORD(v93)) << 32));
      v95 = v94 - v88;
      if ( (_DWORD)v90 )
        v95 = v94;
      if ( v11 < 0 )
      {
        v151 = (unsigned __int64)a4 + 1872;
        v97 = 0x100000000LL - *((_QWORD *)a4 + 234);
        v150 = (v95 ^ v97) >> 63;
        if ( v95 < 0 )
          v95 = -v95;
        if ( v97 < 0 )
          v97 = -v97;
        v98 = (unsigned int)v97 * (unsigned __int64)(unsigned int)v95;
        v99 = HIDWORD(v95) * HIDWORD(v97);
        v6 = a4;
        v100 = (HIDWORD(v98) + (unsigned int)v97 * HIDWORD(v95)) >> 32;
        v101 = ((v95 * (unsigned __int64)(unsigned int)v97) >> 32) + (unsigned int)v95 * (unsigned __int64)HIDWORD(v97);
        v95 = (v150 ^ ((unsigned int)v101 | ((unsigned __int64)(unsigned int)(v100
                                                                            + HIDWORD(v95) * HIDWORD(v97)
                                                                            + HIDWORD(v101)) << 32)))
            - v150;
        v74 = (_DWORD)v98 == 0;
        v96 = (__int64 *)v151;
        if ( !v74 )
          v95 = v150 ^ ((unsigned int)v101 | ((unsigned __int64)(unsigned int)(v100 + v99 + HIDWORD(v101)) << 32));
      }
      else
      {
        v6 = a4;
        v96 = (__int64 *)((char *)a4 + 1872);
      }
      v150 = v95;
      v151 = v84;
      v102 = Prediction::tagRlsFilter::Filter((_QWORD *)v6 + 54, &v152, (__int64)&v151, (__int64)&v150, &v153);
      if ( &v151 != (unsigned __int64 *)v102 )
        v9 = *v102;
      v150 = v9;
      v103 = Prediction::tagExpoSmoother::Smooth(v96, &v152, &v150);
      if ( v153 )
      {
        if ( &v151 != (unsigned __int64 *)v103 )
          v8 = *v103;
        *((_QWORD *)v6 + 277) += v8;
        v108 = (__int64 *)((char *)v6 + 2184);
        v107 = *((_QWORD *)v6 + 277) + v157;
        *((_QWORD *)v6 + 273) = v107;
        if ( v96 != &v152 )
          *v96 = gPredictorRLSExpoSmoothAlpha;
        if ( (__int64 *)((char *)v6 + 1880) != &v152 )
          *((_QWORD *)v6 + 235) = 0LL;
      }
      else
      {
        if ( &v151 != (unsigned __int64 *)v103 )
          v8 = *v103;
        v104 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v6 + 277), v84);
        v106 = v104 + v105 + v157;
        *((_QWORD *)v6 + 277) = v104 + v105;
        v107 = v8 + v106;
        v108 = (__int64 *)((char *)v6 + 2184);
      }
      v109 = *v108;
      if ( v84 < 0 )
      {
        if ( v107 >= v109 )
          v107 = *v108;
        v109 = v107;
      }
      else if ( v107 > v109 )
      {
        v109 = v107;
      }
    }
    else
    {
      v108 = (__int64 *)((char *)v6 + 2184);
      v109 = *((_QWORD *)v6 + 273);
    }
    v110 = a6;
    v111 = v155;
    *v108 = v109;
    a6->y = (unsigned __int64)(v109 + 0x80000000LL) >> 32;
    v112 = v111 - *((_QWORD *)v6 + 271);
    if ( v112 )
    {
      v113 = Div128by64(v112 >> 32, v112 << 32, v13, &v152);
      v114 = v154;
      v115 = v113;
      v116 = (v154 ^ v113) >> 63;
      if ( v113 < 0 )
        v115 = -v113;
      if ( v154 < 0 )
        v114 = -v154;
      v117 = (unsigned int)v114 * (unsigned __int64)(unsigned int)v115;
      v118 = HIDWORD(v114);
      v119 = HIDWORD(v117) + (unsigned int)v114 * (unsigned __int64)HIDWORD(v115);
      v120 = v116 ^ ((unsigned int)(v119 + v115 * v118) | ((unsigned __int64)(unsigned int)((((unsigned int)v119
                                                                                            + (unsigned int)v115 * v118) >> 32)
                                                                                          + HIDWORD(v115) * v118
                                                                                          + HIDWORD(v119)) << 32));
      v121 = v120 - v116;
      if ( (_DWORD)v117 )
        v121 = v120;
      if ( v11 < 0 )
      {
        v122 = (__int64 *)((char *)a4 + 1904);
        v123 = 0x100000000LL - *((_QWORD *)a4 + 238);
        v124 = (v121 ^ v123) >> 63;
        if ( v121 < 0 )
          v121 = -v121;
        if ( v123 < 0 )
          v123 = *((_QWORD *)a4 + 238) - 0x100000000LL;
        v125 = v123 * v121;
        v126 = HIDWORD(v123);
        v127 = HIDWORD(v121) * HIDWORD(v123);
        v6 = a4;
        v128 = (((unsigned int)v123 * (unsigned __int64)(unsigned int)v121) >> 32) + (unsigned int)v123 * HIDWORD(v121);
        v129 = v124 ^ ((unsigned int)(v128 + v121 * v126) | ((unsigned __int64)(unsigned int)(HIDWORD(v128)
                                                                                            + v127
                                                                                            + (((unsigned int)v128
                                                                                              + (unsigned __int64)(unsigned int)v121
                                                                                              * v126) >> 32)) << 32));
        v121 = v129 - v124;
        if ( v125 )
          v121 = v129;
      }
      else
      {
        v6 = a4;
        v122 = (__int64 *)((char *)a4 + 1904);
      }
      v150 = v121;
      v154 = v112;
      v130 = Prediction::tagRlsFilter::Filter((_QWORD *)v6 + 162, &v152, (__int64)&v154, (__int64)&v150, &v153);
      if ( &v151 != (unsigned __int64 *)v130 )
        v9 = *v130;
      v150 = v9;
      v131 = Prediction::tagExpoSmoother::Smooth(v122, &v152, &v150);
      if ( v153 )
      {
        if ( &v151 != (unsigned __int64 *)v131 )
          v8 = *v131;
        *((_QWORD *)v6 + 279) += v8;
        v136 = (__int64 *)((char *)v6 + 2200);
        v135 = *((_QWORD *)v6 + 279) + v155;
        *((_QWORD *)v6 + 275) = v135;
        if ( v122 != &v152 )
          *v122 = gPredictorRLSExpoSmoothAlpha;
        if ( (__int64 *)((char *)v6 + 1912) != &v152 )
          *((_QWORD *)v6 + 239) = 0LL;
      }
      else
      {
        if ( &v151 != (unsigned __int64 *)v131 )
          v8 = *v131;
        v132 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v6 + 279), v112);
        v134 = v132 + v133 + v155;
        *((_QWORD *)v6 + 279) = v132 + v133;
        v135 = v8 + v134;
        v136 = (__int64 *)((char *)v6 + 2200);
      }
      v137 = *v136;
      if ( v112 < 0 )
      {
        if ( v135 >= v137 )
          v135 = *v136;
        v137 = v135;
      }
      else if ( v135 > v137 )
      {
        v137 = v135;
      }
      v110 = a6;
    }
    else
    {
      v136 = (__int64 *)((char *)v6 + 2200);
      v137 = *((_QWORD *)v6 + 275);
    }
    *v136 = v137;
    a5->y = (unsigned __int64)(v137 + 0x80000000LL) >> 32;
    *((_QWORD *)v6 + 268) = v156;
    *((_QWORD *)v6 + 269) = v157;
    *((_QWORD *)v6 + 270) = v158;
    *((_QWORD *)v6 + 271) = v155;
    x = v110->x;
    v139 = *((_DWORD *)a1 + 40);
    if ( v110->x < v139 )
    {
      v110->x = v139;
      x = v139;
    }
    v140 = *((_DWORD *)a1 + 42) - 1;
    if ( x > v140 )
      v110->x = v140;
    y = v110->y;
    v142 = *((_DWORD *)a1 + 41);
    if ( y < v142 )
    {
      v110->y = v142;
      y = v142;
    }
    v143 = *((_DWORD *)a1 + 43) - 1;
    if ( y > v143 )
      v110->y = v143;
    v144 = a5->x;
    v145 = *((_DWORD *)a1 + 44);
    if ( a5->x < v145 )
    {
      a5->x = v145;
      v144 = v145;
    }
    v146 = *((_DWORD *)a1 + 46);
    if ( v144 > v146 )
      a5->x = v146;
    v147 = a5->y;
    v148 = *((_DWORD *)a1 + 45);
    if ( v147 < v148 )
    {
      a5->y = v148;
      v147 = v148;
    }
    v149 = *((_DWORD *)a1 + 47);
    if ( v147 > v149 )
      a5->y = v149;
  }
  else
  {
    *a5 = a2;
    *a6 = a3;
  }
}
