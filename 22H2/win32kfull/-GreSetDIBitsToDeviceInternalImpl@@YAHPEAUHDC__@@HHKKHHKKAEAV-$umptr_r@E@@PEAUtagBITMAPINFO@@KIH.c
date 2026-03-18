/*
 * XREFs of ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C00DD070 (NtGdiSetDIBitsToDeviceInternal.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1C02DDF50 (-GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX.c)
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00058C8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0010D4C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00AB110 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00B0514 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00DA09C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00F7380 (bCvtPts1.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00FA6B8 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FE930 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C0E4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E4C0 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EAC8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EB4C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C0266D90 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02D8F10 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02D8FAC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DC558 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C02DE344 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02DE438 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02DE4BC (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternalImpl(
        HDC a1,
        unsigned int a2,
        LONG a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        _QWORD *a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        int a14,
        __int64 a15)
{
  int v18; // edi
  __int64 v19; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  struct UMPDOBJ *v23; // rdx
  DC *v24; // r9
  int v25; // ebx
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v27; // rax
  __int64 v28; // rbx
  unsigned int v29; // r12d
  __int64 v30; // rsi
  __int64 v31; // r9
  int v32; // r8d
  unsigned int v33; // edx
  __int64 v34; // rbx
  unsigned int v35; // r14d
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // edi
  unsigned int v40; // r8d
  unsigned int v41; // r15d
  unsigned int v42; // ebx
  unsigned __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  ULONG v46; // ecx
  __int64 v47; // r9
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned int v52; // r12d
  signed int v53; // esi
  unsigned int v54; // edx
  __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  struct UMPDOBJ *v59; // rdx
  DC *v60; // r9
  int v61; // ebx
  unsigned int v62; // edi
  struct _DC_ATTR *v63; // rax
  unsigned int v64; // edx
  LONG v65; // edi
  __int64 v66; // r14
  char *v67; // rcx
  int v68; // ecx
  int v69; // eax
  int v70; // edx
  LONG v71; // r11d
  LONG v72; // r10d
  LONG v73; // ecx
  LONG v74; // eax
  char *v75; // rbx
  __int64 v76; // r13
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __int64 v79; // rsi
  _QWORD *v80; // rdi
  int v81; // eax
  bool v82; // zf
  int v83; // r15d
  char *v84; // r14
  Gre::Base *v85; // rcx
  __int64 v86; // r8
  unsigned int v87; // r8d
  unsigned int v88; // edx
  Gre::Base *v89; // rcx
  char *v90; // rdx
  char v91; // al
  signed __int32 v92; // ecx
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 XlateObject; // rax
  DC *v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rsi
  __int64 v99; // rdi
  LONG left; // r9d
  int right; // r8d
  int top; // r11d
  int bottom; // r10d
  __int64 v104; // rax
  __int64 v105; // rdi
  LONG v106; // eax
  LONG v107; // ecx
  LONG v108; // esi
  struct REGION *v109; // rax
  struct ECLIPOBJ *v110; // rdx
  __int64 v111; // rax
  struct _SURFOBJ *v112; // rdx
  __int16 v113; // r8
  BOOL (__stdcall *v114)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v115; // rdx
  BOOL (__stdcall *v116)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v117; // rdx
  LONG v118; // r12d
  LONG v119; // r15d
  LONG v120; // r14d
  int v121; // r12d
  int v122; // esi
  int v123; // r14d
  int v124; // eax
  int v125; // ecx
  struct REGION *v126; // r10
  LONG v127; // r12d
  struct ECLIPOBJ *v128; // rdx
  LONG v129; // esi
  int v130; // edx
  int v131; // r10d
  _DWORD *v132; // rax
  __int64 v133; // r8
  int v134; // r14d
  int v135; // r14d
  int v136; // r11d
  __int64 v137; // rax
  __int64 v138; // rax
  _DWORD *v139; // rax
  DC *v140; // r9
  __int64 v141; // rax
  int v142; // ecx
  __int64 v143; // rax
  int v144; // ecx
  int v145; // eax
  float v146; // xmm0_4
  LONG v147; // r15d
  LONG v148; // eax
  int v149; // esi
  LONG v150; // ecx
  LONG v151; // r10d
  int v152; // r14d
  LONG v153; // r15d
  LONG v154; // ecx
  int v155; // edx
  LONG v156; // ecx
  int v157; // eax
  int v158; // eax
  BOOL (__stdcall *v159)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v160; // rdx
  int v161; // eax
  BOOL (__stdcall *v162)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v163; // rdx
  Gre::Base *v164; // rcx
  int v165; // eax
  DC *v166; // rcx
  __int64 v167; // rbx
  unsigned int v168; // eax
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rax
  __int64 v172; // rdx
  HSURF v173; // rbx
  Gre::Base *v174; // rcx
  struct Gre::Base::SESSION_GLOBALS *v175; // rbx
  char v176; // di
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rbx
  struct _DC_ATTR *v180; // rax
  __int64 v181; // rbx
  struct _CLIPOBJ *v183; // [rsp+20h] [rbp-E0h]
  unsigned int v184; // [rsp+60h] [rbp-A0h]
  unsigned int v185; // [rsp+64h] [rbp-9Ch]
  unsigned int v186; // [rsp+68h] [rbp-98h]
  int v188; // [rsp+70h] [rbp-90h]
  LONG v189; // [rsp+80h] [rbp-80h]
  int v190; // [rsp+80h] [rbp-80h]
  char *v191; // [rsp+90h] [rbp-70h]
  _BYTE v192[4]; // [rsp+98h] [rbp-68h] BYREF
  int v193; // [rsp+9Ch] [rbp-64h]
  int v194; // [rsp+A0h] [rbp-60h]
  unsigned int v195; // [rsp+B0h] [rbp-50h]
  LONG v196; // [rsp+C0h] [rbp-40h]
  signed int v197; // [rsp+C4h] [rbp-3Ch]
  int v198; // [rsp+C8h] [rbp-38h]
  unsigned int v199; // [rsp+CCh] [rbp-34h]
  unsigned int v200; // [rsp+D0h] [rbp-30h]
  unsigned int v201; // [rsp+D4h] [rbp-2Ch]
  DC *v202; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v203; // [rsp+E0h] [rbp-20h]
  _BYTE v204[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v205; // [rsp+108h] [rbp+8h] BYREF
  __int64 v206; // [rsp+110h] [rbp+10h]
  __int64 v207; // [rsp+118h] [rbp+18h]
  __int64 v208; // [rsp+120h] [rbp+20h]
  int v209; // [rsp+128h] [rbp+28h]
  __int64 v210; // [rsp+130h] [rbp+30h] BYREF
  int v211; // [rsp+138h] [rbp+38h]
  float v212[4]; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL v213; // [rsp+150h] [rbp+50h] BYREF
  __int64 v214; // [rsp+160h] [rbp+60h] BYREF
  char v215; // [rsp+168h] [rbp+68h]
  int v216; // [rsp+16Ch] [rbp+6Ch]
  DC *v217; // [rsp+170h] [rbp+70h] BYREF
  __int64 v218; // [rsp+178h] [rbp+78h]
  _BYTE v219[32]; // [rsp+180h] [rbp+80h] BYREF
  int v220; // [rsp+1A0h] [rbp+A0h] BYREF
  int v221; // [rsp+1A4h] [rbp+A4h] BYREF
  int v222; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int *v223; // [rsp+1B0h] [rbp+B0h]
  __int64 v224; // [rsp+1B8h] [rbp+B8h]
  __int64 v225; // [rsp+1C0h] [rbp+C0h] BYREF
  int v226; // [rsp+1C8h] [rbp+C8h] BYREF
  int v227; // [rsp+1CCh] [rbp+CCh]
  int v228; // [rsp+1D0h] [rbp+D0h]
  int v229; // [rsp+1D4h] [rbp+D4h]
  HDC v230; // [rsp+1D8h] [rbp+D8h] BYREF
  LONG v231; // [rsp+1E0h] [rbp+E0h] BYREF
  LONG v232; // [rsp+1E4h] [rbp+E4h]
  int v233; // [rsp+1E8h] [rbp+E8h] BYREF
  int v234; // [rsp+1ECh] [rbp+ECh]
  __int64 v235; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v236; // [rsp+200h] [rbp+100h] BYREF
  __int64 v237; // [rsp+208h] [rbp+108h]
  unsigned int v238; // [rsp+218h] [rbp+118h]
  int v239; // [rsp+21Ch] [rbp+11Ch]
  DC *v240; // [rsp+220h] [rbp+120h] BYREF
  __int64 v241; // [rsp+228h] [rbp+128h]
  _BYTE v242[32]; // [rsp+230h] [rbp+130h] BYREF
  __int16 v243; // [rsp+250h] [rbp+150h]
  __int64 v244; // [rsp+258h] [rbp+158h]
  __int64 v245; // [rsp+260h] [rbp+160h]
  HDC v246; // [rsp+268h] [rbp+168h]
  char *v247; // [rsp+270h] [rbp+170h] BYREF
  int v248; // [rsp+278h] [rbp+178h]
  int v249; // [rsp+27Ch] [rbp+17Ch]
  struct _RECTL v250; // [rsp+280h] [rbp+180h]
  __int64 v251; // [rsp+290h] [rbp+190h] BYREF
  __int64 v252; // [rsp+298h] [rbp+198h] BYREF
  __int64 v253; // [rsp+2A0h] [rbp+1A0h] BYREF
  DC *v254[2]; // [rsp+2A8h] [rbp+1A8h] BYREF
  char v255[32]; // [rsp+2B8h] [rbp+1B8h] BYREF
  _BYTE v256[32]; // [rsp+2D8h] [rbp+1D8h] BYREF
  HSURF *v257; // [rsp+2F8h] [rbp+1F8h]
  DC *v258[2]; // [rsp+300h] [rbp+200h] BYREF
  _BYTE v259[32]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v260[32]; // [rsp+330h] [rbp+230h] BYREF
  struct SURFACE *v261; // [rsp+350h] [rbp+250h]
  DC *v262[2]; // [rsp+358h] [rbp+258h] BYREF
  _BYTE v263[32]; // [rsp+368h] [rbp+268h] BYREF
  DC *v264[2]; // [rsp+388h] [rbp+288h] BYREF
  _BYTE v265[40]; // [rsp+398h] [rbp+298h] BYREF
  __m128i v266; // [rsp+3C0h] [rbp+2C0h] BYREF
  __m128i v267; // [rsp+3D0h] [rbp+2D0h] BYREF
  struct _RECTL v268; // [rsp+3E0h] [rbp+2E0h] BYREF
  struct _RECTL v269; // [rsp+3F0h] [rbp+2F0h] BYREF
  struct _RECTL v270; // [rsp+400h] [rbp+300h] BYREF
  struct _RECTL v271; // [rsp+410h] [rbp+310h]
  _BYTE v272[4]; // [rsp+420h] [rbp+320h] BYREF
  __m128i v273; // [rsp+424h] [rbp+324h]
  __int64 v274; // [rsp+458h] [rbp+358h]
  __int64 v275; // [rsp+470h] [rbp+370h]
  int v276; // [rsp+478h] [rbp+378h]
  int v277; // [rsp+4A0h] [rbp+3A0h]
  __int64 v278; // [rsp+4B0h] [rbp+3B0h]
  _BYTE v279[4]; // [rsp+4C0h] [rbp+3C0h] BYREF
  __m128i v280[3]; // [rsp+4C4h] [rbp+3C4h] BYREF
  __int64 v281; // [rsp+4F8h] [rbp+3F8h]
  __int64 v282; // [rsp+510h] [rbp+410h]
  int v283; // [rsp+518h] [rbp+418h]
  int v284; // [rsp+540h] [rbp+440h]
  __int64 v285; // [rsp+550h] [rbp+450h]
  unsigned int v286; // [rsp+610h] [rbp+510h]

  LOBYTE(v18) = -1;
  v230 = a1;
  v224 = a15;
  v198 = a4;
  v195 = a2;
  *(_QWORD *)v212 = a10;
  v235 = 0LL;
  v218 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v219);
  LOBYTE(v19) = 1;
  v217 = (DC *)HmgLockEx(a1, v19, 0LL);
  if ( v217 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v21 = *ThreadWin32Thread) != 0 && (v22 = *(_QWORD *)(v21 + 40), v22 != v21 + 40) )
      v23 = (struct UMPDOBJ *)(v22 - 40);
    else
      v23 = 0LL;
    v24 = v217;
    if ( *((_WORD *)v217 + 6) == 1 )
    {
      *((_QWORD *)v217 + 271) = v23;
      *((_DWORD *)v217 + 544) = 0xFFFF;
      v24 = v217;
    }
    else if ( *((struct UMPDOBJ **)v217 + 271) != v23 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v217, v23);
      v24 = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)v217 + 3);
      v217 = 0LL;
      goto LABEL_35;
    }
    if ( HIDWORD(v218) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v24 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_13:
        _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
        v24 = 0LL;
        v217 = 0LL;
        goto LABEL_35;
      }
      v25 = *((_DWORD *)v24 + 528);
      if ( v25 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v24 = v217;
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*((_DWORD *)v24 + 528) )
        goto LABEL_22;
      *((_DWORD *)v24 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v24 = v217;
LABEL_22:
  if ( !v24 )
    goto LABEL_45;
  if ( (*((_DWORD *)v24 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v218) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v217);
      if ( UserAttr && !DC::SaveAttributes(v217, UserAttr) )
      {
        v24 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v217 + 3);
        v217 = 0LL;
        goto LABEL_35;
      }
      v24 = v217;
    }
    *((_DWORD *)v24 + 11) |= 2u;
    v24 = v217;
    LODWORD(v218) = 1;
  }
  if ( (*((_DWORD *)v24 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v24);
    v24 = v217;
  }
  if ( v24 )
  {
    v18 = *(_DWORD *)(*((_QWORD *)v24 + 122) + 108LL);
LABEL_35:
    if ( v24 )
    {
      if ( (_DWORD)v218 && (*((_DWORD *)v24 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v218) )
        {
          v27 = XDCOBJ::GetUserAttr((XDCOBJ *)&v217);
          if ( v27 )
            DC::RestoreAttributes(v217, v27);
          v24 = v217;
        }
        *((_DWORD *)v24 + 11) &= ~2u;
        v24 = v217;
        LODWORD(v218) = 0;
      }
      v220 = 0;
      v28 = *(_QWORD *)v24;
      HmgDecrementExclusiveReferenceCountEx(v24, HIDWORD(v218), &v220);
      if ( v220 )
        GrepDeleteDC(v28, 0x2000000LL);
    }
  }
LABEL_45:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v219);
  if ( (v18 & 1) != 0 )
    v195 = a4 + a2 - 1;
  if ( !a11 )
    goto LABEL_464;
  if ( !*a10 )
    goto LABEL_464;
  if ( a12 > 2 )
    goto LABEL_464;
  v29 = a13;
  if ( a13 < 0x28 )
    goto LABEL_464;
  v30 = *a11;
  if ( (unsigned int)v30 < 0x28 )
    goto LABEL_464;
  v31 = a11[1];
  v196 = v31;
  if ( (int)v31 <= 0 )
    goto LABEL_464;
  v32 = a11[2];
  v194 = v32;
  if ( !v32 )
    goto LABEL_464;
  v33 = a11[4];
  v34 = *((unsigned __int16 *)a11 + 7);
  v35 = a11[8];
  v205 = 0LL;
  v206 = 0LL;
  v208 = 0LL;
  v207 = 0LL;
  v197 = v33;
  v223 = (unsigned int *)((char *)a11 + v30);
  if ( v32 < 0 )
  {
    LODWORD(v208) = 1;
    if ( v33 > 0xC )
      goto LABEL_464;
    v36 = 7225;
    if ( !_bittest(&v36, v33) )
      goto LABEL_464;
    v32 = -v32;
    v194 = v32;
  }
  v201 = 0;
  v200 = 0;
  v199 = 0;
  v209 = 0;
  if ( v33 == 3 )
  {
    if ( a13 >= 0x34 )
    {
      v37 = 0;
      if ( a12 != 1 )
        v37 = a12;
      a12 = v37;
      if ( (_DWORD)v34 == 16 )
      {
        LODWORD(v205) = 4;
LABEL_66:
        v201 = a11[10];
        v38 = v34 * v31;
        v200 = a11[11];
        v39 = 0;
        v40 = a11[12];
        v41 = 2;
        v223 = a11 + 10;
        v199 = v40;
        v186 = 0;
        v185 = 512;
        if ( (unsigned __int64)(v34 * v31) > 0xFFFFFFFF || v38 + 31 < v38 )
          goto LABEL_92;
        v42 = a9;
        v184 = a9;
        v43 = a9 * (unsigned __int64)(((v38 + 31) >> 3) & 0x1FFFFFFC);
        if ( v43 <= 0xFFFFFFFF )
        {
          v29 = a13;
          v32 = v194;
          v193 = a8;
LABEL_143:
          HIDWORD(v206) = v43;
          goto LABEL_144;
        }
LABEL_91:
        HIDWORD(v206) = -1;
LABEL_92:
        v46 = 534;
LABEL_465:
        EngSetLastError(v46);
        return 0LL;
      }
      if ( (_DWORD)v34 == 32 )
      {
        LODWORD(v205) = 6;
        goto LABEL_66;
      }
    }
LABEL_464:
    v46 = 87;
    goto LABEL_465;
  }
  if ( !v33 )
  {
    if ( (unsigned int)v34 <= 8 )
    {
      switch ( (_DWORD)v34 )
      {
        case 1:
          LODWORD(v205) = 1;
          v39 = 2;
          v186 = 2;
          v41 = 1;
          v185 = 1024;
          goto LABEL_87;
        case 4:
          v185 = 1024;
          LODWORD(v205) = 2;
          v39 = 16;
          v186 = 16;
          v41 = 1;
          goto LABEL_87;
        case 8:
          v39 = 256;
          LODWORD(v205) = 3;
          v186 = 256;
          v41 = 1;
          v185 = 1024;
          goto LABEL_87;
      }
    }
    v186 = 0;
    v44 = 0;
    v185 = 512;
    if ( a12 != 1 )
      v44 = a12;
    v39 = 0;
    a12 = v44;
    switch ( (_DWORD)v34 )
    {
      case 0x20:
        LODWORD(v205) = 6;
        a12 = v44;
        break;
      case 0x10:
        LODWORD(v205) = 4;
        v41 = 2;
        v201 = 31744;
        v200 = 992;
        v199 = 31;
        a12 = v44;
        goto LABEL_87;
      case 0x18:
        LODWORD(v205) = 5;
        break;
      default:
        goto LABEL_464;
    }
    v41 = 8;
LABEL_87:
    v45 = v34 * v31;
    if ( (unsigned __int64)(v34 * v31) > 0xFFFFFFFF || v45 + 31 < v45 )
      goto LABEL_92;
    v42 = a9;
    v184 = a9;
    v43 = a9 * (unsigned __int64)(((v45 + 31) >> 3) & 0x1FFFFFFC);
    if ( v43 <= 0xFFFFFFFF )
    {
      v193 = a8;
      goto LABEL_143;
    }
    goto LABEL_91;
  }
  if ( v33 != 10 )
  {
    if ( v33 != 2 )
    {
      if ( v33 != 12 )
      {
        if ( v33 != 1 )
        {
          if ( v33 != 11 )
          {
            if ( v33 == 4 )
            {
              v42 = a9;
              v41 = 8;
              LODWORD(v205) = 9;
              v39 = 0;
              v186 = 0;
              v185 = 512;
            }
            else
            {
              if ( v33 != 5 )
                goto LABEL_464;
              v42 = a9;
              v41 = 8;
              LODWORD(v205) = 10;
              v39 = 0;
              v186 = 0;
              v185 = 512;
            }
LABEL_142:
            LODWORD(v43) = a11[5];
            v184 = v42;
            v193 = 0;
            goto LABEL_143;
          }
          DCOBJ::DCOBJ((DCOBJ *)v262, a1);
          if ( !v262[0] || !(unsigned int)DC::bIsCMYKColor(v262[0]) )
          {
            EngSetLastError(0x57u);
            if ( v262[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v262);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v263);
            return 0LL;
          }
          if ( v50 )
            XDCOBJ::vUnlockFast((XDCOBJ *)v262);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v263);
          v32 = v194;
        }
        if ( (_DWORD)v34 != 8 )
          goto LABEL_464;
        v39 = 256;
        LODWORD(v205) = 8;
        v186 = 256;
LABEL_141:
        v41 = 1;
        v185 = 1024;
        v209 = 1;
        v42 = v32;
        goto LABEL_142;
      }
      DCOBJ::DCOBJ((DCOBJ *)v264, a1);
      if ( !v264[0] || !(unsigned int)DC::bIsCMYKColor(v264[0]) )
      {
        EngSetLastError(0x57u);
        if ( v264[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v264);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v265);
        return 0LL;
      }
      if ( v51 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v264);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v265);
      v32 = v194;
    }
    if ( (_DWORD)v34 != 4 )
      goto LABEL_464;
    LODWORD(v205) = 7;
    v39 = 16;
    v186 = 16;
    goto LABEL_141;
  }
  DCOBJ::DCOBJ((DCOBJ *)v258, a1);
  if ( !v258[0] || !(unsigned int)DC::bIsCMYKColor(v258[0]) )
    goto LABEL_115;
  switch ( (_DWORD)v34 )
  {
    case 1:
      LODWORD(v205) = 1;
      v39 = 2;
      goto LABEL_104;
    case 4:
      LODWORD(v205) = 2;
      v39 = 16;
      goto LABEL_104;
    case 8:
      LODWORD(v205) = 3;
      v39 = 256;
LABEL_104:
      v41 = 1;
      v185 = 1024;
      goto LABEL_105;
  }
  if ( (_DWORD)v34 != 32 )
  {
LABEL_115:
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v258);
    return 0LL;
  }
  LODWORD(v205) = 6;
  v39 = 0;
  v185 = 512;
  v41 = 16;
LABEL_105:
  v48 = v34 * (unsigned int)v196;
  v186 = v39;
  if ( v48 > 0xFFFFFFFF || (int)v48 + 31 < (unsigned int)v48 )
    goto LABEL_112;
  v42 = a9;
  v184 = a9;
  v49 = a9 * (unsigned __int64)(((unsigned int)(v48 + 31) >> 3) & 0x1FFFFFFC);
  if ( v49 > 0xFFFFFFFF )
  {
    HIDWORD(v206) = -1;
LABEL_112:
    EngSetLastError(0x216u);
    if ( v258[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v258);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v259);
    return 0LL;
  }
  HIDWORD(v206) = v49;
  if ( v47 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v258);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v259);
  LODWORD(v43) = HIDWORD(v206);
  v32 = v194;
  v193 = a8;
LABEL_144:
  v286 = v29 - v30;
  v52 = v39;
  if ( v35 && v35 <= v39 )
    v52 = v35;
  if ( *(_QWORD *)(*(_QWORD *)v212 + 8LL) - *(_QWORD *)(*(_QWORD *)v212 + 16LL) < (unsigned __int64)(unsigned int)v43 )
    goto LABEL_464;
  v53 = v197;
  v54 = v32;
  HIDWORD(v205) = v196;
  if ( (unsigned int)(v197 - 4) > 1 )
    v54 = v42;
  v203 = 0LL;
  LODWORD(v206) = v54;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v204);
  LOBYTE(v55) = 1;
  v202 = (DC *)HmgLockEx(v230, v55, 0LL);
  if ( !v202 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_176;
  }
  v56 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v56 && (v57 = *v56) != 0 && (v58 = *(_QWORD *)(v57 + 40), v58 != v57 + 40) )
    v59 = (struct UMPDOBJ *)(v58 - 40);
  else
    v59 = 0LL;
  v60 = v202;
  if ( *((_WORD *)v202 + 6) == 1 )
  {
    *((_QWORD *)v202 + 271) = v59;
    *((_DWORD *)v202 + 544) = 0xFFFF;
    v60 = v202;
  }
  else if ( *((struct UMPDOBJ **)v202 + 271) != v59 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v202, v59);
    goto LABEL_168;
  }
  if ( !HIDWORD(v203) )
  {
    if ( !*((_DWORD *)v60 + 528) )
    {
LABEL_177:
      if ( !v60 )
        goto LABEL_170;
      if ( (*((_DWORD *)v60 + 11) & 2) != 0 )
      {
LABEL_184:
        if ( (*((_DWORD *)v60 + 130) & 4) != 0 )
        {
          DC::vMarkTransformDirty(v60);
          v60 = v202;
        }
        if ( !v60 || (*((_DWORD *)v60 + 9) & 0x10000) != 0 )
          goto LABEL_170;
        v64 = a11[4];
        v65 = v195;
        v66 = *((_QWORD *)v60 + 6);
        v232 = a3;
        v231 = v195;
        if ( v64 - 4 <= 1 && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v202, v64) || a12 || v224) )
        {
          v42 = 0;
          v184 = 0;
        }
        if ( a14 )
        {
          v248 = *(_DWORD *)(*((_QWORD *)v60 + 122) + 208LL);
          v249 = *(_DWORD *)(*((_QWORD *)v60 + 122) + 108LL) & 1;
          if ( (*(_DWORD *)(*((_QWORD *)v60 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v247, (struct XDCOBJ *)&v202, 0x204u, 0);
            v60 = v202;
            v67 = v247;
          }
          else
          {
            v67 = (char *)v60 + 320;
            v247 = (char *)v60 + 320;
          }
          if ( (v67[32] & 0x43) != 0x43 )
          {
            bCvtPts1(v67, &v231, 1LL);
            v60 = v202;
            v65 = v231;
            v67 = v247;
            a3 = v232;
          }
          if ( v42 && a11[4] - 4 <= 1 )
          {
            if ( (v67[32] & 1) == 0 )
              v42 = 0;
            v184 = v42;
          }
        }
        v68 = *((_DWORD *)v60 + 130);
        v69 = v198;
        v70 = a5;
        v233 = v198;
        v234 = a5;
        if ( (v68 & 1) != 0 && (v68 & 2) == 0 )
        {
          v251 = *(_QWORD *)((char *)v60 + 524);
          EPOINTL::vScale((EPOINTL *)&v233, (const struct POINTFL *)&v251);
          v60 = v202;
          v70 = v234;
          v69 = v233;
        }
        v71 = a3;
        v72 = v69 + v65;
        v269.left = v65;
        v73 = v72;
        v269.top = a3;
        v269.right = v69 + v65;
        v74 = v70 + a3;
        v269.bottom = v70 + a3;
        if ( v65 > v72 )
        {
          v73 = v65;
          v269.left = v72;
          v269.right = v65;
          v65 = v72;
        }
        if ( a3 > v70 + a3 )
        {
          v74 = a3;
          v269.top = v70 + a3;
          v269.bottom = a3;
          v71 = v70 + a3;
        }
        if ( v65 == v73 || v71 == v74 || !v42 )
        {
LABEL_452:
          v62 = v184;
          goto LABEL_453;
        }
        if ( (*((_DWORD *)v60 + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)&v202, (struct ERECTL *)&v269);
        v75 = 0LL;
        v240 = 0LL;
        v241 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v242);
        v243 = 256;
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v236, (struct XDCOBJ *)&v202, 0);
        v76 = *((_QWORD *)v202 + 62);
        *(_QWORD *)&v250.left = v76;
        if ( !v76 )
        {
LABEL_402:
          v166 = v240;
          if ( v240 && HIBYTE(v243) )
          {
            v167 = *((_QWORD *)v240 + 6);
            if ( (v238 & 0x1000) != 0 )
            {
              DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v236);
              if ( (v238 & 0x10) != 0 )
              {
                *((_DWORD *)v240 + 9) &= ~0x4000u;
                DC::pSurface(v240, *(struct SURFACE **)(v167 + 2528));
              }
              DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v236);
            }
            DLODCOBJ::vUnlock((DLODCOBJ *)&v240);
            v166 = 0LL;
            v240 = 0LL;
          }
          v168 = v238;
          if ( (v238 & 0x1000) != 0 )
          {
            GreDecLockCount();
            v238 &= ~0x1000u;
            v169 = W32GetThreadWin32Thread(KeGetCurrentThread());
            if ( v169 )
            {
              *(_QWORD *)(v169 + 320) = 0LL;
              *(_QWORD *)(v169 + 312) = 0LL;
            }
            v168 = v238;
          }
          else
          {
            if ( (v238 & 0x800000) == 0 )
            {
LABEL_416:
              if ( v236 )
              {
                EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
                GreReleaseSemaphoreInternal(v236);
                v166 = v240;
                v168 = v238;
              }
              if ( (v168 & 8) != 0 )
                v238 = v168 & 0xFFFFFFF7;
              if ( v237 )
              {
                EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
                GreReleaseSemaphoreInternal(v237);
                v166 = v240;
              }
              if ( v245 )
              {
                DCOBJ::DCOBJ((DCOBJ *)v254, v246);
                SURFREF::SURFREF((SURFREF *)v256);
                SURFREF::SURFREF((SURFREF *)v260);
                LOBYTE(v170) = 5;
                v171 = HmgShareLock(v244, v170);
                LOBYTE(v172) = 5;
                v257 = (HSURF *)v171;
                v261 = (struct SURFACE *)HmgShareLock(v245, v172);
                v173 = *v257;
                DC::pSurface(v254[0], v261);
                DEC_SHARE_REF_CNT(v257);
                v257 = 0LL;
                DEC_SHARE_REF_CNT(v261);
                v261 = 0LL;
                GreDereferenceObject(v173, 1u);
                v174 = v254[0];
                v246 = 0LL;
                v244 = 0LL;
                *((_DWORD *)v254[0] + 9) |= v239;
                v175 = Gre::Base::Globals(v174);
                if ( (*((_DWORD *)v254[0] + 9) & 0x200) != 0 )
                {
                  v176 = 0;
                  if ( !(unsigned int)GreGetLockCount()
                    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v175 + 15)) )
                  {
                    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v175 + 15));
                    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v175 + 15));
                    v176 = 1;
                  }
                  DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v192);
                  LOBYTE(v183) = 5;
                  v177 = HmgShareUnlockRemoveObject(v245, 0LL, 0LL, 0LL, (_DWORD)v183);
                  if ( v177 )
                    SURFACE::bDeleteSurface(v177, 0LL, 1LL);
                  *((_QWORD *)v254[0] + 63) = 0LL;
                  DC::vClearRendering(v254[0]);
                  v245 = 0LL;
                  DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v192);
                  if ( v176 )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                    GreReleaseSemaphoreInternal(*((_QWORD *)v175 + 15));
                  }
                }
                else
                {
                  LOBYTE(v183) = 5;
                  v178 = HmgShareUnlockRemoveObject(v245, 0LL, 0LL, 0LL, (_DWORD)v183);
                  if ( v178 )
                    SURFACE::bDeleteSurface(v178, 0LL, 1LL);
                  *((_QWORD *)v254[0] + 63) = 0LL;
                  v245 = 0LL;
                }
                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
                GreReleaseSemaphoreInternal(*((_QWORD *)v175 + 10));
                if ( v261 )
                  DEC_SHARE_REF_CNT(v261);
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v260);
                if ( v257 )
                  DEC_SHARE_REF_CNT(v257);
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v256);
                if ( v254[0] )
                  XDCOBJ::vUnlockFast((XDCOBJ *)v254);
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v255);
                v166 = v240;
              }
              if ( v166 )
              {
                if ( (_BYTE)v243 )
                {
                  *((_DWORD *)v166 + 10) &= ~2u;
                  v166 = v240;
                  LOBYTE(v243) = 0;
                }
                if ( v166 )
                {
                  if ( (_DWORD)v241 && (*((_DWORD *)v166 + 11) & 2) != 0 )
                  {
                    XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v240);
                    *((_DWORD *)v240 + 11) &= ~2u;
                    v166 = v240;
                    LODWORD(v241) = 0;
                  }
                  v221 = 0;
                  v179 = *(_QWORD *)v166;
                  HmgDecrementExclusiveReferenceCountEx(v166, HIDWORD(v241), &v221);
                  if ( v221 )
                    GrepDeleteDC(v179, 0x2000000LL);
                }
                v240 = 0LL;
              }
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v242);
              v60 = v202;
              goto LABEL_452;
            }
            GreDecLockCount();
            v168 = v238 & 0xFF7FFFFF;
            v238 &= ~0x800000u;
          }
          v166 = v240;
          goto LABEL_416;
        }
        v77 = v224;
        if ( !v224 )
        {
          v77 = *(_QWORD *)(*((_QWORD *)v202 + 122) + 248LL);
          v224 = v77;
        }
        v195 = *((_DWORD *)v202 + 30);
        v78 = v195;
        if ( (v195 & 0x10000000) != 0 && (!v77 || (unsigned int)(v53 - 10) > 2) )
        {
          v78 = v195 & 0xFFFFFFF;
          LODWORD(v78) = v78 | 0x20000000;
          v195 = v78;
        }
        v79 = *(_QWORD *)(v76 + 128);
        v211 = 0;
        v210 = 0LL;
        v80 = (_QWORD *)*((_QWORD *)v202 + 11);
        if ( v80 != *((_QWORD **)Gre::Base::Globals((Gre::Base *)v78) + 750) )
          *(_QWORD *)(v76 + 176) = *v80;
        v188 = 1;
        v191 = 0LL;
        v225 = 0LL;
        if ( a12 )
        {
          if ( a12 != 1 )
          {
            v81 = *(_DWORD *)(v76 + 96);
            if ( v81 != (_DWORD)v205 )
            {
              if ( v81 == 2 )
              {
                v82 = (_DWORD)v205 == 7;
              }
              else
              {
                if ( v81 != 3 )
                {
LABEL_234:
                  EngSetLastError(0x57u);
LABEL_235:
                  v188 = 0;
                  v83 = 0;
                  goto LABEL_264;
                }
                v82 = (_DWORD)v205 == 8;
              }
              if ( !v82 )
                goto LABEL_234;
            }
            v83 = 0;
            v84 = (char *)Gre::Base::Globals((Gre::Base *)(unsigned int)v205) + 6896;
            v191 = v84;
            goto LABEL_265;
          }
          if ( v286 >= 2 * (unsigned __int64)v52 )
          {
            if ( !(unsigned int)EXLATEOBJ::bMakeXlate(&v225, v223, v80, v76, v52, v186) )
            {
              v84 = 0LL;
              v188 = 0;
              v83 = 0;
              v75 = (char *)v225;
              goto LABEL_265;
            }
            v75 = (char *)v225;
            v191 = (char *)v225;
            if ( *((_DWORD *)Gre::Base::Globals(v85) + 812)
              && (*(_DWORD *)(v66 + 40) & 1) != 0
              && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v210, v41, v186, 0LL, v201, v200, v199, v185, 1) )
            {
              v86 = *(_QWORD *)(v76 + 128);
              if ( !v86 )
                v86 = *(_QWORD *)(v66 + 1776);
              XEPALOBJ::vGetEntriesFrom(&v210, v80, v86, v223, v52);
              v83 = 1;
            }
            else
            {
              v83 = 0;
            }
LABEL_264:
            v84 = v75;
LABEL_265:
            v214 = 0LL;
            v215 = 0;
            v216 = 0;
            SURFMEM::bCreateDIB(
              (SURFMEM *)&v214,
              (struct _DEVBITMAPINFO *)&v205,
              (void *)(*(_QWORD *)(*(_QWORD *)v212 + 16LL) + **(_QWORD **)v212),
              0LL,
              0,
              0LL,
              0LL,
              0,
              1,
              0,
              0);
            if ( v188 && v214 )
            {
              *(_DWORD *)(v214 + 92) = 0;
              if ( (v238 & 1) != 0 )
              {
                v96 = v202;
                v97 = *((_DWORD *)v202 + 10) & 1;
                v98 = *((int *)v202 + 2 * v97 + 254);
                if ( (unsigned __int64)(v98 + v269.left + 0x80000000LL) <= 0xFFFFFFFF
                  && (unsigned __int64)(v98 + v269.right + 0x80000000LL) <= 0xFFFFFFFF )
                {
                  v99 = *((int *)v202 + 2 * v97 + 255);
                  if ( (unsigned __int64)(v99 + v269.top + 0x80000000LL) <= 0xFFFFFFFF
                    && (unsigned __int64)(v99 + v269.bottom + 0x80000000LL) <= 0xFFFFFFFF )
                  {
                    left = v98 + v269.left;
                    v269.left += v98;
                    right = *((_DWORD *)v202 + 2 * v97 + 254) + v269.right;
                    v269.right = right;
                    top = *((_DWORD *)v202 + 2 * v97 + 255) + v269.top;
                    v269.top = top;
                    bottom = *((_DWORD *)v202 + 2 * v97 + 255) + v269.bottom;
                    v269.bottom = bottom;
                    if ( v83 )
                    {
                      v104 = v210;
                      if ( v210 )
                      {
                        INC_SHARE_REF_CNT(v210);
                        v104 = v210;
                      }
                      *(_QWORD *)(v214 + 128) = v104;
                      v96 = v202;
                      bottom = v269.bottom;
                      right = v269.right;
                      top = v269.top;
                      left = v269.left;
                    }
                    v105 = *(_QWORD *)(v76 + 48);
                    v106 = v194 - a5 - a7;
                    v107 = v194 - a7;
                    v268.left = a6;
                    v108 = v198 + a6;
                    v268.top = v106;
                    v268.right = v198 + a6;
                    v268.bottom = v194 - a7;
                    if ( v209 )
                    {
                      v109 = XDCOBJ::prgnEffRao(&v202);
                      v284 = 1;
                      v281 = 0LL;
                      v282 = 0LL;
                      v283 = 0;
                      v285 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)v279, v109, (struct ERECTL *)&v269, 0);
                      if ( !ERECTL::bEmpty((ERECTL *)v280) )
                      {
                        if ( (*((_DWORD *)v202 + 9) & 0xE0) != 0 )
                        {
                          v266 = v280[0];
                          XDCOBJ::vAccumulateTight((XDCOBJ *)&v202, v110, &v266);
                        }
                        v111 = v214;
                        ++*(_DWORD *)(v76 + 92);
                        v112 = (struct _SURFOBJ *)(v111 + 24);
                        if ( !v111 )
                          v112 = 0LL;
                        if ( bClipSrcDstRectsAndValidate(
                               (struct _SURFOBJ *)(v76 + 24),
                               v112,
                               (struct DCOBJ *)&v202,
                               0LL,
                               v183,
                               &v269,
                               &v268) )
                        {
                          if ( (unsigned int)DC::bDpiScaleTransform(v202) )
                          {
                            if ( (v113 & 2) != 0 )
                              v114 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v105 + 2824);
                            else
                              v114 = EngStretchBlt;
                            v115 = v214 + 24;
                            if ( !v214 )
                              v115 = 0LL;
                            ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, char *, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v114)(
                              v76 + 24,
                              v115,
                              0LL,
                              v279,
                              v84,
                              0LL,
                              0LL,
                              &v269,
                              &v268,
                              0LL,
                              3);
                          }
                          else
                          {
                            v235 = *(_QWORD *)&v268.left;
                            if ( (v113 & 0x400) != 0 )
                              v116 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v105 + 2816);
                            else
                              v116 = EngCopyBits;
                            v117 = v214 + 24;
                            if ( !v214 )
                              v117 = 0LL;
                            ((void (__fastcall *)(__int64, __int64, _BYTE *, char *, struct _RECTL *, __int64 *))v116)(
                              v76 + 24,
                              v117,
                              v279,
                              v84,
                              &v269,
                              &v235);
                          }
                        }
                      }
                    }
                    else
                    {
                      v118 = v194 - v193;
                      v119 = v194 - v193 - v184;
                      v120 = a6;
                      v250 = v268;
                      if ( a6 < 0 )
                        v120 = v235;
                      if ( v119 > v106 )
                        v106 = v118 - v184;
                      v268.left = v120;
                      v268.top = v106;
                      if ( v196 < v108 )
                        v108 = v196;
                      v268.right = v108;
                      if ( v118 < v107 )
                        v107 = v194 - v193;
                      v268.bottom = v107;
                      if ( v108 >= v120 )
                      {
                        if ( v107 < v106 )
                          v106 = v107;
                        v268.top = v106;
                        if ( v120 != v108 && v106 != v107 )
                        {
                          v121 = v120 - v250.left;
                          v213 = v268;
                          v122 = v268.right - v250.right;
                          v123 = v268.top - v250.top;
                          v124 = v268.bottom - v250.bottom;
                          v213.left = v121;
                          v125 = *((_DWORD *)v96 + 130);
                          v213.right = v268.right - v250.right;
                          v213.top = v268.top - v250.top;
                          v213.bottom = v268.bottom - v250.bottom;
                          if ( (v125 & 1) != 0 && (v125 & 2) == 0 )
                          {
                            v252 = *(_QWORD *)((char *)v96 + 524);
                            ERECTL::vScale((ERECTL *)&v213, (const struct POINTFL *)&v252);
                            v96 = v202;
                            bottom = v269.bottom;
                            right = v269.right;
                            top = v269.top;
                            left = v269.left;
                            v124 = v213.bottom;
                            v122 = v213.right;
                            v123 = v213.top;
                            v121 = v213.left;
                          }
                          v269.left = v121 + left;
                          v269.right = v122 + right;
                          v269.bottom = v124 + bottom;
                          v269.top = v123 + top;
                          if ( v121 + left != v122 + right && v123 + top != v124 + bottom )
                          {
                            if ( *((_QWORD *)v96 + 146)
                              && (*((_DWORD *)v96 + 10) & 2) != 0
                              && (unsigned int)DC::bDpiScaledSurface(v96)
                              || *((_QWORD *)v96 + 144) )
                            {
                              v126 = DC::prgnRao(v96);
                            }
                            else if ( !*((_QWORD *)v96 + 145)
                                   || (*((_DWORD *)v96 + 10) & 2) == 0
                                   || !(unsigned int)DC::bDpiScaledSurface(v96) )
                            {
                              v126 = (struct REGION *)*((_QWORD *)v96 + 143);
                            }
                            v127 = 0;
                            v277 = 1;
                            v274 = 0LL;
                            v275 = 0LL;
                            v276 = 0;
                            v278 = 0LL;
                            XCLIPOBJ::vSetup((XCLIPOBJ *)v272, v126, (struct ERECTL *)&v269, 0);
                            if ( v273.m128i_i32[0] != v273.m128i_i32[2] && v273.m128i_i32[1] != v273.m128i_i32[3] )
                            {
                              if ( (*((_DWORD *)v202 + 9) & 0xE0) != 0 )
                              {
                                v267 = v273;
                                XDCOBJ::vAccumulateTight((XDCOBJ *)&v202, v128, &v267);
                              }
                              if ( (unsigned int)(v197 - 4) <= 1 )
                              {
                                v129 = v194 - v193 - v184;
                                v268.bottom += v119 - v268.top;
                                v268.top = v129;
                              }
                              else
                              {
                                v268.bottom -= v119;
                                v129 = v268.top - v119;
                                v268.top -= v119;
                              }
                              ++*(_DWORD *)(v76 + 92);
                              v130 = 0;
                              v131 = 0;
                              v270 = v269;
                              v189 = v268.left;
                              v226 = 0;
                              v227 = 0;
                              if ( *(int *)(v76 + 112) < 0 )
                              {
                                v132 = *(_DWORD **)(v76 + 48);
                                if ( v132 )
                                {
                                  if ( (v132[10] & 0x20000) != 0 )
                                  {
                                    v130 = v132[640];
                                    v131 = v132[641];
                                    v226 = v130;
                                    v227 = v131;
                                  }
                                }
                              }
                              v133 = v214;
                              v134 = *(_DWORD *)(v76 + 56);
                              v229 = v131 + *(_DWORD *)(v76 + 60);
                              v135 = v130 + v134;
                              v228 = v135;
                              v136 = 0;
                              v198 = 0;
                              v137 = v214 + 112;
                              if ( !v214 )
                                v137 = 88LL;
                              if ( *(int *)v137 < 0 )
                              {
                                v138 = v214 + 48;
                                if ( !v214 )
                                  v138 = 24LL;
                                v139 = *(_DWORD **)v138;
                                if ( v139 && (v139[10] & 0x20000) != 0 )
                                {
                                  v136 = v139[641];
                                  v127 = v139[640];
                                  v198 = v136;
                                }
                              }
                              v140 = v202;
                              v141 = v214 + 56;
                              if ( !v214 )
                                v141 = 32LL;
                              v142 = *(_DWORD *)v141;
                              v143 = v214 + 60;
                              v197 = v127 + v142;
                              if ( !v214 )
                                v143 = 36LL;
                              v144 = *(_DWORD *)v143;
                              v145 = *((_DWORD *)v202 + 130);
                              v196 = v136 + v144;
                              if ( (v145 & 1) != 0 && (v145 & 2) == 0 )
                              {
                                v146 = 1.0 / COERCE_FLOAT(*(_QWORD *)((char *)v202 + 524));
                                v212[1] = 1.0 / *((float *)v202 + 132);
                                v212[0] = v146;
                                ERECTL::vScale((ERECTL *)&v226, (const struct POINTFL *)v212);
                                ERECTL::vScale((ERECTL *)&v270, (const struct POINTFL *)v212);
                                v140 = v202;
                                v133 = v214;
                                v131 = v227;
                                v130 = v226;
                                v136 = v198;
                                v135 = v228;
                              }
                              v147 = v270.left;
                              v190 = v189 - v270.left;
                              v148 = v270.top;
                              v149 = v129 - v270.top;
                              v150 = v270.bottom;
                              if ( v130 > v270.left )
                                v147 = v130;
                              if ( v131 > v270.top )
                                v148 = v131;
                              v151 = v270.right;
                              if ( v135 < v270.right )
                                v151 = v135;
                              if ( v229 < v270.bottom )
                                v150 = v229;
                              if ( v151 >= v147 )
                              {
                                if ( v150 < v148 )
                                  v148 = v150;
                              }
                              else
                              {
                                v147 = v151;
                              }
                              v152 = v149 + v148;
                              v153 = v190 + v147;
                              v154 = v149 + v150;
                              v155 = v151 + v190;
                              if ( v127 > v153 )
                                v153 = v127;
                              if ( v136 > v152 )
                                v152 = v136;
                              if ( v197 < v155 )
                                v155 = v197;
                              if ( v196 < v154 )
                                v154 = v196;
                              if ( v155 >= v153 )
                              {
                                if ( v154 < v152 )
                                  v152 = v154;
                              }
                              else
                              {
                                v153 = v155;
                              }
                              v271.bottom = v154;
                              v156 = v154 - v149;
                              v271.left = v153;
                              *(_QWORD *)&v271.top = __PAIR64__(v155, v152);
                              v270.left = v153 - v190;
                              v270.top = v152 - v149;
                              v270.right = v155 - v190;
                              v270.bottom = v156;
                              if ( v153 - v190 < v155 - v190 && v152 - v149 < v156 )
                              {
                                v157 = *((_DWORD *)v140 + 130);
                                if ( (v157 & 1) != 0 && (v157 & 2) == 0 )
                                {
                                  v253 = *(_QWORD *)((char *)v140 + 524);
                                  ERECTL::vScale((ERECTL *)&v270, (const struct POINTFL *)&v253);
                                  v140 = v202;
                                  v133 = v214;
                                }
                                v268 = v271;
                                v269 = v270;
                                v158 = *((_DWORD *)v140 + 130);
                                if ( (v158 & 1) == 0 || (v158 & 2) != 0 )
                                {
                                  v82 = (*(_DWORD *)(v76 + 112) & 0x400) == 0;
                                  v230 = (HDC)__PAIR64__(v152, v153);
                                  if ( v82 )
                                    v162 = EngCopyBits;
                                  else
                                    v162 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v105 + 2816);
                                  v163 = v133 + 24;
                                  if ( !v133 )
                                    v163 = 0LL;
                                  v161 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, char *, struct _RECTL *, HDC *))v162)(
                                           v76 + 24,
                                           v163,
                                           v272,
                                           v191,
                                           &v269,
                                           &v230);
                                }
                                else
                                {
                                  if ( (*(_DWORD *)(v76 + 112) & 2) != 0 )
                                    v159 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v105 + 2824);
                                  else
                                    v159 = EngStretchBlt;
                                  v160 = v133 + 24;
                                  if ( !v133 )
                                    v160 = 0LL;
                                  v161 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, char *, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v159)(
                                           v76 + 24,
                                           v160,
                                           0LL,
                                           v272,
                                           v191,
                                           0LL,
                                           0LL,
                                           &v269,
                                           &v268,
                                           0LL,
                                           3);
                                }
                                if ( !v161 )
                                  v184 = 0;
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        v268.left = v108;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v184 = 0;
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v214);
            if ( v75 )
            {
              v165 = *((_DWORD *)v75 + 9);
              if ( v165 < 0 )
              {
                if ( v165 == -1 )
                  FreeThreadBufferWithTag(v75);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v164) + 8 * *((int *)v75 + 9) + 1658);
              }
            }
            PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v210);
            goto LABEL_402;
          }
LABEL_238:
          EngSetLastError(0x57u);
          v83 = 0;
          v188 = 0;
          goto LABEL_264;
        }
        if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v210, v41, v186, 0LL, v201, v200, v199, v185, 1) )
          goto LABEL_235;
        if ( v52 )
        {
          if ( v286 < 4 * v52 )
            goto LABEL_238;
          if ( (unsigned int)(v197 - 10) <= 2 )
          {
            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v210, v223, v87, v52);
          }
          else
          {
            v88 = *(_DWORD *)(v210 + 28);
            v89 = *(Gre::Base **)(v210 + 112);
            if ( v52 <= v88 || (v52 = *(_DWORD *)(v210 + 28), v88) )
            {
              v90 = (char *)v223 + 1;
              do
              {
                *((_BYTE *)v89 + 3) = 0;
                v89 = (Gre::Base *)((char *)v89 + 4);
                v91 = *(v90 - 1);
                v90 += 4;
                *((_BYTE *)v89 - 2) = v91;
                *((_BYTE *)v89 - 4) = *(v90 - 3);
                *((_BYTE *)v89 - 3) = *(v90 - 4);
                --v52;
              }
              while ( v52 );
              v76 = *(_QWORD *)&v250.left;
            }
            v92 = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v89) + 962);
            *(_DWORD *)(v210 + 32) = v92;
            v93 = v210;
            v94 = *(_QWORD *)(v210 + 120);
            if ( v94 == v210 )
              goto LABEL_260;
            *(_DWORD *)(v94 + 32) = v92;
          }
        }
        v93 = v210;
LABEL_260:
        v84 = 0LL;
        XlateObject = CreateXlateObject(v224, v195, v93, v79, v80, v80, 0, 0, 0xFFFFFF, 0);
        v225 = XlateObject;
        v75 = (char *)XlateObject;
        if ( XlateObject )
        {
          v83 = 0;
          v84 = (char *)XlateObject;
          v191 = (char *)XlateObject;
        }
        else
        {
          v188 = 0;
          v83 = 0;
        }
        goto LABEL_265;
      }
      if ( HIDWORD(v203) )
      {
LABEL_183:
        *((_DWORD *)v60 + 11) |= 2u;
        v60 = v202;
        LODWORD(v203) = 1;
        goto LABEL_184;
      }
      v63 = XDCOBJ::GetUserAttr((XDCOBJ *)&v202);
      if ( !v63 || DC::SaveAttributes(v202, v63) )
      {
        v60 = v202;
        goto LABEL_183;
      }
LABEL_168:
      _InterlockedDecrement((volatile signed __int32 *)v202 + 3);
      goto LABEL_169;
    }
    *((_DWORD *)v60 + 528) = 0;
LABEL_176:
    v60 = v202;
    goto LABEL_177;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v60 + 6) + 40LL) & 0x8000) != 0 )
  {
    v61 = *((_DWORD *)v60 + 528);
    if ( v61 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v60 = v202;
      goto LABEL_165;
    }
    v42 = v184;
    goto LABEL_176;
  }
LABEL_165:
  _InterlockedDecrement((volatile signed __int32 *)v60 + 3);
LABEL_169:
  v202 = 0LL;
LABEL_170:
  EngSetLastError(0x57u);
  v60 = v202;
  v62 = 0;
LABEL_453:
  if ( v60 )
  {
    if ( (_DWORD)v203 && (*((_DWORD *)v60 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v203) )
      {
        v180 = XDCOBJ::GetUserAttr((XDCOBJ *)&v202);
        if ( v180 )
          DC::RestoreAttributes(v202, v180);
        v60 = v202;
      }
      *((_DWORD *)v60 + 11) &= ~2u;
      v60 = v202;
      LODWORD(v203) = 0;
    }
    v222 = 0;
    v181 = *(_QWORD *)v60;
    HmgDecrementExclusiveReferenceCountEx(v60, HIDWORD(v203), &v222);
    if ( v222 )
      GrepDeleteDC(v181, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v204);
  return v62;
}
