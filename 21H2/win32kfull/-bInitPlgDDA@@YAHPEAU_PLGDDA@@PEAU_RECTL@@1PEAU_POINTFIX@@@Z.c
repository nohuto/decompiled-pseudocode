/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02D4C00
 * Callers:
 *     EngPlgBlt @ 0x1C028A2A0 (EngPlgBlt.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0134BF8 (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     QDIV @ 0x1C02D4B20 (QDIV.c)
 *     ROT_DIV @ 0x1C02D4B6C (ROT_DIV.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C02D4BBC (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C02D5E94 (-bMulOverflow@@YAH_J0@Z.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C02D5F1C (bScalePlgDDALToPlgDDA.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x1C02D6BA4 (-bSubOverflow@@YAH_J0@Z.c)
 */

__int64 __fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r11
  struct _POINTFIX v12; // r14
  LONG left; // r9d
  int v14; // r15d
  int x; // r12d
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r14
  int v19; // r10d
  LONG top; // r12d
  int v21; // r9d
  int v22; // r9d
  LONG right; // r13d
  int v24; // ecx
  int v25; // r9d
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  int v30; // edx
  int v31; // edx
  __int64 v32; // rax
  int v33; // ecx
  int v34; // edx
  __int64 v35; // r15
  __int64 v36; // r13
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // r14
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r11
  __int64 v51; // r12
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r11
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // r9
  __int64 v60; // r10
  __int64 v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // r11
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r10
  __int64 v69; // rdx
  __int64 v70; // r10
  __int64 v71; // rcx
  __int64 v72; // r11
  __int64 v73; // r11
  __int64 v74; // r11
  __int64 v75; // r8
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // r11
  _OWORD *v78; // rcx
  __int64 v79; // r9
  __int64 v80; // r10
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // r8
  unsigned __int64 v86; // rdx
  __int64 v87; // rdx
  unsigned __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // r11
  __int64 v93; // r11
  __int64 v94; // r9
  __int64 v95; // r10
  __int128 *v96; // rcx
  __int128 v97; // xmm0
  __int64 v98; // xmm1_8
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r11
  __int128 *v102; // rcx
  __int128 v103; // xmm0
  __int64 v104; // xmm1_8
  __int64 v105; // rcx
  __int64 v106; // r10
  __int64 v107; // r11
  __int64 v108; // rcx
  __int64 v109; // r10
  __int64 v110; // r9
  __int64 v111; // r13
  __int64 v112; // r15
  __int64 v113; // r9
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r13
  __int64 v118; // rsi
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r9
  __int64 v122; // r15
  __int64 v123; // rdx
  __int64 v124; // r15
  __int64 v125; // r9
  __int64 v126; // r15
  __int64 v127; // r9
  __int64 v128; // r11
  __int64 v129; // r9
  __int64 v130; // r15
  __int64 v131; // rdx
  __int64 v132; // r9
  __int64 v133; // r10
  __int64 v134; // r13
  __int64 v135; // r9
  __int64 v136; // r10
  __int64 v137; // rdx
  __int64 v138; // r9
  __int64 v139; // rcx
  __int64 v140; // r15
  __int64 v141; // rdx
  __int64 v142; // r9
  __int64 v143; // r10
  __int64 v144; // r9
  __int64 v145; // r10
  __int64 v146; // rdx
  __int64 v147; // r9
  __int64 v148; // r9
  unsigned __int64 v149; // r8
  __int64 v150; // r11
  __int64 v151; // r9
  __int64 v152; // r10
  __int64 v153; // r10
  __int64 v154; // r9
  __int64 v155; // r10
  __int64 v156; // r15
  __int64 v157; // r10
  __int64 v158; // r9
  __int64 v159; // r10
  __int64 v160; // rcx
  __int64 v161; // r9
  unsigned __int64 v162; // r8
  __int64 v163; // r11
  __int64 v164; // r9
  __int64 v165; // r10
  __int64 v166; // r10
  __int64 v167; // r9
  __int64 v168; // r10
  __int64 v169; // r9
  __int64 v170; // r10
  __int64 v171; // rcx
  __int64 v172; // r9
  unsigned __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rdx
  __int64 v176; // r9
  __int64 v177; // rcx
  __int64 v178; // rsi
  __int64 v179; // r9
  __int64 v180; // rsi
  __int64 v181; // r9
  __int64 v182; // r11
  __int64 v183; // r15
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // r9
  __int64 v187; // r10
  __int64 v188; // rsi
  __int64 v189; // r9
  __int64 v190; // r10
  __int64 v191; // rdx
  __int64 v192; // r9
  __int64 v193; // r9
  __int64 v194; // r15
  __int64 v195; // r14
  __int64 v196; // rdx
  __int64 v197; // r9
  __int64 v198; // r10
  __int64 v199; // r9
  __int64 v200; // r10
  __int64 v201; // rdx
  __int64 v202; // r9
  __int64 v203; // rdx
  unsigned __int64 v204; // r8
  __int64 v205; // r11
  __int64 v206; // r9
  __int64 v207; // r10
  __int64 v208; // r10
  __int64 v209; // r9
  __int64 v210; // r10
  __int64 v211; // r15
  __int64 v212; // r10
  __int64 v213; // r9
  __int64 v214; // r10
  __int64 v215; // r9
  __int64 v216; // r10
  unsigned __int64 v217; // r8
  __int64 v218; // r11
  __int64 v219; // rcx
  __int64 v220; // r9
  __int64 v221; // r10
  __int64 v222; // r9
  __int64 v223; // r11
  __int64 v224; // r9
  __int64 v225; // r9
  __int64 v226; // r11
  __int64 v227; // r13
  __int64 v228; // r11
  unsigned __int64 v229; // r8
  __int64 v230; // rdx
  __int64 v231; // xmm1_8
  __int128 v232; // xmm0
  __int64 v233; // xmm1_8
  __int128 *v234; // rcx
  __int128 v235; // xmm0
  __int64 v236; // xmm1_8
  __int128 v237; // xmm0
  __int64 v238; // xmm1_8
  __int128 v239; // xmm0
  __int64 v240; // xmm1_8
  __int128 v241; // xmm0
  __int64 v242; // xmm1_8
  struct _PLGDDA *v243; // rdx
  unsigned __int64 v244; // [rsp+20h] [rbp-B9h] BYREF
  __int64 v245; // [rsp+28h] [rbp-B1h]
  __int64 v246; // [rsp+30h] [rbp-A9h]
  __int64 v247; // [rsp+38h] [rbp-A1h]
  __int64 v248; // [rsp+40h] [rbp-99h]
  __int64 v249; // [rsp+48h] [rbp-91h]
  __int64 v250; // [rsp+50h] [rbp-89h]
  __int64 v251; // [rsp+58h] [rbp-81h]
  __int64 v252; // [rsp+60h] [rbp-79h]
  __int64 v253; // [rsp+68h] [rbp-71h]
  __int64 v254; // [rsp+70h] [rbp-69h]
  __int64 v255; // [rsp+78h] [rbp-61h]
  __int64 v256; // [rsp+80h] [rbp-59h]
  __int64 v257; // [rsp+88h] [rbp-51h]
  __int64 v258; // [rsp+90h] [rbp-49h]
  __int64 v259; // [rsp+98h] [rbp-41h]
  __int64 v260; // [rsp+A0h] [rbp-39h]
  struct _PLGDDA *v261; // [rsp+A8h] [rbp-31h]
  __int128 v262; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v263[2]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v264; // [rsp+D0h] [rbp-9h]
  __int64 v265[2]; // [rsp+D8h] [rbp-1h] BYREF
  struct _POINTFIX v266; // [rsp+E8h] [rbp+Fh]
  int v267; // [rsp+F0h] [rbp+17h]
  int v268; // [rsp+F4h] [rbp+1Bh]

  v248 = (__int64)a2;
  v261 = a1;
  v262 = 0LL;
  v7 = 0;
  *(_OWORD *)v263 = 0LL;
  result = Win32AllocPoolZInit(792LL, 1633969223LL);
  v9 = result;
  if ( result )
  {
    v10 = (unsigned __int64)a4[1];
    v11 = (unsigned __int64)*a4;
    v12 = a4[2];
    left = a3->left;
    v14 = v12.x + v10 - v11;
    v265[1] = v10;
    x = v12.x;
    v16 = HIDWORD(v10);
    v265[0] = v11;
    v17 = HIDWORD(v11);
    v266 = v12;
    v18 = HIDWORD(*(unsigned __int64 *)&v12);
    v19 = v18 + v16 - v17;
    v267 = v14;
    v268 = v19;
    if ( left || a3->top )
    {
      LODWORD(v247) = a2->left;
      if ( bSubOverflow(v247, left) )
        goto LABEL_179;
      top = a3->top;
      LODWORD(v245) = a2->top;
      if ( bSubOverflow(v245, top) )
        goto LABEL_179;
      LODWORD(v246) = a2->right;
      if ( bSubOverflow(v246, v21) )
        goto LABEL_179;
      LODWORD(v244) = a2->bottom;
      if ( bSubOverflow(v244, top) )
        goto LABEL_179;
      right = a3->right;
      if ( bSubOverflow(right, v22) || bSubOverflow(a3->bottom, top) )
        goto LABEL_179;
      a3 = (struct _RECTL *)v263;
      LODWORD(v262) = v247 - v25;
      LODWORD(v263[1]) = right - v25;
      DWORD1(v262) = v245 - top;
      DWORD2(v262) = v246 - v25;
      v26 = v24 - top;
      HIDWORD(v262) = v244 - top;
      x = v266.x;
      v248 = (__int64)&v262;
      HIDWORD(v263[1]) = v26;
    }
    v27 = ((int)v16 > (int)v17) ^ (unsigned int)((int)v16 <= v19);
    v28 = 3LL;
    if ( SHIDWORD(v265[v27]) > SHIDWORD(v265[v27 ^ 3]) )
      LODWORD(v27) = v27 ^ 3;
    v29 = 0LL;
    if ( (_DWORD)v27 )
    {
      v30 = v27 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 == 1 )
          {
            if ( (int)v16 < (int)v18 || (int)v16 <= (int)v18 && SLODWORD(v265[1]) < x )
            {
              v29 = 6LL;
LABEL_42:
              v33 = a3->bottom - a3->top;
              v34 = a3->right - a3->left;
              goto LABEL_43;
            }
            v29 = 7LL;
          }
          goto LABEL_40;
        }
        if ( (int)v17 >= v19 )
        {
          if ( (int)v17 > v19 || (v32 = 4LL, SLODWORD(v265[0]) >= v14) )
            v32 = 5LL;
        }
        else
        {
          v32 = 4LL;
        }
        v28 = v32;
      }
      else if ( (int)v17 >= v19 && ((int)v17 > v19 || SLODWORD(v265[0]) >= v14) )
      {
        LODWORD(v32) = 3;
      }
      else
      {
        LODWORD(v32) = 2;
        v28 = 2LL;
      }
      v29 = v28;
      if ( (_DWORD)v32 != 2 && (unsigned int)v32 <= 4 )
        goto LABEL_42;
      goto LABEL_40;
    }
    if ( (int)v16 >= (int)v18 && ((int)v16 > (int)v18 || SLODWORD(v265[1]) >= x) )
    {
      v29 = 1LL;
      goto LABEL_42;
    }
LABEL_40:
    v33 = a3->right - a3->left;
    v34 = a3->bottom - a3->top;
LABEL_43:
    v35 = v34;
    v36 = v33;
    if ( !v33 )
      goto LABEL_179;
    if ( !v34 )
      goto LABEL_179;
    v37 = 3 * v29;
    v38 = 2 * v29;
    v39 = dword_1C02FA0B4[2 * v37];
    v40 = *(int *)(v248 + 4);
    v41 = *(int *)v248;
    v42 = dword_1C02FA0BC[2 * v37];
    v43 = dword_1C02FA0C0[2 * v37];
    v44 = (v36 - 1) * dword_1C02FA0B8[2 * v37];
    v245 = SLODWORD((&aiPlgConst)[v37]);
    v253 = v39;
    v45 = dword_1C02FA0C4[2 * v37];
    v246 = v42;
    v247 = v43;
    v256 = v39 * v40 + v245 * v41 + v44;
    v46 = v41 * v42;
    v47 = dword_1C02FA174[2 * v38];
    v48 = v46 + (v35 - 1) * v45;
    v49 = v40 * v43;
    v50 = SLODWORD(v265[v47]);
    v51 = SHIDWORD(v265[v47]);
    v52 = v49 + v48;
    v53 = SLODWORD((&aiPlgSort)[v38]);
    v255 = v52;
    v54 = SLODWORD(v265[v53]);
    v55 = SHIDWORD(v265[v53]);
    v56 = v50 - v54;
    v57 = dword_1C02FA178[2 * v38];
    v58 = v51 - v55;
    v259 = v54;
    v258 = v55;
    v252 = v56;
    v59 = SLODWORD(v265[v57]) - v54;
    v60 = SHIDWORD(v265[v57]) - v55;
    v250 = v59;
    v251 = v60;
    if ( v56 )
    {
      if ( (unsigned int)bMulOverflow(v35, v56) )
        goto LABEL_179;
    }
    if ( v58 && (unsigned int)bMulOverflow(v35, v58) )
      goto LABEL_179;
    if ( v59 && (unsigned int)bMulOverflow(v36, v59) )
      goto LABEL_179;
    if ( v60 && (unsigned int)bMulOverflow(v36, v60) )
      goto LABEL_179;
    v61 = v36 * v60;
    v249 = v35 * v56;
    v62 = v35 * v58;
    v254 = v36 * v59;
    if ( !(v36 * v60) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v36, v35) )
      goto LABEL_179;
    if ( bAddOverflow(v258, 16LL) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v64, v63 + 16) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v256, v35 * v58) )
      goto LABEL_179;
    if ( bAddOverflow(v66, v65 * v62) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v255, v61) )
      goto LABEL_179;
    if ( bAddOverflow(v68, v67 * v61) )
      goto LABEL_179;
    if ( (unsigned int)bSubOverflow(v70 + v69, 1LL) )
      goto LABEL_179;
    v244 = v71 - 1;
    if ( (unsigned int)bMulOverflow(v72, 16LL) )
      goto LABEL_179;
    v74 = 16 * v73;
    if ( !v74 )
      goto LABEL_179;
    v264 = 0LL;
    v266 = 0LL;
    *(_OWORD *)v263 = 0LL;
    *(_OWORD *)v265 = 0LL;
    ROT_DIV(v263, v35 * v58, v74);
    ROT_DIV(v265, v61, v75);
    QDIV((unsigned __int64 *)(v9 + 8), &v244, v76);
    v79 = v263[0];
    v80 = v263[1];
    *(_OWORD *)(v9 + 24) = *v78;
    v81 = v79 + *(_QWORD *)(v9 + 24);
    v82 = v80 + *(_QWORD *)(v9 + 32);
    *(_QWORD *)(v9 + 24) = v81;
    *(_QWORD *)(v9 + 32) = v82;
    if ( v82 >= v77 )
    {
      *(_QWORD *)(v9 + 24) = v81 + 1;
      *(_QWORD *)(v9 + 32) = v82 - v77;
    }
    v83 = v265[0];
    v84 = v265[1];
    *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
    v85 = *(_QWORD *)(v9 + 40) + v83;
    v86 = *(_QWORD *)(v9 + 48) + v84;
    *(_QWORD *)(v9 + 40) = v85;
    *(_QWORD *)(v9 + 48) = v86;
    if ( v86 >= v77 )
    {
      *(_QWORD *)(v9 + 40) = v85 + 1;
      *(_QWORD *)(v9 + 48) = v86 - v77;
    }
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
    v87 = v79 + *(_QWORD *)(v9 + 56);
    v88 = v80 + *(_QWORD *)(v9 + 64);
    *(_QWORD *)(v9 + 56) = v87;
    *(_QWORD *)(v9 + 64) = v88;
    if ( v88 >= v77 )
    {
      *(_QWORD *)(v9 + 56) = v87 + 1;
      *(_QWORD *)(v9 + 64) = v88 - v77;
    }
    if ( (unsigned int)bMulOverflow(v245, v35 * v58) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v246, v61) )
      goto LABEL_179;
    *(_QWORD *)&v262 = v89 * v61;
    v257 = v90 * v62;
    if ( bAddOverflow(v90 * v62, v89 * v61) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v253, v35 * v58) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v247, v61) )
      goto LABEL_179;
    if ( bAddOverflow(v253 * v62, v91 * v61) )
      goto LABEL_179;
    ROT_DIV((__int64 *)(v9 + 264), v262 + v257, v92);
    *(_QWORD *)(v9 + 280) = v93;
    v97 = *v96;
    v98 = *((_QWORD *)v96 + 2);
    *(_OWORD *)(v9 + 288) = *v96;
    *(_OWORD *)(v9 + 312) = v97;
    *(_OWORD *)(v9 + 336) = v97;
    *(_QWORD *)(v9 + 304) = v98;
    *(_QWORD *)(v9 + 328) = v98;
    *(_QWORD *)(v9 + 352) = v98;
    ROT_DIV((__int64 *)(v9 + 360), v95 + v94, v99);
    v100 = v251;
    *(_QWORD *)(v9 + 376) = v101;
    v103 = *v102;
    v104 = *((_QWORD *)v102 + 2);
    v105 = v252;
    *(_OWORD *)(v9 + 384) = v103;
    *(_OWORD *)(v9 + 408) = v103;
    *(_OWORD *)(v9 + 432) = v103;
    *(_QWORD *)(v9 + 400) = v104;
    *(_QWORD *)(v9 + 424) = v104;
    *(_QWORD *)(v9 + 448) = v104;
    if ( (unsigned int)bMulOverflow(v105, v100) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v58, v250) )
      goto LABEL_179;
    v248 = v58 * v106;
    if ( (unsigned int)bSubOverflow(v107, v58 * v106) )
      goto LABEL_179;
    v260 = v108 - v109;
    *(_OWORD *)v263 = 0LL;
    *(_OWORD *)v265 = 0LL;
    if ( (unsigned int)bMulOverflow(v36, 16LL) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v35, 16LL) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v245, v58) )
      goto LABEL_179;
    if ( (unsigned int)bMulOverflow(v246, v110) )
      goto LABEL_179;
    v111 = 16 * v36;
    if ( !v111 )
      goto LABEL_179;
    v112 = 16 * v35;
    if ( !v112 )
      goto LABEL_179;
    ROT_DIV(v263, v245 * v58, v111);
    ROT_DIV(v265, v246 * v113, v112);
    v257 = v265[0];
    *(_QWORD *)&v262 = v263[0];
    if ( bAddOverflow(v263[0], v265[0]) )
      goto LABEL_179;
    ROT_DIV(v263, v253 * v58, v111);
    ROT_DIV(v265, v247 * v114, v112);
    if ( bAddOverflow(v263[0], v265[0]) )
      goto LABEL_179;
    v117 = v116 + v115;
    if ( v62 )
    {
      if ( (unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL) )
        goto LABEL_179;
      if ( (unsigned int)bSubOverflow(16 * v119, v258) )
        goto LABEL_179;
      if ( (unsigned int)bMulOverflow(v249, v121 - v120) )
        goto LABEL_179;
      v122 = v259;
      if ( bAddOverflow(v259, 16LL) )
        goto LABEL_179;
      v124 = v123 + v122;
      if ( (unsigned int)bMulOverflow(v62, v124) )
        goto LABEL_179;
      v126 = v62 * v124;
      if ( bAddOverflow(v125, v126) )
        goto LABEL_179;
      v129 = v126 + v127;
      v130 = v255;
      if ( v255 )
      {
        if ( (unsigned int)bMulOverflow(v255, v128) )
          goto LABEL_179;
      }
      if ( (unsigned int)bSubOverflow(v129, v130 * v128) )
        goto LABEL_179;
      v134 = v250;
      v135 = v132 - v131;
      if ( v130 )
      {
        if ( (unsigned int)bMulOverflow(v250, v58) || (unsigned int)bMulOverflow(v130, v136) )
          goto LABEL_179;
      }
      if ( bAddOverflow(v135, v130 * v133) )
        goto LABEL_179;
      if ( (unsigned int)bSubOverflow(v138 + v137, 1LL) )
        goto LABEL_179;
      v140 = v139 - 1;
      v244 = v139 - 1;
      if ( (unsigned int)bMulOverflow(16LL, v62) )
        goto LABEL_179;
      v118 = 16 * v62;
      *(_QWORD *)(v9 + 664) = v118;
      *(_QWORD *)(v9 + 472) = v118;
      *(_QWORD *)(v9 + 568) = v118;
      if ( !v118 )
        goto LABEL_179;
      QDIV((unsigned __int64 *)(v9 + 72), &v244, v118);
      if ( (unsigned int)bMulOverflow(16LL, v249) )
        goto LABEL_179;
      if ( (unsigned int)bSubOverflow(*(_QWORD *)(v9 + 40), *(_QWORD *)(v9 + 8)) )
        goto LABEL_179;
      v255 = 16 * v143;
      if ( (unsigned int)bMulOverflow(16 * v143, v142 - v141)
        || (unsigned int)bSubOverflow(16 * v145 * v144, v260)
        || bAddOverflow(v140, v147 - v146) )
      {
        goto LABEL_179;
      }
      v149 = *(_QWORD *)(v9 + 664);
      v244 = v148 + v140;
      QDIV((unsigned __int64 *)(v9 + 120), &v244, v149);
      ROT_DIV((__int64 *)(v9 + 648), v255, *(_QWORD *)(v9 + 664));
      if ( v251 )
      {
        if ( (unsigned int)bMulOverflow(v246, v252) || (unsigned int)bMulOverflow(v246 * v152, v151) )
          goto LABEL_179;
      }
      else
      {
        v153 = v246;
      }
      v154 = v153 * v150;
      if ( v58 && ((unsigned int)bMulOverflow(v153, v134) || (unsigned int)bMulOverflow(v155 * v134, v58)) )
        goto LABEL_179;
      v156 = v248;
      if ( (unsigned int)bSubOverflow(v154, v153 * v248)
        || (unsigned int)bMulOverflow(16LL, v257 + v262)
        || (unsigned int)bMulOverflow(16 * v157, v249)
        || (unsigned int)bSubOverflow(16 * v249 * v159, v158) )
      {
        goto LABEL_179;
      }
      v162 = *(_QWORD *)(v9 + 472);
      v244 = v160 - v161;
      QDIV((unsigned __int64 *)(v9 + 456), &v244, v162);
      if ( v251 )
      {
        if ( (unsigned int)bMulOverflow(v247, v252) || (unsigned int)bMulOverflow(v247 * v165, v164) )
          goto LABEL_179;
      }
      else
      {
        v166 = v247;
      }
      v167 = v166 * v163;
      if ( v58 && ((unsigned int)bMulOverflow(v166, v134) || (unsigned int)bMulOverflow(v168 * v134, v58)) )
        goto LABEL_179;
      if ( (unsigned int)bSubOverflow(v167, v166 * v156) )
        goto LABEL_179;
      v117 = v265[0] + v263[0];
      if ( (unsigned int)bMulOverflow(16LL, v265[0] + v263[0])
        || (unsigned int)bMulOverflow(16 * v117, v249)
        || (unsigned int)bSubOverflow(16 * v170 * v117, v169) )
      {
        goto LABEL_179;
      }
      v173 = *(_QWORD *)(v9 + 568);
      v244 = v171 - v172;
      QDIV((unsigned __int64 *)(v9 + 552), &v244, v173);
      ROT_DIV((__int64 *)(v9 + 744), v255, v118);
    }
    else
    {
      *(_QWORD *)(v9 + 648) = 0LL;
      v118 = 0LL;
      *(_QWORD *)(v9 + 656) = 0LL;
      *(_QWORD *)(v9 + 664) = 0LL;
      *(_QWORD *)(v9 + 456) = 0LL;
      *(_QWORD *)(v9 + 464) = 0LL;
      *(_QWORD *)(v9 + 472) = 0LL;
      *(_QWORD *)(v9 + 552) = 0LL;
      *(_QWORD *)(v9 + 560) = 0LL;
      *(_QWORD *)(v9 + 568) = 0LL;
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_QWORD *)(v9 + 80) = 0LL;
      *(_QWORD *)(v9 + 120) = 0LL;
      *(_QWORD *)(v9 + 128) = 0LL;
      *(_QWORD *)(v9 + 744) = 0LL;
      *(_QWORD *)(v9 + 752) = 0LL;
    }
    *(_QWORD *)(v9 + 760) = v118;
    if ( !(unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8))
      && !(unsigned int)bSubOverflow(16 * v174, v258)
      && !(unsigned int)bMulOverflow(v254, v176 - v175)
      && !bAddOverflow(v259, 16LL) )
    {
      v178 = v177 + 16;
      if ( !(unsigned int)bMulOverflow(v61, v177 + 16) )
      {
        v180 = v61 * v178;
        if ( !bAddOverflow(v179, v180) )
        {
          v183 = v256;
          v184 = v180 + v181;
          if ( (!v256 || !(unsigned int)bMulOverflow(v256, v182)) && !bAddOverflow(v184, v183 * v182) )
          {
            v188 = v250;
            v189 = v185 + v186;
            if ( (!v183 || !(unsigned int)bMulOverflow(v250, v58) && !(unsigned int)bMulOverflow(v183, v190))
              && !(unsigned int)bSubOverflow(v189, v183 * v187)
              && !(unsigned int)bSubOverflow(v192 - v191, 1LL) )
            {
              v194 = v193 - 1;
              v244 = v193 - 1;
              if ( !(unsigned int)bMulOverflow(16LL, v61) )
              {
                v195 = 16 * v61;
                *(_QWORD *)(v9 + 688) = v195;
                *(_QWORD *)(v9 + 496) = v195;
                *(_QWORD *)(v9 + 592) = v195;
                if ( v195 )
                {
                  QDIV((unsigned __int64 *)(v9 + 88), &v244, v195);
                  if ( !(unsigned int)bMulOverflow(16LL, v254)
                    && !(unsigned int)bSubOverflow(*(_QWORD *)(v9 + 24), *(_QWORD *)(v9 + 8)) )
                  {
                    v256 = 16 * v198;
                    if ( !(unsigned int)bMulOverflow(16 * v198, v197 - v196)
                      && !bAddOverflow(16 * v200 * v199, v260)
                      && !bAddOverflow(v194, v202 + v201) )
                    {
                      v204 = *(_QWORD *)(v9 + 688);
                      v244 = v203 + v194;
                      QDIV((unsigned __int64 *)(v9 + 104), &v244, v204);
                      ROT_DIV((__int64 *)(v9 + 672), v256, *(_QWORD *)(v9 + 688));
                      if ( !v251 )
                      {
                        v208 = v245;
LABEL_161:
                        v209 = v208 * v205;
                        if ( !v58
                          || !(unsigned int)bMulOverflow(v208, v188) && !(unsigned int)bMulOverflow(v210 * v188, v58) )
                        {
                          v211 = v248;
                          if ( !(unsigned int)bSubOverflow(v209, v208 * v248)
                            && !(unsigned int)bMulOverflow(16LL, v257 + v262)
                            && !(unsigned int)bMulOverflow(16 * v212, v254)
                            && !bAddOverflow(16 * v254 * v214, v213) )
                          {
                            v217 = *(_QWORD *)(v9 + 496);
                            v244 = v215 + v216;
                            QDIV((unsigned __int64 *)(v9 + 480), &v244, v217);
                            if ( !v251
                              || !(unsigned int)bMulOverflow(v253, v252)
                              && !(unsigned int)bMulOverflow(v221 * v219, v220) )
                            {
                              v222 = v253;
                              v223 = v253 * v218;
                              if ( (!v58
                                 || !(unsigned int)bMulOverflow(v253, v188)
                                 && !(unsigned int)bMulOverflow(v224 * v188, v58))
                                && !(unsigned int)bSubOverflow(v223, v222 * v211)
                                && !(unsigned int)bMulOverflow(16LL, v117)
                                && !(unsigned int)bMulOverflow(16 * v117, v254) )
                              {
                                v227 = 16 * v225 * v117;
                                if ( !bAddOverflow(v227, v226) )
                                {
                                  v229 = *(_QWORD *)(v9 + 592);
                                  v244 = v228 + v227;
                                  QDIV((unsigned __int64 *)(v9 + 576), &v244, v229);
                                  v230 = v256;
                                  v231 = *(_QWORD *)(v9 + 688);
                                  *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
                                  v232 = *(_OWORD *)(v9 + 480);
                                  *(_QWORD *)(v9 + 712) = v231;
                                  v233 = *(_QWORD *)(v9 + 496);
                                  *(_OWORD *)(v9 + 504) = v232;
                                  v235 = *v234;
                                  *(_QWORD *)(v9 + 520) = v233;
                                  v236 = *((_QWORD *)v234 + 2);
                                  *(_OWORD *)(v9 + 600) = v235;
                                  v237 = *(_OWORD *)(v9 + 648);
                                  *(_QWORD *)(v9 + 616) = v236;
                                  v238 = *(_QWORD *)(v9 + 664);
                                  *(_OWORD *)(v9 + 720) = v237;
                                  v239 = *(_OWORD *)(v9 + 456);
                                  *(_QWORD *)(v9 + 736) = v238;
                                  v240 = *(_QWORD *)(v9 + 472);
                                  *(_OWORD *)(v9 + 528) = v239;
                                  v241 = *(_OWORD *)(v9 + 552);
                                  *(_QWORD *)(v9 + 544) = v240;
                                  v242 = *(_QWORD *)(v9 + 568);
                                  *(_OWORD *)(v9 + 624) = v241;
                                  *(_QWORD *)(v9 + 640) = v242;
                                  ROT_DIV((__int64 *)(v9 + 768), v230, v195);
                                  v243 = v261;
                                  *(_QWORD *)(v9 + 784) = v195;
                                  v7 = bScalePlgDDALToPlgDDA(v9, v243);
                                }
                              }
                            }
                          }
                        }
                        goto LABEL_179;
                      }
                      if ( !(unsigned int)bMulOverflow(v245, v252) && !(unsigned int)bMulOverflow(v245 * v207, v206) )
                        goto LABEL_161;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_179:
    Win32FreePool(v9);
    return v7;
  }
  return result;
}
