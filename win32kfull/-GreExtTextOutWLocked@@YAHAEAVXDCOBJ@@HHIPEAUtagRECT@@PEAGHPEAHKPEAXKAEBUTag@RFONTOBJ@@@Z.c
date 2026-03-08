/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0
 * Callers:
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C004D014 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C0081D78 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1C00A824C (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     ?GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D9630 (-GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00553C0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0059100 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C924 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C00ACBE4 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00E6260 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C028756C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0288C60 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0288DC0 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C02A2214 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C02A2D18 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C02B70B0 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02C238C (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02C24F8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02C27CC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02D9820 (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C02D988C (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1C02D9A38 (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02DBA10 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02DBEC4 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02DC0BC (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall GreExtTextOutWLocked(
        struct XDCOBJ *a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8,
        unsigned int a9,
        void *a10,
        unsigned int a11,
        const struct RFONTOBJ::Tag *a12)
{
  unsigned __int64 v12; // r11
  struct tagRECT *v13; // rbx
  struct XDCOBJ *v14; // r15
  LONG v16; // edi
  int v17; // esi
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r14d
  DC *v21; // rdx
  int v22; // eax
  int v23; // r12d
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r10
  unsigned int v26; // r9d
  __int64 v27; // rax
  int v28; // r12d
  __int64 v29; // rax
  _DWORD *v30; // rcx
  int v31; // eax
  int v32; // eax
  LONG v33; // r8d
  LONG v34; // r9d
  int v35; // eax
  int v36; // edx
  int v37; // edx
  LONG v38; // ebx
  LONG bottom; // edx
  LONG v40; // ecx
  signed int v41; // eax
  unsigned __int64 v42; // rdx
  int v43; // r9d
  LONG v44; // r11d
  LONG v45; // r10d
  struct DC *v46; // r8
  BOOL v47; // ebx
  bool v48; // zf
  __int64 v49; // rcx
  int v50; // ebx
  int v51; // eax
  unsigned int v52; // r13d
  int v53; // r8d
  int v54; // eax
  int v55; // r12d
  int v56; // r8d
  int v57; // ecx
  struct _RECTL *p_rclBkGround; // r12
  BOOL v59; // edi
  struct _RECTL *v60; // rdi
  int v61; // r13d
  DC *v62; // r8
  int v63; // ecx
  unsigned int v64; // r14d
  __int64 v65; // r11
  int v66; // r10d
  struct REGION *v67; // rdx
  RECTL rclBounds; // xmm2
  __m128i v69; // xmm0
  __int64 v70; // rcx
  __int64 v71; // r14
  int v72; // eax
  int v73; // eax
  struct _SURFOBJ *v74; // r9
  __int64 v75; // rbx
  int v76; // r10d
  int v77; // r11d
  DC *v78; // rax
  int v79; // ecx
  __int64 v80; // rdi
  Gre::Base *v81; // rcx
  struct _POINTL *v82; // rdi
  LONG v83; // eax
  LONG v84; // ebx
  int v85; // ecx
  __m128i si128; // xmm1
  int v87; // r13d
  __m128i v88; // xmm0
  int v89; // r13d
  __m128i v90; // xmm0
  __m128i v91; // xmm1
  int v92; // r12d
  int v93; // r13d
  int v94; // ebx
  __int64 v95; // rax
  BOOL (__stdcall *v96)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  struct _RECTL *v97; // rbx
  __int16 v98; // dx
  struct _BRUSHOBJ *v99; // r13
  __int64 *ThreadWin32Thread; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  BOOL (__stdcall *v103)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // r13
  int v104; // ecx
  DC *v105; // rax
  __int64 v106; // rcx
  int v107; // eax
  _DWORD *v108; // r12
  __int64 v109; // rcx
  int v110; // eax
  __int64 v111; // rbx
  __int64 *v112; // rax
  void *v113; // rcx
  struct Gre::Base::SESSION_GLOBALS *v115; // rax
  DC *v116; // rdx
  unsigned __int16 *v117; // r11
  __int64 v118; // rax
  int v119; // eax
  _DWORD *v120; // rdi
  DC *v121; // r13
  int v122; // eax
  unsigned int v123; // r8d
  DC *v124; // rax
  __int64 v125; // rax
  LONG left; // edx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // rcx
  LONG v130; // ecx
  LONG v131; // eax
  int v132; // r11d
  unsigned __int64 v133; // rcx
  int v134; // r8d
  int v135; // r9d
  unsigned __int64 v136; // rcx
  int v137; // ebx
  int v138; // edx
  struct EXFORMOBJ *v139; // rdx
  int v140; // r9d
  DC *v141; // rcx
  DC *v142; // rax
  char v143; // bl
  int v144; // edi
  int v145; // eax
  int v146; // r8d
  DC *v147; // rdx
  struct _POINTL *v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r8
  __int64 v151; // rcx
  ERECTL *i; // rcx
  struct _RECTL *v153; // rcx
  LONG v154; // eax
  LONG v155; // eax
  LONG v156; // eax
  struct EXFORMOBJ *v157; // rdx
  struct XDCOBJ *v158; // r8
  int v159; // r9d
  int v160; // eax
  __int64 v161; // rax
  int v162; // eax
  int *v163; // rbx
  struct EXFORMOBJ *v164; // rdx
  int v165; // r9d
  int v166; // eax
  LONG v167; // ecx
  LONG v168; // eax
  int v169; // edx
  unsigned __int64 v170; // r8
  struct XDCOBJ *v171; // r8
  int v172; // eax
  __int64 v173; // rax
  __int64 v174; // rax
  struct XDCOBJ *v175; // r8
  int v176; // eax
  int v177; // eax
  __int64 v178; // rbx
  __int64 j; // rdx
  __int64 v180; // rbx
  __int64 k; // rdx
  int v182; // eax
  struct _BRUSHOBJ *v183; // r15
  LONG *p_top; // rbx
  RECTL v185; // xmm6
  LONG *v186; // rcx
  struct _SURFOBJ *v187; // r9
  LONG v188; // ecx
  LONG v189; // eax
  LONG v190; // ecx
  LONG v191; // eax
  struct _XLATEOBJ *p_rclBounds; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v193; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v194; // [rsp+40h] [rbp-D0h]
  unsigned int v195; // [rsp+48h] [rbp-C8h]
  unsigned int v196; // [rsp+58h] [rbp-B8h]
  struct _BRUSHOBJ *v197; // [rsp+90h] [rbp-80h] BYREF
  unsigned int top; // [rsp+98h] [rbp-78h] BYREF
  unsigned int right; // [rsp+A0h] [rbp-70h]
  unsigned int v200; // [rsp+A8h] [rbp-68h] BYREF
  Gre::Base *v201; // [rsp+B0h] [rbp-60h] BYREF
  struct _RECTL *v202; // [rsp+B8h] [rbp-58h]
  LONG v203; // [rsp+C0h] [rbp-50h]
  struct _BRUSHOBJ *v204; // [rsp+D0h] [rbp-40h]
  int v205; // [rsp+E0h] [rbp-30h]
  __int64 v206; // [rsp+E8h] [rbp-28h] BYREF
  int v207; // [rsp+F0h] [rbp-20h]
  int *v208; // [rsp+F8h] [rbp-18h] BYREF
  unsigned __int16 *v209[2]; // [rsp+100h] [rbp-10h] BYREF
  _DWORD *v210; // [rsp+110h] [rbp+0h] BYREF
  int v211; // [rsp+118h] [rbp+8h]
  int v212; // [rsp+11Ch] [rbp+Ch]
  struct _RECTL *v213; // [rsp+120h] [rbp+10h] BYREF
  struct XDCOBJ *v214; // [rsp+128h] [rbp+18h] BYREF
  PATHOBJ ppo; // [rsp+130h] [rbp+20h] BYREF
  __int64 v216; // [rsp+138h] [rbp+28h]
  struct RFONTOBJ::Tag *v217; // [rsp+1B0h] [rbp+A0h]
  void *v218; // [rsp+1B8h] [rbp+A8h]
  int *v219; // [rsp+1C0h] [rbp+B0h]
  struct XDCOBJ *v220; // [rsp+1C8h] [rbp+B8h]
  PATHOBJ v221; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 v222; // [rsp+1D8h] [rbp+C8h]
  struct _RECTL rclBkGround; // [rsp+250h] [rbp+140h] BYREF
  struct _RECTL v224; // [rsp+260h] [rbp+150h] BYREF
  struct _RECTL v225; // [rsp+270h] [rbp+160h] BYREF
  struct _CLIPOBJ v226; // [rsp+280h] [rbp+170h] BYREF
  __int64 v227; // [rsp+2D0h] [rbp+1C0h]
  int v228; // [rsp+2D8h] [rbp+1C8h]
  int v229; // [rsp+300h] [rbp+1F0h]
  __int64 v230; // [rsp+310h] [rbp+200h]
  STROBJ pstro; // [rsp+320h] [rbp+210h] BYREF
  __int64 v232; // [rsp+360h] [rbp+250h]
  int v233; // [rsp+370h] [rbp+260h]
  int v234; // [rsp+374h] [rbp+264h]
  int v235; // [rsp+3A0h] [rbp+290h]
  _BYTE v236[100]; // [rsp+3A4h] [rbp+294h] BYREF
  int v237; // [rsp+408h] [rbp+2F8h]
  void *v238; // [rsp+428h] [rbp+318h]
  struct _POINTL v239; // [rsp+460h] [rbp+350h] BYREF
  LONG v240; // [rsp+468h] [rbp+358h]
  LONG v241; // [rsp+46Ch] [rbp+35Ch]
  LONG v242; // [rsp+470h] [rbp+360h]
  LONG v243; // [rsp+474h] [rbp+364h]
  int v244; // [rsp+478h] [rbp+368h]
  int v245; // [rsp+47Ch] [rbp+36Ch]
  struct _POINTL v246; // [rsp+480h] [rbp+370h] BYREF
  _BYTE v247[40]; // [rsp+4A0h] [rbp+390h] BYREF

  LODWORD(v12) = 0;
  v13 = a5;
  v14 = a1;
  LODWORD(v204) = a7;
  v209[0] = a6;
  v16 = a3;
  v17 = 128;
  v218 = a10;
  v217 = a12;
  v18 = 4;
  v220 = a1;
  if ( (a4 & 0x10) == 0 )
    v18 = 2;
  v203 = a3;
  v19 = *(_QWORD *)a1;
  LODWORD(v197) = v18;
  v219 = a8;
  if ( (*(_DWORD *)(v19 + 248) & 1) == 0 || (a4 & 4) == 0 )
  {
    if ( (*(_DWORD *)(v19 + 36) & 0x10000) != 0 )
    {
      EngSetLastError(6u);
      return 0LL;
    }
    LODWORD(v208) = a4 & 0x2000;
    if ( (a4 & 0x2000) == 0 || a8 )
    {
      v20 = a4 & 0xFFFFC36F;
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
            v13 = 0LL;
            v20 = a4 & 0xFFFFC36D;
          }
        }
      }
      else
      {
        v20 = a4 & 0xFFFFC369;
      }
      v21 = *(DC **)v14;
      if ( !*(_QWORD *)v14 || v20 && (!v13 || (v20 & 0xFFFFFFF9) != 0) )
        return 0;
      v22 = *((_DWORD *)v21 + 62) & 1;
      if ( v22 )
      {
        if ( (v20 & 4) != 0 )
          return 0;
      }
      rclBkGround = 0LL;
      if ( v22 )
      {
        v205 = 0;
        LODWORD(v202) = 0;
        v26 = 0;
        v23 = 0;
        v225.left = 0;
        LODWORD(v24) = 0;
        LODWORD(v25) = 0;
      }
      else
      {
        v214 = (struct XDCOBJ *)*((_QWORD *)v21 + (*((_DWORD *)v21 + 10) & 1) + 127);
        v23 = (int)v214;
        *(_QWORD *)&v225.left = (unsigned __int64)v214 >> 32;
        v24 = (unsigned __int64)v214 >> 32;
        v25 = (unsigned __int64)v214 >> 32;
        v12 = (unsigned __int64)v214 >> 32;
        v202 = (struct _RECTL *)((unsigned __int64)v214 >> 32);
        v26 = (unsigned int)v214;
        v205 = HIDWORD(v214);
      }
      v27 = *((_QWORD *)v21 + 122);
      v28 = 16 * v23;
      right = v26;
      v211 = *(_DWORD *)(v27 + 208);
      v29 = *((_QWORD *)v21 + 122);
      v206 = (unsigned int)(16 * v24);
      v212 = *(_DWORD *)(v29 + 108) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v21 + 122) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v210, v14, 0x204u, 0);
        LODWORD(v25) = v225.left;
        LODWORD(v12) = (_DWORD)v202;
        v30 = v210;
        v26 = right;
      }
      else
      {
        v30 = (_DWORD *)((char *)v21 + 320);
        v210 = (_DWORD *)((char *)v21 + 320);
      }
      v214 = 0LL;
      if ( v13 )
      {
        top = v20 & 2;
        v31 = 136;
        if ( (v20 & 2) == 0 )
          v31 = 128;
        v17 = v31;
        v32 = v30[8];
        if ( (v32 & 2) != 0 )
        {
          v33 = v26 + v13->left + ((v30[6] + 8) >> 4);
          v224.left = v33;
          v34 = right + v13->right + ((v30[6] + 8) >> 4);
          v224.right = v34;
          v35 = v30[7] + 8;
          right = v34;
          v224.top = v25 + v13->top + (v35 >> 4);
          v36 = v30[7] + 8;
          top = v224.top;
          v37 = v13->bottom + (v36 >> 4);
          v38 = v224.top;
          bottom = v12 + v37;
          v200 = bottom;
          v224.bottom = bottom;
        }
        else
        {
          left = v13->left;
          if ( (v32 & 1) != 0 )
          {
            top = 0;
            bFToL(v30, &top, 0LL);
            v224.left = right + ((int)(v210[6] + top + 8) >> 4);
            LODWORD(v204) = v224.left;
            top = 0;
            bFToL(v127, &top, 0LL);
            v224.right = right + ((int)(v210[6] + top + 8) >> 4);
            right = v224.right;
            top = 0;
            bFToL(v210, &top, v128);
            v224.top = v205 + ((int)(v210[7] + top + 8) >> 4);
            top = v224.top;
            v200 = 0;
            bFToL(v129, &v200, 0LL);
            v34 = right;
            v38 = top;
            v33 = (int)v204;
            bottom = v205 + ((int)(v210[7] + v200 + 8) >> 4);
            v200 = bottom;
            v224.bottom = bottom;
          }
          else
          {
            v130 = v13->top;
            v239.y = v13->bottom;
            v131 = v13->right;
            v241 = v130;
            v243 = v130;
            v239.x = left;
            v240 = left;
            v242 = v131;
            EXFORMOBJ::bXform((EXFORMOBJ *)&v210, &v239, (struct _POINTFIX *)&v239, 3uLL);
            v132 = v239.x + v242 - v240;
            v245 = v239.y + v243 - v241;
            LODWORD(v202) = v245;
            v244 = v132;
            v133 = (v240 > v239.x) ^ (unsigned __int64)(v240 <= v242);
            v134 = *(&v239.x + 2 * v133);
            v135 = *(&v242 + 2 * v133);
            if ( v134 > v135 )
              v134 += 15;
            else
              v135 += 15;
            v33 = right + (v134 >> 4);
            v34 = right + (v135 >> 4);
            v224.right = v34;
            right = v34;
            v224.left = v33;
            v136 = (v241 > v239.y) ^ (unsigned __int64)(v241 <= v243);
            v137 = *(&v239.y + 2 * v136);
            v138 = *(&v243 + 2 * v136);
            if ( v137 > v138 )
              v137 += 15;
            else
              v138 += 15;
            v38 = v205 + (v137 >> 4);
            bottom = v205 + (v138 >> 4);
            v224.bottom = bottom;
            v200 = bottom;
            v224.top = v38;
            if ( (v20 & 4) != 0 )
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
              if ( v216 )
              {
                if ( (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v139, &v239, v140) )
                {
                  v141 = *(DC **)v14;
                  v225 = 0LL;
                  v225.top = 16 * (*((_DWORD *)v141 + 251) - v205);
                  v225.bottom = 16 * (*((_DWORD *)v141 + 253) - v205);
                  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v213, (struct EPATHOBJ *)&ppo, 1u, &v225);
                  if ( v213 )
                  {
                    v142 = *(DC **)v14;
                    v214 = v14;
                    *((_QWORD *)v142 + 141) = v213;
                    if ( (unsigned int)DC::bTightenRao(*(DC **)v14) )
                      LOBYTE(v20) = v20 & 0xFB;
                  }
                }
              }
              v143 = v20;
              v144 = v20 & 4;
              if ( (v20 & 4) != 0 )
                v17 = 0;
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
              bottom = v224.bottom;
              v145 = 0;
              v34 = v224.right;
              v33 = v224.left;
              LOBYTE(v20) = 0;
              if ( !v144 )
              {
                v145 = (int)v204;
                LOBYTE(v20) = v143;
              }
              v38 = v224.top;
              v16 = v203;
              a7 = v145;
              v200 = v224.bottom;
              right = v224.right;
            }
            else if ( top )
            {
              v239.y += v206;
              v243 += v206;
              v17 = 130;
              v239.x += v28;
              v240 += v28;
              v242 += v28;
              v241 += v206;
              v245 = v206 + (_DWORD)v202;
              v244 = v28 + v132;
            }
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 108LL) & 1) != 0 )
        {
          ++v33;
          ++v34;
          v224.left = v33;
          right = v34;
          v224.right = v34;
        }
        if ( v33 > v34 )
        {
          v224.left = v34;
          v40 = v33;
          v224.right = v33;
          v33 = v34;
        }
        else
        {
          v40 = right;
        }
        if ( v38 > bottom )
        {
          v41 = v38;
          v224.top = bottom;
          v224.bottom = v38;
          v38 = bottom;
        }
        else
        {
          v41 = v200;
        }
        if ( (v17 & 0xA) != 0 )
        {
          v42 = (unsigned int)rclBkGround.left;
          v43 = rclBkGround.right;
          if ( rclBkGround.left != rclBkGround.right )
          {
            v44 = rclBkGround.top;
            v45 = rclBkGround.bottom;
            if ( rclBkGround.top != rclBkGround.bottom )
            {
              if ( v33 < rclBkGround.left )
                v42 = (unsigned int)v33;
              rclBkGround.left = v42;
              if ( v38 < rclBkGround.top )
                v44 = v38;
              rclBkGround.top = v44;
              if ( v40 > rclBkGround.right )
                v43 = v40;
              rclBkGround.right = v43;
              if ( v41 > rclBkGround.bottom )
              {
                v45 = v41;
                rclBkGround.bottom = v41;
              }
LABEL_33:
              v204 = 0LL;
              v202 = 0LL;
              v201 = 0LL;
              v237 = 0;
              right = 1;
              if ( !a7 )
              {
                p_rclBkGround = 0LL;
                v61 = 0;
                v60 = 0LL;
                goto LABEL_89;
              }
              v46 = *(struct DC **)v14;
              v47 = (*(_DWORD *)(*(_QWORD *)v14 + 248LL) & 1) != 0;
              v48 = (*(_DWORD *)(*(_QWORD *)v14 + 36LL) & 0x4000) == 0;
              *(_QWORD *)&v225.left = 0LL;
              if ( !v48 )
              {
                *(_QWORD *)&v225.left = *((_QWORD *)v46 + 62);
                SURFACE::bUnMap(*(SURFACE **)&v225.left, 0LL, v46);
              }
              if ( (unsigned int)RFONTOBJ::bInit(&v201, v14, v47, (unsigned int)v197, v217) )
                GreAcquireSemaphore(*((_QWORD *)v201 + 63));
              if ( *(_QWORD *)&v225.left )
                SURFACE::Map(*(_QWORD *)&v225.left, 0LL);
              if ( !v201 )
              {
                v45 = rclBkGround.bottom;
                v17 = 0;
                v43 = rclBkGround.right;
                p_rclBkGround = 0LL;
                v44 = rclBkGround.top;
                v61 = 0;
                v42 = (unsigned int)rclBkGround.left;
                v60 = 0LL;
                right = 1;
                goto LABEL_89;
              }
              v207 = *((_DWORD *)v201 + 22) & 2;
              right = !v207 || (*((_DWORD *)v201 + 179) & 0x8000) != 0;
              v49 = *(_QWORD *)(*(_QWORD *)v14 + 976LL);
              v50 = *(_DWORD *)(*(_QWORD *)v14 + 1752LL) | *(_DWORD *)(v49 + 272) & 0x11F;
              if ( *(_BYTE *)(*(_QWORD *)v14 + 1752LL) & 1 | *(_BYTE *)(v49 + 272) & 1 )
              {
                v119 = *(_DWORD *)(v49 + 152);
                if ( (v119 & 0x200) == 0 )
                {
                  v146 = v206;
                  *(_DWORD *)(v49 + 152) = v119 | 0x100;
                  v147 = *(DC **)v14;
                  v52 = v28 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 8LL);
                  LODWORD(v197) = v52;
                  v53 = *(_DWORD *)(*((_QWORD *)v147 + 122) + 12LL) + v146;
                  goto LABEL_205;
                }
                *(_DWORD *)(v49 + 152) = v119 & 0xFFFFFDFF;
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 152LL) |= 0x100u;
                v120 = v210;
                v121 = *(DC **)v14;
                v122 = v210[8];
                if ( (v122 & 2) != 0 )
                {
                  LODWORD(v197) = v210[6] + 16 * *(_DWORD *)(*((_QWORD *)v121 + 122) + 216LL);
                  HIDWORD(v197) = v210[7] + 16 * *(_DWORD *)(*((_QWORD *)v121 + 122) + 220LL);
                }
                else
                {
                  v148 = (struct _POINTL *)*((_QWORD *)v121 + 122);
                  if ( (v122 & 1) != 0 )
                  {
                    top = 0;
                    bFToL(v148, &top, 0LL);
                    LODWORD(v197) = v120[6] + top;
                    top = 0;
                    bFToL((unsigned int)v197, &top, v149);
                    HIDWORD(v197) = v120[7] + top;
                  }
                  else
                  {
                    EXFORMOBJ::bXform((EXFORMOBJ *)&v210, v148 + 27, (struct _POINTFIX *)&v197, 1uLL);
                  }
                }
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 8LL) = v197;
              }
              else
              {
                v51 = v210[8];
                if ( (v51 & 2) != 0 )
                {
                  v52 = v28 + v210[6] + 16 * a2;
                  LODWORD(v197) = v52;
                  v203 = v206 + v210[7] + 16 * v203;
                  v53 = v203;
                  HIDWORD(v197) = v203;
                  goto LABEL_46;
                }
                if ( (v51 & 1) != 0 )
                {
                  top = 0;
                  bFToL(v210, &top, 0LL);
                  v52 = v28 + top + v210[6];
                  top = v150;
                  LODWORD(v197) = v52;
                  bFToL(v151, &top, v150);
                  v123 = top + v210[7];
                  goto LABEL_204;
                }
                v197 = (struct _BRUSHOBJ *)__PAIR64__(v16, a2);
                EXFORMOBJ::bXform((EXFORMOBJ *)&v210, (struct _POINTL *)&v197, (struct _POINTFIX *)&v197, 1uLL);
              }
              v123 = HIDWORD(v197);
              v52 = v28 + (_DWORD)v197;
              LODWORD(v197) = v28 + (_DWORD)v197;
LABEL_204:
              v53 = v206 + v123;
LABEL_205:
              HIDWORD(v197) = v53;
LABEL_46:
              ESTROBJ::vInit(
                (ESTROBJ *)&pstro,
                v209[0],
                a7,
                v14,
                (struct RFONTOBJ *)&v201,
                (struct EXFORMOBJ *)&v210,
                (__m128i *)v219,
                (int)v208,
                *(_DWORD *)(*(_QWORD *)v14 + 1756LL),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 280LL),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 284LL),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 288LL),
                v52,
                v53,
                v50,
                0LL,
                v218,
                a11);
              if ( (v237 & 4) == 0 )
              {
                v45 = rclBkGround.bottom;
                v17 = 0;
                v43 = rclBkGround.right;
                p_rclBkGround = 0LL;
                v44 = rclBkGround.top;
                v60 = 0LL;
                v42 = (unsigned int)rclBkGround.left;
                goto LABEL_87;
              }
              v54 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v246, &pstro.rclBkGround);
              v55 = v54;
              v56 = pstro.rclBkGround.right;
              v57 = pstro.rclBkGround.left;
              if ( (*((_DWORD *)v201 + 3) & 0x10000000) != 0 )
              {
                v57 = pstro.rclBkGround.left - 1;
                v56 = pstro.rclBkGround.right + 1;
                --pstro.rclBkGround.left;
                ++pstro.rclBkGround.right;
              }
              if ( (v237 & 0x1400) != 0 )
              {
                ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v246, v54);
                v56 = pstro.rclBkGround.right;
                v57 = pstro.rclBkGround.left;
              }
              v42 = (unsigned int)rclBkGround.left;
              v43 = rclBkGround.right;
              if ( rclBkGround.left == rclBkGround.right
                || (v45 = rclBkGround.bottom, v200 = rclBkGround.top, rclBkGround.top == rclBkGround.bottom) )
              {
                rclBkGround = pstro.rclBkGround;
                v45 = pstro.rclBkGround.bottom;
                v43 = pstro.rclBkGround.right;
                v42 = (unsigned int)pstro.rclBkGround.left;
                v200 = pstro.rclBkGround.top;
              }
              else
              {
                if ( v57 < rclBkGround.left )
                {
                  v42 = (unsigned int)v57;
                  rclBkGround.left = v57;
                }
                if ( pstro.rclBkGround.top < rclBkGround.top )
                {
                  v200 = pstro.rclBkGround.top;
                  rclBkGround.top = pstro.rclBkGround.top;
                }
                if ( v56 > rclBkGround.right )
                {
                  v43 = v56;
                  rclBkGround.right = v56;
                }
                if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
                {
                  v45 = pstro.rclBkGround.bottom;
                  rclBkGround.bottom = pstro.rclBkGround.bottom;
                }
              }
              if ( a9 == 2 )
              {
                if ( !v55 )
                {
                  p_rclBkGround = &pstro.rclBkGround;
LABEL_64:
                  v59 = v57 >= v56 || pstro.rclBkGround.top >= pstro.rclBkGround.bottom;
                  if ( (v17 & 8) == 0
                    || v224.left > v57
                    || v224.right < v56
                    || v224.top > pstro.rclBkGround.top
                    || v224.bottom < pstro.rclBkGround.bottom
                    || v59 )
                  {
                    if ( !p_rclBkGround )
                    {
                      if ( v59 )
                        goto LABEL_73;
                      goto LABEL_72;
                    }
                  }
                  else
                  {
                    p_rclBkGround = &v224;
                    v17 &= ~8u;
                  }
                  if ( p_rclBkGround->left >= p_rclBkGround->right || p_rclBkGround->top >= p_rclBkGround->bottom )
                    goto LABEL_73;
LABEL_72:
                  v17 |= 1u;
LABEL_73:
                  v44 = v200;
                  if ( (v50 & 0xA0) != 0 )
                  {
                    if ( v235 )
                    {
                      v60 = (struct _RECTL *)v236;
                      for ( i = (ERECTL *)v236; !ERECTL::bEmpty(i); i = (ERECTL *)&v153[1] )
                      {
                        if ( (_DWORD)v42 == v43 || v44 == v45 )
                        {
                          rclBkGround = *v153;
                        }
                        else
                        {
                          if ( v153->left < (int)v42 )
                            LODWORD(v42) = v153->left;
                          v154 = v153->top;
                          rclBkGround.left = v42;
                          if ( v154 < v44 )
                            v44 = v154;
                          v155 = v153->right;
                          rclBkGround.top = v44;
                          if ( v155 > v43 )
                            v43 = v155;
                          v156 = v153->bottom;
                          rclBkGround.right = v43;
                          if ( v156 > v45 )
                            rclBkGround.bottom = v156;
                        }
                      }
                    }
                    else
                    {
                      v60 = 0LL;
                      v17 |= 4u;
                    }
                  }
                  else
                  {
                    v60 = v202;
                  }
                  if ( (v20 & 4) == 0 )
                    goto LABEL_87;
                  if ( v224.left > (int)v42 )
                  {
LABEL_77:
                    v42 = (unsigned int)v224.left;
                    rclBkGround.left = v224.left;
LABEL_78:
                    if ( v224.top > v44 )
                    {
                      v44 = v224.top;
                      rclBkGround.top = v224.top;
                    }
                    if ( v224.right < v43 )
                    {
                      v43 = v224.right;
                      rclBkGround.right = v224.right;
                    }
                    if ( v224.bottom < v45 )
                      v45 = v224.bottom;
                    rclBkGround.bottom = v45;
                    if ( v43 < (int)v42 )
                    {
                      v42 = (unsigned int)v43;
                      rclBkGround.left = v43;
                    }
                    else if ( v45 < v44 )
                    {
                      v44 = v45;
                      rclBkGround.top = v45;
                    }
                    goto LABEL_87;
                  }
                  if ( v224.right < v43 || v224.top > rclBkGround.top || v224.bottom < rclBkGround.bottom )
                  {
                    if ( v224.left <= (int)v42 )
                      goto LABEL_78;
                    goto LABEL_77;
                  }
                  LOBYTE(v20) = -5;
LABEL_87:
                  v61 = v207;
                  v202 = v60;
                  if ( (v50 & 1) != 0 )
                  {
                    v124 = *(DC **)v14;
                    v202 = v60;
                    *(_DWORD *)(*((_QWORD *)v124 + 122) + 8LL) += v233;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 12LL) += v234;
                    v45 = rclBkGround.bottom;
                    v43 = rclBkGround.right;
                    v44 = rclBkGround.top;
                    v42 = (unsigned int)rclBkGround.left;
                  }
LABEL_89:
                  v62 = *(DC **)v14;
                  v63 = v17;
                  if ( (*(_DWORD *)(*(_QWORD *)v14 + 248LL) & 1) == 0 )
                  {
                    if ( (_DWORD)v42 != v43 && v44 != v45 )
                    {
                      if ( (*((_DWORD *)v62 + 9) & 0xE0) != 0 )
                      {
                        XDCOBJ::vAccumulate(v14, (struct ECLIPOBJ *)v42, (struct ERECTL *)&rclBkGround);
                        v62 = *(DC **)v14;
                      }
                      if ( v61 || (v20 & 4) != 0 )
                      {
                        v64 = 1;
                        v65 = 0LL;
                        v66 = 1;
                      }
                      else
                      {
                        v65 = 0LL;
                        v66 = 0;
                        v64 = 1;
                      }
                      if ( *((_QWORD *)v62 + 146)
                        && (*((_DWORD *)v62 + 10) & 2) != 0
                        && (unsigned int)DC::bDpiScaledSurface(v62)
                        || *((_QWORD *)v62 + 144) )
                      {
                        v67 = DC::prgnRao(v62);
                      }
                      else if ( !*((_QWORD *)v62 + 145)
                             || (*((_DWORD *)v62 + 10) & 2) == 0
                             || !(unsigned int)DC::bDpiScaledSurface(v62) )
                      {
                        v67 = (struct REGION *)*((_QWORD *)v62 + 143);
                      }
                      v227 = v65;
                      v228 = v65;
                      v229 = 1;
                      v230 = v65;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)&v226, v67, (struct ERECTL *)&rclBkGround, v66);
                      rclBounds = v226.rclBounds;
                      v69 = _mm_srli_si128((__m128i)v226.rclBounds, 8);
                      rclBkGround = v226.rclBounds;
                      v226.rclBounds.left = _mm_cvtsi128_si32((__m128i)v226.rclBounds);
                      if ( v226.rclBounds.left == _mm_cvtsi128_si32(v69)
                        || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                         _mm_srli_si128(
                                                                                           (__m128i)rclBounds,
                                                                                           12)) )
                      {
LABEL_169:
                        if ( (v237 & 0x801) != 0 )
                        {
                          if ( (v237 & 1) != 0 )
                            FreeTmpBuffer(v232, v42, v62);
                          if ( (v237 & 0x800) != 0 )
                            Win32FreePool(v238);
                        }
                        if ( v201 )
                        {
                          if ( (*((_DWORD *)v201 + 178) & 0x81) != 0 )
                            RFONTOBJ::dtorHelper((RFONTOBJ *)&v201);
                          v113 = (void *)*((_QWORD *)v201 + 77);
                          if ( v113 )
                          {
                            Win32FreePool(v113);
                            *((_QWORD *)v201 + 78) = 0LL;
                            *((_QWORD *)v201 + 77) = 0LL;
                          }
                          EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache");
                          GreReleaseSemaphoreInternal(*((_QWORD *)v201 + 63));
                        }
                        if ( v214 )
                          TXTCLEANUP::vMopUp((TXTCLEANUP *)&v214);
                        if ( v17 )
                          return v64;
                        return 0;
                      }
                      v70 = *(unsigned int *)(*(_QWORD *)v14 + 36LL);
                      if ( (v70 & 0xE0) != 0 )
                      {
                        *(RECTL *)v209 = rclBounds;
                        XDCOBJ::vAccumulateTight(v14, (struct ECLIPOBJ *)v42, (__m128i *)v209);
                      }
                      v71 = *(_QWORD *)(*(_QWORD *)v14 + 496LL);
                      if ( v71 )
                      {
                        if ( (*(_DWORD *)(v71 + 116) & 8) == 0 && !*(_QWORD *)(v71 + 224)
                          || !_bittest16((const signed __int16 *)(v71 + 102), 9u) )
                        {
                          v72 = *(_DWORD *)(v71 + 112);
                          if ( (v72 & 0x800) != 0 )
                          {
                            v73 = UserSurfaceAccessCheck(*(_QWORD *)(v71 + 648), v42, v62);
                          }
                          else
                          {
                            if ( (v72 & 0x10000000) == 0 )
                            {
                              LODWORD(v42) = right;
                              v202 = v60;
                              goto LABEL_113;
                            }
                            v73 = UserScreenAccessCheck(v70, v42, v62);
                            v202 = v60;
                          }
                          v42 = right;
                          if ( v73 )
                          {
LABEL_113:
                            v74 = (struct _SURFOBJ *)p_rclBkGround;
                            v75 = *(_QWORD *)(v71 + 128);
                            v76 = v17;
                            v206 = *(_QWORD *)(v71 + 48);
                            v77 = v61;
                            v78 = *(DC **)v14;
                            *(_QWORD *)&v225.left = v60;
                            v213 = p_rclBkGround;
                            v207 = v17;
                            v79 = *((_DWORD *)v78 + 18);
                            v80 = *((_QWORD *)v78 + 11);
                            v204 = (struct _BRUSHOBJ *)((char *)v78 + 1472);
                            v197 = (struct _BRUSHOBJ *)((char *)v78 + 1608);
                            top = 0;
                            v62 = *(DC **)&v225.left;
                            v203 = v61;
                            v205 = v79;
                            if ( (v79 & 0x10000000) != 0 )
                            {
                              v161 = *((_QWORD *)v78 + 122);
                              top = v42;
                              *(_DWORD *)(v161 + 152) |= 4u;
                              --*(&v204[5].iSolidColor + 1);
                            }
                            v81 = *(Gre::Base **)(*(_QWORD *)v14 + 976LL);
                            v42 = *(unsigned int *)(*(_QWORD *)v14 + 316LL);
                            if ( (((unsigned __int8)v42 | *((_BYTE *)v81 + 152)) & 0xC) != 0 )
                            {
                              v115 = Gre::Base::Globals(v81);
                              v116 = *(DC **)v14;
                              v117 = (unsigned __int16 *)v115;
                              v209[0] = (unsigned __int16 *)v115;
                              if ( ((*((_BYTE *)v116 + 316) | *(_BYTE *)(*((_QWORD *)v116 + 122) + 152LL)) & 4) != 0 )
                              {
                                EBRUSHOBJ::vInitBrush(v204, v116, *((_QWORD *)v115 + 29), v80, v75, v71, top);
                                v117 = v209[0];
                              }
                              v118 = *(_QWORD *)(*(_QWORD *)v14 + 976LL);
                              v42 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v14 + 316LL) | *(_DWORD *)(v118 + 152));
                              if ( ((*(_BYTE *)(*(_QWORD *)v14 + 316LL) | *(_BYTE *)(v118 + 152)) & 8) != 0 )
                                EBRUSHOBJ::vInitBrush(
                                  v197,
                                  *(_QWORD *)v14,
                                  *((_QWORD *)v117 + 31),
                                  v80,
                                  v75,
                                  v71,
                                  (v205 & 0x8000) != 0);
                              v74 = (struct _SURFOBJ *)p_rclBkGround;
                              v62 = *(DC **)&v225.left;
                              v76 = v17;
                              v77 = v61;
                              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 152LL) &= 0xFFFFFFF3;
                              *(_DWORD *)(*(_QWORD *)v14 + 316LL) &= 0xFFFFFFF3;
                            }
                            v82 = (struct _POINTL *)(*(_QWORD *)v14 + 1192LL);
                            if ( (v17 & 0x1A) != 0 )
                            {
                              if ( (v17 & 8) != 0 )
                              {
                                v83 = v224.left;
                                v84 = v224.right;
                                if ( v224.left != v224.right )
                                {
                                  v85 = v224.top;
                                  v42 = (unsigned int)v224.bottom;
                                  if ( v224.top != v224.bottom )
                                  {
                                    si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                                    v17 = v76;
                                    v87 = _mm_cvtsi128_si32(si128);
                                    v88 = _mm_srli_si128(si128, 8);
                                    v202 = (struct _RECTL *)v62;
                                    rclBkGround.left = v87;
                                    if ( v87 > v224.left )
                                      v83 = v87;
                                    v89 = _mm_cvtsi128_si32(v88);
                                    LODWORD(v208) = v83;
                                    v90 = _mm_srli_si128(si128, 4);
                                    rclBkGround.right = v89;
                                    v91 = _mm_srli_si128(si128, 12);
                                    if ( v89 < v224.right )
                                      v84 = v89;
                                    v92 = _mm_cvtsi128_si32(v91);
                                    v93 = _mm_cvtsi128_si32(v90);
                                    v226.rclBounds.left = v83;
                                    rclBkGround.bottom = v92;
                                    rclBkGround.top = v93;
                                    v226.rclBounds.right = v84;
                                    if ( v93 > v224.top )
                                      v85 = v93;
                                    v226.rclBounds.top = v85;
                                    v61 = v77;
                                    if ( v92 < v224.bottom )
                                      v42 = (unsigned int)v92;
                                    p_rclBkGround = (struct _RECTL *)v74;
                                    v226.rclBounds.bottom = v42;
                                    if ( v83 < v84 )
                                    {
                                      v202 = (struct _RECTL *)v62;
                                      if ( v85 < (int)v42 )
                                      {
                                        ++*(_DWORD *)(v71 + 92);
                                        v94 = 0;
                                        v200 = 0;
                                        top = 0;
                                        v208 = (int *)v247;
                                        v95 = *(_QWORD *)(v71 + 48);
                                        v202 = (struct _RECTL *)v62;
                                        if ( (*(_DWORD *)(v95 + 40) & 0x8080) == 0x8080 )
                                        {
                                          if ( v201 )
                                          {
                                            v162 = UMPDReleaseRFONTSem(
                                                     (struct RFONTOBJ *)&v201,
                                                     0LL,
                                                     &v200,
                                                     &top,
                                                     &v208);
                                            v61 = v203;
                                            v94 = v162;
                                            v17 = v207;
                                            p_rclBkGround = v213;
                                            v202 = *(struct _RECTL **)&v225.left;
                                          }
                                          else
                                          {
                                            v202 = (struct _RECTL *)v62;
                                          }
                                        }
                                        if ( (*(_DWORD *)(v71 + 112) & 1) != 0 )
                                          v96 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v71 + 48) + 2808LL);
                                        else
                                          v96 = EngBitBlt;
                                        v195 = (unsigned int)v82;
                                        v194 = (struct _POINTL *)v197;
                                        v193 = 0LL;
                                        p_rclBounds = (struct _XLATEOBJ *)&v226.rclBounds;
                                        ((void (__fastcall *)(__int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD))v96)(
                                          v71 + 24,
                                          0LL,
                                          0LL,
                                          &v226,
                                          0LL);
                                        if ( v94 )
                                        {
                                          v163 = v208;
                                          UMPDAcquireRFONTSem((struct RFONTOBJ *)&v201, 0LL, v200, top, v208);
                                          if ( v163 )
                                          {
                                            if ( v163 != (int *)v247 )
                                              Win32FreePool(v163);
                                          }
                                        }
                                      }
                                    }
                                    v226.rclBounds = rclBkGround;
                                  }
                                }
                              }
                              v97 = v202;
                              LODWORD(v208) = v17;
                              if ( (v17 & 0x12) != 0 )
                              {
                                PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                                if ( v216 )
                                {
                                  if ( (v17 = (int)v208, ((unsigned __int8)v208 & 2) != 0)
                                    && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v164, &v239, v165)
                                    || (v17 & 0x10) != 0
                                    && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v164, &v246, v165)
                                    || (v202 = v97,
                                        !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                         &ppo,
                                                         v14,
                                                         (struct RFONTOBJ *)&v201,
                                                         (struct PDEVOBJ *)&v206,
                                                         (struct SURFACE *)v71,
                                                         &v226,
                                                         v197,
                                                         v82,
                                                         (unsigned int)v194,
                                                         v195)) )
                                  {
                                    v202 = v97;
                                    v17 = 0;
                                  }
                                }
                                PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                              }
                            }
                            else
                            {
                              v97 = v202;
                            }
                            if ( (v17 & 1) == 0 )
                              goto LABEL_167;
                            v213 = 0LL;
                            if ( v61 )
                            {
                              v98 = -257;
                              v166 = 64;
                              if ( (*((_DWORD *)v201 + 179) & 0x8000) == 0 )
                                v166 = 32;
                              v17 |= v166;
                            }
                            else
                            {
                              v98 = v205;
                            }
                            if ( p_rclBkGround && (v98 & 0x100) == 0 )
                            {
                              v167 = p_rclBkGround->left;
                              v168 = p_rclBkGround->right;
                              if ( rclBkGround.left > p_rclBkGround->left )
                                v167 = rclBkGround.left;
                              v169 = p_rclBkGround->top;
                              if ( rclBkGround.right < v168 )
                                v168 = rclBkGround.right;
                              v170 = (unsigned int)p_rclBkGround->bottom;
                              if ( rclBkGround.top > v169 )
                                v169 = rclBkGround.top;
                              v99 = v197;
                              if ( rclBkGround.bottom < (int)v170 )
                                v170 = (unsigned int)rclBkGround.bottom;
                              v226.rclBounds.bottom = v170;
                              v226.rclBounds.left = v167;
                              v226.rclBounds.right = v168;
                              v226.rclBounds.top = v169;
                              if ( v167 < v168 && v169 < (int)v170 )
                              {
                                ++*(_DWORD *)(v71 + 92);
                                TextOutBitBlt(
                                  (struct SURFACE *)v71,
                                  (struct RFONTOBJ *)&v201,
                                  (struct _SURFOBJ *)v170,
                                  v74,
                                  &v226,
                                  p_rclBounds,
                                  &v226.rclBounds,
                                  v193,
                                  v194,
                                  v99,
                                  v82,
                                  v196);
                              }
                              v226.rclBounds = rclBkGround;
                              p_rclBkGround = 0LL;
                            }
                            else
                            {
                              v99 = v197;
                            }
                            if ( v97 && *(_DWORD *)(v206 + 2108) != 4 )
                            {
                              v213 = v97;
                              v97 = 0LL;
                              v202 = 0LL;
                            }
                            if ( (v17 & 0x20) != 0 )
                            {
                              if ( (v237 & 0x1400) != 0 )
                              {
                                if ( !(unsigned int)bProxyDrvTextOut(
                                                      v14,
                                                      (struct SURFACE *)v71,
                                                      (struct ESTROBJ *)&pstro,
                                                      &v226,
                                                      0LL,
                                                      0LL,
                                                      v204,
                                                      v99,
                                                      v82,
                                                      (struct RFONTOBJ *)&v201,
                                                      (struct PDEVOBJ *)&v206,
                                                      *(_DWORD *)(*(_QWORD *)v14 + 72LL),
                                                      &rclBkGround) )
                                  v17 = 0;
                              }
                              else
                              {
                                PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                                if ( !v216
                                  || ((v237 & 0x1400) == 0
                                    ? (v172 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&ppo))
                                    : (v172 = ESTROBJ::bLinkedTextToPath(
                                                (ESTROBJ *)&pstro,
                                                (struct EPATHOBJ *)&ppo,
                                                v171)),
                                      !v172
                                   || !(unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                                       &ppo,
                                                       v14,
                                                       (struct RFONTOBJ *)&v201,
                                                       (struct PDEVOBJ *)&v206,
                                                       (struct SURFACE *)v71,
                                                       &v226,
                                                       v204,
                                                       v82,
                                                       (unsigned int)v194)) )
                                {
                                  v17 = 0;
                                }
                                PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                              }
                              v108 = (_DWORD *)(v71 + 92);
                              goto LABEL_166;
                            }
                            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                            if ( ThreadWin32Thread && (v101 = *ThreadWin32Thread) != 0 )
                              v102 = *(_QWORD *)(v101 + 304);
                            else
                              v102 = *(_QWORD *)(v71 + 104);
                            if ( v102 )
                            {
                              *(_QWORD *)(v71 + 104) = 0LL;
                              v173 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                              if ( v173 )
                                *(_QWORD *)(v173 + 304) = 0LL;
                            }
                            if ( (*(_DWORD *)(v71 + 112) & 8) != 0 )
                              v103 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v71 + 48) + 2848LL);
                            else
                              v103 = EngTextOut;
                            if ( (char *)v103 == (char *)SpTextOut || (char *)v103 == (char *)BmpDevTextOut )
                            {
                              if ( (*((_DWORD *)v201 + 3) & 0x10010000) != 0 )
                              {
                                *(_QWORD *)(v71 + 104) = v14;
                                v125 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                                if ( v125 )
                                  *(_QWORD *)(v125 + 304) = v14;
                              }
                            }
                            else
                            {
                              v104 = *((_DWORD *)v201 + 3);
                              if ( (v104 & 0x10000) == 0 )
                                goto LABEL_155;
                              v105 = *(DC **)v14;
                              if ( (v104 & 0x10000000) != 0 )
                              {
                                if ( (*((_DWORD *)v105 + 19) & 0x4000) != 0 )
                                  goto LABEL_155;
                              }
                              else if ( (*((_DWORD *)v105 + 18) & 0x1000000) != 0 )
                              {
                                goto LABEL_155;
                              }
                              if ( v103 != EngTextOut )
                              {
                                *(_QWORD *)(v71 + 104) = v14;
                                v174 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                                if ( v174 )
                                  *(_QWORD *)(v174 + 304) = v14;
                              }
                              v103 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                            }
LABEL_155:
                            if ( (v17 & 0x40) != 0 )
                            {
                              if ( (v237 & 0x1400) != 0 )
                              {
                                if ( !(unsigned int)bProxyDrvTextOut(
                                                      v14,
                                                      (struct SURFACE *)v71,
                                                      (struct ESTROBJ *)&pstro,
                                                      &v226,
                                                      0LL,
                                                      0LL,
                                                      v204,
                                                      v197,
                                                      v82,
                                                      (struct RFONTOBJ *)&v201,
                                                      (struct PDEVOBJ *)&v206,
                                                      *(_DWORD *)(*(_QWORD *)v14 + 72LL),
                                                      &rclBkGround) )
                                  v17 = 0;
                                goto LABEL_419;
                              }
                              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                              if ( !v216
                                || ((v237 & 0x1400) == 0
                                  ? (v176 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&ppo))
                                  : (v176 = ESTROBJ::bLinkedTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo, v175)),
                                    !v176
                                 || ppo.cCurves > 1
                                 && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                     &ppo,
                                                     v14,
                                                     (struct RFONTOBJ *)&v201,
                                                     (struct PDEVOBJ *)&v206,
                                                     (struct SURFACE *)v71,
                                                     &v226,
                                                     v204,
                                                     v82,
                                                     (unsigned int)v194,
                                                     v195)) )
                              {
                                v17 = 0;
                              }
                              goto LABEL_392;
                            }
                            ++*(_DWORD *)(v71 + 92);
                            if ( (v17 & 4) == 0 )
                            {
                              if ( (v237 & 0x1400) != 0 )
                              {
                                v177 = bProxyDrvTextOut(
                                         v14,
                                         (struct SURFACE *)v71,
                                         (struct ESTROBJ *)&pstro,
                                         &v226,
                                         v97,
                                         p_rclBkGround,
                                         v204,
                                         v197,
                                         v82,
                                         (struct RFONTOBJ *)&v201,
                                         (struct PDEVOBJ *)&v206,
                                         0,
                                         &rclBkGround);
                                v108 = (_DWORD *)(v71 + 92);
                                if ( !v177 )
                                  v17 = 0;
                                goto LABEL_162;
                              }
                              v106 = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
                              v107 = *(_DWORD *)(v106 + 40);
                              if ( (v107 & 0x80u) != 0 && (v107 & 0x8000) == 0 && !*((_DWORD *)v201 + 23) )
                              {
                                v178 = *(_QWORD *)(SGDGetSessionState(v106) + 32);
                                v209[0] = *(unsigned __int16 **)(v178 + 23400);
                                GreAcquireSemaphore(v209[0]);
                                for ( j = *(_QWORD *)(v178 + 23392); j; j = *(_QWORD *)(j + 32) )
                                {
                                  if ( *(_QWORD *)j == *(_QWORD *)(*((_QWORD *)v201 + 16) + 80LL) )
                                    ++*(_DWORD *)(j + 12);
                                }
                                SEMOBJ::vUnlock((SEMOBJ *)v209);
                                v97 = v202;
                              }
                              v195 = 3341;
                              v194 = v82;
                              v193 = (struct _POINTL *)v197;
                              p_rclBounds = (struct _XLATEOBJ *)p_rclBkGround;
                              if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, Gre::Base *, struct _CLIPOBJ *, struct _RECTL *))v103)(
                                      v71 + 24,
                                      &pstro,
                                      v201,
                                      &v226,
                                      v97) )
                                v17 = 0;
                              v108 = (_DWORD *)(v71 + 92);
                              v109 = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
                              v110 = *(_DWORD *)(v109 + 40);
                              if ( (v110 & 0x80u) == 0
                                || (v108 = (_DWORD *)(v71 + 92), (v110 & 0x8000) != 0)
                                || (v108 = (_DWORD *)(v71 + 92), *((_DWORD *)v201 + 23)) )
                              {
LABEL_162:
                                *(_QWORD *)(v71 + 104) = 0LL;
                                v111 = 0LL;
                                v112 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                if ( v112 )
                                  v111 = *v112;
                                if ( v111 )
                                  *(_QWORD *)(v111 + 304) = 0LL;
LABEL_166:
                                if ( v213 )
                                {
                                  v183 = v204;
                                  p_top = &v213->top;
                                  v185 = v226.rclBounds;
                                  ++*v108;
                                  *(RECTL *)v209 = v185;
                                  while ( !ERECTL::bEmpty((ERECTL *)(p_top - 1)) )
                                  {
                                    v188 = *v186;
                                    v189 = p_top[1];
                                    if ( (int)v62 > v188 )
                                      v188 = (int)v62;
                                    v226.rclBounds.left = v188;
                                    if ( (int)v42 < v189 )
                                      v189 = v42;
                                    v226.rclBounds.right = v189;
                                    if ( v188 < v189 )
                                    {
                                      v190 = *p_top;
                                      v191 = p_top[2];
                                      if ( v185.top > *p_top )
                                        v190 = v185.top;
                                      v226.rclBounds.top = v190;
                                      if ( v185.bottom < v191 )
                                        v191 = v185.bottom;
                                      v226.rclBounds.bottom = v191;
                                      if ( v190 < v191 )
                                        TextOutBitBlt(
                                          (struct SURFACE *)v71,
                                          (struct RFONTOBJ *)&v201,
                                          (struct _SURFOBJ *)v62,
                                          v187,
                                          &v226,
                                          p_rclBounds,
                                          &v226.rclBounds,
                                          v193,
                                          v194,
                                          v183,
                                          v82,
                                          v196);
                                    }
                                    p_top += 4;
                                  }
                                  v14 = v220;
                                  v226.rclBounds = v185;
                                }
LABEL_167:
                                if ( (v17 & 4) != 0 )
                                {
                                  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v221);
                                  if ( !v222
                                    || !(unsigned int)ESTROBJ::bExtraRectsToPath(
                                                        (ESTROBJ *)&pstro,
                                                        (struct EPATHOBJ *)&v221)
                                    || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                        &v221,
                                                        v14,
                                                        (struct RFONTOBJ *)&v201,
                                                        (struct PDEVOBJ *)&v206,
                                                        (struct SURFACE *)v71,
                                                        &v226,
                                                        v204,
                                                        v82,
                                                        (unsigned int)v194,
                                                        v195) )
                                  {
                                    v17 = 0;
                                  }
                                  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v221);
                                }
                                goto LABEL_168;
                              }
                              v180 = *(_QWORD *)(SGDGetSessionState(v109) + 32);
                              v209[0] = *(unsigned __int16 **)(v180 + 23400);
                              GreAcquireSemaphore(v209[0]);
                              for ( k = *(_QWORD *)(v180 + 23392); k; k = *(_QWORD *)(k + 32) )
                              {
                                if ( *(_QWORD *)k == *(_QWORD *)(*((_QWORD *)v201 + 16) + 80LL) )
                                {
                                  v182 = *(_DWORD *)(k + 12);
                                  if ( v182 )
                                    *(_DWORD *)(k + 12) = v182 - 1;
                                }
                              }
                              SEMOBJ::vUnlock((SEMOBJ *)v209);
LABEL_419:
                              v108 = (_DWORD *)(v71 + 92);
                              goto LABEL_162;
                            }
                            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                            if ( v216
                              && (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo) )
                            {
                              if ( (v237 & 0x1400) != 0 )
                              {
                                if ( (unsigned int)bProxyDrvTextOut(
                                                     v14,
                                                     (struct SURFACE *)v71,
                                                     (struct ESTROBJ *)&pstro,
                                                     &v226,
                                                     v97,
                                                     p_rclBkGround,
                                                     v204,
                                                     v197,
                                                     v82,
                                                     (struct RFONTOBJ *)&v201,
                                                     0LL,
                                                     0,
                                                     &rclBkGround) )
                                {
LABEL_399:
                                  if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                       &ppo,
                                                       v14,
                                                       (struct RFONTOBJ *)&v201,
                                                       (struct PDEVOBJ *)&v206,
                                                       (struct SURFACE *)v71,
                                                       &v226,
                                                       v204,
                                                       v82,
                                                       (unsigned int)v194,
                                                       v195) )
                                    goto LABEL_391;
                                }
                              }
                              else
                              {
                                v195 = 3341;
                                v194 = v82;
                                v193 = (struct _POINTL *)v197;
                                p_rclBounds = (struct _XLATEOBJ *)p_rclBkGround;
                                if ( ((unsigned int (__fastcall *)(__int64, STROBJ *, Gre::Base *, struct _CLIPOBJ *, struct _RECTL *))v103)(
                                       v71 + 24,
                                       &pstro,
                                       v201,
                                       &v226,
                                       v97) )
                                {
                                  goto LABEL_399;
                                }
                              }
                            }
                            v17 = 0;
LABEL_391:
                            v17 &= ~4u;
LABEL_392:
                            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                            goto LABEL_419;
                          }
                        }
                      }
                    }
LABEL_168:
                    v64 = 1;
                    goto LABEL_169;
                  }
                  v17 = 0;
                  if ( (v20 & 4) == 0 )
                    v17 = v63;
                  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v14);
                  if ( !v216 )
                  {
LABEL_317:
                    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
                    goto LABEL_168;
                  }
                  if ( ((v17 & 8) == 0 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)&ppo, &v224))
                    && ((v17 & 2) == 0 || (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v157, &v239, v159))
                    && ((v17 & 0x10) == 0 || (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v157, &v246, v159)) )
                  {
                    if ( (v17 & 1) == 0
                      || p_rclBkGround && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)&ppo, p_rclBkGround) )
                    {
                      goto LABEL_314;
                    }
                    if ( (v237 & 0x1400) != 0 )
                      v160 = ESTROBJ::bLinkedTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo, v158);
                    else
                      v160 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&ppo);
                    if ( v160 )
                    {
                      if ( v60 )
                      {
                        while ( !ERECTL::bEmpty((ERECTL *)v60) )
                        {
                          if ( !(unsigned int)bAddRectToPath((struct EPATHOBJ *)&ppo, v60) )
                            goto LABEL_316;
                          ++v60;
                        }
                      }
LABEL_314:
                      if ( (v17 & 4) == 0
                        || (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&ppo) )
                      {
                        goto LABEL_317;
                      }
                    }
                  }
LABEL_316:
                  v17 = 0;
                  goto LABEL_317;
                }
                v17 |= 0x10u;
              }
              p_rclBkGround = (struct _RECTL *)v204;
              goto LABEL_64;
            }
          }
          rclBkGround = v224;
        }
      }
      v42 = (unsigned int)rclBkGround.left;
      v44 = rclBkGround.top;
      v43 = rclBkGround.right;
      v45 = rclBkGround.bottom;
      goto LABEL_33;
    }
  }
  EngSetLastError(0x57u);
  return 0LL;
}
