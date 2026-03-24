/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C00AF5A0
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C00ACA90 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsInternal @ 0x1C0122108 (GreSetDIBitsInternal.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C004B94C (GreDereferenceObject.c)
 *     bCvtPts1 @ 0x1C0084CF0 (bCvtPts1.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0087360 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008BAEC (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0090120 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0090370 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C00B15E8 (-vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00B3108 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00B3134 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B61E0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0109700 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C01256A0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C01256D8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A69C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C016A9F8 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026CF90 (--0SURFREF@@QEAA@XZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026EC1C (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029B2BC (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029DC68 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BD93C (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BD9F8 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BFC38 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02C1168 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02C11A0 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        int a2,
        __int32 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        __int64 a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        struct _SURFOBJ *a16)
{
  int v19; // ebx
  unsigned int v20; // r12d
  __int64 v21; // r14
  __int64 v22; // r9
  int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // rbx
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // r15d
  unsigned int v30; // ecx
  unsigned int v31; // ebx
  unsigned __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  ULONG v35; // ecx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  ULONG v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  DC *v41; // rbx
  unsigned int v42; // edx
  int v43; // r13d
  __int32 v44; // edi
  __int64 v45; // r14
  unsigned int v46; // r12d
  unsigned __int64 v47; // rcx
  int v48; // edi
  int v49; // ecx
  int v50; // eax
  int v51; // edx
  int v52; // r9d
  int v53; // ecx
  __int32 v54; // eax
  __int64 v55; // r13
  struct _SURFOBJ *v56; // rax
  struct PALETTE *v57; // rbx
  __int64 v58; // rsi
  XLATEOBJ *v59; // rdi
  int v60; // r12d
  __int64 v61; // r14
  int v62; // eax
  bool v63; // zf
  int v64; // ebx
  int Xlate; // eax
  __int64 v66; // r8
  unsigned int v67; // r8d
  unsigned int v68; // r8d
  __int64 v69; // rcx
  char *v70; // rdx
  char v71; // al
  signed __int32 v72; // ecx
  __int64 v73; // r8
  __int64 v74; // rax
  XLATEOBJ *XlateObject; // rax
  DC *v76; // rsi
  int *v77; // rcx
  __int64 v78; // r9
  __int64 v79; // r8
  __int32 v80; // r12d
  int v81; // r15d
  int v82; // r13d
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rdx
  struct REGION *v86; // rdx
  struct ECLIPOBJ *v87; // rdx
  int v88; // edx
  int v89; // r8d
  __m128i v90; // xmm1
  _DWORD *v91; // rax
  __int64 v92; // r15
  int v93; // edx
  int v94; // ecx
  __int64 v95; // rax
  int v96; // r8d
  __int64 v97; // rax
  _DWORD *v98; // rax
  DC *v99; // r13
  __int64 v100; // rax
  int v101; // r12d
  int v102; // ecx
  __int64 v103; // rax
  float v104; // xmm1_4
  __int32 v105; // esi
  int v106; // r14d
  unsigned int v107; // r9d
  __int32 v108; // ecx
  __int32 v109; // eax
  unsigned int v110; // esi
  int v111; // eax
  BOOL v112; // ecx
  int v113; // eax
  BOOL (__stdcall *v114)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v115; // rdx
  BOOL (__stdcall *v116)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v117; // rdx
  unsigned int v118; // r14d
  int v119; // ecx
  int v120; // r9d
  int v121; // eax
  int v122; // edx
  int v123; // r8d
  __int32 v124; // r12d
  int v125; // ecx
  struct REGION *v126; // rax
  struct ECLIPOBJ *v127; // rdx
  unsigned int v128; // r15d
  __m128i v129; // xmm6
  struct _SURFOBJ *v130; // rax
  unsigned int v131; // r11d
  DC *v132; // r13
  int v133; // r12d
  unsigned int v134; // xmm1_4
  __int32 v135; // esi
  unsigned int v136; // r15d
  unsigned int v137; // r14d
  __int32 v138; // ecx
  __int32 v139; // eax
  unsigned int v140; // esi
  int v141; // eax
  BOOL v142; // ecx
  int v143; // eax
  BOOL (__stdcall *v144)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  int v145; // eax
  __int64 v146; // rdx
  __int64 cEntries; // rax
  DC *v148; // rcx
  __int16 v149; // ax
  __int64 v150; // rbx
  __int64 v151; // rcx
  struct _KTHREAD *v152; // rdi
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // rax
  int v157; // ebx
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 *v160; // rax
  __int64 v161; // rax
  unsigned int v162; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v170; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rax
  __int64 v176; // rdx
  HSURF v177; // rbx
  __int64 v178; // rdx
  __int64 v179; // rdx
  char v180; // bl
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rdx
  int v186; // [rsp+20h] [rbp-E0h]
  unsigned int v187; // [rsp+60h] [rbp-A0h]
  __int64 v189; // [rsp+68h] [rbp-98h]
  __int64 v190; // [rsp+70h] [rbp-90h] BYREF
  __int64 v191; // [rsp+78h] [rbp-88h] BYREF
  int v192; // [rsp+80h] [rbp-80h]
  int v193; // [rsp+84h] [rbp-7Ch]
  int v194; // [rsp+90h] [rbp-70h]
  int v195; // [rsp+A0h] [rbp-60h]
  unsigned int *v196; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v197; // [rsp+B0h] [rbp-50h]
  __int64 v198; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v199; // [rsp+C0h] [rbp-40h]
  __int64 v200; // [rsp+C8h] [rbp-38h]
  __int64 v201; // [rsp+D0h] [rbp-30h]
  unsigned int v202[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct _SURFOBJ *v203; // [rsp+E0h] [rbp-20h]
  XLATEOBJ *v204; // [rsp+E8h] [rbp-18h]
  unsigned int v205[2]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v206[2]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v207[2]; // [rsp+100h] [rbp+0h] BYREF
  char v208[4]; // [rsp+108h] [rbp+8h] BYREF
  int v209; // [rsp+10Ch] [rbp+Ch]
  unsigned int v210; // [rsp+110h] [rbp+10h]
  __int64 v211; // [rsp+118h] [rbp+18h] BYREF
  int v212; // [rsp+120h] [rbp+20h]
  int v213; // [rsp+130h] [rbp+30h] BYREF
  int v214; // [rsp+134h] [rbp+34h]
  int v215; // [rsp+138h] [rbp+38h]
  int v216; // [rsp+13Ch] [rbp+3Ch]
  XLATEOBJ *v217; // [rsp+140h] [rbp+40h] BYREF
  __int64 v218; // [rsp+148h] [rbp+48h]
  __int64 v219; // [rsp+150h] [rbp+50h] BYREF
  __int64 v220; // [rsp+158h] [rbp+58h]
  unsigned int v221; // [rsp+168h] [rbp+68h]
  int v222; // [rsp+16Ch] [rbp+6Ch]
  DC *v223[2]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v224[32]; // [rsp+180h] [rbp+80h] BYREF
  __int16 v225; // [rsp+1A0h] [rbp+A0h]
  __int64 v226; // [rsp+1A8h] [rbp+A8h]
  __int64 v227; // [rsp+1B0h] [rbp+B0h]
  HDC v228; // [rsp+1B8h] [rbp+B8h]
  int v229; // [rsp+1C0h] [rbp+C0h] BYREF
  int v230; // [rsp+1C4h] [rbp+C4h]
  int v231; // [rsp+1C8h] [rbp+C8h] BYREF
  int v232; // [rsp+1CCh] [rbp+CCh]
  __int64 v233; // [rsp+1D0h] [rbp+D0h] BYREF
  char v234; // [rsp+1D8h] [rbp+D8h]
  int v235; // [rsp+1DCh] [rbp+DCh]
  int v236; // [rsp+1E0h] [rbp+E0h] BYREF
  int v237; // [rsp+1E4h] [rbp+E4h]
  int v238; // [rsp+1E8h] [rbp+E8h]
  int v239; // [rsp+1ECh] [rbp+ECh]
  DC *v240[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v241[32]; // [rsp+200h] [rbp+100h] BYREF
  __m128i v242; // [rsp+220h] [rbp+120h]
  int v243; // [rsp+230h] [rbp+130h]
  int v244; // [rsp+234h] [rbp+134h]
  int v245; // [rsp+238h] [rbp+138h]
  int v246; // [rsp+23Ch] [rbp+13Ch]
  char *v247; // [rsp+240h] [rbp+140h] BYREF
  int v248; // [rsp+248h] [rbp+148h]
  int v249; // [rsp+24Ch] [rbp+14Ch]
  int v250; // [rsp+250h] [rbp+150h]
  unsigned int v251; // [rsp+254h] [rbp+154h]
  unsigned int v252; // [rsp+258h] [rbp+158h]
  int v253; // [rsp+25Ch] [rbp+15Ch]
  __int64 v254; // [rsp+260h] [rbp+160h] BYREF
  struct _RECTL v255; // [rsp+268h] [rbp+168h] BYREF
  _BYTE v256[32]; // [rsp+278h] [rbp+178h] BYREF
  HSURF *v257; // [rsp+298h] [rbp+198h]
  DC *v258[6]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _QWORD v259[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v260[32]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v261[32]; // [rsp+300h] [rbp+200h] BYREF
  struct SURFACE *v262; // [rsp+320h] [rbp+220h]
  __int128 v263; // [rsp+328h] [rbp+228h] BYREF
  __int128 v264; // [rsp+338h] [rbp+238h] BYREF
  DC *v265[2]; // [rsp+348h] [rbp+248h] BYREF
  _BYTE v266[32]; // [rsp+358h] [rbp+258h] BYREF
  DC *v267[2]; // [rsp+378h] [rbp+278h] BYREF
  _BYTE v268[32]; // [rsp+388h] [rbp+288h] BYREF
  DC *v269[2]; // [rsp+3A8h] [rbp+2A8h] BYREF
  _BYTE v270[32]; // [rsp+3B8h] [rbp+2B8h] BYREF
  struct _RECTL v271; // [rsp+3D8h] [rbp+2D8h] BYREF
  __m128i v272; // [rsp+3F0h] [rbp+2F0h] BYREF
  __m128i v273; // [rsp+400h] [rbp+300h] BYREF
  __m128i v274; // [rsp+410h] [rbp+310h] BYREF
  __m128i v275; // [rsp+420h] [rbp+320h] BYREF
  __m128i v276; // [rsp+430h] [rbp+330h] BYREF
  __m128i v277; // [rsp+440h] [rbp+340h] BYREF
  _BYTE v278[4]; // [rsp+450h] [rbp+350h] BYREF
  __int128 v279; // [rsp+454h] [rbp+354h]
  __int64 v280; // [rsp+488h] [rbp+388h]
  __int64 v281; // [rsp+4A0h] [rbp+3A0h]
  int v282; // [rsp+4A8h] [rbp+3A8h]
  int v283; // [rsp+4D0h] [rbp+3D0h]
  __int64 v284; // [rsp+4E0h] [rbp+3E0h]
  _BYTE v285[4]; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int128 v286; // [rsp+4F4h] [rbp+3F4h]
  __int64 v287; // [rsp+528h] [rbp+428h]
  __int64 v288; // [rsp+540h] [rbp+440h]
  int v289; // [rsp+548h] [rbp+448h]
  int v290; // [rsp+570h] [rbp+470h]
  __int64 v291; // [rsp+580h] [rbp+480h]
  unsigned int v292; // [rsp+658h] [rbp+558h]

  v195 = a6;
  LOBYTE(v19) = -1;
  v203 = a16;
  v259[0] = 0LL;
  v259[1] = 0LL;
  LODWORD(v218) = a4;
  v194 = a2;
  v242.m128i_i64[0] = a10;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v260);
  XDCOBJ::vLock((XDCOBJ *)v259, a1);
  if ( v259[0] )
    v19 = *(_DWORD *)(*(_QWORD *)(v259[0] + 976LL) + 108LL);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v259);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v260);
  if ( (v19 & 1) != 0 )
    v194 = a4 + a2 - 1;
  if ( !a11 )
    goto LABEL_378;
  if ( !a10 )
    goto LABEL_378;
  v20 = a12;
  if ( a12 > 2 )
    goto LABEL_378;
  if ( a14 < 0x28 )
    goto LABEL_378;
  v21 = *a11;
  if ( (unsigned int)v21 < 0x28 )
    goto LABEL_378;
  v22 = a11[1];
  v210 = v22;
  if ( (int)v22 <= 0 )
    goto LABEL_378;
  v23 = a11[2];
  v193 = v23;
  if ( !v23 )
    goto LABEL_378;
  v24 = a11[4];
  v25 = *((unsigned __int16 *)a11 + 7);
  v202[0] = a11[8];
  v196 = (unsigned int *)((char *)a11 + v21);
  v198 = 0LL;
  v199 = 0LL;
  v201 = 0LL;
  v200 = 0LL;
  v197 = v24;
  if ( v23 < 0 )
  {
    LODWORD(v201) = 1;
    if ( v24 > 0xC )
      goto LABEL_378;
    v26 = 7225;
    if ( !_bittest(&v26, v24) )
      goto LABEL_378;
    v23 = -v23;
    v193 = v23;
  }
  v205[0] = 0;
  v207[0] = 0;
  v206[0] = 0;
  v209 = 0;
  if ( v24 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      v27 = 0;
      if ( a12 != 1 )
        v27 = a12;
      a12 = v27;
      v20 = v27;
      if ( (_DWORD)v25 == 16 )
      {
        LODWORD(v198) = 4;
LABEL_24:
        v205[0] = a11[10];
        v28 = 0;
        v207[0] = a11[11];
        v29 = 2;
        v30 = v25 * v22;
        v206[0] = a11[12];
        v196 = a11 + 10;
        LODWORD(v191) = 0;
        LODWORD(v190) = 512;
        if ( (unsigned __int64)(v25 * v22) > 0xFFFFFFFF || v30 + 31 < v30 )
          goto LABEL_50;
        v31 = a9;
        v187 = a9;
        v32 = a9 * (unsigned __int64)(((v30 + 31) >> 3) & 0x1FFFFFFC);
        if ( v32 <= 0xFFFFFFFF )
        {
          v192 = a8;
          v23 = v193;
LABEL_92:
          HIDWORD(v199) = v32;
LABEL_93:
          v292 = a14 - v21;
          v39 = v202[0];
          if ( v202[0] )
          {
            if ( v202[0] > v28 )
              v39 = v28;
            v202[0] = v39;
          }
          else
          {
            v202[0] = v28;
          }
          if ( a13 >= (unsigned int)v32 )
          {
            v40 = v23;
            HIDWORD(v198) = v210;
            v240[0] = 0LL;
            v240[1] = 0LL;
            if ( v197 - 4 > 1 )
              v40 = v31;
            LODWORD(v199) = v40;
            UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v241);
            XDCOBJ::vLock((XDCOBJ *)v240, a1);
            v41 = v240[0];
            if ( !v240[0] || (*((_DWORD *)v240[0] + 9) & 0x10000) != 0 )
            {
              EngSetLastError(0x57u);
              v46 = 0;
LABEL_377:
              MDCOBJ::~MDCOBJ((MDCOBJ *)v240);
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v241);
              return v46;
            }
            v42 = a11[4];
            v43 = v194;
            v44 = a3;
            v45 = *((_QWORD *)v240[0] + 6);
            v229 = v194;
            v230 = a3;
            if ( v42 - 4 <= 1 && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v240, v42) || v20 || v203) )
            {
              v46 = 0;
              v187 = 0;
            }
            else
            {
              v46 = v187;
            }
            if ( a15 )
            {
              v248 = *(_DWORD *)(*((_QWORD *)v41 + 122) + 208LL);
              v249 = *(_DWORD *)(*((_QWORD *)v41 + 122) + 108LL) & 1;
              if ( (*(_DWORD *)(*((_QWORD *)v41 + 122) + 340LL) & 0x1E000) != 0 )
              {
                EXFORMOBJ::vInit((EXFORMOBJ *)&v247, (struct XDCOBJ *)v240, 0x204u, 0);
                v47 = (unsigned __int64)v247;
                v41 = v240[0];
              }
              else
              {
                v47 = (unsigned __int64)v41 + 320;
                v247 = (char *)v41 + 320;
              }
              v48 = *(_DWORD *)(v47 + 32);
              if ( (*(_BYTE *)(v47 + 32) & 0x43) != 0x43 )
              {
                bCvtPts1(v47, &v229, 1LL);
                v43 = v229;
                a3 = v230;
              }
              if ( v46 && a11[4] - 4 <= 1 )
              {
                v63 = (v48 & 1) == 0;
                v44 = a3;
                if ( v63 )
                  v46 = 0;
                v187 = v46;
              }
              else
              {
                v44 = a3;
              }
            }
            v49 = *((_DWORD *)v41 + 130);
            v50 = v218;
            v51 = a5;
            v231 = v218;
            v232 = a5;
            if ( (v49 & 1) != 0 && (v49 & 2) == 0 )
            {
              v254 = *(_QWORD *)((char *)v41 + 524);
              EPOINTL::vScale((EPOINTL *)&v231, (const struct POINTFL *)&v254);
              v51 = v232;
              v50 = v231;
            }
            v52 = v50 + v43;
            v273.m128i_i64[0] = __PAIR64__(v44, v43);
            v53 = v52;
            v54 = v51 + v44;
            v273.m128i_i32[2] = v52;
            v273.m128i_i32[3] = v51 + v44;
            if ( v43 > v52 )
            {
              v53 = v43;
              v273.m128i_i32[0] = v52;
              v273.m128i_i32[2] = v43;
              v43 = v52;
            }
            if ( v44 > v51 + v44 )
            {
              v54 = v44;
              v273.m128i_i32[1] = v51 + v44;
              v273.m128i_i32[3] = v44;
              v44 += v51;
            }
            if ( v43 == v53 || v44 == v54 || !v46 )
              goto LABEL_377;
            if ( (*((_DWORD *)v41 + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)v240, (struct ERECTL *)&v273);
            v223[0] = 0LL;
            v223[1] = 0LL;
            UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v224);
            v225 = 256;
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v219, (struct XDCOBJ *)v240, 0);
            v55 = *((_QWORD *)v240[0] + 62);
            v189 = v55;
            if ( !v55 )
            {
LABEL_301:
              v148 = v223[0];
              if ( !v223[0] || !HIBYTE(v225) )
              {
LABEL_338:
                v162 = v221;
                if ( (v221 & 0x1000) != 0 )
                {
                  GreDecLockCount();
                  v221 &= ~0x1000u;
                  CurrentThread = KeGetCurrentThread();
                  if ( !(unsigned __int8)KeIsAttachedProcess(v164)
                    || (CurrentProcess = PsGetCurrentProcess(v166, v165, v167),
                        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                        CurrentThreadProcess = PsGetCurrentThreadProcess(v170),
                        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
                  {
                    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                    if ( ThreadWin32Thread )
                    {
                      v173 = *ThreadWin32Thread;
                      if ( v173 )
                      {
                        *(_QWORD *)(v173 + 320) = 0LL;
                        *(_QWORD *)(v173 + 312) = 0LL;
                      }
                    }
                  }
                  v162 = v221;
                }
                else
                {
                  if ( (v221 & 0x800000) == 0 )
                  {
LABEL_348:
                    if ( v219 )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v219);
                      GreReleaseSemaphoreInternal(v219);
                      v148 = v223[0];
                      v162 = v221;
                    }
                    if ( (v162 & 8) != 0 )
                      v221 = v162 & 0xFFFFFFF7;
                    if ( v220 )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v220);
                      GreReleaseSemaphoreInternal(v220);
                      v148 = v223[0];
                    }
                    if ( v227 )
                    {
                      DCOBJ::DCOBJ((DCOBJ *)v258, v228);
                      SURFREF::SURFREF((SURFREF *)v256);
                      SURFREF::SURFREF((SURFREF *)v261);
                      LOBYTE(v174) = 5;
                      v175 = HmgShareLock(v226, v174);
                      LOBYTE(v176) = 5;
                      v257 = (HSURF *)v175;
                      v262 = (struct SURFACE *)HmgShareLock(v227, v176);
                      v177 = *v257;
                      DC::pSurface(v258[0], v262);
                      DEC_SHARE_REF_CNT(v257, v178);
                      v257 = 0LL;
                      DEC_SHARE_REF_CNT(v262, v179);
                      v262 = 0LL;
                      GreDereferenceObject(v177, 1u);
                      v228 = 0LL;
                      v226 = 0LL;
                      *((_DWORD *)v258[0] + 9) |= v222;
                      if ( (*((_DWORD *)v258[0] + 9) & 0x200) != 0 )
                      {
                        v180 = 0;
                        if ( !(unsigned int)GreGetLockCount()
                          && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                        {
                          GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                          v180 = 1;
                        }
                        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v208);
                        LOBYTE(v186) = 5;
                        v181 = HmgShareUnlockRemoveObject(v227, 0LL, 0LL, 0LL, v186);
                        if ( v181 )
                          SURFACE::bDeleteSurface(v181, 0LL, 1LL);
                        *((_QWORD *)v258[0] + 63) = 0LL;
                        DC::vClearRendering(v258[0]);
                        v227 = 0LL;
                        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
                        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
                        if ( v180 )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                          GreReleaseSemaphoreInternal(ghsemGreLock);
                        }
                      }
                      else
                      {
                        LOBYTE(v186) = 5;
                        v182 = HmgShareUnlockRemoveObject(v227, 0LL, 0LL, 0LL, v186);
                        if ( v182 )
                          SURFACE::bDeleteSurface(v182, 0LL, 1LL);
                        *((_QWORD *)v258[0] + 63) = 0LL;
                        v227 = 0LL;
                      }
                      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                      if ( v262 )
                        DEC_SHARE_REF_CNT(v262, v183);
                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v261);
                      if ( v257 )
                        DEC_SHARE_REF_CNT(v257, v184);
                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v256);
                      DCOBJ::~DCOBJ((DCOBJ *)v258);
                      v148 = v223[0];
                    }
                    if ( v148 )
                    {
                      if ( (_BYTE)v225 )
                      {
                        *((_DWORD *)v148 + 10) &= ~2u;
                        LOBYTE(v225) = 0;
                      }
                      XDCOBJ::vUnlock((XDCOBJ *)v223);
                    }
                    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v224);
                    goto LABEL_377;
                  }
                  GreDecLockCount();
                  v162 = v221 & 0xFF7FFFFF;
                  v221 &= ~0x800000u;
                }
                v148 = v223[0];
                goto LABEL_348;
              }
              v149 = v221;
              v150 = *((_QWORD *)v223[0] + 6);
              if ( (v221 & 0x1000) != 0 )
              {
                if ( (v221 & 0x400) != 0 )
                {
                  bUnHookRedir((struct XDCOBJ *)v223);
                  v148 = v223[0];
                  v149 = v221 & 0xFBFF;
                  v221 &= ~0x400u;
                }
                if ( (v149 & 0x2000) != 0 )
                {
                  bUnHookBmpDrv((struct XDCOBJ *)v223);
                  v148 = v223[0];
                  v149 = v221 & 0xDFFF;
                  v221 &= ~0x2000u;
                }
                if ( v148 && HIBYTE(v225) && (v149 & 0x1000) != 0 )
                {
                  if ( (*((_DWORD *)v148 + 11) & 1) == 0 && *((_QWORD *)v148 + 62) )
                  {
                    SURFACE::bUnMap(*((SURFACE **)v148 + 62), &v219, v148);
                    v148 = v223[0];
                  }
                  *((_DWORD *)v148 + 11) &= ~1u;
                  v148 = v223[0];
                  if ( (*((_DWORD *)v223[0] + 9) & 0x4000) != 0
                    && *((_QWORD *)v223[0] + 59)
                    && *((_DWORD *)v223[0] + 122) )
                  {
                    GreUpdateSpriteDevLockEnd((HDC **)v223, v221 & 0x400000);
                    v148 = v223[0];
                  }
                  v149 = v221;
                }
                if ( (v149 & 0x10) != 0 )
                {
                  *((_DWORD *)v148 + 9) &= ~0x4000u;
                  DC::pSurface(v223[0], *(struct SURFACE **)(v150 + 2552));
                  v148 = v223[0];
                  v149 = v221;
                }
                if ( !v148 )
                  goto LABEL_337;
                if ( HIBYTE(v225) && (v149 & 0x1000) != 0 && (*((_DWORD *)v148 + 9) & 0x200) != 0 )
                {
                  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
                  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
                  if ( !v226 )
                    DC::vClearRendering(v223[0]);
                  if ( (*((_DWORD *)v223[0] + 9) & 0x4000) == 0 )
                  {
                    v152 = KeGetCurrentThread();
                    if ( !(unsigned __int8)KeIsAttachedProcess(v151)
                      || (v156 = PsGetCurrentProcess(v154, v153, v155),
                          v157 = PsGetProcessSessionIdEx(v156),
                          v159 = PsGetCurrentThreadProcess(v158),
                          v157 == (unsigned int)PsGetProcessSessionIdEx(v159)) )
                    {
                      v160 = (__int64 *)PsGetThreadWin32Thread(v152);
                      if ( v160 )
                      {
                        v161 = *v160;
                        if ( v161 )
                          *(_DWORD *)(v161 + 328) &= ~1u;
                      }
                    }
                  }
                  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
                  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
                  v148 = v223[0];
                }
              }
              if ( v148 && (_BYTE)v225 )
              {
                *((_DWORD *)v148 + 10) &= ~2u;
                LOBYTE(v225) = 0;
              }
LABEL_337:
              XDCOBJ::vUnlock((XDCOBJ *)v223);
              v148 = 0LL;
              v223[0] = 0LL;
              goto LABEL_338;
            }
            v56 = v203;
            if ( !v203 )
            {
              v56 = *(struct _SURFOBJ **)(*((_QWORD *)v240[0] + 122) + 248LL);
              v203 = v56;
            }
            v194 = *((_DWORD *)v240[0] + 30);
            if ( (v194 & 0x10000000) != 0 && (!v56 || v197 - 10 > 2) )
              v194 = v194 & 0xFFFFFFF | 0x20000000;
            v212 = 0;
            v211 = 0LL;
            v57 = (struct PALETTE *)*((_QWORD *)v240[0] + 11);
            v58 = *(_QWORD *)(v55 + 128);
            if ( v57 != ppalDefault )
              *(_QWORD *)(v55 + 176) = *(_QWORD *)v57;
            v59 = 0LL;
            v204 = 0LL;
            v217 = 0LL;
            v60 = 1;
            if ( a12 )
            {
              if ( a12 != 1 )
              {
                v61 = v55;
                v62 = *(_DWORD *)(v55 + 96);
                if ( v62 != (_DWORD)v198 )
                {
                  if ( v62 == 2 )
                  {
                    v63 = (_DWORD)v198 == 7;
                  }
                  else
                  {
                    if ( v62 != 3 )
                    {
LABEL_152:
                      EngSetLastError(0x57u);
LABEL_153:
                      v60 = 0;
                      v64 = 0;
                      goto LABEL_183;
                    }
                    v63 = (_DWORD)v198 == 8;
                  }
                  if ( !v63 )
                    goto LABEL_152;
                }
                v204 = xloIdent;
                v64 = 0;
LABEL_183:
                v233 = 0LL;
                v234 = 0;
                v235 = 0;
                SURFMEM::bCreateDIB(
                  (SURFMEM *)&v233,
                  (struct _DEVBITMAPINFO *)&v198,
                  (void *)v242.m128i_i64[0],
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0,
                  1,
                  0,
                  0);
                if ( v60 && v233 )
                {
                  *(_DWORD *)(v233 + 92) = 0;
                  if ( (v221 & 1) == 0 )
                    goto LABEL_294;
                  v76 = v240[0];
                  v77 = (int *)((char *)v240[0] + 1024);
                  if ( (*((_DWORD *)v240[0] + 10) & 1) == 0 )
                    v77 = (int *)((char *)v240[0] + 1016);
                  v78 = *v77;
                  if ( (unsigned __int64)(v78 + v273.m128i_i32[0] + 0x80000000LL) > 0xFFFFFFFF )
                    goto LABEL_294;
                  if ( (unsigned __int64)(v78 + v273.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
                    goto LABEL_294;
                  v79 = v77[1];
                  if ( (unsigned __int64)(v79 + v273.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
                    || (unsigned __int64)(v79 + v273.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
                  {
                    goto LABEL_294;
                  }
                  v80 = v78 + v273.m128i_i32[0];
                  v273.m128i_i32[0] += v78;
                  v81 = *v77 + v273.m128i_i32[2];
                  v273.m128i_i32[2] = v81;
                  v273.m128i_i32[1] += v77[1];
                  v82 = v77[1] + v273.m128i_i32[3];
                  v273.m128i_i32[3] = v82;
                  if ( v64 )
                  {
                    v83 = v211;
                    if ( v211 )
                    {
                      INC_SHARE_REF_CNT(v211);
                      v83 = v211;
                    }
                    *(_QWORD *)(v233 + 128) = v83;
                    v76 = v240[0];
                    v82 = v273.m128i_i32[3];
                    v81 = v273.m128i_i32[2];
                    v80 = v273.m128i_i32[0];
                  }
                  v84 = *(_QWORD *)(v61 + 48);
                  v272.m128i_i32[2] = v195 + v218;
                  v272.m128i_i32[0] = v195;
                  v272.m128i_i32[3] = v193 - a7;
                  v272.m128i_i32[1] = v193 - a5 - a7;
                  if ( v209 )
                  {
                    if ( !*((_QWORD *)v76 + 147)
                      || (*((_DWORD *)v76 + 10) & 2) == 0
                      || !(unsigned int)DC::bDpiScaledSurface(v76) )
                    {
                      v85 = *((_QWORD *)v76 + 145);
                    }
                    if ( v85 )
                    {
                      v86 = DC::prgnRao(v76);
                    }
                    else if ( !*((_QWORD *)v76 + 146)
                           || (*((_DWORD *)v76 + 10) & 2) == 0
                           || !(unsigned int)DC::bDpiScaledSurface(v76) )
                    {
                      v86 = (struct REGION *)*((_QWORD *)v76 + 144);
                    }
                    v283 = 1;
                    v280 = 0LL;
                    v281 = 0LL;
                    v282 = 0;
                    v284 = 0LL;
                    XCLIPOBJ::vSetup((XCLIPOBJ *)v278, v86, (struct ERECTL *)&v273, 0);
                    if ( (_DWORD)v279 != DWORD2(v279) && DWORD1(v279) != HIDWORD(v279) )
                    {
                      if ( (*((_DWORD *)v240[0] + 9) & 0xE0) != 0 )
                      {
                        v263 = v279;
                        XDCOBJ::vAccumulateTight((XDCOBJ *)v240, v87, (struct ERECTL *)&v263);
                      }
                      ++*(_DWORD *)(v61 + 92);
                      v88 = 0;
                      v89 = 0;
                      v90 = v273;
                      v276 = v273;
                      v236 = 0;
                      v237 = 0;
                      if ( *(int *)(v61 + 112) < 0 )
                      {
                        v91 = *(_DWORD **)(v61 + 48);
                        if ( v91 )
                        {
                          if ( (v91[10] & 0x20000) != 0 )
                          {
                            v88 = v91[646];
                            v89 = v91[647];
                            v236 = v88;
                            v237 = v89;
                          }
                        }
                      }
                      v92 = v233;
                      v238 = v88 + *(_DWORD *)(v61 + 56);
                      v93 = 0;
                      v94 = v89 + *(_DWORD *)(v61 + 60);
                      v243 = 0;
                      v239 = v94;
                      v244 = 0;
                      v95 = v233 + 112;
                      v96 = 0;
                      if ( !v233 )
                        v95 = 88LL;
                      if ( *(int *)v95 < 0 )
                      {
                        v97 = v233 + 48;
                        if ( !v233 )
                          v97 = 24LL;
                        v98 = *(_DWORD **)v97;
                        if ( v98 && (v98[10] & 0x20000) != 0 )
                        {
                          v93 = v98[646];
                          v96 = v98[647];
                          v243 = v93;
                          v244 = v96;
                        }
                      }
                      v99 = v240[0];
                      v100 = v233 + 56;
                      if ( !v233 )
                        v100 = 32LL;
                      v101 = *((_DWORD *)v240[0] + 130);
                      v102 = *(_DWORD *)v100;
                      v103 = v233 + 60;
                      v245 = v93 + v102;
                      if ( !v233 )
                        v103 = 36LL;
                      v246 = v96 + *(_DWORD *)v103;
                      v195 = v101 & 1;
                      if ( (v101 & 1) != 0 && (v101 & 2) == 0 )
                      {
                        v104 = 1.0 / *((float *)v240[0] + 132);
                        *(float *)&v196 = 1.0 / *((float *)v240[0] + 131);
                        *((float *)&v196 + 1) = v104;
                        ERECTL::vScale((ERECTL *)&v236, (const struct POINTFL *)&v196);
                        ERECTL::vScale((ERECTL *)&v276, (const struct POINTFL *)&v196);
                        v90 = v276;
                      }
                      v274 = v90;
                      v105 = v272.m128i_i32[0] - _mm_cvtsi128_si32(v90);
                      v106 = v272.m128i_i32[1] - _mm_cvtsi128_si32(_mm_srli_si128(v90, 4));
                      ERECTL::operator*=(&v274);
                      v274.m128i_i32[0] += v105;
                      v274.m128i_i32[2] += v105;
                      v274.m128i_i32[1] += v106;
                      v274.m128i_i32[3] += v106;
                      ERECTL::operator*=(&v274);
                      v107 = v274.m128i_i32[0];
                      v108 = v274.m128i_i32[0] - v105;
                      v109 = v274.m128i_i32[2] - v105;
                      v110 = v274.m128i_u32[1];
                      v276.m128i_i32[0] = v108;
                      v276.m128i_i32[2] = v109;
                      v276.m128i_i32[1] = v274.m128i_i32[1] - v106;
                      v276.m128i_i32[3] = v274.m128i_i32[3] - v106;
                      if ( v108 < v109 && v274.m128i_i32[1] - v106 < v274.m128i_i32[3] - v106 )
                      {
                        if ( v195 && (v101 & 2) == 0 )
                        {
                          *(_QWORD *)v202 = *(_QWORD *)((char *)v99 + 524);
                          ERECTL::vScale((ERECTL *)&v276, (const struct POINTFL *)v202);
                          v107 = v274.m128i_i32[0];
                        }
                        v272 = v274;
                        v273 = v276;
                        v111 = *((_DWORD *)v99 + 130);
                        v112 = (v111 & 1) != 0 && (v111 & 2) == 0;
                        v113 = *(_DWORD *)(v189 + 112);
                        if ( v112 )
                        {
                          if ( (v113 & 2) != 0 )
                            v114 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v84 + 2848);
                          else
                            v114 = EngStretchBlt;
                          v115 = v92 + 24;
                          if ( !v92 )
                            v115 = 0LL;
                          ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, __m128i *, __m128i *, _QWORD, int))v114)(
                            v189 + 24,
                            v115,
                            0LL,
                            v278,
                            v204,
                            0LL,
                            0LL,
                            &v273,
                            &v272,
                            0LL,
                            3);
                        }
                        else
                        {
                          v207[0] = v107;
                          v207[1] = v110;
                          if ( (v113 & 0x400) != 0 )
                            v116 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v84 + 2840);
                          else
                            v116 = EngCopyBits;
                          v117 = v92 + 24;
                          if ( !v92 )
                            v117 = 0LL;
                          ((void (__fastcall *)(__int64, __int64, _BYTE *, XLATEOBJ *, __m128i *, unsigned int *))v116)(
                            v189 + 24,
                            v117,
                            v278,
                            v204,
                            &v273,
                            v207);
                        }
                      }
                    }
LABEL_294:
                    v46 = v187;
                    goto LABEL_295;
                  }
                  v253 = v193 - v192;
                  v250 = 0;
                  v118 = v193 - v192 - v187;
                  v251 = v118;
                  v252 = v210;
                  v242 = v272;
                  ERECTL::operator*=(&v272);
                  if ( v272.m128i_i32[0] == v272.m128i_i32[2] || v272.m128i_i32[1] == v272.m128i_i32[3] )
                    goto LABEL_294;
                  v119 = v272.m128i_i32[0] - v242.m128i_i32[0];
                  v120 = *((_DWORD *)v76 + 130);
                  v121 = v272.m128i_i32[2] - v242.m128i_i32[2];
                  v122 = v272.m128i_i32[1] - v242.m128i_i32[1];
                  v123 = v272.m128i_i32[3] - v242.m128i_i32[3];
                  v213 = v272.m128i_i32[0] - v242.m128i_i32[0];
                  v215 = v272.m128i_i32[2] - v242.m128i_i32[2];
                  v214 = v272.m128i_i32[1] - v242.m128i_i32[1];
                  v216 = v272.m128i_i32[3] - v242.m128i_i32[3];
                  if ( (v120 & 1) != 0 && (v120 & 2) == 0 )
                  {
                    v191 = *(_QWORD *)((char *)v76 + 524);
                    ERECTL::vScale((ERECTL *)&v213, (const struct POINTFL *)&v191);
                    v123 = v216;
                    v121 = v215;
                    v122 = v214;
                    v119 = v213;
                  }
                  v124 = v119 + v80;
                  v125 = v122 + v273.m128i_i32[1];
                  v273.m128i_i32[0] = v124;
                  v273.m128i_i32[2] = v121 + v81;
                  v273.m128i_i32[1] += v122;
                  v273.m128i_i32[3] = v123 + v82;
                  if ( v124 == v121 + v81 || v125 == v123 + v82 )
                    goto LABEL_294;
                  v126 = DC::prgnRao(v76) ? DC::prgnRao(v76) : DC::prgnVisSnap(v76);
                  v290 = 1;
                  v287 = 0LL;
                  v288 = 0LL;
                  v289 = 0;
                  v291 = 0LL;
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v285, v126, (struct ERECTL *)&v273, 0);
                  if ( (_DWORD)v286 == DWORD2(v286) || DWORD1(v286) == HIDWORD(v286) )
                    goto LABEL_294;
                  if ( (*((_DWORD *)v240[0] + 9) & 0xE0) != 0 )
                  {
                    v264 = v286;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)v240, v127, (struct ERECTL *)&v264);
                  }
                  if ( v197 - 4 <= 1 )
                  {
                    v128 = v118;
                    v272.m128i_i32[3] += v118 - v272.m128i_i32[1];
                    v272.m128i_i32[1] = v118;
                  }
                  else
                  {
                    v272.m128i_i32[3] -= v118;
                    v272.m128i_i32[1] -= v118;
                    v118 = v272.m128i_u32[1];
                    v128 = v272.m128i_u32[1];
                  }
                  ++*(_DWORD *)(v189 + 92);
                  v129 = v273;
                  v218 = v189 + 24;
                  v277 = v273;
                  vGetSurfaceBoundsRect((struct _SURFOBJ *)(v189 + 24), &v255);
                  v130 = (struct _SURFOBJ *)(v233 + 24);
                  if ( !v233 )
                    v130 = 0LL;
                  v203 = v130;
                  vGetSurfaceBoundsRect(v130, &v271);
                  v132 = v240[0];
                  v133 = *((_DWORD *)v240[0] + 130);
                  v195 = v133 & 1;
                  if ( (v133 & 1) == 0 || (v131 = v118, (v133 & 2) != 0) )
                  {
                    v128 = v131;
                  }
                  else
                  {
                    *(float *)&v134 = 1.0 / *((float *)v240[0] + 132);
                    *(float *)v205 = 1.0 / *((float *)v240[0] + 131);
                    v205[1] = v134;
                    ERECTL::vScale((ERECTL *)&v255, (const struct POINTFL *)v205);
                    ERECTL::vScale((ERECTL *)&v277, (const struct POINTFL *)v205);
                    v129 = v277;
                  }
                  v275 = v129;
                  v135 = v272.m128i_i32[0] - _mm_cvtsi128_si32(v129);
                  v136 = v128 - _mm_cvtsi128_si32(_mm_srli_si128(v129, 4));
                  ERECTL::operator*=(&v275);
                  v275.m128i_i32[0] += v135;
                  v275.m128i_i32[2] += v135;
                  v275.m128i_i32[1] += v136;
                  v275.m128i_i32[3] += v136;
                  ERECTL::operator*=(&v275);
                  v137 = v275.m128i_i32[0];
                  v138 = v275.m128i_i32[0] - v135;
                  v139 = v275.m128i_i32[2] - v135;
                  v140 = v275.m128i_u32[1];
                  v277.m128i_i32[0] = v138;
                  v277.m128i_i32[1] = v275.m128i_i32[1] - v136;
                  v277.m128i_i32[2] = v139;
                  v277.m128i_i32[3] = v275.m128i_i32[3] - v136;
                  if ( v138 >= v139 || (int)(v275.m128i_i32[1] - v136) >= (int)(v275.m128i_i32[3] - v136) )
                    goto LABEL_294;
                  if ( v195 && (v133 & 2) == 0 )
                  {
                    v190 = *(_QWORD *)((char *)v132 + 524);
                    ERECTL::vScale((ERECTL *)&v277, (const struct POINTFL *)&v190);
                  }
                  v272 = v275;
                  v273 = v277;
                  v141 = *((_DWORD *)v132 + 130);
                  v142 = (v141 & 1) != 0 && (v141 & 2) == 0;
                  v143 = *(_DWORD *)(v189 + 112);
                  if ( v142 )
                  {
                    v144 = (v143 & 2) != 0
                         ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v84 + 2848)
                         : EngStretchBlt;
                    v145 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, __m128i *, __m128i *, _QWORD, int))v144)(
                             v218,
                             v203,
                             0LL,
                             v285,
                             v204,
                             0LL,
                             0LL,
                             &v273,
                             &v272,
                             0LL,
                             3);
                  }
                  else
                  {
                    v206[0] = v137;
                    v206[1] = v140;
                    v145 = (v143 & 0x400) != 0
                         ? (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, _BYTE *, XLATEOBJ *, __m128i *, unsigned int *))(v84 + 2840))(
                             v218,
                             v203,
                             v285,
                             v204,
                             &v273,
                             v206)
                         : ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _BYTE *, XLATEOBJ *, __m128i *, unsigned int *))EngCopyBits)(
                             v218,
                             v203,
                             v285,
                             v204,
                             &v273,
                             v206);
                  }
                  if ( v145 )
                    goto LABEL_294;
                }
                v46 = 0;
LABEL_295:
                SURFMEM::~SURFMEM((SURFMEM *)&v233);
                if ( v59 )
                {
                  cEntries = (int)v59[1].cEntries;
                  if ( (int)cEntries < 0 )
                  {
                    if ( (_DWORD)cEntries == -1 )
                      FreeThreadBufferWithTag(v59, v146);
                  }
                  else
                  {
                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                  }
                }
                PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v211);
                goto LABEL_301;
              }
              if ( v292 < 2 * (unsigned __int64)v202[0] )
              {
LABEL_157:
                EngSetLastError(0x57u);
                v61 = v55;
                v60 = 0;
                v64 = 0;
                goto LABEL_183;
              }
              Xlate = EXLATEOBJ::bMakeXlate(&v217, v196, v57, v55, v202[0], v191);
              v59 = v217;
              if ( Xlate )
              {
                v204 = v217;
                if ( gbMultiMonMismatchColor
                  && (*(_DWORD *)(v45 + 40) & 1) != 0
                  && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v211, v29, v191, 0LL, v205[0], v207[0], v206[0], v190, 1) )
                {
                  v66 = *(_QWORD *)(v55 + 128);
                  if ( !v66 )
                    v66 = *(_QWORD *)(v45 + 1808);
                  XEPALOBJ::vGetEntriesFrom(&v211, v57, v66, v196, v202[0]);
                  v64 = 1;
                }
                else
                {
                  v64 = 0;
                }
                v61 = v55;
                goto LABEL_183;
              }
LABEL_159:
              v61 = v55;
              v60 = 0;
              v64 = 0;
              goto LABEL_183;
            }
            if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v211, v29, v191, 0LL, v205[0], v207[0], v206[0], v190, 1) )
              goto LABEL_159;
            if ( v202[0] )
            {
              if ( v292 < 4 * v202[0] )
                goto LABEL_157;
              if ( v197 - 10 <= 2 )
              {
                XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v211, v196, v67, v202[0]);
              }
              else
              {
                v68 = *(_DWORD *)(v211 + 28);
                v69 = *(_QWORD *)(v211 + 112);
                if ( v202[0] <= v68 )
                  v68 = v202[0];
                if ( v68 )
                {
                  v70 = (char *)v196 + 1;
                  do
                  {
                    *(_BYTE *)(v69 + 3) = 0;
                    v69 += 4LL;
                    v71 = *(v70 - 1);
                    v70 += 4;
                    *(_BYTE *)(v69 - 2) = v71;
                    *(_BYTE *)(v69 - 4) = *(v70 - 3);
                    *(_BYTE *)(v69 - 3) = *(v70 - 4);
                    --v68;
                  }
                  while ( v68 );
                }
                v72 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
                *(_DWORD *)(v211 + 32) = v72;
                v73 = v211;
                v74 = *(_QWORD *)(v211 + 120);
                if ( v74 == v211 )
                {
LABEL_179:
                  XlateObject = (XLATEOBJ *)CreateXlateObject(
                                              v203,
                                              v194,
                                              v73,
                                              v58,
                                              (__int64)v57,
                                              (__int64)v57,
                                              0,
                                              0,
                                              0xFFFFFFu,
                                              0);
                  v217 = XlateObject;
                  v59 = XlateObject;
                  v61 = v55;
                  if ( XlateObject )
                  {
                    v64 = 0;
                    v204 = XlateObject;
                    goto LABEL_183;
                  }
                  goto LABEL_153;
                }
                *(_DWORD *)(v74 + 32) = v72;
              }
            }
            v73 = v211;
            goto LABEL_179;
          }
          goto LABEL_378;
        }
LABEL_49:
        HIDWORD(v199) = -1;
LABEL_50:
        v35 = 534;
LABEL_379:
        EngSetLastError(v35);
        return 0LL;
      }
      if ( (_DWORD)v25 == 32 )
      {
        LODWORD(v198) = 6;
        goto LABEL_24;
      }
    }
LABEL_378:
    v35 = 87;
    goto LABEL_379;
  }
  if ( !v24 )
  {
    if ( (unsigned int)v25 <= 8 )
    {
      switch ( (_DWORD)v25 )
      {
        case 1:
          LODWORD(v198) = 1;
          v28 = 2;
          LODWORD(v191) = 2;
          v29 = 1;
          LODWORD(v190) = 1024;
          goto LABEL_45;
        case 4:
          LODWORD(v190) = 1024;
          LODWORD(v198) = 2;
          v28 = 16;
          LODWORD(v191) = 16;
          v29 = 1;
          goto LABEL_45;
        case 8:
          v28 = 256;
          LODWORD(v198) = 3;
          LODWORD(v191) = 256;
          v29 = 1;
          LODWORD(v190) = 1024;
          goto LABEL_45;
      }
    }
    LODWORD(v191) = 0;
    v33 = 0;
    LODWORD(v190) = 512;
    if ( a12 != 1 )
      v33 = a12;
    v28 = 0;
    a12 = v33;
    v20 = v33;
    switch ( (_DWORD)v25 )
    {
      case 0x20:
        LODWORD(v198) = 6;
        a12 = v33;
        break;
      case 0x10:
        LODWORD(v198) = 4;
        v29 = 2;
        v205[0] = 31744;
        v207[0] = 992;
        v206[0] = 31;
        a12 = v33;
        goto LABEL_45;
      case 0x18:
        LODWORD(v198) = 5;
        break;
      default:
        goto LABEL_378;
    }
    v29 = 8;
LABEL_45:
    v34 = v25 * v22;
    if ( (unsigned __int64)(v25 * v22) > 0xFFFFFFFF || v34 + 31 < v34 )
      goto LABEL_50;
    v31 = a9;
    v187 = a9;
    v32 = a9 * (unsigned __int64)(((v34 + 31) >> 3) & 0x1FFFFFFC);
    if ( v32 <= 0xFFFFFFFF )
    {
      v192 = a8;
      v23 = v193;
      goto LABEL_92;
    }
    goto LABEL_49;
  }
  if ( v24 != 10 )
  {
    if ( v24 != 2 )
    {
      if ( v24 != 12 )
      {
        if ( v24 != 1 )
        {
          if ( v24 != 11 )
          {
            if ( v24 == 4 )
            {
              v31 = a9;
              v29 = 8;
              v187 = a9;
              v28 = 0;
              LODWORD(v198) = 9;
              LODWORD(v191) = 0;
              LODWORD(v190) = 512;
            }
            else
            {
              if ( v24 != 5 )
                goto LABEL_378;
              v31 = a9;
              v29 = 8;
              v187 = a9;
              v28 = 0;
              LODWORD(v198) = 10;
              LODWORD(v191) = 0;
              LODWORD(v190) = 512;
            }
LABEL_91:
            LODWORD(v32) = a11[5];
            v192 = 0;
            goto LABEL_92;
          }
          DCOBJ::DCOBJ((DCOBJ *)v267, a1);
          if ( !v267[0] || !(unsigned int)DC::bIsCMYKColor(v267[0]) )
          {
            EngSetLastError(0x57u);
            MDCOBJ::~MDCOBJ((MDCOBJ *)v267);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v268);
            return 0LL;
          }
          MDCOBJ::~MDCOBJ((MDCOBJ *)v267);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v268);
          v23 = v193;
        }
        if ( (_DWORD)v25 != 8 )
          goto LABEL_378;
        v28 = 256;
        LODWORD(v198) = 8;
        LODWORD(v191) = 256;
LABEL_90:
        v29 = 1;
        v187 = v23;
        v209 = 1;
        v31 = v23;
        LODWORD(v190) = 1024;
        goto LABEL_91;
      }
      DCOBJ::DCOBJ((DCOBJ *)v269, a1);
      if ( !v269[0] || !(unsigned int)DC::bIsCMYKColor(v269[0]) )
      {
        EngSetLastError(0x57u);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v269);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v270);
        return 0LL;
      }
      MDCOBJ::~MDCOBJ((MDCOBJ *)v269);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v270);
      v23 = v193;
    }
    if ( (_DWORD)v25 != 4 )
      goto LABEL_378;
    LODWORD(v198) = 7;
    v28 = 16;
    LODWORD(v191) = 16;
    goto LABEL_90;
  }
  DCOBJ::DCOBJ((DCOBJ *)v265, a1);
  if ( !v265[0] || !(unsigned int)DC::bIsCMYKColor(v265[0]) )
    goto LABEL_69;
  switch ( (_DWORD)v25 )
  {
    case 1:
      LODWORD(v198) = 1;
      v28 = 2;
      goto LABEL_62;
    case 4:
      LODWORD(v198) = 2;
      v28 = 16;
      goto LABEL_62;
    case 8:
      LODWORD(v198) = 3;
      v28 = 256;
LABEL_62:
      v29 = 1;
      LODWORD(v190) = 1024;
LABEL_63:
      v36 = v25 * v210;
      LODWORD(v191) = v28;
      if ( v36 <= 0xFFFFFFFF && (int)v36 + 31 >= (unsigned int)v36 )
      {
        v31 = a9;
        v187 = a9;
        v37 = a9 * (unsigned __int64)(((unsigned int)(v36 + 31) >> 3) & 0x1FFFFFFC);
        if ( v37 <= 0xFFFFFFFF )
        {
          HIDWORD(v199) = v37;
          MDCOBJ::~MDCOBJ((MDCOBJ *)v265);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v266);
          LODWORD(v32) = HIDWORD(v199);
          v192 = a8;
          v23 = v193;
          goto LABEL_93;
        }
        HIDWORD(v199) = -1;
      }
      v38 = 534;
      goto LABEL_70;
    case 0x20:
      LODWORD(v198) = 6;
      v28 = 0;
      LODWORD(v190) = 512;
      v29 = 16;
      goto LABEL_63;
  }
LABEL_69:
  v38 = 87;
LABEL_70:
  EngSetLastError(v38);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v265);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v266);
  return 0LL;
}
