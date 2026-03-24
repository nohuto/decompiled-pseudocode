/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0092390
 * Callers:
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0091F70 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GrePolyTextOutW @ 0x1C00AA89C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00AAE5C (GreExtTextOutWInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00B4620 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0005FCC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0006E4C (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0094FF4 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0095270 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00B3134 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00B5CF0 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00B7A80 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C00E7394 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C01003A0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0114874 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C01199A4 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C01256D8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0144D0C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0144D6C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02866A0 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0286800 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02BC24C (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C02BC2C4 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1C02BC484 (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BDE40 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02BE234 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BE458 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall GreExtTextOutWLocked(
        struct XDCOBJ *a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        void *a10,
        unsigned int a11)
{
  __int64 v11; // r11
  struct tagRECT *v12; // rbx
  unsigned int v14; // r14d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // esi
  int v22; // r13d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r10
  int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rcx
  int v30; // r13d
  int v31; // r12d
  LONG v32; // r8d
  LONG v33; // edx
  LONG v34; // eax
  LONG v35; // ecx
  SURFACE *p_rclBkGround; // r12
  struct DC *v37; // r8
  BOOL v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // r13
  int v41; // eax
  int v42; // ebx
  int v43; // r8d
  __int64 v44; // rdx
  int v45; // eax
  int v46; // ebx
  int left; // r9d
  int right; // r10d
  int v49; // eax
  LONG v50; // ebx
  __int64 v51; // r8
  int v52; // r9d
  __int64 v53; // rcx
  int v54; // eax
  LONG v55; // edx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // r10d
  unsigned int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rax
  struct REGION *v62; // rdx
  __int64 v63; // r9
  RECTL rclBounds; // xmm2
  __int64 v65; // rdx
  __m128i v66; // xmm0
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // r8
  __int64 v70; // rax
  int v71; // r10d
  __int64 v72; // rsi
  int v73; // eax
  int v74; // eax
  __int64 v75; // rdx
  struct _POINTL *v76; // r9
  __int64 v77; // rbx
  unsigned int v78; // r12d
  __int64 v79; // r11
  __int64 v80; // rdi
  struct _BRUSHOBJ *v81; // r13
  BOOL v82; // r10d
  __int64 v83; // rax
  struct _POINTL *v84; // rbx
  int bottom; // r11d
  struct _SURFOBJ *v86; // r8
  int top; // edi
  struct _SURFOBJ *v88; // r9
  struct _RECTL *v89; // r13
  struct _BRUSHOBJ *v90; // r12
  struct _RECTL *v91; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  BOOL (__stdcall *v99)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rbx
  struct _BRUSHOBJ *v100; // r12
  __int64 v101; // rcx
  struct _KTHREAD *v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 *v106; // rax
  __int64 v107; // rax
  void *v108; // rcx
  int v110; // ecx
  __int64 v111; // rax
  LONG v112; // ecx
  __m128i si128; // xmm1
  LONG v114; // eax
  LONG v115; // r10d
  LONG v116; // edx
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // r12
  __int64 v120; // rbx
  int v121; // eax
  __int64 v122; // rcx
  __int64 v123; // r8
  LONG v124; // edx
  __int64 v125; // r12
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // rcx
  __int64 v129; // rcx
  int v130; // eax
  LONG v131; // ecx
  LONG v132; // eax
  int v133; // r10d
  int v134; // r11d
  unsigned __int64 v135; // rcx
  int v136; // r13d
  int v137; // r12d
  unsigned __int64 v138; // rcx
  int v139; // r8d
  int v140; // edx
  struct EXFORMOBJ *v141; // rdx
  int v142; // r9d
  __int64 v143; // rcx
  __int64 v144; // rax
  int v145; // ebx
  char v146; // al
  unsigned int v147; // eax
  LONG v148; // eax
  LONG v149; // eax
  LONG v150; // r9d
  int v151; // r8d
  __int64 v152; // rdx
  __int64 v153; // r8
  ERECTL *i; // rdx
  __int64 v155; // rdx
  __int64 v156; // rdx
  unsigned int v157; // eax
  char v158; // bl
  struct EXFORMOBJ *v159; // rdx
  struct XDCOBJ *v160; // r8
  int v161; // r9d
  int v162; // eax
  struct _RECTL *v163; // rbx
  bool v164; // zf
  struct EXFORMOBJ *v165; // rdx
  int v166; // r9d
  int v167; // eax
  int v168; // eax
  LONG iUniq; // ecx
  LONG v170; // eax
  signed int flXlate; // edx
  unsigned __int64 cEntries; // r8
  struct XDCOBJ *v173; // r8
  int v174; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v177; // rcx
  __int64 CurrentThreadProcess; // rax
  struct XDCOBJ *v179; // r8
  int v180; // eax
  int v181; // eax
  __int64 j; // rdx
  __int64 k; // rdx
  int v184; // eax
  __int64 v185; // rax
  int v186; // ebx
  __int64 v187; // rcx
  __int64 v188; // rax
  RECTL v189; // xmm6
  LONG *p_top; // r13
  LONG v191; // edx
  LONG *v192; // rcx
  struct _SURFOBJ *v193; // r8
  struct _SURFOBJ *v194; // r9
  LONG v195; // ecx
  LONG v196; // eax
  LONG v197; // ecx
  LONG v198; // eax
  struct _XLATEOBJ *v199; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v200; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v201; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v202; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v203; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v204; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v205; // [rsp+40h] [rbp-D0h]
  unsigned int v206; // [rsp+48h] [rbp-C8h]
  unsigned int v207; // [rsp+58h] [rbp-B8h]
  __int64 v208; // [rsp+90h] [rbp-80h] BYREF
  struct _BRUSHOBJ *v209; // [rsp+98h] [rbp-78h] BYREF
  struct _BRUSHOBJ *v210; // [rsp+A0h] [rbp-70h]
  struct _POINTL *v211; // [rsp+A8h] [rbp-68h]
  __int64 v212; // [rsp+B0h] [rbp-60h] BYREF
  int v213; // [rsp+B8h] [rbp-58h] BYREF
  struct _XLATEOBJ *v214; // [rsp+C0h] [rbp-50h]
  struct _RECTL *v215; // [rsp+C8h] [rbp-48h]
  int v216; // [rsp+D0h] [rbp-40h] BYREF
  struct _BRUSHOBJ *v217; // [rsp+D4h] [rbp-3Ch] BYREF
  LONG v218; // [rsp+DCh] [rbp-34h] BYREF
  int v219[4]; // [rsp+E0h] [rbp-30h] BYREF
  struct _RECTL v220; // [rsp+F0h] [rbp-20h] BYREF
  BOOL v221; // [rsp+100h] [rbp-10h]
  int v222; // [rsp+104h] [rbp-Ch]
  struct _XLATEOBJ v223; // [rsp+108h] [rbp-8h] BYREF
  struct _RECTL *v224; // [rsp+120h] [rbp+10h] BYREF
  int v225; // [rsp+128h] [rbp+18h] BYREF
  int v226; // [rsp+12Ch] [rbp+1Ch] BYREF
  unsigned __int16 *v227; // [rsp+130h] [rbp+20h] BYREF
  int *v228; // [rsp+138h] [rbp+28h] BYREF
  __int64 v229; // [rsp+140h] [rbp+30h] BYREF
  int v230; // [rsp+148h] [rbp+38h]
  _QWORD v231[2]; // [rsp+150h] [rbp+40h] BYREF
  _QWORD v232[2]; // [rsp+160h] [rbp+50h] BYREF
  _BYTE v233[8]; // [rsp+170h] [rbp+60h] BYREF
  __int64 v234; // [rsp+178h] [rbp+68h]
  PATHOBJ v235; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 v236; // [rsp+1F8h] [rbp+E8h]
  PATHOBJ ppo; // [rsp+270h] [rbp+160h] BYREF
  __int64 v238; // [rsp+278h] [rbp+168h]
  PATHOBJ v239; // [rsp+2F0h] [rbp+1E0h] BYREF
  __int64 v240; // [rsp+2F8h] [rbp+1E8h]
  _BYTE v241[8]; // [rsp+370h] [rbp+260h] BYREF
  __int64 v242; // [rsp+378h] [rbp+268h]
  PATHOBJ v243; // [rsp+3F0h] [rbp+2E0h] BYREF
  __int64 v244; // [rsp+3F8h] [rbp+2E8h]
  PATHOBJ v245; // [rsp+470h] [rbp+360h] BYREF
  __int64 v246; // [rsp+478h] [rbp+368h]
  struct _RECTL rclBkGround; // [rsp+4F0h] [rbp+3E0h] BYREF
  struct _RECTL v248; // [rsp+500h] [rbp+3F0h] BYREF
  void *v249[2]; // [rsp+510h] [rbp+400h] BYREF
  struct _CLIPOBJ v250; // [rsp+520h] [rbp+410h] BYREF
  __int64 v251; // [rsp+558h] [rbp+448h]
  __int64 v252; // [rsp+570h] [rbp+460h]
  int v253; // [rsp+578h] [rbp+468h]
  int v254; // [rsp+5A0h] [rbp+490h]
  __int64 v255; // [rsp+5B0h] [rbp+4A0h]
  struct _RECTL v256; // [rsp+5C0h] [rbp+4B0h] BYREF
  STROBJ pstro; // [rsp+5D0h] [rbp+4C0h] BYREF
  __int64 v258; // [rsp+610h] [rbp+500h]
  int v259; // [rsp+620h] [rbp+510h]
  int v260; // [rsp+624h] [rbp+514h]
  int v261; // [rsp+650h] [rbp+540h]
  _BYTE v262[100]; // [rsp+654h] [rbp+544h] BYREF
  int v263; // [rsp+6B8h] [rbp+5A8h]
  void *v264; // [rsp+6D8h] [rbp+5C8h]
  struct _POINTL v265; // [rsp+710h] [rbp+600h] BYREF
  LONG v266; // [rsp+718h] [rbp+608h]
  LONG v267; // [rsp+71Ch] [rbp+60Ch]
  LONG v268; // [rsp+720h] [rbp+610h]
  LONG v269; // [rsp+724h] [rbp+614h]
  int v270; // [rsp+728h] [rbp+618h]
  int v271; // [rsp+72Ch] [rbp+61Ch]
  struct _POINTL v272; // [rsp+730h] [rbp+620h] BYREF

  v11 = 0LL;
  v12 = a5;
  v227 = a6;
  v249[0] = a10;
  v14 = 128;
  v15 = 4;
  HIDWORD(v217) = a3;
  if ( (a4 & 0x10) == 0 )
    v15 = 2;
  LODWORD(v217) = a2;
  v16 = *(_QWORD *)a1;
  LODWORD(v209) = v15;
  v228 = a8;
  v221 = 0;
  v17 = *(_DWORD *)(v16 + 248);
  v222 = 0;
  if ( (v17 & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_237;
  if ( (*(_DWORD *)(v16 + 36) & 0x10000) == 0 )
  {
    LODWORD(v211) = a4 & 0x2000;
    if ( (a4 & 0x2000) != 0 && !a8 )
    {
LABEL_237:
      EngSetLastError(0x57u);
      return 0LL;
    }
    v18 = a4 & 0xFFFFC36F;
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
          v12 = 0LL;
          v18 = a4 & 0xFFFFC36D;
        }
      }
    }
    else
    {
      v18 = a4 & 0xFFFFC369;
    }
    v19 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 || v18 && (!v12 || (v18 & 0xFFFFFFF9) != 0) )
      return 0;
    v20 = *(_DWORD *)(v19 + 248) & 1;
    if ( v20 )
    {
      if ( (v18 & 4) != 0 )
        return 0;
    }
    LOBYTE(v21) = 0;
    rclBkGround = 0LL;
    if ( v20 )
    {
      v26 = 0;
      v216 = 0;
      v215 = 0LL;
      v22 = 0;
      v213 = 0;
      LODWORD(v23) = 0;
      LODWORD(v24) = 0;
      LODWORD(v223.pulXlate) = 0;
      LODWORD(v25) = 0;
      LODWORD(v214) = 0;
    }
    else
    {
      v224 = *(struct _RECTL **)(v19 + 8LL * (*(_DWORD *)(v19 + 40) & 1) + 1016);
      v22 = (int)v224;
      v223.pulXlate = (ULONG *)((unsigned __int64)v224 >> 32);
      v23 = (unsigned __int64)v224 >> 32;
      v24 = (unsigned __int64)v224 >> 32;
      v25 = (unsigned __int64)v224 >> 32;
      v26 = (int)v224;
      v214 = (struct _XLATEOBJ *)((unsigned __int64)v224 >> 32);
      v213 = HIDWORD(v224);
      v215 = v224;
      v216 = (int)v224;
    }
    v210 = (struct _BRUSHOBJ *)(unsigned int)(16 * v23);
    v27 = *(_QWORD *)(v19 + 976);
    v28 = (unsigned int)(16 * v22);
    v212 = v28;
    *(_DWORD *)&v223.iSrcType = *(_DWORD *)(v27 + 208);
    v223.cEntries = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 108LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 976) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v223, a1, 0x204u, 0);
      LODWORD(v24) = v223.pulXlate;
      v11 = 0LL;
      LODWORD(v25) = (_DWORD)v214;
    }
    else
    {
      *(_QWORD *)&v223.iUniq = v19 + 320;
    }
    v224 = 0LL;
    if ( !v12 )
    {
LABEL_33:
      p_rclBkGround = 0LL;
      v214 = 0LL;
      v215 = 0LL;
      v208 = 0LL;
      v263 = 0;
      if ( !a7 )
        goto LABEL_84;
      v37 = *(struct DC **)a1;
      v38 = (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0;
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 )
      {
        p_rclBkGround = (SURFACE *)*((_QWORD *)v37 + 62);
        SURFACE::bUnMap(p_rclBkGround, 0LL, v37);
      }
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v208, a1, v38, (unsigned int)v209) )
        GreAcquireSemaphore(*(_QWORD *)(v208 + 504));
      if ( p_rclBkGround )
        SURFACE::Map(p_rclBkGround, 0LL);
      if ( !v208 )
        goto LABEL_289;
      v222 = *(_DWORD *)(v208 + 88) & 2;
      v221 = v222 && (*(_DWORD *)(v208 + 716) & 0x8000) == 0;
      v39 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
      v21 = *(_DWORD *)(*(_QWORD *)a1 + 1760LL) | *(_DWORD *)(v39 + 272) & 0x11F;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 1760LL) & 1 | *(_BYTE *)(v39 + 272) & 1 )
      {
        v117 = *(_DWORD *)(v39 + 152);
        if ( (v117 & 0x200) == 0 )
        {
          v151 = (int)v210;
          *(_DWORD *)(v39 + 152) = v117 | 0x100;
          v152 = *(_QWORD *)a1;
          v42 = v28 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL);
          LODWORD(v209) = v42;
          v43 = *(_DWORD *)(*(_QWORD *)(v152 + 976) + 12LL) + v151;
LABEL_46:
          v44 = *(_QWORD *)a1;
          HIDWORD(v209) = v43;
          ESTROBJ::vInit(
            (ESTROBJ *)&pstro,
            v227,
            a7,
            a1,
            (struct RFONTOBJ *)&v208,
            (struct EXFORMOBJ *)&v223,
            v228,
            (int)v211,
            *(_DWORD *)(v44 + 1764),
            *(_DWORD *)(*(_QWORD *)(v44 + 976) + 280LL),
            *(_DWORD *)(*(_QWORD *)(v44 + 976) + 284LL),
            *(_DWORD *)(*(_QWORD *)(v44 + 976) + 288LL),
            v42,
            v43,
            v21,
            0LL,
            v249[0],
            a11);
          if ( (v263 & 4) != 0 )
          {
            v45 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v272, &pstro.rclBkGround);
            v46 = v45;
            left = pstro.rclBkGround.left;
            right = pstro.rclBkGround.right;
            if ( (*(_DWORD *)(v208 + 12) & 0x10000000) != 0 )
            {
              left = pstro.rclBkGround.left - 1;
              right = pstro.rclBkGround.right + 1;
              --pstro.rclBkGround.left;
              ++pstro.rclBkGround.right;
            }
            if ( (v263 & 0x1400) != 0 )
            {
              ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v272, v45);
              right = pstro.rclBkGround.right;
              left = pstro.rclBkGround.left;
            }
            if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == rclBkGround.bottom )
            {
              rclBkGround = pstro.rclBkGround;
            }
            else
            {
              if ( left < rclBkGround.left )
                rclBkGround.left = left;
              if ( pstro.rclBkGround.top < rclBkGround.top )
                rclBkGround.top = pstro.rclBkGround.top;
              if ( right > rclBkGround.right )
                rclBkGround.right = right;
              if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
                rclBkGround.bottom = pstro.rclBkGround.bottom;
            }
            if ( a9 == 2 )
            {
              if ( !v46 )
              {
                p_rclBkGround = (SURFACE *)&pstro.rclBkGround;
                v214 = (struct _XLATEOBJ *)&pstro.rclBkGround;
LABEL_64:
                if ( left >= right || pstro.rclBkGround.top >= pstro.rclBkGround.bottom )
                {
                  v49 = 1;
                  v11 = 0LL;
                }
                else
                {
                  v11 = 0LL;
                  v49 = 0;
                }
                v50 = v248.left;
                if ( (v14 & 8) == 0
                  || v248.left > left
                  || v248.right < right
                  || v248.bottom < pstro.rclBkGround.bottom
                  || v248.top > pstro.rclBkGround.top
                  || v49 )
                {
                  if ( !p_rclBkGround )
                  {
                    if ( v49 )
                      goto LABEL_77;
                    goto LABEL_76;
                  }
                }
                else
                {
                  p_rclBkGround = (SURFACE *)&v248;
                  v14 &= ~8u;
                  v214 = (struct _XLATEOBJ *)&v248;
                }
                if ( *(_DWORD *)p_rclBkGround >= *((_DWORD *)p_rclBkGround + 2)
                  || *((_DWORD *)p_rclBkGround + 1) >= *((_DWORD *)p_rclBkGround + 3) )
                {
                  goto LABEL_77;
                }
LABEL_76:
                v14 |= 1u;
LABEL_77:
                if ( (v21 & 0xA0) != 0 )
                {
                  if ( v261 )
                  {
                    v215 = (struct _RECTL *)v262;
                    for ( i = (ERECTL *)v262; !(unsigned int)ERECTL::bEmpty(i); i = (ERECTL *)(v156 + 16) )
                      ERECTL::operator+=(&rclBkGround, v155);
                    v11 = 0LL;
                  }
                  else
                  {
                    v215 = 0LL;
                    v14 |= 4u;
                  }
                }
                if ( (v18 & 4) != 0 )
                {
                  if ( v50 > rclBkGround.left
                    || v248.right < rclBkGround.right
                    || v248.top > rclBkGround.top
                    || v248.bottom < rclBkGround.bottom )
                  {
                    ERECTL::operator*=(&rclBkGround);
                    v11 = 0LL;
                  }
                  else
                  {
                    LOBYTE(v18) = -5;
                  }
                }
LABEL_84:
                if ( (v21 & 1) != 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) += v259;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 12LL) += v260;
                }
                v51 = *(_QWORD *)a1;
                if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0 )
                {
                  v157 = 0;
                  if ( (v18 & 4) == 0 )
                    v157 = v14;
                  v14 = v157;
                  v158 = v157;
                  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v233, a1);
                  if ( v234 )
                  {
                    if ( (v158 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v233, &v248) )
                      v14 = 0;
                    if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v233, v159, &v265, v161) )
                      v14 = 0;
                    if ( (v14 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v233, v159, &v272, v161) )
                      v14 = 0;
                    if ( (v14 & 1) != 0
                      && (!p_rclBkGround
                       || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v233, (struct _RECTL *)p_rclBkGround)) )
                    {
                      if ( (v263 & 0x1400) != 0 )
                        v162 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)v233, v160);
                      else
                        v162 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v233);
                      if ( v162 )
                      {
                        v163 = v215;
                        if ( v215 )
                        {
                          while ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v163) )
                          {
                            if ( !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v233, v163) )
                              goto LABEL_313;
                            ++v163;
                          }
                        }
                      }
                      else
                      {
LABEL_313:
                        v14 = 0;
                      }
                    }
                    if ( (v14 & 4) != 0
                      && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v233) )
                    {
                      v14 = 0;
                    }
                  }
                  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v233);
                  v59 = 1;
                  goto LABEL_162;
                }
                if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == rclBkGround.bottom )
                  goto LABEL_161;
                v52 = *(_DWORD *)(v51 + 36);
                if ( (v52 & 0xE0) != 0 )
                {
                  v53 = *(_DWORD *)(v51 + 40) & 1;
                  v220 = rclBkGround;
                  v54 = *(_DWORD *)(v51 + 8 * v53 + 1016);
                  v55 = rclBkGround.left - v54;
                  v220.right = rclBkGround.right - v54;
                  v56 = *(_DWORD *)(v51 + 8 * v53 + 1020);
                  v57 = v51;
                  v220.top = rclBkGround.top - v56;
                  v220.bottom = rclBkGround.bottom - v56;
                  v220.left = v55;
                  if ( (v52 & 0x20) != 0 )
                  {
                    ERECTL::operator|=(v51 + 1064, &v220);
                    v57 = *(_QWORD *)a1;
                  }
                  v51 = v57;
                  if ( (*(_DWORD *)(v57 + 36) & 0x80u) != 0 )
                  {
                    ERECTL::operator|=(v57 + 1096, &v220);
                    v51 = *(_QWORD *)a1;
                  }
                }
                if ( v222 || (v18 & 4) != 0 )
                {
                  v59 = 1;
                  v58 = 1;
                }
                else
                {
                  v58 = v11;
                  v59 = 1;
                }
                v60 = *(_QWORD *)(v51 + 1176);
                if ( !v60
                  || (*(_DWORD *)(v51 + 40) & 2) == 0
                  || (v164 = (unsigned int)DC::bDpiScaledSurface((DC *)v51) == 0, v61 = v60, v164) )
                {
                  v61 = *(_QWORD *)(v51 + 1160);
                }
                if ( v61 )
                {
                  if ( !v60 || (*(_DWORD *)(v51 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v51) )
                    v62 = *(struct REGION **)(v51 + 1160);
                }
                else
                {
                  v62 = DC::prgnVisSnap((DC *)v51);
                }
                v251 = v11;
                v252 = v11;
                v253 = v11;
                v254 = 1;
                v255 = v11;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&v250, v62, (struct ERECTL *)&rclBkGround, v58);
                rclBounds = v250.rclBounds;
                v65 = (unsigned int)_mm_cvtsi128_si32((__m128i)v250.rclBounds);
                v66 = _mm_srli_si128((__m128i)v250.rclBounds, 8);
                rclBkGround = v250.rclBounds;
                v250.rclBounds.left = v65;
                if ( (_DWORD)v65 == _mm_cvtsi128_si32(v66)
                  || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                   _mm_srli_si128(
                                                                                     (__m128i)rclBounds,
                                                                                     12)) )
                {
                  goto LABEL_162;
                }
                v67 = *(_QWORD *)a1;
                v68 = *(_QWORD *)a1;
                v69 = *(unsigned int *)(*(_QWORD *)a1 + 36LL);
                if ( (v69 & 0xE0) != 0 )
                {
                  *(RECTL *)v249 = rclBounds;
                  v70 = *(_DWORD *)(v67 + 40) & 1;
                  v65 = (unsigned int)(v65 - *(_DWORD *)(v67 + 8 * v70 + 1016));
                  LODWORD(v249[0]) = v65;
                  v63 = (unsigned int)(rclBounds.right - *(_DWORD *)(v67 + 8 * v70 + 1016));
                  LODWORD(v249[1]) = rclBounds.right - *(_DWORD *)(v67 + 8 * v70 + 1016);
                  v71 = rclBounds.top - *(_DWORD *)(v67 + 8 * v70 + 1020);
                  HIDWORD(v249[0]) = v71;
                  HIDWORD(v249[1]) = rclBounds.bottom - *(_DWORD *)(v67 + 8 * v70 + 1020);
                  if ( (v69 & 0x40) != 0 )
                  {
                    v69 = *(unsigned int *)(v67 + 1080);
                    if ( (_DWORD)v69 == *(_DWORD *)(v67 + 1088) || *(_DWORD *)(v67 + 1084) == *(_DWORD *)(v67 + 1092) )
                    {
                      *(_OWORD *)(v67 + 1080) = *(_OWORD *)v249;
                    }
                    else
                    {
                      if ( (int)v65 < (int)v69 )
                      {
                        *(_DWORD *)(v67 + 1080) = v65;
                        v63 = LODWORD(v249[1]);
                        v71 = HIDWORD(v249[0]);
                      }
                      if ( v71 < *(_DWORD *)(v67 + 1084) )
                      {
                        *(_DWORD *)(v67 + 1084) = v71;
                        v63 = LODWORD(v249[1]);
                      }
                      if ( (int)v63 > *(_DWORD *)(v67 + 1088) )
                        *(_DWORD *)(v67 + 1088) = v63;
                      if ( SHIDWORD(v249[1]) > *(_DWORD *)(v67 + 1092) )
                        *(_DWORD *)(v67 + 1092) = HIDWORD(v249[1]);
                    }
                    v68 = *(_QWORD *)a1;
                    v223.pulXlate = *(ULONG **)(*(_QWORD *)a1 + 1192LL);
                    if ( v223.pulXlate )
                    {
                      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v232);
                      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v232);
                      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v231);
                      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v231);
                      if ( v232[0] )
                      {
                        if ( v231[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v231, (struct _RECTL *)v249);
                          if ( RGNOBJ::bMerge(
                                 (RGNOBJ *)v232,
                                 (struct RGNOBJ *)&v223.pulXlate,
                                 (struct RGNOBJ *)v231,
                                 0xEu) )
                          {
                            RGNOBJ::vSwap((RGNOBJ *)&v223.pulXlate, (struct RGNOBJ *)v232);
                            *(_QWORD *)(*(_QWORD *)a1 + 1192LL) = v223.pulXlate;
                          }
                        }
                      }
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v231);
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v232);
                      v68 = *(_QWORD *)a1;
                    }
                  }
                }
                v72 = *(_QWORD *)(v68 + 496);
                if ( !v72
                  || ((*(_DWORD *)(v72 + 116) & 8) != 0 || *(_QWORD *)(v72 + 224))
                  && (v67 = 512LL, (*(_WORD *)(v72 + 102) & 0x200) != 0) )
                {
LABEL_162:
                  if ( (v263 & 0x801) != 0 )
                  {
                    if ( (v263 & 1) != 0 )
                      FreeTmpBuffer(v258);
                    if ( (v263 & 0x800) != 0 )
                      Win32FreePool(v264);
                  }
                  if ( v208 )
                  {
                    if ( (*(_DWORD *)(v208 + 712) & 0x81) != 0 )
                      RFONTOBJ::dtorHelper((RFONTOBJ *)&v208);
                    v108 = *(void **)(v208 + 616);
                    if ( v108 )
                    {
                      Win32FreePool(v108);
                      *(_QWORD *)(v208 + 624) = 0LL;
                      *(_QWORD *)(v208 + 616) = 0LL;
                    }
                    EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v208 + 504));
                    GreReleaseSemaphoreInternal(*(_QWORD *)(v208 + 504));
                  }
                  if ( v224 )
                    TXTCLEANUP::vMopUp((TXTCLEANUP *)&v224);
                  if ( v14 )
                    return v59;
                  return 0;
                }
                v73 = *(_DWORD *)(v72 + 112);
                if ( (v73 & 0x800) != 0 )
                {
                  v74 = UserSurfaceAccessCheck(*(_QWORD *)(v72 + 648), v65, v69, v63);
                }
                else
                {
                  if ( (v73 & 0x10000000) == 0 )
                    goto LABEL_123;
                  v74 = UserScreenAccessCheck(v67, v65, v69, v63);
                }
                if ( !v74 )
                  goto LABEL_162;
LABEL_123:
                v75 = *(_QWORD *)a1;
                v76 = (struct _POINTL *)v75;
                v77 = *(_QWORD *)(v72 + 128);
                v212 = *(_QWORD *)(v72 + 48);
                v78 = *(_DWORD *)(v75 + 72);
                v79 = v75 + 1480;
                v80 = *(_QWORD *)(v75 + 88);
                v81 = (struct _BRUSHOBJ *)(v75 + 1616);
                v210 = (struct _BRUSHOBJ *)(v75 + 1480);
                v82 = 0;
                v209 = (struct _BRUSHOBJ *)(v75 + 1616);
                if ( (v78 & 0x10000000) != 0 )
                {
                  v82 = !v221;
                  *(_DWORD *)(*(_QWORD *)(v75 + 976) + 152LL) |= 4u;
                  --*(_DWORD *)(v75 + 1604);
                  v75 = *(_QWORD *)a1;
                  v76 = *(struct _POINTL **)a1;
                }
                v83 = *(_QWORD *)(v75 + 976);
                if ( ((*(_BYTE *)(v75 + 316) | *(_BYTE *)(v83 + 152)) & 0xC) != 0 )
                {
                  if ( ((*(_BYTE *)(v75 + 316) | *(_BYTE *)(v83 + 152)) & 4) != 0 )
                  {
                    EBRUSHOBJ::vInitBrush(v79, v75, gpbrText, v80, v77, v72, v82);
                    v75 = *(_QWORD *)a1;
                  }
                  if ( ((*(_BYTE *)(v75 + 316) | *(_BYTE *)(*(_QWORD *)(v75 + 976) + 152LL)) & 8) != 0 )
                  {
                    EBRUSHOBJ::vInitBrush(v81, v75, gpbrBackground, v80, v77, v72, (v78 >> 15) & 1);
                    v75 = *(_QWORD *)a1;
                  }
                  *(_DWORD *)(*(_QWORD *)(v75 + 976) + 152LL) &= 0xFFFFFFF3;
                  *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= 0xFFFFFFF3;
                  v76 = *(struct _POINTL **)a1;
                }
                v84 = v76 + 150;
                v211 = v76 + 150;
                if ( (v14 & 0x1A) != 0 )
                {
                  if ( (v14 & 8) == 0 || (unsigned int)ERECTL::bEmpty((ERECTL *)&v248) )
                  {
                    bottom = rclBkGround.bottom;
                    LODWORD(v86) = rclBkGround.right;
                    top = rclBkGround.top;
                    v88 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                  }
                  else
                  {
                    v88 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                    v112 = v248.left;
                    rclBkGround.left = (int)v88;
                    if ( (int)v88 > v248.left )
                      v112 = (int)v88;
                    si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                    v114 = v248.right;
                    v115 = v248.top;
                    v86 = (struct _SURFOBJ *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
                    top = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
                    v250.rclBounds.left = v112;
                    rclBkGround.right = (int)v86;
                    if ( (int)v86 < v248.right )
                      v114 = (int)v86;
                    rclBkGround.top = top;
                    v250.rclBounds.right = v114;
                    if ( top > v248.top )
                      v115 = top;
                    v116 = v248.bottom;
                    bottom = _mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&rclBkGround), 12));
                    v250.rclBounds.top = v115;
                    rclBkGround.bottom = bottom;
                    if ( bottom < v248.bottom )
                      v116 = bottom;
                    v250.rclBounds.bottom = v116;
                    if ( v112 < v114 && v115 < v116 )
                    {
                      ++*(_DWORD *)(v72 + 92);
                      TextOutBitBlt(
                        (struct SURFACE *)v72,
                        (struct RFONTOBJ *)&v208,
                        v86,
                        v88,
                        &v250,
                        v199,
                        &v250.rclBounds,
                        v200,
                        v205,
                        v81,
                        v84,
                        v207);
                      bottom = rclBkGround.bottom;
                      LODWORD(v86) = rclBkGround.right;
                      v88 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                      top = rclBkGround.top;
                    }
                    v250.rclBounds = rclBkGround;
                  }
                  if ( (v14 & 0x12) != 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                    if ( !v238 )
                      goto LABEL_343;
                    if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v165, &v265, v166) )
                      v14 = 0;
                    if ( (v14 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v165, &v272, v166) )
                      v14 = 0;
                    if ( (v14 & 0x12) != 0 )
                    {
                      v167 = EPATHOBJ::bTextOutSimpleFill(
                               &ppo,
                               a1,
                               (struct RFONTOBJ *)&v208,
                               (struct PDEVOBJ *)&v212,
                               (struct SURFACE *)v72,
                               &v250,
                               v81,
                               v84,
                               (unsigned int)v205,
                               v206);
                      v89 = 0LL;
                      if ( !v167 )
                        v14 = 0;
                    }
                    else
                    {
LABEL_343:
                      v89 = 0LL;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                    bottom = rclBkGround.bottom;
                    LODWORD(v86) = rclBkGround.right;
                    v88 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                    top = rclBkGround.top;
LABEL_129:
                    if ( (v14 & 1) == 0 )
                    {
                      v100 = v210;
LABEL_160:
                      if ( (v14 & 4) == 0 )
                      {
LABEL_161:
                        v59 = 1;
                        goto LABEL_162;
                      }
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v245);
                      if ( !v246
                        || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v245)
                        || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                            &v245,
                                            a1,
                                            (struct RFONTOBJ *)&v208,
                                            (struct PDEVOBJ *)&v212,
                                            (struct SURFACE *)v72,
                                            &v250,
                                            v100,
                                            v84,
                                            (unsigned int)v205,
                                            v206) )
                      {
                        v14 = 0;
                      }
                      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v245);
                      v59 = 1;
                      goto LABEL_162;
                    }
                    if ( v222 )
                    {
                      LOWORD(v78) = -257;
                      v168 = 64;
                      if ( (*(_DWORD *)(v208 + 716) & 0x8000) == 0 )
                        v168 = 32;
                      v14 |= v168;
                    }
                    if ( v214 && (v78 & 0x100) == 0 )
                    {
                      iUniq = v214->iUniq;
                      v170 = *(_DWORD *)&v214->iSrcType;
                      flXlate = v214->flXlate;
                      if ( (int)v88 > (signed int)v214->iUniq )
                        iUniq = (int)v88;
                      v90 = v209;
                      v250.rclBounds.left = iUniq;
                      if ( (int)v86 < v170 )
                        v170 = (int)v86;
                      cEntries = v214->cEntries;
                      v250.rclBounds.right = v170;
                      if ( top > flXlate )
                        flXlate = top;
                      v250.rclBounds.top = flXlate;
                      if ( bottom < (int)cEntries )
                        cEntries = (unsigned int)bottom;
                      v250.rclBounds.bottom = cEntries;
                      if ( iUniq < v170 && flXlate < (int)cEntries )
                      {
                        ++*(_DWORD *)(v72 + 92);
                        TextOutBitBlt(
                          (struct SURFACE *)v72,
                          (struct RFONTOBJ *)&v208,
                          (struct _SURFOBJ *)cEntries,
                          v88,
                          &v250,
                          v199,
                          &v250.rclBounds,
                          v200,
                          v205,
                          v90,
                          v84,
                          v207);
                      }
                      v250.rclBounds = rclBkGround;
                      v214 = 0LL;
                    }
                    else
                    {
                      v90 = v209;
                    }
                    v91 = v215;
                    if ( v215 && *(_DWORD *)(v212 + 2140) != 4 )
                    {
                      v89 = v215;
                      v215 = 0LL;
                    }
                    if ( (v14 & 0x20) == 0 )
                    {
                      CurrentThread = KeGetCurrentThread();
                      if ( (!(unsigned __int8)KeIsAttachedProcess(v91)
                         || (CurrentProcess = PsGetCurrentProcess(v94, v93, v95),
                             ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                             CurrentThreadProcess = PsGetCurrentThreadProcess(v177),
                             ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
                        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
                        && (v97 = *ThreadWin32Thread) != 0 )
                      {
                        v98 = *(_QWORD *)(v97 + 304);
                      }
                      else
                      {
                        v98 = *(_QWORD *)(v72 + 104);
                      }
                      if ( v98 )
                        SURFACE::pdcoAA((SURFACE *)v72, 0LL);
                      if ( (*(_DWORD *)(v72 + 112) & 8) != 0 )
                        v99 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v72 + 48) + 2872LL);
                      else
                        v99 = EngTextOut;
                      if ( (char *)v99 == (char *)SpTextOut || (char *)v99 == (char *)BmpDevTextOut )
                      {
                        if ( (*(_DWORD *)(v208 + 12) & 0x10010000) != 0 )
                          SURFACE::pdcoAA((SURFACE *)v72, a1);
                      }
                      else
                      {
                        v110 = *(_DWORD *)(v208 + 12);
                        if ( (v110 & 0x10000) == 0 )
                          goto LABEL_147;
                        v111 = *(_QWORD *)a1;
                        if ( (v110 & 0x10000000) != 0 )
                        {
                          if ( (*(_DWORD *)(v111 + 76) & 0x4000) != 0 )
                            goto LABEL_147;
                        }
                        else if ( (*(_DWORD *)(v111 + 72) & 0x1000000) != 0 )
                        {
                          goto LABEL_147;
                        }
                        if ( v99 != EngTextOut )
                          SURFACE::pdcoAA((SURFACE *)v72, a1);
                        v99 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                      }
LABEL_147:
                      if ( (v14 & 0x40) == 0 )
                      {
                        ++*(_DWORD *)(v72 + 92);
                        if ( (v14 & 4) == 0 )
                        {
                          if ( (v263 & 0x1400) == 0 )
                          {
                            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8080) == 0x80
                              && !*(_DWORD *)(v208 + 92) )
                            {
                              v227 = (unsigned __int16 *)ghsemPrintKView;
                              GreAcquireSemaphore(ghsemPrintKView);
                              for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                              {
                                if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v208 + 128) + 80LL) )
                                  ++*(_DWORD *)(j + 12);
                              }
                              SEMOBJ::vUnlock((SEMOBJ *)&v227);
                            }
                            v206 = 3341;
                            v205 = v211;
                            v200 = (struct _POINTL *)v90;
                            v100 = v210;
                            v199 = v214;
                            if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v99)(
                                    v72 + 24,
                                    &pstro,
                                    v208,
                                    &v250,
                                    v215) )
                              v14 = 0;
                            v101 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
                            if ( (*(_DWORD *)(v101 + 40) & 0x8080) == 0x80 && !*(_DWORD *)(v208 + 92) )
                            {
                              v228 = (int *)ghsemPrintKView;
                              GreAcquireSemaphore(ghsemPrintKView);
                              for ( k = gpPrintKViewList; k; k = *(_QWORD *)(k + 32) )
                              {
                                if ( *(_QWORD *)k == *(_QWORD *)(*(_QWORD *)(v208 + 128) + 80LL) )
                                {
                                  v184 = *(_DWORD *)(k + 12);
                                  if ( v184 )
                                    *(_DWORD *)(k + 12) = v184 - 1;
                                }
                              }
                              SEMOBJ::vUnlock((SEMOBJ *)&v228);
                            }
                            v84 = v211;
                            goto LABEL_155;
                          }
                          v84 = v211;
                          v201 = (struct _POINTL *)v90;
                          v100 = v210;
                          v130 = bProxyDrvTextOut(
                                   a1,
                                   (struct SURFACE *)v72,
                                   (struct ESTROBJ *)&pstro,
                                   &v250,
                                   v215,
                                   (struct _RECTL *)v214,
                                   v210,
                                   (struct _BRUSHOBJ *)v201,
                                   v211,
                                   (struct RFONTOBJ *)&v208,
                                   (struct PDEVOBJ *)&v212,
                                   0,
                                   &rclBkGround);
LABEL_234:
                          if ( !v130 )
                            v14 = 0;
                          goto LABEL_155;
                        }
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v243);
                        if ( v244
                          && (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v243) )
                        {
                          if ( (v263 & 0x1400) != 0 )
                          {
                            v84 = v211;
                            v204 = (struct _POINTL *)v90;
                            v100 = v210;
                            if ( (unsigned int)bProxyDrvTextOut(
                                                 a1,
                                                 (struct SURFACE *)v72,
                                                 (struct ESTROBJ *)&pstro,
                                                 &v250,
                                                 v215,
                                                 (struct _RECTL *)v214,
                                                 v210,
                                                 (struct _BRUSHOBJ *)v204,
                                                 v211,
                                                 (struct RFONTOBJ *)&v208,
                                                 0LL,
                                                 0,
                                                 &rclBkGround) )
                            {
LABEL_399:
                              if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                   &v243,
                                                   a1,
                                                   (struct RFONTOBJ *)&v208,
                                                   (struct PDEVOBJ *)&v212,
                                                   (struct SURFACE *)v72,
                                                   &v250,
                                                   v100,
                                                   v84,
                                                   (unsigned int)v205,
                                                   v206) )
                                goto LABEL_403;
                            }
                          }
                          else
                          {
                            v206 = 3341;
                            v205 = v211;
                            v200 = (struct _POINTL *)v90;
                            v100 = v210;
                            v199 = v214;
                            v181 = ((__int64 (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v99)(
                                     v72 + 24,
                                     &pstro,
                                     v208,
                                     &v250,
                                     v215);
                            v84 = v211;
                            if ( v181 )
                              goto LABEL_399;
                          }
                        }
                        else
                        {
                          v100 = v210;
                          v84 = v211;
                        }
                        v14 = 0;
LABEL_403:
                        v14 &= ~4u;
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v243);
LABEL_155:
                        *(_QWORD *)(v72 + 104) = 0LL;
                        v102 = KeGetCurrentThread();
                        if ( !(unsigned __int8)KeIsAttachedProcess(v101)
                          || (v185 = PsGetCurrentProcess(v104, v103, v105),
                              v186 = PsGetProcessSessionIdEx(v185),
                              v188 = PsGetCurrentThreadProcess(v187),
                              v164 = v186 == (unsigned int)PsGetProcessSessionIdEx(v188),
                              v84 = v211,
                              v164) )
                        {
                          v106 = (__int64 *)PsGetThreadWin32Thread(v102);
                          if ( v106 )
                          {
                            v107 = *v106;
                            if ( v107 )
                              *(_QWORD *)(v107 + 304) = 0LL;
                          }
                        }
                        goto LABEL_159;
                      }
                      if ( (v263 & 0x1400) != 0 )
                      {
                        v84 = v211;
                        v203 = (struct _POINTL *)v90;
                        v100 = v210;
                        v130 = bProxyDrvTextOut(
                                 a1,
                                 (struct SURFACE *)v72,
                                 (struct ESTROBJ *)&pstro,
                                 &v250,
                                 0LL,
                                 0LL,
                                 v210,
                                 (struct _BRUSHOBJ *)v203,
                                 v211,
                                 (struct RFONTOBJ *)&v208,
                                 (struct PDEVOBJ *)&v212,
                                 *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                 &rclBkGround);
                        goto LABEL_234;
                      }
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v235);
                      if ( v236 )
                      {
                        if ( (v263 & 0x1400) != 0 )
                          v180 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v235, v179);
                        else
                          v180 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v235);
                        v84 = v211;
                        v100 = v210;
                        if ( v180
                          && (v235.cCurves <= 1
                           || (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                              &v235,
                                              a1,
                                              (struct RFONTOBJ *)&v208,
                                              (struct PDEVOBJ *)&v212,
                                              (struct SURFACE *)v72,
                                              &v250,
                                              v210,
                                              v211,
                                              (unsigned int)v205,
                                              v206)) )
                        {
                          goto LABEL_392;
                        }
                      }
                      else
                      {
                        v84 = v211;
                        v100 = v210;
                      }
                      v14 = 0;
LABEL_392:
                      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v235);
                      goto LABEL_155;
                    }
                    if ( (v263 & 0x1400) != 0 )
                    {
                      v202 = (struct _POINTL *)v90;
                      v100 = v210;
                      if ( !(unsigned int)bProxyDrvTextOut(
                                            a1,
                                            (struct SURFACE *)v72,
                                            (struct ESTROBJ *)&pstro,
                                            &v250,
                                            0LL,
                                            0LL,
                                            v210,
                                            (struct _BRUSHOBJ *)v202,
                                            v84,
                                            (struct RFONTOBJ *)&v208,
                                            (struct PDEVOBJ *)&v212,
                                            *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                            &rclBkGround) )
                        v14 = 0;
                      goto LABEL_159;
                    }
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v239);
                    if ( v240 )
                    {
                      if ( (v263 & 0x1400) != 0 )
                        v174 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v239, v173);
                      else
                        v174 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v239);
                      v100 = v210;
                      if ( v174
                        && (unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                           &v239,
                                           a1,
                                           (struct RFONTOBJ *)&v208,
                                           (struct PDEVOBJ *)&v212,
                                           (struct SURFACE *)v72,
                                           &v250,
                                           v210,
                                           v84,
                                           (unsigned int)v205) )
                      {
                        goto LABEL_374;
                      }
                    }
                    else
                    {
                      v100 = v210;
                    }
                    v14 = 0;
LABEL_374:
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v239);
LABEL_159:
                    if ( v89 )
                    {
                      v189 = v250.rclBounds;
                      ++*(_DWORD *)(v72 + 92);
                      p_top = &v89->top;
                      v220 = v189;
                      while ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(p_top - 1)) )
                      {
                        v195 = *v192;
                        v196 = p_top[1];
                        if ( (int)v194 > v195 )
                          v195 = (int)v194;
                        v250.rclBounds.left = v195;
                        if ( v191 < v196 )
                          v196 = v191;
                        v250.rclBounds.right = v196;
                        if ( v195 < v196 )
                        {
                          v197 = *p_top;
                          v198 = p_top[2];
                          if ( (int)v193 > *p_top )
                            v197 = (int)v193;
                          v250.rclBounds.top = v197;
                          if ( v189.bottom < v198 )
                            v198 = v189.bottom;
                          v250.rclBounds.bottom = v198;
                          if ( v197 < v198 )
                            TextOutBitBlt(
                              (struct SURFACE *)v72,
                              (struct RFONTOBJ *)&v208,
                              v193,
                              v194,
                              &v250,
                              v199,
                              &v250.rclBounds,
                              v200,
                              v205,
                              v100,
                              v84,
                              v207);
                        }
                        p_top += 4;
                      }
                      v250.rclBounds = v189;
                    }
                    goto LABEL_160;
                  }
                }
                else
                {
                  bottom = rclBkGround.bottom;
                  LODWORD(v86) = rclBkGround.right;
                  top = rclBkGround.top;
                  v88 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                }
                v89 = 0LL;
                goto LABEL_129;
              }
              v14 |= 0x10u;
            }
            p_rclBkGround = (SURFACE *)v214;
            goto LABEL_64;
          }
LABEL_289:
          p_rclBkGround = (SURFACE *)v214;
          v11 = 0LL;
          v14 = 0;
          goto LABEL_84;
        }
        *(_DWORD *)(v39 + 152) = v117 & 0xFFFFFDFF;
        v118 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
        *(_DWORD *)(v118 + 152) |= 0x100u;
        v119 = *(_QWORD *)&v223.iUniq;
        v120 = *(_QWORD *)a1;
        v121 = *(_DWORD *)(*(_QWORD *)&v223.iUniq + 32LL);
        if ( (v121 & 2) != 0 )
        {
          LODWORD(v209) = *(_DWORD *)(*(_QWORD *)&v223.iUniq + 24LL) + 16 * *(_DWORD *)(*(_QWORD *)(v120 + 976) + 216LL);
          HIDWORD(v209) = *(_DWORD *)(*(_QWORD *)&v223.iUniq + 28LL) + 16 * *(_DWORD *)(*(_QWORD *)(v120 + 976) + 220LL);
        }
        else if ( (v121 & 1) != 0 )
        {
          HIDWORD(v217) = 0;
          bFToL(v118, (char *)&v217 + 4, 0LL);
          LODWORD(v209) = *(_DWORD *)(v119 + 24) + HIDWORD(v217);
          LODWORD(v217) = 0;
          bFToL((unsigned int)v209, &v217, v153);
          HIDWORD(v209) = *(_DWORD *)(v119 + 28) + (_DWORD)v217;
        }
        else
        {
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)&v223,
            (struct _POINTL *)(*(_QWORD *)(v120 + 976) + 216LL),
            (struct _POINTFIX *)&v209,
            1uLL);
          v120 = *(_QWORD *)a1;
        }
        *(_QWORD *)(*(_QWORD *)(v120 + 976) + 8LL) = v209;
        v42 = v28 + (_DWORD)v209;
        v43 = (_DWORD)v210 + HIDWORD(v209);
      }
      else
      {
        v40 = *(_QWORD *)&v223.iUniq;
        v41 = *(_DWORD *)(*(_QWORD *)&v223.iUniq + 32LL);
        if ( (v41 & 2) != 0 )
        {
          v42 = v212 + 16 * (_DWORD)v217 + *(_DWORD *)(*(_QWORD *)&v223.iUniq + 24LL);
          LODWORD(v209) = v42;
          v43 = (_DWORD)v210 + 16 * HIDWORD(v217) + *(_DWORD *)(*(_QWORD *)&v223.iUniq + 28LL);
          goto LABEL_46;
        }
        if ( (v41 & 1) != 0 )
        {
          v213 = 0;
          bFToL(v39, &v213, 0LL);
          v42 = v212 + v213 + *(_DWORD *)(v40 + 24);
          v218 = 0;
          LODWORD(v209) = v42;
          bFToL(v122, &v218, v123);
          v43 = (_DWORD)v210 + v218 + *(_DWORD *)(v40 + 28);
          goto LABEL_46;
        }
        v209 = v217;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v223, (struct _POINTL *)&v209, (struct _POINTFIX *)&v209, 1uLL);
        v42 = v212 + (_DWORD)v209;
        v43 = (_DWORD)v210 + HIDWORD(v209);
      }
      LODWORD(v209) = v42;
      goto LABEL_46;
    }
    v219[0] = v18 & 2;
    v14 = 136;
    if ( (v18 & 2) == 0 )
      v14 = 128;
    v218 = v14;
    v29 = *(unsigned int *)(*(_QWORD *)&v223.iUniq + 32LL);
    if ( (v29 & 2) != 0 )
    {
      v30 = v12->left + v26 + ((*(_DWORD *)(*(_QWORD *)&v223.iUniq + 24LL) + 8) >> 4);
      v248.left = v30;
      v31 = v12->right + (_DWORD)v215 + ((*(_DWORD *)(*(_QWORD *)&v223.iUniq + 24LL) + 8) >> 4);
      v248.right = v31;
      v32 = v24 + v12->top + ((*(_DWORD *)(*(_QWORD *)&v223.iUniq + 28LL) + 8) >> 4);
      v248.top = v32;
      v33 = v25 + v12->bottom + ((*(_DWORD *)(*(_QWORD *)&v223.iUniq + 28LL) + 8) >> 4);
      v248.bottom = v33;
      goto LABEL_23;
    }
    v124 = v12->left;
    if ( (v29 & 1) != 0 )
    {
      v216 = 0;
      bFToL(v29, &v216, 0LL);
      v125 = *(_QWORD *)&v223.iUniq;
      v30 = (_DWORD)v215 + ((*(_DWORD *)(*(_QWORD *)&v223.iUniq + 24LL) + v216 + 8) >> 4);
      v248.left = v30;
      v225 = 0;
      bFToL(v126, &v225, v127);
      LODWORD(v125) = *(_DWORD *)(v125 + 24) + v225 + 8;
      v226 = 0;
      v31 = (_DWORD)v215 + ((int)v125 >> 4);
      v248.right = v31;
      bFToL(v128, &v226, 0LL);
      v248.top = v213 + ((v226 + 8 + *(_DWORD *)(*(_QWORD *)&v223.iUniq + 28LL)) >> 4);
      v218 = v248.top;
      v219[0] = 0;
      bFToL(v129, v219, 0LL);
      v32 = v218;
      v33 = v213 + ((v219[0] + 8 + *(_DWORD *)(*(_QWORD *)&v223.iUniq + 28LL)) >> 4);
      v248.bottom = v33;
    }
    else
    {
      v131 = v12->top;
      v265.y = v12->bottom;
      v132 = v12->right;
      v267 = v131;
      v269 = v131;
      v265.x = v124;
      v266 = v124;
      v268 = v132;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v223, &v265, (struct _POINTFIX *)&v265, 3uLL);
      v133 = v265.x + v268 - v266;
      v134 = v265.y + v269 - v267;
      v270 = v133;
      v271 = v134;
      v135 = (v266 > v265.x) ^ (unsigned __int64)(v266 <= v268);
      v136 = *(&v265.x + 2 * v135);
      v137 = *(&v268 + 2 * v135);
      if ( v136 > v137 )
        v136 += 15;
      else
        v137 += 15;
      v30 = v216 + (v136 >> 4);
      v31 = v216 + (v137 >> 4);
      v248.right = v31;
      v248.left = v30;
      v138 = (v267 > v265.y) ^ (unsigned __int64)(v267 <= v269);
      v139 = *(&v265.y + 2 * v138);
      v140 = *(&v269 + 2 * v138);
      if ( v139 > v140 )
        v139 += 15;
      else
        v140 += 15;
      v32 = v213 + (v139 >> 4);
      v33 = v213 + (v140 >> 4);
      v248.top = v32;
      v248.bottom = v33;
      if ( (v18 & 4) != 0 )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v241);
        if ( v242 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v241, v141, &v265, v142) )
        {
          v143 = *(_QWORD *)a1;
          v256 = 0LL;
          v256.top = 16 * (*(_DWORD *)(v143 + 1004) - v213);
          v256.bottom = 16 * (*(_DWORD *)(v143 + 1012) - v213);
          v229 = 0LL;
          v230 = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v229, (struct EPATHOBJ *)v241, 1u, &v256);
          if ( v229 )
          {
            v144 = *(_QWORD *)a1;
            v224 = (struct _RECTL *)a1;
            *(_QWORD *)(v144 + 1136) = v229;
            if ( (unsigned int)DC::bTightenRao(*(DC **)a1) )
              LOBYTE(v18) = v18 & 0xFB;
          }
          if ( v230 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v229);
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v241);
        v33 = v248.bottom;
        v11 = 0LL;
        v31 = v248.right;
        v145 = v18 & 4;
        v32 = v248.top;
        v14 = 0;
        if ( (v18 & 4) == 0 )
          v14 = v218;
        v146 = 0;
        v30 = v248.left;
        if ( (v18 & 4) == 0 )
          v146 = v18;
        LOBYTE(v18) = v146;
        v147 = 0;
        if ( !v145 )
          v147 = a7;
        a7 = v147;
LABEL_23:
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 108LL) & 1) != 0 )
        {
          ++v30;
          ++v31;
          v248.left = v30;
          v248.right = v31;
        }
        if ( v30 > v31 )
        {
          v148 = v30;
          v248.left = v31;
          v30 = v31;
          v248.right = v148;
          v31 = v148;
        }
        if ( v32 > v33 )
        {
          v149 = v32;
          v248.top = v33;
          v32 = v33;
          v248.bottom = v149;
          v33 = v149;
        }
        if ( (v14 & 0xA) != 0 )
        {
          v34 = rclBkGround.left;
          v35 = rclBkGround.right;
          if ( rclBkGround.left != rclBkGround.right )
          {
            v150 = rclBkGround.top;
            if ( rclBkGround.top != rclBkGround.bottom )
            {
              if ( v30 < rclBkGround.left )
                v34 = v30;
              LODWORD(v28) = v212;
              rclBkGround.left = v34;
              if ( v32 < rclBkGround.top )
                v150 = v32;
              rclBkGround.top = v150;
              if ( v31 > rclBkGround.right )
                v35 = v31;
              rclBkGround.right = v35;
              if ( v33 > rclBkGround.bottom )
                rclBkGround.bottom = v33;
              goto LABEL_33;
            }
          }
          rclBkGround = v248;
        }
        LODWORD(v28) = v212;
        goto LABEL_33;
      }
      if ( v219[0] )
      {
        v265.x += v212;
        v265.y += (int)v210;
        v14 = v14 & 0xFFFFFFF5 | 2;
        v266 += v212;
        v268 += v212;
        v269 += (int)v210;
        v267 += (int)v210;
        v271 = (_DWORD)v210 + v134;
        v270 = v212 + v133;
      }
    }
    v11 = 0LL;
    goto LABEL_23;
  }
  EngSetLastError(6u);
  return 0LL;
}
