/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02FFF14
 * Callers:
 *     EngPlgBlt @ 0x1C0292140 (EngPlgBlt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C014D8F6 (-bSubOverflow@@YAHJJ@Z.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x1C0151E8E (-bSubOverflow@@YAH_J0@Z.c)
 *     QDIV @ 0x1C02FFE00 (QDIV.c)
 *     ROT_DIV @ 0x1C02FFE68 (ROT_DIV.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C02FFEC8 (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C0301234 (-bMulOverflow@@YAH_J0@Z.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C03012BC (bScalePlgDDALToPlgDDA.c)
 */

__int64 __fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  struct _POINTFIX v10; // rcx
  __int64 v11; // rax
  struct _POINTFIX v12; // r14
  int v13; // r15d
  int x; // r13d
  int v15; // r14d
  LONG left; // r9d
  int v17; // eax
  LONG top; // edx
  int v19; // eax
  int v20; // r9d
  LONG right; // r13d
  int v22; // eax
  int v23; // r10d
  int v24; // eax
  int v25; // r9d
  LONG v26; // r12d
  int v27; // eax
  int v28; // r10d
  LONG bottom; // esi
  int v30; // eax
  int v31; // r9d
  int v32; // r10d
  int v33; // r11d
  __int64 *p_left; // r11
  __int64 v35; // rax
  unsigned int v36; // ecx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  int v41; // r8d
  __int64 v42; // r13
  __int64 v43; // r12
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rsi
  __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // r11
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // r10
  __int64 v65; // r11
  __int64 v66; // r15
  __int64 v67; // r14
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r10
  __int64 v71; // rcx
  signed __int64 v72; // r9
  int v73; // eax
  __int64 v74; // rcx
  signed __int64 v75; // r10
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // r10
  int v79; // eax
  __int64 v80; // r9
  unsigned int v81; // r11d
  unsigned __int64 v82; // rsi
  __int64 v83; // r8
  unsigned __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r10
  __int64 v87; // rdx
  unsigned __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // r8
  unsigned __int64 v92; // rdx
  __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // r11
  int v97; // eax
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // r9
  __int64 v101; // r10
  __int64 v102; // rdx
  __int64 v103; // r11
  __int128 *v104; // rcx
  __int128 v105; // xmm0
  __int64 v106; // xmm1_8
  __int64 v107; // r8
  __int64 v108; // r10
  __int128 *v109; // rcx
  __int128 v110; // xmm0
  __int64 v111; // xmm1_8
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // r10
  __int64 v115; // rsi
  __int64 v116; // r9
  __int64 v117; // r11
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // r9
  unsigned int v121; // r9d
  __int64 v122; // r11
  __int64 v123; // r10
  __int64 v124; // r9
  __int64 v125; // r11
  __int64 v126; // r12
  __int64 v127; // r13
  int v128; // eax
  __int64 v129; // r11
  int v130; // eax
  __int64 v131; // r14
  __int64 v132; // r12
  __int64 v133; // r13
  __int64 v134; // r9
  int v135; // eax
  __int64 v136; // rdx
  __int64 v137; // r9
  unsigned int v138; // r11d
  int v139; // eax
  __int64 v140; // rdx
  __int64 v141; // r10
  signed __int64 v142; // r9
  __int64 v143; // r10
  int v144; // eax
  __int64 v145; // rdx
  __int64 v146; // r9
  __int64 v147; // r10
  __int64 v148; // r9
  int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // r9
  __int64 v152; // r10
  signed __int64 v153; // r10
  __int64 v154; // r9
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // r10
  int v158; // eax
  __int64 v159; // r9
  __int64 v160; // r11
  int v161; // eax
  __int64 v162; // rdx
  __int64 v163; // r9
  __int64 v164; // r10
  __int64 v165; // r9
  __int64 v166; // r10
  int v167; // eax
  __int64 v168; // rdx
  __int64 v169; // r9
  int v170; // eax
  __int64 v171; // r9
  __int64 v172; // r10
  unsigned __int64 v173; // r8
  __int64 v174; // r11
  __int64 v175; // r9
  __int64 v176; // r10
  __int64 v177; // r11
  __int64 v178; // r10
  __int64 v179; // r9
  __int64 v180; // r11
  int v181; // eax
  __int64 v182; // r9
  __int64 v183; // r9
  __int64 v184; // r10
  __int64 v185; // r11
  int v186; // eax
  __int64 v187; // r9
  __int64 v188; // r10
  unsigned __int64 v189; // r8
  __int64 v190; // r11
  __int64 v191; // r9
  __int64 v192; // r10
  __int64 v193; // r11
  __int64 v194; // r10
  __int64 v195; // r9
  __int64 v196; // r11
  int v197; // eax
  __int64 v198; // r9
  __int64 v199; // r9
  __int64 v200; // r10
  __int64 v201; // r11
  int v202; // eax
  __int64 v203; // r9
  __int64 v204; // r10
  unsigned __int64 v205; // r8
  __int64 v206; // r9
  int v207; // eax
  __int64 v208; // rdx
  __int64 v209; // r9
  signed __int64 v210; // r11
  int v211; // eax
  __int64 v212; // r10
  signed __int64 v213; // r9
  __int64 v214; // r10
  int v215; // eax
  __int64 v216; // r9
  __int64 v217; // r10
  signed __int64 v218; // r11
  __int64 v219; // r10
  int v220; // eax
  __int64 v221; // rdx
  __int64 v222; // r10
  __int64 v223; // r11
  __int64 v224; // r14
  __int64 v225; // r9
  __int64 v226; // r10
  int v227; // eax
  __int64 v228; // rdx
  __int64 v229; // r9
  int v230; // eax
  __int64 v231; // r9
  __int64 v232; // r15
  int v233; // eax
  __int64 v234; // rdx
  __int64 v235; // r9
  __int64 v236; // r10
  __int64 v237; // r9
  __int64 v238; // r10
  int v239; // eax
  __int64 v240; // rdx
  __int64 v241; // r9
  int v242; // eax
  __int64 v243; // rdx
  __int64 v244; // r9
  unsigned __int64 v245; // r8
  __int64 v246; // r11
  __int64 v247; // r9
  __int64 v248; // r10
  __int64 v249; // r11
  __int64 v250; // r9
  __int64 v251; // r11
  int v252; // eax
  __int64 v253; // r10
  __int64 v254; // r9
  __int64 v255; // r10
  __int64 v256; // r11
  int v257; // eax
  __int64 v258; // r9
  __int64 v259; // r10
  unsigned __int64 v260; // r8
  __int64 v261; // r11
  __int64 v262; // r9
  __int64 v263; // r10
  __int64 v264; // r11
  __int64 v265; // rsi
  __int64 v266; // r11
  __int64 v267; // r13
  int v268; // eax
  __int64 v269; // rsi
  __int64 v270; // r9
  __int64 v271; // r9
  __int64 v272; // r10
  int v273; // eax
  __int64 v274; // r9
  unsigned __int64 v275; // r8
  __int64 v276; // rdx
  __int64 v277; // xmm1_8
  __int128 v278; // xmm0
  __int64 v279; // xmm1_8
  __int128 v280; // xmm0
  __int64 v281; // xmm1_8
  __int128 v282; // xmm0
  __int64 v283; // xmm1_8
  __int128 v284; // xmm0
  __int64 v285; // xmm1_8
  __int128 v286; // xmm0
  __int64 v287; // xmm1_8
  struct _PLGDDA *v288; // rdx
  __int64 v289; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v290; // [rsp+28h] [rbp-D8h]
  __int64 v291; // [rsp+30h] [rbp-D0h]
  __int64 v292; // [rsp+38h] [rbp-C8h]
  __int64 v293; // [rsp+40h] [rbp-C0h]
  __int64 v294; // [rsp+48h] [rbp-B8h]
  __int64 v295; // [rsp+50h] [rbp-B0h]
  __int64 v296; // [rsp+58h] [rbp-A8h]
  __int64 v297; // [rsp+60h] [rbp-A0h]
  __int64 v298[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v299; // [rsp+78h] [rbp-88h]
  __int64 v300; // [rsp+80h] [rbp-80h]
  __int64 v301; // [rsp+88h] [rbp-78h]
  __int64 v302; // [rsp+90h] [rbp-70h]
  __int64 v303; // [rsp+98h] [rbp-68h]
  __int64 v304; // [rsp+A0h] [rbp-60h]
  __int64 v305; // [rsp+A8h] [rbp-58h]
  __int64 v306; // [rsp+B0h] [rbp-50h]
  __int64 v307; // [rsp+B8h] [rbp-48h]
  __int64 v308; // [rsp+C0h] [rbp-40h]
  struct _PLGDDA *v309; // [rsp+C8h] [rbp-38h]
  __int64 v310[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v311; // [rsp+E0h] [rbp-20h]
  __int128 v312; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v313; // [rsp+F8h] [rbp-8h]
  struct _POINTFIX v314; // [rsp+100h] [rbp+0h]
  struct _POINTFIX v315; // [rsp+108h] [rbp+8h]
  int v316; // [rsp+110h] [rbp+10h]
  int v317; // [rsp+114h] [rbp+14h]

  v309 = a1;
  *(_OWORD *)v310 = 0LL;
  v312 = 0LL;
  v7 = 0;
  result = Win32AllocPoolZInit(792LL, 1633969223LL);
  v9 = result;
  if ( result )
  {
    v10 = a4[1];
    v11 = (__int64)*a4;
    v12 = a4[2];
    v13 = v12.x + v10.x - v11;
    v315 = v12;
    x = v12.x;
    v313 = v11;
    v314 = v10;
    v10 = (struct _POINTFIX)HIDWORD(*(unsigned __int64 *)&v10);
    v15 = v10.x + v12.y - HIDWORD(v11);
    v316 = v13;
    v317 = v15;
    ((void (__fastcall *)(_QWORD))SGDGetSessionState)(v10);
    left = a3->left;
    if ( a3->left || a3->top )
    {
      LODWORD(v290) = a2->left;
      LOBYTE(v17) = bSubOverflow(v290, left);
      if ( v17 )
        goto LABEL_175;
      top = a3->top;
      LODWORD(v289) = a2->top;
      LOBYTE(v19) = bSubOverflow(v289, top);
      if ( v19 )
        goto LABEL_175;
      right = a2->right;
      LOBYTE(v22) = bSubOverflow(right, v20);
      if ( v22 )
        goto LABEL_175;
      LOBYTE(v24) = bSubOverflow(a2->bottom, v23);
      if ( v24 )
        goto LABEL_175;
      v26 = a3->right;
      LOBYTE(v27) = bSubOverflow(v26, v25);
      if ( v27 )
        goto LABEL_175;
      bottom = a3->bottom;
      LOBYTE(v30) = bSubOverflow(bottom, v28);
      if ( v30 )
        goto LABEL_175;
      LODWORD(v310[1]) = right - v31;
      x = v315.x;
      LODWORD(v310[0]) = v290 - v31;
      HIDWORD(v310[1]) = v33 - v32;
      HIDWORD(v310[0]) = v289 - v32;
      HIDWORD(v312) = bottom - v32;
      p_left = v310;
      a3 = (struct _RECTL *)&v312;
      DWORD2(v312) = v26 - v31;
    }
    else
    {
      p_left = (__int64 *)&a2->left;
    }
    v35 = (v314.y > SHIDWORD(v313)) ^ (unsigned int)(v314.y <= v15);
    v36 = 0;
    v37 = (v314.y > SHIDWORD(v313)) ^ (v314.y <= v15);
    if ( *((_DWORD *)&v313 + 2 * (unsigned int)v35 + 1) > *((_DWORD *)&v313 + 2 * (v35 ^ 3) + 1) )
      v37 ^= 3u;
    if ( !v37 )
    {
      if ( v314.y >= v315.y && (v314.y > v315.y || v314.x >= x) )
      {
        v36 = 1;
        goto LABEL_42;
      }
      goto LABEL_40;
    }
    v38 = v37 - 1;
    if ( v38 )
    {
      v39 = v38 - 1;
      if ( v39 )
      {
        if ( v39 == 1 )
        {
          if ( v314.y < v315.y || v314.y <= v315.y && v314.x < x )
          {
            v36 = 6;
LABEL_42:
            v40 = a3->bottom - a3->top;
            v41 = a3->right - a3->left;
            goto LABEL_43;
          }
          v36 = 7;
        }
LABEL_40:
        v40 = a3->right - a3->left;
        v41 = a3->bottom - a3->top;
LABEL_43:
        v42 = v41;
        v43 = v40;
        if ( !v40 )
          goto LABEL_175;
        if ( !v41 )
          goto LABEL_175;
        v44 = *((int *)p_left + 1);
        v45 = v36;
        v46 = *(int *)p_left;
        v47 = 3 * v45;
        v45 *= 2LL;
        v48 = dword_1C032B970[2 * v47];
        v49 = dword_1C032B960[2 * v47];
        v50 = dword_1C032B964[2 * v47];
        v51 = (v43 - 1) * dword_1C032B968[2 * v47];
        v293 = dword_1C032B96C[2 * v47];
        v300 = v48;
        v302 = v49;
        v295 = v50;
        v297 = v50 * v44 + v49 * v46 + v51;
        v52 = v46 * v293;
        v53 = dword_1C032B8E4[2 * v45];
        v54 = v52 + (v42 - 1) * dword_1C032B974[2 * v47];
        v55 = v44 * v48;
        v56 = *((int *)&v313 + 2 * v53);
        v57 = v55 + v54;
        v58 = dword_1C032B8E0[2 * v45];
        v296 = v57;
        v59 = *((int *)&v313 + 2 * v58);
        v60 = *((int *)&v313 + 2 * v58 + 1);
        v61 = v56 - v59;
        v62 = dword_1C032B8E8[2 * v45];
        v63 = *((int *)&v313 + 2 * v53 + 1) - v60;
        v304 = v59;
        v305 = v60;
        v64 = *((int *)&v313 + 2 * v62) - v59;
        v65 = *((int *)&v313 + 2 * v62 + 1) - v60;
        v294 = v61;
        v291 = v64;
        v292 = v63;
        v290 = v65;
        if ( v61 )
        {
          if ( (unsigned int)bMulOverflow(v42, v61) )
            goto LABEL_175;
        }
        if ( v63 && (unsigned int)bMulOverflow(v42, v63) )
          goto LABEL_175;
        if ( v64 && (unsigned int)bMulOverflow(v43, v64) )
          goto LABEL_175;
        if ( v65 && (unsigned int)bMulOverflow(v43, v65) )
          goto LABEL_175;
        v66 = v65 * v43;
        v301 = v61 * v42;
        v67 = v63 * v42;
        v303 = v64 * v43;
        if ( !(v65 * v43) )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v43, v42) )
          goto LABEL_175;
        LOBYTE(v68) = bAddOverflow(v305, 16LL);
        if ( v68 )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v43 * v42, v69 + v70) )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v297, v67) )
          goto LABEL_175;
        LOBYTE(v73) = bAddOverflow(v72, v71 * v67);
        if ( v73 )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v296, v66) )
          goto LABEL_175;
        LOBYTE(v76) = bAddOverflow(v75, v74 * v66);
        if ( v76 )
          goto LABEL_175;
        LOBYTE(v79) = bSubOverflow(v78 + v77, 1LL);
        if ( v79 )
          goto LABEL_175;
        v289 = v80 - 1;
        if ( (unsigned int)bMulOverflow(v43 * v42, v81) )
          goto LABEL_175;
        v82 = 16 * v43 * v42;
        if ( !v82 )
          goto LABEL_175;
        v311 = 0LL;
        v299 = 0LL;
        *(_OWORD *)v310 = 0LL;
        *(_OWORD *)v298 = 0LL;
        ROT_DIV(v310, v67, v82);
        ROT_DIV(v298, v66, v83);
        QDIV((unsigned __int64 *)(v9 + 8), (unsigned __int64 *)&v289, v84);
        v85 = v310[0];
        v86 = v310[1];
        *(_OWORD *)(v9 + 24) = *(_OWORD *)(v9 + 8);
        v87 = v85 + *(_QWORD *)(v9 + 24);
        v88 = v86 + *(_QWORD *)(v9 + 32);
        *(_QWORD *)(v9 + 24) = v87;
        *(_QWORD *)(v9 + 32) = v88;
        if ( v88 >= v82 )
        {
          *(_QWORD *)(v9 + 24) = v87 + 1;
          *(_QWORD *)(v9 + 32) = v88 - v82;
        }
        v89 = v298[0];
        v90 = v298[1];
        *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
        v91 = *(_QWORD *)(v9 + 40) + v89;
        v92 = *(_QWORD *)(v9 + 48) + v90;
        *(_QWORD *)(v9 + 40) = v91;
        *(_QWORD *)(v9 + 48) = v92;
        if ( v92 >= v82 )
        {
          *(_QWORD *)(v9 + 40) = v91 + 1;
          *(_QWORD *)(v9 + 48) = v92 - v82;
        }
        *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
        v93 = v85 + *(_QWORD *)(v9 + 56);
        v94 = v86 + *(_QWORD *)(v9 + 64);
        *(_QWORD *)(v9 + 56) = v93;
        *(_QWORD *)(v9 + 64) = v94;
        if ( v94 >= v82 )
        {
          *(_QWORD *)(v9 + 56) = v93 + 1;
          *(_QWORD *)(v9 + 64) = v94 - v82;
        }
        if ( (unsigned int)bMulOverflow(v302, v67) )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v293, v66) )
          goto LABEL_175;
        LOBYTE(v97) = bAddOverflow(v96 * v67, v95 * v66);
        if ( v97 )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v295, v67) )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v300, v66) )
          goto LABEL_175;
        v298[0] = v295 * v67;
        LOBYTE(v99) = bAddOverflow(v295 * v67, v98 * v66);
        if ( v99 )
          goto LABEL_175;
        ROT_DIV((__int64 *)(v9 + 264), v101 + v100, v82);
        v102 = v298[0];
        *(_QWORD *)(v9 + 280) = v82;
        v105 = *v104;
        v106 = *((_QWORD *)v104 + 2);
        *(_OWORD *)(v9 + 288) = *v104;
        *(_OWORD *)(v9 + 312) = v105;
        *(_OWORD *)(v9 + 336) = v105;
        *(_QWORD *)(v9 + 304) = v106;
        *(_QWORD *)(v9 + 328) = v106;
        *(_QWORD *)(v9 + 352) = v106;
        ROT_DIV((__int64 *)(v9 + 360), v103 + v102, v107);
        v108 = v290;
        *(_QWORD *)(v9 + 376) = v82;
        v110 = *v109;
        v111 = *((_QWORD *)v109 + 2);
        v112 = v294;
        *(_OWORD *)(v9 + 384) = v110;
        *(_OWORD *)(v9 + 408) = v110;
        *(_OWORD *)(v9 + 432) = v110;
        *(_QWORD *)(v9 + 400) = v111;
        *(_QWORD *)(v9 + 424) = v111;
        *(_QWORD *)(v9 + 448) = v111;
        if ( (unsigned int)bMulOverflow(v112, v108) )
          goto LABEL_175;
        v115 = v113 * v114;
        if ( (unsigned int)bMulOverflow(v292, v291) )
          goto LABEL_175;
        v289 = v117 * v116;
        LOBYTE(v118) = bSubOverflow(v115, v117 * v116);
        if ( v118 )
          goto LABEL_175;
        v306 = v120 - v119;
        *(_OWORD *)v298 = 0LL;
        *(_OWORD *)v310 = 0LL;
        if ( (unsigned int)bMulOverflow(v43, 16LL) )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v42, v121) )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v302, v122) )
          goto LABEL_175;
        if ( (unsigned int)bMulOverflow(v293, v123) )
          goto LABEL_175;
        v126 = 16 * v43;
        if ( !v126 )
          goto LABEL_175;
        v127 = 16 * v42;
        if ( !v127 )
          goto LABEL_175;
        ROT_DIV(v298, v124 * v125, v126);
        ROT_DIV(v310, v293 * v290, v127);
        v307 = v310[0];
        v308 = v298[0];
        LOBYTE(v128) = bAddOverflow(v298[0], v310[0]);
        if ( v128 )
          goto LABEL_175;
        ROT_DIV(v298, v295 * v129, v126);
        ROT_DIV(v310, v300 * v290, v127);
        *(_QWORD *)&v312 = v310[0];
        LOBYTE(v130) = bAddOverflow(v298[0], v310[0]);
        if ( v130 )
          goto LABEL_175;
        if ( !v67 )
        {
          v131 = 0LL;
          v132 = v292;
          v133 = v289;
          *(_QWORD *)(v9 + 648) = 0LL;
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
          goto LABEL_133;
        }
        if ( !(unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL) )
        {
          LOBYTE(v135) = bSubOverflow(16 * v134, v305);
          if ( !v135 && !(unsigned int)bMulOverflow(v301, v137 - v136) )
          {
            LOBYTE(v139) = bAddOverflow(v304, v138);
            if ( !v139 )
            {
              v310[0] = v140 + v141;
              if ( !(unsigned int)bMulOverflow(v67, v140 + v141) )
              {
                LOBYTE(v144) = bAddOverflow(v142, v67 * v143);
                if ( !v144 )
                {
                  v147 = v145 + v146;
                  v148 = v296;
                  if ( !v296 || !(unsigned int)bMulOverflow(v296, v115) )
                  {
                    LOBYTE(v149) = bSubOverflow(v147, v148 * v115);
                    if ( !v149 )
                    {
                      v132 = v292;
                      v153 = v152 - v150;
                      if ( v151 )
                      {
                        if ( (unsigned int)bMulOverflow(v291, v292) )
                          goto LABEL_175;
                        v133 = v289;
                        if ( (unsigned int)bMulOverflow(v154, v289) )
                          goto LABEL_175;
                      }
                      else
                      {
                        v133 = v289;
                      }
                      LOBYTE(v155) = bAddOverflow(v153, v151 * v133);
                      if ( !v155 )
                      {
                        v292 = v156 + v157;
                        LOBYTE(v158) = bSubOverflow(v156 + v157, 1LL);
                        if ( !v158 )
                        {
                          v289 = v159 - 1;
                          if ( !(unsigned int)bMulOverflow(v160, v67) )
                          {
                            v131 = 16 * v67;
                            *(_QWORD *)(v9 + 664) = v131;
                            *(_QWORD *)(v9 + 472) = v131;
                            *(_QWORD *)(v9 + 568) = v131;
                            if ( v131 )
                            {
                              QDIV((unsigned __int64 *)(v9 + 72), (unsigned __int64 *)&v289, v131);
                              if ( !(unsigned int)bMulOverflow(16LL, v301) )
                              {
                                LOBYTE(v161) = bSubOverflow(*(_QWORD *)(v9 + 40), *(_QWORD *)(v9 + 8));
                                if ( !v161 )
                                {
                                  v296 = 16 * v164;
                                  if ( !(unsigned int)bMulOverflow(16 * v164, v163 - v162) )
                                  {
                                    LOBYTE(v167) = bSubOverflow(16 * v166 * v165, v306);
                                    if ( !v167 )
                                    {
                                      LOBYTE(v170) = bAddOverflow(v292 - 1, v169 - v168);
                                      if ( !v170 )
                                      {
                                        v173 = *(_QWORD *)(v9 + 664);
                                        v289 = v171 + v172;
                                        QDIV((unsigned __int64 *)(v9 + 120), (unsigned __int64 *)&v289, v173);
                                        ROT_DIV((__int64 *)(v9 + 648), v296, *(_QWORD *)(v9 + 664));
                                        v174 = v293;
                                        if ( !v290
                                          || !(unsigned int)bMulOverflow(v293, v294)
                                          && !(unsigned int)bMulOverflow(v177 * v176, v175) )
                                        {
                                          v178 = v174 * v115;
                                          if ( !v132
                                            || !(unsigned int)bMulOverflow(v174, v291)
                                            && !(unsigned int)bMulOverflow(v180 * v179, v132) )
                                          {
                                            LOBYTE(v181) = bSubOverflow(v178, v174 * v133);
                                            if ( !v181
                                              && !(unsigned int)bMulOverflow(16LL, v307 + v308)
                                              && !(unsigned int)bMulOverflow(16 * v182, v301) )
                                            {
                                              LOBYTE(v186) = bSubOverflow(16 * v185 * v183, v184);
                                              if ( !v186 )
                                              {
                                                v189 = *(_QWORD *)(v9 + 472);
                                                v289 = v187 - v188;
                                                QDIV((unsigned __int64 *)(v9 + 456), (unsigned __int64 *)&v289, v189);
                                                v190 = v300;
                                                if ( !v290
                                                  || !(unsigned int)bMulOverflow(v300, v294)
                                                  && !(unsigned int)bMulOverflow(v193 * v192, v191) )
                                                {
                                                  v194 = v190 * v115;
                                                  if ( !v132
                                                    || !(unsigned int)bMulOverflow(v190, v291)
                                                    && !(unsigned int)bMulOverflow(v196 * v195, v132) )
                                                  {
                                                    LOBYTE(v197) = bSubOverflow(v194, v190 * v133);
                                                    if ( !v197
                                                      && !(unsigned int)bMulOverflow(16LL, v312 + v298[0])
                                                      && !(unsigned int)bMulOverflow(16 * v198, v301) )
                                                    {
                                                      LOBYTE(v202) = bSubOverflow(16 * v201 * v199, v200);
                                                      if ( !v202 )
                                                      {
                                                        v205 = *(_QWORD *)(v9 + 568);
                                                        v289 = v203 - v204;
                                                        QDIV(
                                                          (unsigned __int64 *)(v9 + 552),
                                                          (unsigned __int64 *)&v289,
                                                          v205);
                                                        ROT_DIV((__int64 *)(v9 + 744), v296, v131);
LABEL_133:
                                                        *(_QWORD *)(v9 + 760) = v131;
                                                        if ( !(unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8)) )
                                                        {
                                                          LOBYTE(v207) = bSubOverflow(16 * v206, v305);
                                                          if ( !v207 && !(unsigned int)bMulOverflow(v303, v209 - v208) )
                                                          {
                                                            LOBYTE(v211) = bAddOverflow(v210, 16LL);
                                                            if ( !v211 && !(unsigned int)bMulOverflow(v66, v212) )
                                                            {
                                                              LOBYTE(v215) = bAddOverflow(v213, v66 * v214);
                                                              if ( !v215 )
                                                              {
                                                                v218 = v216 + v217;
                                                                v219 = v297;
                                                                if ( !v297 || !(unsigned int)bMulOverflow(v297, v115) )
                                                                {
                                                                  LOBYTE(v220) = bAddOverflow(v218, v219 * v115);
                                                                  if ( !v220 )
                                                                  {
                                                                    v224 = v291;
                                                                    v225 = v221 + v223;
                                                                    if ( !v222
                                                                      || !(unsigned int)bMulOverflow(v291, v132)
                                                                      && !(unsigned int)bMulOverflow(v226, v133) )
                                                                    {
                                                                      LOBYTE(v227) = bSubOverflow(v225, v222 * v133);
                                                                      if ( !v227 )
                                                                      {
                                                                        LOBYTE(v230) = bSubOverflow(v229 - v228, 1LL);
                                                                        if ( !v230 )
                                                                        {
                                                                          v289 = v231 - 1;
                                                                          if ( !(unsigned int)bMulOverflow(16LL, v66) )
                                                                          {
                                                                            v232 = 16 * v66;
                                                                            *(_QWORD *)(v9 + 688) = v232;
                                                                            *(_QWORD *)(v9 + 496) = v232;
                                                                            *(_QWORD *)(v9 + 592) = v232;
                                                                            if ( v232 )
                                                                            {
                                                                              QDIV(
                                                                                (unsigned __int64 *)(v9 + 88),
                                                                                (unsigned __int64 *)&v289,
                                                                                v232);
                                                                              if ( !(unsigned int)bMulOverflow(
                                                                                                    16LL,
                                                                                                    v303) )
                                                                              {
                                                                                LOBYTE(v233) = bSubOverflow(
                                                                                                 *(_QWORD *)(v9 + 24),
                                                                                                 *(_QWORD *)(v9 + 8));
                                                                                if ( !v233 )
                                                                                {
                                                                                  v297 = 16 * v236;
                                                                                  if ( !(unsigned int)bMulOverflow(16 * v236, v235 - v234) )
                                                                                  {
                                                                                    LOBYTE(v239) = bAddOverflow(
                                                                                                     16 * v238 * v237,
                                                                                                     v306);
                                                                                    if ( !v239 )
                                                                                    {
                                                                                      LOBYTE(v242) = bAddOverflow(v289, v241 + v240);
                                                                                      if ( !v242 )
                                                                                      {
                                                                                        v245 = *(_QWORD *)(v9 + 688);
                                                                                        v289 = v243 + v244;
                                                                                        QDIV(
                                                                                          (unsigned __int64 *)(v9 + 104),
                                                                                          (unsigned __int64 *)&v289,
                                                                                          v245);
                                                                                        ROT_DIV(
                                                                                          (__int64 *)(v9 + 672),
                                                                                          v297,
                                                                                          *(_QWORD *)(v9 + 688));
                                                                                        v246 = v302;
                                                                                        if ( !v290
                                                                                          || !(unsigned int)bMulOverflow(v302, v294)
                                                                                          && !(unsigned int)bMulOverflow(v249 * v248, v247) )
                                                                                        {
                                                                                          v250 = v246 * v115;
                                                                                          if ( !v132
                                                                                            || !(unsigned int)bMulOverflow(v246, v224)
                                                                                            && !(unsigned int)bMulOverflow(v251 * v224, v132) )
                                                                                          {
                                                                                            LOBYTE(v252) = bSubOverflow(v250, v246 * v133);
                                                                                            if ( !v252
                                                                                              && !(unsigned int)bMulOverflow(16LL, v307 + v308)
                                                                                              && !(unsigned int)bMulOverflow(16 * v253, v303) )
                                                                                            {
                                                                                              LOBYTE(v257) = bAddOverflow(16 * v256 * v255, v254);
                                                                                              if ( !v257 )
                                                                                              {
                                                                                                v260 = *(_QWORD *)(v9 + 496);
                                                                                                v289 = v258 + v259;
                                                                                                QDIV(
                                                                                                  (unsigned __int64 *)(v9 + 480),
                                                                                                  (unsigned __int64 *)&v289,
                                                                                                  v260);
                                                                                                v261 = v295;
                                                                                                if ( !v290 || !(unsigned int)bMulOverflow(v295, v294) && !(unsigned int)bMulOverflow(v264 * v263, v262) )
                                                                                                {
                                                                                                  v265 = v261 * v115;
                                                                                                  if ( !v132 || !(unsigned int)bMulOverflow(v261, v224) && !(unsigned int)bMulOverflow(v266 * v224, v132) )
                                                                                                  {
                                                                                                    v267 = v261 * v133;
                                                                                                    LOBYTE(v268) = bSubOverflow(v265, v267);
                                                                                                    if ( !v268 )
                                                                                                    {
                                                                                                      v269 = v265 - v267;
                                                                                                      if ( !(unsigned int)bMulOverflow(16LL, v312 + v298[0]) && !(unsigned int)bMulOverflow(16 * v270, v303) )
                                                                                                      {
                                                                                                        LOBYTE(v273) = bAddOverflow(16 * v272 * v271, v269);
                                                                                                        if ( !v273 )
                                                                                                        {
                                                                                                          v275 = *(_QWORD *)(v9 + 592);
                                                                                                          v289 = v269 + v274;
                                                                                                          QDIV((unsigned __int64 *)(v9 + 576), (unsigned __int64 *)&v289, v275);
                                                                                                          v276 = v297;
                                                                                                          v277 = *(_QWORD *)(v9 + 688);
                                                                                                          *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
                                                                                                          v278 = *(_OWORD *)(v9 + 480);
                                                                                                          *(_QWORD *)(v9 + 712) = v277;
                                                                                                          v279 = *(_QWORD *)(v9 + 496);
                                                                                                          *(_OWORD *)(v9 + 504) = v278;
                                                                                                          v280 = *(_OWORD *)(v9 + 576);
                                                                                                          *(_QWORD *)(v9 + 520) = v279;
                                                                                                          v281 = *(_QWORD *)(v9 + 592);
                                                                                                          *(_OWORD *)(v9 + 600) = v280;
                                                                                                          v282 = *(_OWORD *)(v9 + 648);
                                                                                                          *(_QWORD *)(v9 + 616) = v281;
                                                                                                          v283 = *(_QWORD *)(v9 + 664);
                                                                                                          *(_OWORD *)(v9 + 720) = v282;
                                                                                                          v284 = *(_OWORD *)(v9 + 456);
                                                                                                          *(_QWORD *)(v9 + 736) = v283;
                                                                                                          v285 = *(_QWORD *)(v9 + 472);
                                                                                                          *(_OWORD *)(v9 + 528) = v284;
                                                                                                          v286 = *(_OWORD *)(v9 + 552);
                                                                                                          *(_QWORD *)(v9 + 544) = v285;
                                                                                                          v287 = *(_QWORD *)(v9 + 568);
                                                                                                          *(_OWORD *)(v9 + 624) = v286;
                                                                                                          *(_QWORD *)(v9 + 640) = v287;
                                                                                                          ROT_DIV((__int64 *)(v9 + 768), v276, v232);
                                                                                                          v288 = v309;
                                                                                                          *(_QWORD *)(v9 + 784) = v232;
                                                                                                          v7 = bScalePlgDDALToPlgDDA(v9, v288);
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_175:
        Win32FreePool((void *)v9);
        return v7;
      }
      if ( SHIDWORD(v313) < v15 )
        goto LABEL_24;
      if ( SHIDWORD(v313) > v15 )
      {
        v36 = 5;
        goto LABEL_40;
      }
      if ( (int)v313 < v13 )
      {
LABEL_24:
        v36 = 4;
        goto LABEL_42;
      }
      v36 = 5;
    }
    else
    {
      if ( SHIDWORD(v313) < v15 )
        goto LABEL_30;
      if ( SHIDWORD(v313) > v15 )
      {
        v36 = 3;
        goto LABEL_42;
      }
      if ( (int)v313 < v13 )
      {
LABEL_30:
        v36 = 2;
        goto LABEL_40;
      }
      v36 = 3;
    }
    if ( v36 == 3 )
      goto LABEL_42;
    goto LABEL_40;
  }
  return result;
}
