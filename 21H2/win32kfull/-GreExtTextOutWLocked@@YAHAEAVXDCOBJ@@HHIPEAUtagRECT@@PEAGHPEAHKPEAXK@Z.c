/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C002CA18 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0032A40 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     GrePolyTextOutW @ 0x1C00E3570 (GrePolyTextOutW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0032E5C (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0043D24 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C008DC2C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C008E834 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00EB7A0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0106F1C (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0113C58 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C013789C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C0150EF0 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0283290 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C02833F0 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C029647C (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0296F94 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02BA81C (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C02BA894 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1C02BAA40 (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BC3E0 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02BC830 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BCA2C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

_BOOL8 __fastcall GreExtTextOutWLocked(
        struct XDCOBJ *a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        ULONG *a10,
        unsigned int a11)
{
  struct tagRECT *v11; // rbx
  int v13; // r14d
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rdx
  int v19; // eax
  int v20; // r13d
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // r12d
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  int v29; // r11d
  __int64 v30; // rcx
  int v31; // esi
  int v32; // r13d
  int v33; // r12d
  int bottom; // edx
  LONG v35; // eax
  LONG v36; // ecx
  struct _RECTL *v37; // rsi
  struct DC *v38; // r8
  BOOL v39; // ebx
  bool v40; // zf
  int v41; // r12d
  __int64 v42; // rcx
  unsigned int v43; // ebx
  __int64 v44; // r13
  int v45; // eax
  int v46; // esi
  int v47; // r8d
  int v48; // r8d
  __int64 v49; // rdx
  RECTL *p_rclBkGround; // r13
  int v51; // eax
  int v52; // esi
  int v53; // r8d
  int v54; // ecx
  BOOL v55; // eax
  LONG v56; // esi
  __int64 v57; // r8
  int v58; // ecx
  int v59; // r9d
  __int64 v60; // rcx
  int v61; // eax
  int v62; // edx
  int v63; // eax
  __int64 v64; // rcx
  int v65; // r10d
  __int64 v66; // rdx
  struct REGION *v67; // rdx
  RECTL rclBounds; // xmm2
  LONG v69; // edx
  __m128i v70; // xmm0
  _DWORD *v71; // rcx
  __int64 v72; // rsi
  int v73; // r8d
  __int64 v74; // rax
  int v75; // edx
  int v76; // r9d
  int v77; // r10d
  int v78; // r8d
  __int64 v79; // rsi
  int v80; // eax
  int v81; // eax
  __int64 v82; // rdx
  struct _POINTL *v83; // r9
  __int64 v84; // rbx
  unsigned int v85; // r12d
  __int64 v86; // rcx
  __int64 v87; // rdi
  struct _BRUSHOBJ *v88; // r11
  BOOL v89; // r10d
  __int64 v90; // rax
  struct _POINTL *v91; // rbx
  int v92; // r10d
  struct _SURFOBJ *v93; // r8
  unsigned __int64 v94; // r9
  int v95; // edx
  struct _RECTL *v96; // rdi
  struct _BRUSHOBJ *v97; // r12
  __int64 *ThreadWin32Thread; // rax
  __int64 v99; // rax
  __int64 v100; // rcx
  BOOL (__stdcall *v101)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rbx
  struct _BRUSHOBJ *v102; // r12
  __int64 *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  int v107; // ecx
  __int64 v108; // rax
  __m128i si128; // xmm1
  LONG v110; // r11d
  LONG v111; // ecx
  LONG v112; // eax
  int v113; // edi
  struct _BRUSHOBJ *v114; // r11
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // r12
  __int64 v118; // rsi
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // r8
  ERECTL *k; // rdx
  __int64 v125; // rdx
  __int64 v126; // rdx
  RECTL v127; // xmm6
  LONG *p_top; // rdi
  LONG v129; // edx
  LONG *v130; // rcx
  struct _SURFOBJ *v131; // r8
  struct _SURFOBJ *v132; // r9
  LONG v133; // ecx
  LONG v134; // eax
  LONG v135; // ecx
  LONG v136; // eax
  LONG left; // edx
  __int64 v138; // r12
  int v139; // esi
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // rcx
  __int64 v145; // rbx
  __int64 v146; // r8
  LONG top; // ecx
  LONG right; // eax
  int v149; // r9d
  int v150; // r10d
  unsigned __int64 v151; // rcx
  int v152; // esi
  int v153; // r13d
  unsigned __int64 v154; // rcx
  int v155; // r12d
  int v156; // edx
  struct EXFORMOBJ *v157; // rdx
  int v158; // r9d
  __int64 v159; // rcx
  __int64 v160; // rax
  int v161; // ebx
  char v162; // al
  unsigned int v163; // eax
  LONG v164; // eax
  LONG v165; // eax
  LONG v166; // r8d
  int v167; // r8d
  __int64 v168; // rdx
  __int64 v169; // r8
  struct EXFORMOBJ *v170; // rdx
  struct XDCOBJ *v171; // r8
  int v172; // r9d
  int v173; // eax
  struct EXFORMOBJ *v174; // rdx
  int v175; // r9d
  int v176; // eax
  LONG v177; // ecx
  LONG v178; // eax
  LONG v179; // edx
  unsigned __int64 v180; // r8
  struct XDCOBJ *v181; // r8
  int v182; // eax
  __int64 v183; // rax
  __int64 v184; // rax
  int v185; // eax
  struct XDCOBJ *v186; // r8
  int v187; // eax
  int v188; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v191; // eax
  struct _XLATEOBJ *v192; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v193; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v194; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v195; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v196; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v197; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v198; // [rsp+40h] [rbp-D0h]
  unsigned int v199; // [rsp+48h] [rbp-C8h]
  unsigned int v200; // [rsp+58h] [rbp-B8h]
  struct _BRUSHOBJ *v201; // [rsp+90h] [rbp-80h] BYREF
  int v202; // [rsp+98h] [rbp-78h] BYREF
  __int64 v203; // [rsp+A0h] [rbp-70h] BYREF
  struct _BRUSHOBJ *v204; // [rsp+A8h] [rbp-68h] BYREF
  struct _RECTL *v205; // [rsp+B0h] [rbp-60h]
  __int64 v206; // [rsp+B8h] [rbp-58h] BYREF
  BOOL v207; // [rsp+C0h] [rbp-50h]
  int v208; // [rsp+C4h] [rbp-4Ch]
  __int64 v209; // [rsp+C8h] [rbp-48h]
  struct _POINTL *v210; // [rsp+D0h] [rbp-40h]
  __int64 v211; // [rsp+D8h] [rbp-38h]
  unsigned __int64 v212; // [rsp+E0h] [rbp-30h] BYREF
  unsigned __int64 v213; // [rsp+E8h] [rbp-28h] BYREF
  int v214; // [rsp+F0h] [rbp-20h]
  struct _XLATEOBJ v215; // [rsp+F8h] [rbp-18h] BYREF
  int *v216[3]; // [rsp+118h] [rbp+8h] BYREF
  PATHOBJ ppo; // [rsp+130h] [rbp+20h] BYREF
  __int64 v218; // [rsp+138h] [rbp+28h]
  PATHOBJ v219; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 v220; // [rsp+1B8h] [rbp+A8h]
  struct _RECTL rclBkGround; // [rsp+230h] [rbp+120h] BYREF
  struct _RECTL v222; // [rsp+240h] [rbp+130h] BYREF
  unsigned __int16 *v223[2]; // [rsp+250h] [rbp+140h] BYREF
  struct _POINTL *v224[2]; // [rsp+260h] [rbp+150h] BYREF
  struct _CLIPOBJ v225; // [rsp+270h] [rbp+160h] BYREF
  __int64 v226; // [rsp+2C0h] [rbp+1B0h]
  int v227; // [rsp+2C8h] [rbp+1B8h]
  int v228; // [rsp+2F0h] [rbp+1E0h]
  __int64 v229; // [rsp+300h] [rbp+1F0h]
  STROBJ pstro; // [rsp+310h] [rbp+200h] BYREF
  __int64 v231; // [rsp+350h] [rbp+240h]
  int v232; // [rsp+360h] [rbp+250h]
  int v233; // [rsp+364h] [rbp+254h]
  int v234; // [rsp+390h] [rbp+280h]
  _BYTE v235[100]; // [rsp+394h] [rbp+284h] BYREF
  int v236; // [rsp+3F8h] [rbp+2E8h]
  __int64 v237; // [rsp+418h] [rbp+308h]
  struct _POINTL v238; // [rsp+450h] [rbp+340h] BYREF
  LONG v239; // [rsp+458h] [rbp+348h]
  LONG v240; // [rsp+45Ch] [rbp+34Ch]
  LONG v241; // [rsp+460h] [rbp+350h]
  LONG v242; // [rsp+464h] [rbp+354h]
  int v243; // [rsp+468h] [rbp+358h]
  int v244; // [rsp+46Ch] [rbp+35Ch]
  struct _POINTL v245; // [rsp+470h] [rbp+360h] BYREF

  v11 = a5;
  v223[0] = a6;
  v215.pulXlate = a10;
  v13 = 128;
  v14 = 4;
  LODWORD(v204) = a3;
  if ( (a4 & 0x10) == 0 )
    v14 = 2;
  LODWORD(v206) = a2;
  v15 = *(_QWORD *)a1;
  LODWORD(v201) = v14;
  v216[0] = a8;
  v207 = 0;
  v16 = *(_DWORD *)(v15 + 248);
  v208 = 0;
  if ( (v16 & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_249;
  if ( (*(_DWORD *)(v15 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  LODWORD(v210) = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_249:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v17 = a4 & 0xFFFFC36F;
  if ( a5 )
  {
    if ( a5->left == a5->right || a5->top == a5->bottom )
    {
      a5->right = a2;
      a5->left = a2;
      a5->bottom = a3;
      a5->top = a3;
      if ( (a4 & 6) == 2 )
      {
        v11 = 0LL;
        v17 = a4 & 0xFFFFC36D;
      }
    }
  }
  else
  {
    v17 = a4 & 0xFFFFC369;
  }
  v18 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && (!v17 || v11 && (v17 & 0xFFFFFFF9) == 0) )
  {
    v19 = *(_DWORD *)(v18 + 248) & 1;
    if ( !v19 || (v17 & 4) == 0 )
    {
      rclBkGround = 0LL;
      if ( v19 )
      {
        v23 = 0;
        v202 = 0;
        v213 = 0LL;
        v20 = 0;
        LODWORD(v205) = 0;
        LODWORD(v21) = 0;
        LODWORD(v22) = 0;
        LODWORD(v224[0]) = 0;
        LODWORD(v24) = 0;
        LODWORD(v25) = 0;
      }
      else
      {
        v212 = *(_QWORD *)(v18 + 8LL * (*(_DWORD *)(v18 + 40) & 1) + 1016);
        v20 = v212;
        v224[0] = (struct _POINTL *)HIDWORD(v212);
        LODWORD(v205) = HIDWORD(v212);
        v21 = HIDWORD(v212);
        v22 = HIDWORD(v212);
        v23 = v212;
        v24 = HIDWORD(v212);
        v25 = HIDWORD(v212);
        v213 = v212;
        v202 = v212;
      }
      v26 = *(_QWORD *)(v18 + 976);
      v27 = (unsigned int)(16 * v20);
      v209 = v27;
      *(_DWORD *)&v215.iSrcType = *(_DWORD *)(v26 + 208);
      v28 = *(_QWORD *)(v18 + 976);
      v211 = (unsigned int)(16 * v21);
      v215.cEntries = *(_DWORD *)(v28 + 108) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 976) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v215, a1, 0x204u, 0);
        LODWORD(v25) = v224[0];
        LODWORD(v22) = v24;
      }
      else
      {
        *(_QWORD *)&v215.iUniq = v18 + 320;
      }
      v212 = 0LL;
      v29 = 1;
      if ( !v11 )
        goto LABEL_33;
      LODWORD(v224[0]) = v17 & 2;
      v13 = 136;
      if ( (v17 & 2) == 0 )
        v13 = 128;
      v30 = *(unsigned int *)(*(_QWORD *)&v215.iUniq + 32LL);
      if ( (v30 & 2) != 0 )
      {
        v31 = v11->left + v23 + ((*(_DWORD *)(*(_QWORD *)&v215.iUniq + 24LL) + 8) >> 4);
        v222.left = v31;
        v32 = v11->right + v23 + ((*(_DWORD *)(*(_QWORD *)&v215.iUniq + 24LL) + 8) >> 4);
        v222.right = v32;
        v33 = v22 + v11->top + ((*(_DWORD *)(*(_QWORD *)&v215.iUniq + 28LL) + 8) >> 4);
        v222.top = v33;
        bottom = v25 + v11->bottom + ((*(_DWORD *)(*(_QWORD *)&v215.iUniq + 28LL) + 8) >> 4);
        v222.bottom = bottom;
      }
      else
      {
        left = v11->left;
        if ( (v30 & 1) != 0 )
        {
          v202 = 0;
          bFToL(v30, &v202, 0LL);
          v138 = *(_QWORD *)&v215.iUniq;
          v139 = v202 + 8;
          v202 = 0;
          v31 = v213 + ((*(_DWORD *)(*(_QWORD *)&v215.iUniq + 24LL) + v139) >> 4);
          v222.left = v31;
          bFToL(v140, &v202, v141);
          v32 = v213 + ((*(_DWORD *)(v138 + 24) + v202 + 8) >> 4);
          v222.right = v32;
          v202 = 0;
          bFToL(v142, &v202, v143);
          v144 = *(unsigned int *)(v138 + 28);
          v145 = *(_QWORD *)&v215.iUniq;
          v33 = (_DWORD)v205 + (((int)v144 + v202 + 8) >> 4);
          v222.top = v33;
          v202 = 0;
          bFToL(v144, &v202, v146);
          bottom = (_DWORD)v205 + ((*(_DWORD *)(v145 + 28) + v202 + 8) >> 4);
          v222.bottom = bottom;
        }
        else
        {
          top = v11->top;
          v238.y = v11->bottom;
          right = v11->right;
          v240 = top;
          v242 = top;
          v238.x = left;
          v239 = left;
          v241 = right;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v215, &v238, (struct _POINTFIX *)&v238, 3uLL);
          v149 = v238.x + v241 - v239;
          v150 = v238.y + v242 - v240;
          v243 = v149;
          v244 = v150;
          v151 = (v239 > v238.x) ^ (unsigned __int64)(v239 <= v241);
          v152 = *(&v238.x + 2 * v151);
          v153 = *(&v241 + 2 * v151);
          if ( v152 > v153 )
            v152 += 15;
          else
            v153 += 15;
          v31 = v202 + (v152 >> 4);
          v32 = v202 + (v153 >> 4);
          v222.right = v32;
          v222.left = v31;
          v154 = (v240 > v238.y) ^ (unsigned __int64)(v240 <= v242);
          v155 = *(&v238.y + 2 * v154);
          v156 = *(&v242 + 2 * v154);
          if ( v155 > v156 )
            v155 += 15;
          else
            v156 += 15;
          v33 = (_DWORD)v205 + (v155 >> 4);
          bottom = (_DWORD)v205 + (v156 >> 4);
          v222.top = v33;
          v222.bottom = bottom;
          if ( (v17 & 4) != 0 )
          {
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
            if ( v218 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v157, &v238, v158) )
            {
              v159 = *(_QWORD *)a1;
              *(_OWORD *)v224 = 0LL;
              HIDWORD(v224[0]) = 16 * (*(_DWORD *)(v159 + 1004) - (_DWORD)v205);
              HIDWORD(v224[1]) = 16 * (*(_DWORD *)(v159 + 1012) - (_DWORD)v205);
              v214 = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v213, (struct EPATHOBJ *)&ppo, 1u, (struct _RECTL *)v224);
              if ( v213 )
              {
                v160 = *(_QWORD *)a1;
                v212 = (unsigned __int64)a1;
                *(_QWORD *)(v160 + 1128) = v213;
                if ( (unsigned int)DC::bTightenRao(*(DC **)a1) )
                  LOBYTE(v17) = v17 & 0xFB;
              }
              if ( v214 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v213);
            }
            v161 = v17 & 4;
            if ( (v17 & 4) != 0 )
              v13 = 0;
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
            bottom = v222.bottom;
            v32 = v222.right;
            v33 = v222.top;
            v162 = 0;
            v31 = v222.left;
            if ( (v17 & 4) == 0 )
              v162 = v17;
            LOBYTE(v17) = v162;
            v163 = 0;
            if ( !v161 )
              v163 = a7;
            a7 = v163;
          }
          else if ( LODWORD(v224[0]) )
          {
            v13 = 130;
            v238.x += v209;
            v238.y += v211;
            v239 += v209;
            v241 += v209;
            v240 += v211;
            v244 = v211 + v150;
            v242 += v211;
            v243 = v209 + v149;
          }
        }
        v29 = 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 108LL) & 1) != 0 )
      {
        ++v31;
        ++v32;
        v222.left = v31;
        v222.right = v32;
      }
      if ( v31 > v32 )
      {
        v164 = v31;
        v222.left = v32;
        v31 = v32;
        v222.right = v164;
        v32 = v164;
      }
      if ( v33 > bottom )
      {
        v165 = v33;
        v222.top = bottom;
        v33 = bottom;
        v222.bottom = v165;
        bottom = v165;
      }
      if ( (v13 & 0xA) != 0 )
      {
        v35 = rclBkGround.left;
        v36 = rclBkGround.right;
        if ( rclBkGround.left != rclBkGround.right )
        {
          v166 = rclBkGround.top;
          if ( rclBkGround.top != rclBkGround.bottom )
          {
            if ( v31 < rclBkGround.left )
              v35 = v31;
            rclBkGround.left = v35;
            if ( v33 < rclBkGround.top )
              v166 = v33;
            rclBkGround.top = v166;
            if ( v32 > rclBkGround.right )
              v36 = v32;
            LODWORD(v27) = v209;
            rclBkGround.right = v36;
            if ( bottom > rclBkGround.bottom )
              rclBkGround.bottom = bottom;
LABEL_33:
            v37 = 0LL;
            v205 = 0LL;
            v203 = 0LL;
            v236 = 0;
            if ( !a7 )
            {
              p_rclBkGround = 0LL;
              goto LABEL_87;
            }
            v38 = *(struct DC **)a1;
            v39 = (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0;
            if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 )
            {
              v37 = (struct _RECTL *)*((_QWORD *)v38 + 62);
              SURFACE::bUnMap((SURFACE *)v37, 0LL, v38);
            }
            if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v203, a1, v39, (unsigned int)v201) )
              GreAcquireSemaphore(*(_QWORD *)(v203 + 504));
            if ( v37 )
              SURFACE::Map(v37, 0LL, *(_QWORD *)a1);
            if ( !v203 )
            {
              v13 = 0;
              p_rclBkGround = 0LL;
              v37 = 0LL;
              v29 = 1;
              goto LABEL_87;
            }
            v40 = (*(_DWORD *)(v203 + 88) & 2) == 0;
            v41 = *(_DWORD *)(v203 + 88) & 2;
            v208 = v41;
            v207 = !v40 && (*(_DWORD *)(v203 + 716) & 0x8000) == 0;
            v42 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
            v43 = *(_DWORD *)(*(_QWORD *)a1 + 1752LL) | *(_DWORD *)(v42 + 272) & 0x11F;
            if ( *(_BYTE *)(*(_QWORD *)a1 + 1752LL) & 1 | *(_BYTE *)(v42 + 272) & 1 )
            {
              v115 = *(_DWORD *)(v42 + 152);
              if ( (v115 & 0x200) == 0 )
              {
                v167 = v211;
                *(_DWORD *)(v42 + 152) = v115 | 0x100;
                v168 = *(_QWORD *)a1;
                v46 = v27 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL);
                LODWORD(v201) = v46;
                v48 = *(_DWORD *)(*(_QWORD *)(v168 + 976) + 12LL) + v167;
LABEL_47:
                v49 = *(_QWORD *)a1;
                p_rclBkGround = 0LL;
                HIDWORD(v201) = v48;
                ESTROBJ::vInit(
                  (ESTROBJ *)&pstro,
                  v223[0],
                  a7,
                  a1,
                  (struct RFONTOBJ *)&v203,
                  (struct EXFORMOBJ *)&v215,
                  v216[0],
                  (int)v210,
                  *(_DWORD *)(v49 + 1756),
                  *(_DWORD *)(*(_QWORD *)(v49 + 976) + 280LL),
                  *(_DWORD *)(*(_QWORD *)(v49 + 976) + 284LL),
                  *(_DWORD *)(*(_QWORD *)(v49 + 976) + 288LL),
                  v46,
                  v48,
                  v43,
                  0LL,
                  v215.pulXlate,
                  a11);
                if ( (v236 & 4) == 0 )
                {
                  v13 = 0;
LABEL_85:
                  v37 = v205;
                  v29 = 1;
                  if ( (v43 & 1) != 0 )
                  {
                    v120 = *(_QWORD *)a1;
                    v208 = v41;
                    *(_DWORD *)(*(_QWORD *)(v120 + 976) + 8LL) += v232;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 12LL) += v233;
                  }
LABEL_87:
                  v57 = *(_QWORD *)a1;
                  v58 = v13;
                  if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) == 0 )
                  {
                    if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == rclBkGround.bottom )
                      goto LABEL_157;
                    v59 = *(_DWORD *)(v57 + 36);
                    if ( (v59 & 0xE0) != 0 )
                    {
                      v60 = *(_DWORD *)(v57 + 40) & 1;
                      *(struct _RECTL *)v223 = rclBkGround;
                      v61 = *(_DWORD *)(v57 + 8 * v60 + 1016);
                      v62 = rclBkGround.left - v61;
                      LODWORD(v223[1]) = rclBkGround.right - v61;
                      v63 = *(_DWORD *)(v57 + 8 * v60 + 1020);
                      v64 = v57;
                      HIDWORD(v223[0]) = rclBkGround.top - v63;
                      HIDWORD(v223[1]) = rclBkGround.bottom - v63;
                      LODWORD(v223[0]) = v62;
                      if ( (v59 & 0x20) != 0 )
                      {
                        ERECTL::operator|=(v57 + 1064, v223, v57);
                        v64 = *(_QWORD *)a1;
                      }
                      v57 = v64;
                      if ( (*(_DWORD *)(v64 + 36) & 0x80u) != 0 )
                      {
                        ERECTL::operator|=(v64 + 1096, v223, v64);
                        v57 = *(_QWORD *)a1;
                      }
                    }
                    if ( v208 || (v17 & 4) != 0 )
                      v65 = v29;
                    else
                      v65 = 0;
                    v66 = *(_QWORD *)(v57 + 1168);
                    if ( v66 && (*(_DWORD *)(v57 + 40) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface((DC *)v57) )
                      goto LABEL_433;
                    if ( !*(_QWORD *)(v57 + 1152) )
                    {
                      v67 = DC::prgnVisSnap((DC *)v57);
LABEL_102:
                      v226 = 0LL;
                      v227 = 0;
                      v228 = v29;
                      v229 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)&v225, v67, (struct ERECTL *)&rclBkGround, v65);
                      rclBounds = v225.rclBounds;
                      v69 = _mm_cvtsi128_si32((__m128i)v225.rclBounds);
                      v70 = _mm_srli_si128((__m128i)v225.rclBounds, 8);
                      rclBkGround = v225.rclBounds;
                      v225.rclBounds.left = v69;
                      if ( v69 == _mm_cvtsi128_si32(v70)
                        || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                         _mm_srli_si128(
                                                                                           (__m128i)rclBounds,
                                                                                           12)) )
                      {
                        goto LABEL_157;
                      }
                      v71 = *(_DWORD **)a1;
                      v72 = *(_QWORD *)a1;
                      v73 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
                      if ( (v73 & 0xE0) != 0 )
                      {
                        *(RECTL *)v223 = rclBounds;
                        v74 = v71[10] & 1;
                        v75 = v69 - v71[2 * v74 + 254];
                        LODWORD(v223[0]) = v75;
                        v76 = rclBounds.right - v71[2 * v74 + 254];
                        LODWORD(v223[1]) = v76;
                        v77 = rclBounds.top - v71[2 * v74 + 255];
                        HIDWORD(v223[0]) = v77;
                        HIDWORD(v223[1]) = rclBounds.bottom - v71[2 * v74 + 255];
                        if ( (v73 & 0x40) != 0 )
                        {
                          v78 = v71[270];
                          if ( v78 == v71[272] || v71[271] == v71[273] )
                          {
                            *(_OWORD *)(v71 + 270) = *(_OWORD *)v223;
                          }
                          else
                          {
                            if ( v75 < v78 )
                            {
                              v71[270] = v75;
                              v76 = (int)v223[1];
                              v77 = HIDWORD(v223[0]);
                            }
                            if ( v77 < v71[271] )
                            {
                              v71[271] = v77;
                              v76 = (int)v223[1];
                            }
                            if ( v76 > v71[272] )
                              v71[272] = v76;
                            if ( SHIDWORD(v223[1]) > v71[273] )
                              v71[273] = HIDWORD(v223[1]);
                          }
                          v72 = *(_QWORD *)a1;
                          v213 = *(_QWORD *)(*(_QWORD *)a1 + 1184LL);
                          if ( v213 )
                          {
                            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v215.pulXlate);
                            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v215.pulXlate);
                            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v216);
                            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v216);
                            if ( v215.pulXlate )
                            {
                              if ( v216[0] )
                              {
                                RGNOBJ::vSet((RGNOBJ *)v216, (struct _RECTL *)v223);
                                if ( RGNOBJ::bMerge(
                                       (RGNOBJ *)&v215.pulXlate,
                                       (struct RGNOBJ *)&v213,
                                       (struct RGNOBJ *)v216,
                                       0xEu) )
                                {
                                  RGNOBJ::vSwap((RGNOBJ *)&v213, (struct RGNOBJ *)&v215.pulXlate);
                                  *(_QWORD *)(*(_QWORD *)a1 + 1184LL) = v213;
                                }
                              }
                            }
                            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v216);
                            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v215.pulXlate);
                            v72 = *(_QWORD *)a1;
                          }
                        }
                      }
                      v79 = *(_QWORD *)(v72 + 496);
                      if ( !v79
                        || ((*(_DWORD *)(v79 + 116) & 8) != 0 || *(_QWORD *)(v79 + 224))
                        && (*(_WORD *)(v79 + 102) & 0x200) != 0 )
                      {
LABEL_157:
                        if ( (v236 & 0x801) != 0 )
                        {
                          if ( (v236 & 1) != 0 )
                            FreeTmpBuffer(v231);
                          if ( (v236 & 0x800) != 0 )
                            Win32FreePool(v237);
                        }
                        if ( v203 )
                        {
                          if ( (*(_DWORD *)(v203 + 712) & 0x81) != 0 )
                            RFONTOBJ::dtorHelper((RFONTOBJ *)&v203);
                          v105 = *(_QWORD *)(v203 + 616);
                          if ( v105 )
                          {
                            Win32FreePool(v105);
                            *(_QWORD *)(v203 + 624) = 0LL;
                            *(_QWORD *)(v203 + 616) = 0LL;
                          }
                          EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v203 + 504));
                          GreReleaseSemaphoreInternal(*(_QWORD *)(v203 + 504));
                        }
                        if ( v212 )
                          TXTCLEANUP::vMopUp((TXTCLEANUP *)&v212);
                        return v13 != 0;
                      }
                      v80 = *(_DWORD *)(v79 + 112);
                      if ( (v80 & 0x800) != 0 )
                      {
                        v81 = UserSurfaceAccessCheck(*(_QWORD *)(v79 + 648));
                      }
                      else
                      {
                        if ( (v80 & 0x10000000) == 0 )
                          goto LABEL_123;
                        v81 = UserScreenAccessCheck();
                      }
                      if ( !v81 )
                        goto LABEL_157;
LABEL_123:
                      v82 = *(_QWORD *)a1;
                      v83 = (struct _POINTL *)v82;
                      v84 = *(_QWORD *)(v79 + 128);
                      v206 = *(_QWORD *)(v79 + 48);
                      v85 = *(_DWORD *)(v82 + 72);
                      v86 = v82 + 1472;
                      v87 = *(_QWORD *)(v82 + 88);
                      v88 = (struct _BRUSHOBJ *)(v82 + 1608);
                      v201 = (struct _BRUSHOBJ *)(v82 + 1472);
                      v89 = 0;
                      v204 = (struct _BRUSHOBJ *)(v82 + 1608);
                      if ( (v85 & 0x10000000) != 0 )
                      {
                        v89 = !v207;
                        *(_DWORD *)(*(_QWORD *)(v82 + 976) + 152LL) |= 4u;
                        --*(_DWORD *)(v82 + 1596);
                        v82 = *(_QWORD *)a1;
                        v83 = *(struct _POINTL **)a1;
                      }
                      v90 = *(_QWORD *)(v82 + 976);
                      if ( ((*(_BYTE *)(v82 + 316) | *(_BYTE *)(v90 + 152)) & 0xC) != 0 )
                      {
                        if ( ((*(_BYTE *)(v82 + 316) | *(_BYTE *)(v90 + 152)) & 4) != 0 )
                        {
                          EBRUSHOBJ::vInitBrush(v86, v82, gpbrText, v87, v84, v79, v89);
                          v82 = *(_QWORD *)a1;
                          v88 = v204;
                        }
                        if ( ((*(_BYTE *)(v82 + 316) | *(_BYTE *)(*(_QWORD *)(v82 + 976) + 152LL)) & 8) != 0 )
                        {
                          EBRUSHOBJ::vInitBrush(v88, v82, gpbrBackground, v87, v84, v79, (v85 >> 15) & 1);
                          v82 = *(_QWORD *)a1;
                        }
                        *(_DWORD *)(*(_QWORD *)(v82 + 976) + 152LL) &= 0xFFFFFFF3;
                        *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= 0xFFFFFFF3;
                        v83 = *(struct _POINTL **)a1;
                      }
                      v91 = v83 + 149;
                      v224[0] = v83 + 149;
                      if ( (v13 & 0x1A) != 0 )
                      {
                        if ( (v13 & 8) == 0 || ERECTL::bEmpty((ERECTL *)&v222) )
                        {
                          v92 = rclBkGround.bottom;
                          LODWORD(v93) = rclBkGround.right;
                          v94 = (unsigned int)rclBkGround.top;
                          v95 = rclBkGround.left;
                        }
                        else
                        {
                          si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                          v110 = v222.bottom;
                          v111 = v222.left;
                          v112 = v222.right;
                          v113 = v222.top;
                          v95 = _mm_cvtsi128_si32(si128);
                          v93 = (struct _SURFOBJ *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
                          v94 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
                          if ( v95 > v222.left )
                            v111 = v95;
                          v92 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
                          rclBkGround.left = v95;
                          if ( (int)v93 < v222.right )
                            v112 = (int)v93;
                          v225.rclBounds.left = v111;
                          rclBkGround.right = (int)v93;
                          v225.rclBounds.right = v112;
                          if ( (int)v94 > v222.top )
                            v113 = v94;
                          rclBkGround.top = v94;
                          v225.rclBounds.top = v113;
                          rclBkGround.bottom = v92;
                          if ( v92 < v222.bottom )
                            v110 = v92;
                          LODWORD(v210) = v110;
                          v225.rclBounds.bottom = v110;
                          v114 = v204;
                          if ( v111 < v112 && v113 < (int)v210 )
                          {
                            ++*(_DWORD *)(v79 + 92);
                            TextOutBitBlt(
                              (struct SURFACE *)v79,
                              (struct RFONTOBJ *)&v203,
                              v93,
                              (struct _SURFOBJ *)v94,
                              &v225,
                              v192,
                              &v225.rclBounds,
                              v193,
                              v198,
                              v114,
                              v91,
                              v200);
                            v92 = rclBkGround.bottom;
                            LODWORD(v93) = rclBkGround.right;
                            v94 = (unsigned int)rclBkGround.top;
                            v95 = rclBkGround.left;
                          }
                          v225.rclBounds = rclBkGround;
                        }
                        if ( (v13 & 0x12) != 0 )
                        {
                          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                          if ( v218 )
                          {
                            if ( (v13 & 2) == 0
                              || (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v174, &v238, v175) )
                            {
                              if ( (v13 & 0x10) == 0
                                || (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v174, &v245, v175) )
                              {
                                v96 = 0LL;
                                if ( !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                      &ppo,
                                                      a1,
                                                      (struct RFONTOBJ *)&v203,
                                                      (struct PDEVOBJ *)&v206,
                                                      (struct SURFACE *)v79,
                                                      &v225,
                                                      v204,
                                                      v91,
                                                      (unsigned int)v198,
                                                      v199) )
                                  v13 = 0;
                              }
                              else
                              {
                                v96 = 0LL;
                                v13 = 0;
                              }
                            }
                            else
                            {
                              v96 = 0LL;
                              v13 = 0;
                            }
                          }
                          else
                          {
                            v96 = 0LL;
                          }
                          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                          v92 = rclBkGround.bottom;
                          LODWORD(v93) = rclBkGround.right;
                          v94 = (unsigned int)rclBkGround.top;
                          v95 = rclBkGround.left;
LABEL_129:
                          if ( (v13 & 1) == 0 )
                          {
LABEL_156:
                            if ( (v13 & 4) != 0 )
                            {
                              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v219);
                              if ( !v220
                                || !(unsigned int)ESTROBJ::bExtraRectsToPath(
                                                    (ESTROBJ *)&pstro,
                                                    (struct EPATHOBJ *)&v219)
                                || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                    &v219,
                                                    a1,
                                                    (struct RFONTOBJ *)&v203,
                                                    (struct PDEVOBJ *)&v206,
                                                    (struct SURFACE *)v79,
                                                    &v225,
                                                    v201,
                                                    v91,
                                                    (unsigned int)v198,
                                                    v199) )
                              {
                                v13 = 0;
                              }
                              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v219);
                            }
                            goto LABEL_157;
                          }
                          if ( v208 )
                          {
                            LOWORD(v85) = -257;
                            v176 = 64;
                            if ( (*(_DWORD *)(v203 + 716) & 0x8000) == 0 )
                              v176 = 32;
                            v13 |= v176;
                          }
                          if ( p_rclBkGround && (v85 & 0x100) == 0 )
                          {
                            v177 = p_rclBkGround->left;
                            v178 = p_rclBkGround->right;
                            v97 = v204;
                            if ( v95 > p_rclBkGround->left )
                              v177 = v95;
                            v179 = p_rclBkGround->top;
                            v225.rclBounds.left = v177;
                            if ( (int)v93 < v178 )
                              v178 = (int)v93;
                            v180 = (unsigned int)p_rclBkGround->bottom;
                            v225.rclBounds.right = v178;
                            if ( (int)v94 > v179 )
                              v179 = v94;
                            v225.rclBounds.top = v179;
                            if ( v92 < (int)v180 )
                              v180 = (unsigned int)v92;
                            v225.rclBounds.bottom = v180;
                            if ( v177 < v178 && v179 < (int)v180 )
                            {
                              ++*(_DWORD *)(v79 + 92);
                              TextOutBitBlt(
                                (struct SURFACE *)v79,
                                (struct RFONTOBJ *)&v203,
                                (struct _SURFOBJ *)v180,
                                (struct _SURFOBJ *)v94,
                                &v225,
                                v192,
                                &v225.rclBounds,
                                v193,
                                v198,
                                v97,
                                v91,
                                v200);
                            }
                            v225.rclBounds = rclBkGround;
                            p_rclBkGround = 0LL;
                          }
                          else
                          {
                            v97 = v204;
                          }
                          if ( v205 && *(_DWORD *)(v206 + 2108) != 4 )
                          {
                            v96 = v205;
                            v205 = 0LL;
                          }
                          if ( (v13 & 0x20) == 0 )
                          {
                            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                            if ( ThreadWin32Thread && (v99 = *ThreadWin32Thread) != 0 )
                              v100 = *(_QWORD *)(v99 + 304);
                            else
                              v100 = *(_QWORD *)(v79 + 104);
                            if ( v100 )
                            {
                              *(_QWORD *)(v79 + 104) = 0LL;
                              v183 = W32GetThreadWin32Thread(KeGetCurrentThread());
                              if ( v183 )
                                *(_QWORD *)(v183 + 304) = 0LL;
                            }
                            if ( (*(_DWORD *)(v79 + 112) & 8) != 0 )
                              v101 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v79 + 48) + 2848LL);
                            else
                              v101 = EngTextOut;
                            if ( (char *)v101 == (char *)SpTextOut || (char *)v101 == (char *)BmpDevTextOut )
                            {
                              if ( (*(_DWORD *)(v203 + 12) & 0x10010000) != 0 )
                              {
                                *(_QWORD *)(v79 + 104) = a1;
                                v121 = W32GetThreadWin32Thread(KeGetCurrentThread());
                                if ( v121 )
                                  *(_QWORD *)(v121 + 304) = a1;
                              }
                            }
                            else
                            {
                              v107 = *(_DWORD *)(v203 + 12);
                              if ( (v107 & 0x10000) == 0 )
                                goto LABEL_144;
                              v108 = *(_QWORD *)a1;
                              if ( (v107 & 0x10000000) != 0 )
                              {
                                if ( (*(_DWORD *)(v108 + 76) & 0x4000) != 0 )
                                  goto LABEL_144;
                              }
                              else if ( (*(_DWORD *)(v108 + 72) & 0x1000000) != 0 )
                              {
                                goto LABEL_144;
                              }
                              if ( v101 != EngTextOut )
                              {
                                *(_QWORD *)(v79 + 104) = a1;
                                v184 = W32GetThreadWin32Thread(KeGetCurrentThread());
                                if ( v184 )
                                  *(_QWORD *)(v184 + 304) = a1;
                              }
                              v101 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                            }
LABEL_144:
                            if ( (v13 & 0x40) != 0 )
                            {
                              if ( (v236 & 0x1400) != 0 )
                              {
                                v91 = v224[0];
                                v195 = (struct _POINTL *)v97;
                                v102 = v201;
                                v185 = bProxyDrvTextOut(
                                         a1,
                                         (struct SURFACE *)v79,
                                         (struct ESTROBJ *)&pstro,
                                         &v225,
                                         0LL,
                                         0LL,
                                         v201,
                                         (struct _BRUSHOBJ *)v195,
                                         v224[0],
                                         (struct RFONTOBJ *)&v203,
                                         (struct PDEVOBJ *)&v206,
                                         *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                         &rclBkGround);
                                goto LABEL_410;
                              }
                              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                              if ( v218 )
                              {
                                if ( (v236 & 0x1400) != 0 )
                                  v187 = ESTROBJ::bLinkedTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo, v186);
                                else
                                  v187 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&ppo);
                                v91 = v224[0];
                                v102 = v201;
                                if ( v187
                                  && (ppo.cCurves <= 1
                                   || (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                      &ppo,
                                                      a1,
                                                      (struct RFONTOBJ *)&v203,
                                                      (struct PDEVOBJ *)&v206,
                                                      (struct SURFACE *)v79,
                                                      &v225,
                                                      v201,
                                                      v224[0],
                                                      (unsigned int)v198,
                                                      v199)) )
                                {
                                  goto LABEL_408;
                                }
                              }
                              else
                              {
                                v91 = v224[0];
                                v102 = v201;
                              }
                              v13 = 0;
LABEL_408:
                              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
LABEL_152:
                              *(_QWORD *)(v79 + 104) = 0LL;
                              v103 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                              if ( v103 )
                              {
                                v104 = *v103;
                                if ( v104 )
                                  *(_QWORD *)(v104 + 304) = 0LL;
                              }
                              goto LABEL_155;
                            }
                            ++*(_DWORD *)(v79 + 92);
                            if ( (v13 & 4) == 0 )
                            {
                              if ( (v236 & 0x1400) == 0 )
                              {
                                if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8080) == 0x80
                                  && !*(_DWORD *)(v203 + 92) )
                                {
                                  v223[0] = (unsigned __int16 *)ghsemPrintKView;
                                  GreAcquireSemaphore(ghsemPrintKView);
                                  for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                                  {
                                    if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v203 + 128) + 80LL) )
                                      ++*(_DWORD *)(i + 12);
                                  }
                                  SEMOBJ::vUnlock((SEMOBJ *)v223);
                                }
                                v199 = 3341;
                                v198 = v224[0];
                                v193 = (struct _POINTL *)v97;
                                v102 = v201;
                                v192 = (struct _XLATEOBJ *)p_rclBkGround;
                                if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v101)(
                                        v79 + 24,
                                        &pstro,
                                        v203,
                                        &v225,
                                        v205) )
                                  v13 = 0;
                                if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8080) == 0x80
                                  && !*(_DWORD *)(v203 + 92) )
                                {
                                  v223[0] = (unsigned __int16 *)ghsemPrintKView;
                                  GreAcquireSemaphore(ghsemPrintKView);
                                  for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                                  {
                                    if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v203 + 128) + 80LL) )
                                    {
                                      v191 = *(_DWORD *)(j + 12);
                                      if ( v191 )
                                        *(_DWORD *)(j + 12) = v191 - 1;
                                    }
                                  }
                                  SEMOBJ::vUnlock((SEMOBJ *)v223);
                                }
                                v91 = v224[0];
                                goto LABEL_152;
                              }
                              v91 = v224[0];
                              v197 = (struct _POINTL *)v97;
                              v102 = v201;
                              v185 = bProxyDrvTextOut(
                                       a1,
                                       (struct SURFACE *)v79,
                                       (struct ESTROBJ *)&pstro,
                                       &v225,
                                       v205,
                                       p_rclBkGround,
                                       v201,
                                       (struct _BRUSHOBJ *)v197,
                                       v224[0],
                                       (struct RFONTOBJ *)&v203,
                                       (struct PDEVOBJ *)&v206,
                                       0,
                                       &rclBkGround);
LABEL_410:
                              if ( !v185 )
                                v13 = 0;
                              goto LABEL_152;
                            }
                            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                            if ( v218
                              && (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo) )
                            {
                              if ( (v236 & 0x1400) != 0 )
                              {
                                v91 = v224[0];
                                v196 = (struct _POINTL *)v97;
                                v102 = v201;
                                if ( (unsigned int)bProxyDrvTextOut(
                                                     a1,
                                                     (struct SURFACE *)v79,
                                                     (struct ESTROBJ *)&pstro,
                                                     &v225,
                                                     v205,
                                                     p_rclBkGround,
                                                     v201,
                                                     (struct _BRUSHOBJ *)v196,
                                                     v224[0],
                                                     (struct RFONTOBJ *)&v203,
                                                     0LL,
                                                     0,
                                                     &rclBkGround) )
                                {
LABEL_403:
                                  if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                       &ppo,
                                                       a1,
                                                       (struct RFONTOBJ *)&v203,
                                                       (struct PDEVOBJ *)&v206,
                                                       (struct SURFACE *)v79,
                                                       &v225,
                                                       v102,
                                                       v91,
                                                       (unsigned int)v198,
                                                       v199) )
                                    goto LABEL_407;
                                }
                              }
                              else
                              {
                                v199 = 3341;
                                v198 = v224[0];
                                v193 = (struct _POINTL *)v97;
                                v102 = v201;
                                v192 = (struct _XLATEOBJ *)p_rclBkGround;
                                v188 = ((__int64 (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v101)(
                                         v79 + 24,
                                         &pstro,
                                         v203,
                                         &v225,
                                         v205);
                                v91 = v224[0];
                                if ( v188 )
                                  goto LABEL_403;
                              }
                            }
                            else
                            {
                              v102 = v201;
                              v91 = v224[0];
                            }
                            v13 = 0;
LABEL_407:
                            v13 &= ~4u;
                            goto LABEL_408;
                          }
                          if ( (v236 & 0x1400) != 0 )
                          {
                            v194 = (struct _POINTL *)v97;
                            v102 = v201;
                            if ( !(unsigned int)bProxyDrvTextOut(
                                                  a1,
                                                  (struct SURFACE *)v79,
                                                  (struct ESTROBJ *)&pstro,
                                                  &v225,
                                                  0LL,
                                                  0LL,
                                                  v201,
                                                  (struct _BRUSHOBJ *)v194,
                                                  v91,
                                                  (struct RFONTOBJ *)&v203,
                                                  (struct PDEVOBJ *)&v206,
                                                  *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                                  &rclBkGround) )
                              v13 = 0;
                            goto LABEL_155;
                          }
                          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                          if ( v218 )
                          {
                            if ( (v236 & 0x1400) != 0 )
                              v182 = ESTROBJ::bLinkedTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo, v181);
                            else
                              v182 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&ppo);
                            v102 = v201;
                            if ( v182
                              && (unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                                 &ppo,
                                                 a1,
                                                 (struct RFONTOBJ *)&v203,
                                                 (struct PDEVOBJ *)&v206,
                                                 (struct SURFACE *)v79,
                                                 &v225,
                                                 v201,
                                                 v91,
                                                 (unsigned int)v198) )
                            {
                              goto LABEL_377;
                            }
                          }
                          else
                          {
                            v102 = v201;
                          }
                          v13 = 0;
LABEL_377:
                          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
LABEL_155:
                          if ( v96 )
                          {
                            v127 = v225.rclBounds;
                            ++*(_DWORD *)(v79 + 92);
                            p_top = &v96->top;
                            *(RECTL *)v223 = v127;
                            while ( !ERECTL::bEmpty((ERECTL *)(p_top - 1)) )
                            {
                              v133 = *v130;
                              v134 = p_top[1];
                              if ( (int)v132 > v133 )
                                v133 = (int)v132;
                              v225.rclBounds.left = v133;
                              if ( (int)v131 < v134 )
                                v134 = (int)v131;
                              v225.rclBounds.right = v134;
                              if ( v133 < v134 )
                              {
                                v135 = *p_top;
                                v136 = p_top[2];
                                if ( v129 > *p_top )
                                  v135 = v129;
                                v225.rclBounds.top = v135;
                                if ( v127.bottom < v136 )
                                  v136 = v127.bottom;
                                v225.rclBounds.bottom = v136;
                                if ( v135 < v136 )
                                  TextOutBitBlt(
                                    (struct SURFACE *)v79,
                                    (struct RFONTOBJ *)&v203,
                                    v131,
                                    v132,
                                    &v225,
                                    v192,
                                    &v225.rclBounds,
                                    v193,
                                    v198,
                                    v102,
                                    v91,
                                    v200);
                              }
                              p_top += 4;
                            }
                            v225.rclBounds = v127;
                          }
                          goto LABEL_156;
                        }
                      }
                      else
                      {
                        v92 = rclBkGround.bottom;
                        LODWORD(v93) = rclBkGround.right;
                        v94 = (unsigned int)rclBkGround.top;
                        v95 = rclBkGround.left;
                      }
                      v96 = 0LL;
                      goto LABEL_129;
                    }
                    if ( v66 )
                    {
LABEL_433:
                      if ( (*(_DWORD *)(v57 + 40) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface((DC *)v57) )
                        goto LABEL_102;
                    }
                    v67 = *(struct REGION **)(v57 + 1152);
                    goto LABEL_102;
                  }
                  v13 = 0;
                  if ( (v17 & 4) == 0 )
                    v13 = v58;
                  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, a1);
                  if ( !v218 )
                  {
LABEL_324:
                    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
                    goto LABEL_157;
                  }
                  if ( ((v13 & 8) == 0 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)&ppo, &v222))
                    && ((v13 & 2) == 0 || (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v170, &v238, v172))
                    && ((v13 & 0x10) == 0 || (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v170, &v245, v172)) )
                  {
                    if ( (v13 & 1) == 0
                      || p_rclBkGround && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)&ppo, p_rclBkGround) )
                    {
                      goto LABEL_321;
                    }
                    if ( (v236 & 0x1400) != 0 )
                      v173 = ESTROBJ::bLinkedTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo, v171);
                    else
                      v173 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&ppo);
                    if ( v173 )
                    {
                      if ( v37 )
                      {
                        while ( !ERECTL::bEmpty((ERECTL *)v37) )
                        {
                          if ( !(unsigned int)bAddRectToPath((struct EPATHOBJ *)&ppo, v37) )
                            goto LABEL_323;
                          ++v37;
                        }
                      }
LABEL_321:
                      if ( (v13 & 4) == 0
                        || (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo) )
                      {
                        goto LABEL_324;
                      }
                    }
                  }
LABEL_323:
                  v13 = 0;
                  goto LABEL_324;
                }
                v51 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v245, &pstro.rclBkGround);
                v52 = v51;
                v53 = pstro.rclBkGround.right;
                v54 = pstro.rclBkGround.left;
                if ( (*(_DWORD *)(v203 + 12) & 0x10000000) != 0 )
                {
                  v54 = pstro.rclBkGround.left - 1;
                  v53 = pstro.rclBkGround.right + 1;
                  --pstro.rclBkGround.left;
                  ++pstro.rclBkGround.right;
                }
                if ( (v236 & 0x1400) != 0 )
                {
                  ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v245, v51);
                  v53 = pstro.rclBkGround.right;
                  v54 = pstro.rclBkGround.left;
                }
                if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == rclBkGround.bottom )
                {
                  rclBkGround = pstro.rclBkGround;
                }
                else
                {
                  if ( v54 < rclBkGround.left )
                    rclBkGround.left = v54;
                  if ( pstro.rclBkGround.top < rclBkGround.top )
                    rclBkGround.top = pstro.rclBkGround.top;
                  if ( v53 > rclBkGround.right )
                    rclBkGround.right = v53;
                  if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
                    rclBkGround.bottom = pstro.rclBkGround.bottom;
                }
                if ( a9 == 2 )
                {
                  if ( v52 )
                    v13 |= 0x10u;
                  else
                    p_rclBkGround = &pstro.rclBkGround;
                }
                v55 = v54 >= v53 || pstro.rclBkGround.top >= pstro.rclBkGround.bottom;
                v56 = v222.left;
                if ( (v13 & 8) == 0
                  || v222.left > v54
                  || v222.right < v53
                  || v222.bottom < pstro.rclBkGround.bottom
                  || v222.top > pstro.rclBkGround.top
                  || v55 )
                {
                  if ( !p_rclBkGround )
                  {
                    if ( v55 )
                      goto LABEL_78;
                    goto LABEL_77;
                  }
                }
                else
                {
                  p_rclBkGround = &v222;
                  v13 &= ~8u;
                }
                if ( p_rclBkGround->left >= p_rclBkGround->right || p_rclBkGround->top >= p_rclBkGround->bottom )
                  goto LABEL_78;
LABEL_77:
                v13 |= 1u;
LABEL_78:
                if ( (v43 & 0xA0) != 0 )
                {
                  if ( v234 )
                  {
                    v205 = (struct _RECTL *)v235;
                    for ( k = (ERECTL *)v235; !ERECTL::bEmpty(k); k = (ERECTL *)(v126 + 16) )
                      ERECTL::operator+=(&rclBkGround, v125);
                  }
                  else
                  {
                    v205 = 0LL;
                    v13 |= 4u;
                  }
                }
                if ( (v17 & 4) != 0 )
                {
                  if ( v56 > rclBkGround.left
                    || v222.right < rclBkGround.right
                    || v222.top > rclBkGround.top
                    || v222.bottom < rclBkGround.bottom )
                  {
                    ERECTL::operator*=(&rclBkGround.left, &v222.left);
                  }
                  else
                  {
                    LOBYTE(v17) = -5;
                  }
                }
                goto LABEL_85;
              }
              *(_DWORD *)(v42 + 152) = v115 & 0xFFFFFDFF;
              v116 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
              *(_DWORD *)(v116 + 152) |= 0x100u;
              v117 = *(_QWORD *)&v215.iUniq;
              v118 = *(_QWORD *)a1;
              v119 = *(_DWORD *)(*(_QWORD *)&v215.iUniq + 32LL);
              if ( (v119 & 2) != 0 )
              {
                LODWORD(v201) = *(_DWORD *)(*(_QWORD *)&v215.iUniq + 24LL)
                              + 16 * *(_DWORD *)(*(_QWORD *)(v118 + 976) + 216LL);
                HIDWORD(v201) = *(_DWORD *)(*(_QWORD *)&v215.iUniq + 28LL)
                              + 16 * *(_DWORD *)(*(_QWORD *)(v118 + 976) + 220LL);
              }
              else if ( (v119 & 1) != 0 )
              {
                LODWORD(v204) = 0;
                bFToL(v116, &v204, 0LL);
                LODWORD(v201) = *(_DWORD *)(v117 + 24) + (_DWORD)v204;
                LODWORD(v204) = 0;
                bFToL((unsigned int)v201, &v204, v169);
                HIDWORD(v201) = *(_DWORD *)(v117 + 28) + (_DWORD)v204;
              }
              else
              {
                EXFORMOBJ::bXform(
                  (EXFORMOBJ *)&v215,
                  (struct _POINTL *)(*(_QWORD *)(v118 + 976) + 216LL),
                  (struct _POINTFIX *)&v201,
                  1uLL);
                v118 = *(_QWORD *)a1;
              }
              v41 = v208;
              *(_QWORD *)(*(_QWORD *)(v118 + 976) + 8LL) = v201;
              v46 = v27 + (_DWORD)v201;
            }
            else
            {
              v44 = *(_QWORD *)&v215.iUniq;
              v45 = *(_DWORD *)(*(_QWORD *)&v215.iUniq + 32LL);
              if ( (v45 & 2) != 0 )
              {
                v46 = v209 + 16 * v206 + *(_DWORD *)(*(_QWORD *)&v215.iUniq + 24LL);
                LODWORD(v201) = v46;
                v47 = 16 * (_DWORD)v204 + *(_DWORD *)(*(_QWORD *)&v215.iUniq + 28LL);
LABEL_46:
                v48 = v211 + v47;
                goto LABEL_47;
              }
              if ( (v45 & 1) != 0 )
              {
                v202 = 0;
                bFToL(v42, &v202, 0LL);
                v46 = v209 + v202 + *(_DWORD *)(v44 + 24);
                LODWORD(v201) = v46;
                LODWORD(v206) = 0;
                bFToL(v122, &v206, v123);
                v47 = v206 + *(_DWORD *)(v44 + 28);
                goto LABEL_46;
              }
              v201 = (struct _BRUSHOBJ *)__PAIR64__((unsigned int)v204, v206);
              EXFORMOBJ::bXform((EXFORMOBJ *)&v215, (struct _POINTL *)&v201, (struct _POINTFIX *)&v201, 1uLL);
              v46 = v209 + (_DWORD)v201;
            }
            v47 = HIDWORD(v201);
            LODWORD(v201) = v46;
            goto LABEL_46;
          }
        }
        rclBkGround = v222;
      }
      LODWORD(v27) = v209;
      goto LABEL_33;
    }
  }
  return 0LL;
}
