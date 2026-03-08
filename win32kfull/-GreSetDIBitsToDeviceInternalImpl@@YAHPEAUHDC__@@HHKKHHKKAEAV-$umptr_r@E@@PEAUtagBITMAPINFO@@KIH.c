/*
 * XREFs of ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C008C990 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C008D600 (NtGdiSetDIBitsToDeviceInternal.c)
 *     ?GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1C02DFCFC (-GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX.c)
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00057D8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0050D28 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0055118 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0059450 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C0086D84 (bCvtPts1.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C924 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E2260 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00E90D4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F7D4 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F858 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C0269834 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02DACDC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02DAD78 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DE318 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C02E00E4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02E01D8 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02E025C (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternalImpl(
        HDC a1,
        __int64 a2,
        LONG a3,
        int a4,
        int a5,
        int a6,
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
  int v15; // esi
  int v18; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  struct UMPDOBJ *v22; // rdx
  DC *v23; // r9
  int v24; // ebx
  __int64 v25; // rcx
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v27; // rax
  __int64 v28; // rbx
  unsigned int v29; // r12d
  __int64 v30; // rdi
  __int64 v31; // r10
  int v32; // r9d
  unsigned int v33; // edx
  __int64 v34; // rbx
  unsigned int v35; // esi
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // r8d
  unsigned int v40; // r9d
  unsigned int v41; // r15d
  unsigned int v42; // ebx
  unsigned __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  ULONG v46; // ecx
  __int64 v47; // r9
  unsigned __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned int v51; // r12d
  signed int v52; // esi
  __int64 v53; // rdx
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  struct UMPDOBJ *v57; // rdx
  DC *v58; // r9
  int v59; // ebx
  __int64 v60; // rcx
  struct _DC_ATTR *v61; // rax
  unsigned int v62; // edx
  LONG v63; // edi
  __int64 v64; // r14
  unsigned __int64 v65; // rcx
  int v66; // ecx
  int v67; // eax
  int v68; // edx
  LONG v69; // r11d
  LONG v70; // r10d
  LONG v71; // ecx
  LONG v72; // eax
  char *v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r13
  __int64 v77; // rax
  Gre::Base *v78; // rcx
  __int64 v79; // rsi
  _QWORD *v80; // rdi
  int v81; // eax
  bool v82; // zf
  int v83; // r15d
  char *v84; // r14
  unsigned int v85; // esi
  int Xlate; // eax
  Gre::Base *v87; // rcx
  __int64 v88; // r8
  unsigned int v89; // r8d
  unsigned int v90; // edx
  Gre::Base *v91; // rcx
  char *v92; // rdx
  char v93; // al
  signed __int32 v94; // ecx
  __int64 v95; // r8
  __int64 v96; // rax
  __int64 XlateObject; // rax
  void *v98; // r8
  DC *v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rsi
  __int64 v102; // rdi
  LONG left; // r9d
  int right; // r8d
  int top; // r11d
  int bottom; // r10d
  __int64 v107; // rax
  __int64 v108; // rdi
  LONG v109; // eax
  LONG v110; // ecx
  LONG v111; // esi
  struct REGION *v112; // rax
  struct ECLIPOBJ *v113; // rdx
  __int64 v114; // rax
  struct _SURFOBJ *v115; // rdx
  __int16 v116; // r8
  BOOL (__stdcall *v117)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v118; // rdx
  BOOL (__stdcall *v119)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v120; // rdx
  LONG v121; // r15d
  LONG v122; // r14d
  int v123; // r12d
  int v124; // esi
  int v125; // r14d
  int v126; // eax
  int v127; // ecx
  struct REGION *v128; // r10
  LONG v129; // r12d
  struct ECLIPOBJ *v130; // rdx
  LONG v131; // esi
  int v132; // edx
  int v133; // r10d
  _DWORD *v134; // rax
  __int64 v135; // r8
  int v136; // r14d
  int v137; // r14d
  LONG v138; // r11d
  __int64 v139; // rax
  __int64 v140; // rax
  _DWORD *v141; // rax
  DC *v142; // r9
  __int64 v143; // rax
  int v144; // ecx
  __int64 v145; // rax
  int v146; // ecx
  int v147; // eax
  float v148; // xmm0_4
  LONG v149; // r15d
  LONG v150; // eax
  int v151; // esi
  LONG v152; // ecx
  LONG v153; // r10d
  LONG v154; // r14d
  LONG v155; // r15d
  LONG v156; // ecx
  int v157; // edx
  LONG v158; // ecx
  int v159; // eax
  int v160; // eax
  BOOL (__stdcall *v161)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v162; // rdx
  int v163; // eax
  BOOL (__stdcall *v164)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v165; // rdx
  Gre::Base *v166; // rcx
  int v167; // eax
  DC *v168; // rcx
  __int64 v169; // rbx
  unsigned int v170; // eax
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 *v175; // rdi
  struct SURFACE *v176; // rax
  __int64 v177; // rsi
  struct SURFACE *v178; // rbx
  Gre::Base *v179; // rcx
  struct Gre::Base::SESSION_GLOBALS *v180; // rbx
  char v181; // di
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rbx
  unsigned int v185; // edi
  struct _DC_ATTR *v186; // rax
  __int64 v187; // rbx
  struct _CLIPOBJ *v189; // [rsp+20h] [rbp-E0h]
  struct _RECTL *v190; // [rsp+30h] [rbp-D0h]
  __int64 v191; // [rsp+38h] [rbp-C8h]
  __int64 v192; // [rsp+40h] [rbp-C0h]
  unsigned int v193; // [rsp+60h] [rbp-A0h]
  DC *v194; // [rsp+68h] [rbp-98h] BYREF
  __int64 v195; // [rsp+70h] [rbp-90h]
  unsigned int v196; // [rsp+78h] [rbp-88h]
  unsigned int v197; // [rsp+7Ch] [rbp-84h]
  int v198; // [rsp+80h] [rbp-80h]
  LONG v199; // [rsp+84h] [rbp-7Ch]
  LONG v200; // [rsp+88h] [rbp-78h]
  int v201; // [rsp+8Ch] [rbp-74h]
  int v202; // [rsp+90h] [rbp-70h]
  char *v203; // [rsp+A0h] [rbp-60h]
  int v204; // [rsp+A8h] [rbp-58h]
  DC *v205; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v206; // [rsp+B8h] [rbp-48h]
  _BYTE v207[16]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v208; // [rsp+D0h] [rbp-30h]
  int v209; // [rsp+E0h] [rbp-20h]
  signed int v210; // [rsp+E4h] [rbp-1Ch]
  int v211; // [rsp+E8h] [rbp-18h]
  unsigned int v212; // [rsp+ECh] [rbp-14h]
  unsigned int v213; // [rsp+F0h] [rbp-10h]
  unsigned int v214; // [rsp+F4h] [rbp-Ch]
  __int64 v215; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v216; // [rsp+100h] [rbp+0h]
  __int64 v217; // [rsp+108h] [rbp+8h]
  __int64 v218; // [rsp+110h] [rbp+10h]
  __int64 v219; // [rsp+118h] [rbp+18h] BYREF
  int v220; // [rsp+120h] [rbp+20h]
  _QWORD *v221; // [rsp+128h] [rbp+28h] BYREF
  struct _RECTL v222; // [rsp+130h] [rbp+30h] BYREF
  __int64 v223; // [rsp+140h] [rbp+40h] BYREF
  char v224; // [rsp+148h] [rbp+48h]
  int v225; // [rsp+14Ch] [rbp+4Ch]
  int v226; // [rsp+150h] [rbp+50h] BYREF
  int v227; // [rsp+154h] [rbp+54h] BYREF
  unsigned int *v228; // [rsp+158h] [rbp+58h]
  __int64 v229; // [rsp+160h] [rbp+60h]
  __int64 v230; // [rsp+168h] [rbp+68h] BYREF
  int v231; // [rsp+170h] [rbp+70h] BYREF
  int v232; // [rsp+178h] [rbp+78h] BYREF
  int v233; // [rsp+17Ch] [rbp+7Ch]
  int v234; // [rsp+180h] [rbp+80h]
  int v235; // [rsp+184h] [rbp+84h]
  __int64 v236; // [rsp+190h] [rbp+90h] BYREF
  __int64 v237; // [rsp+198h] [rbp+98h]
  unsigned int v238; // [rsp+1A8h] [rbp+A8h]
  int v239; // [rsp+1ACh] [rbp+ACh]
  DC *v240; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v241; // [rsp+1B8h] [rbp+B8h]
  __int16 v242; // [rsp+1C0h] [rbp+C0h]
  __int64 v243; // [rsp+1C8h] [rbp+C8h]
  __int64 v244; // [rsp+1D0h] [rbp+D0h]
  HDC v245; // [rsp+1D8h] [rbp+D8h]
  int v246; // [rsp+1E0h] [rbp+E0h] BYREF
  int v247; // [rsp+1E4h] [rbp+E4h]
  unsigned int v248; // [rsp+1E8h] [rbp+E8h] BYREF
  LONG v249; // [rsp+1ECh] [rbp+ECh]
  unsigned __int64 v250; // [rsp+1F0h] [rbp+F0h] BYREF
  DC *v251[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  char *v252; // [rsp+208h] [rbp+108h] BYREF
  int v253; // [rsp+210h] [rbp+110h]
  int v254; // [rsp+214h] [rbp+114h]
  _DWORD v255[2]; // [rsp+218h] [rbp+118h] BYREF
  DC *v256[2]; // [rsp+220h] [rbp+120h] BYREF
  struct _RECTL v257; // [rsp+230h] [rbp+130h]
  DC *v258[2]; // [rsp+240h] [rbp+140h] BYREF
  DC *v259[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v260; // [rsp+260h] [rbp+160h] BYREF
  __int64 v261; // [rsp+268h] [rbp+168h] BYREF
  __int64 v262; // [rsp+270h] [rbp+170h] BYREF
  __m128i v263; // [rsp+280h] [rbp+180h] BYREF
  __m128i v264; // [rsp+290h] [rbp+190h] BYREF
  struct _RECTL v265; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _RECTL v266; // [rsp+2B0h] [rbp+1B0h] BYREF
  struct _RECTL v267; // [rsp+2C0h] [rbp+1C0h] BYREF
  struct _RECTL v268; // [rsp+2D0h] [rbp+1D0h]
  _BYTE v269[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __m128i v270; // [rsp+2E4h] [rbp+1E4h]
  __int64 v271; // [rsp+330h] [rbp+230h]
  int v272; // [rsp+338h] [rbp+238h]
  int v273; // [rsp+360h] [rbp+260h]
  __int64 v274; // [rsp+370h] [rbp+270h]
  _BYTE v275[4]; // [rsp+380h] [rbp+280h] BYREF
  __m128i v276[4]; // [rsp+384h] [rbp+284h] BYREF
  __int64 v277; // [rsp+3D0h] [rbp+2D0h]
  int v278; // [rsp+3D8h] [rbp+2D8h]
  int v279; // [rsp+400h] [rbp+300h]
  __int64 v280; // [rsp+410h] [rbp+310h]
  unsigned int v281; // [rsp+4D0h] [rbp+3D0h]

  v15 = a2;
  v202 = a6;
  LOBYTE(v18) = -1;
  v199 = a3;
  v208 = a2;
  LOBYTE(a2) = 1;
  v229 = a15;
  v211 = a4;
  v221 = a10;
  v250 = 0LL;
  v206 = 0LL;
  v205 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v205 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v25);
LABEL_19:
    v23 = v205;
    goto LABEL_20;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v20 = *ThreadWin32Thread) != 0 && (v21 = *(_QWORD *)(v20 + 40), v21 != v20 + 40) )
    v22 = (struct UMPDOBJ *)(v21 - 40);
  else
    v22 = 0LL;
  v23 = v205;
  if ( *((_WORD *)v205 + 6) == 1 )
  {
    *((_QWORD *)v205 + 271) = v22;
    *((_DWORD *)v205 + 544) = 0xFFFF;
    v23 = v205;
  }
  else if ( *((struct UMPDOBJ **)v205 + 271) != v22 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v205, v22);
    v23 = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)v205 + 3);
    v205 = 0LL;
    goto LABEL_33;
  }
  if ( HIDWORD(v206) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v23 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_13:
      _InterlockedDecrement((volatile signed __int32 *)v23 + 3);
      v23 = 0LL;
      v205 = 0LL;
      goto LABEL_33;
    }
    v24 = *((_DWORD *)v23 + 528);
    if ( v24 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v23 = v205;
      goto LABEL_13;
    }
    goto LABEL_19;
  }
LABEL_20:
  if ( !v23 )
    goto LABEL_43;
  if ( (*((_DWORD *)v23 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v206) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v205);
      if ( UserAttr && !DC::SaveAttributes(v205, UserAttr) )
      {
        v23 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v205 + 3);
        v205 = 0LL;
        goto LABEL_33;
      }
      v23 = v205;
    }
    *((_DWORD *)v23 + 11) |= 2u;
    v23 = v205;
    LODWORD(v206) = 1;
  }
  if ( (*((_DWORD *)v23 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v23);
    v23 = v205;
  }
  if ( v23 )
  {
    v18 = *(_DWORD *)(*((_QWORD *)v23 + 122) + 108LL);
LABEL_33:
    if ( v23 )
    {
      if ( (_DWORD)v206 && (*((_DWORD *)v23 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v206) )
        {
          v27 = XDCOBJ::GetUserAttr((XDCOBJ *)&v205);
          if ( v27 )
            DC::RestoreAttributes(v205, v27);
          v23 = v205;
        }
        *((_DWORD *)v23 + 11) &= ~2u;
        v23 = v205;
        LODWORD(v206) = 0;
      }
      v227 = 0;
      v28 = *(_QWORD *)v23;
      HmgDecrementExclusiveReferenceCountEx(v23, HIDWORD(v206), &v227);
      if ( v227 )
        GrepDeleteDC(v28, 0x2000000LL);
    }
  }
LABEL_43:
  if ( (v18 & 1) != 0 )
    v208 = a4 + v15 - 1;
  if ( !a11 )
    goto LABEL_451;
  if ( !*a10 )
    goto LABEL_451;
  if ( a12 > 2 )
    goto LABEL_451;
  v29 = a13;
  if ( a13 < 0x28 )
    goto LABEL_451;
  v30 = *a11;
  if ( (unsigned int)v30 < 0x28 )
    goto LABEL_451;
  v31 = a11[1];
  v200 = v31;
  if ( (int)v31 <= 0 )
    goto LABEL_451;
  v32 = a11[2];
  v201 = v32;
  if ( !v32 )
    goto LABEL_451;
  v33 = a11[4];
  v34 = *((unsigned __int16 *)a11 + 7);
  v35 = a11[8];
  v215 = 0LL;
  v216 = 0LL;
  v218 = 0LL;
  v217 = 0LL;
  v210 = v33;
  v228 = (unsigned int *)((char *)a11 + v30);
  if ( v32 < 0 )
  {
    LODWORD(v218) = 1;
    if ( v33 > 0xC )
      goto LABEL_451;
    v36 = 7225;
    if ( !_bittest(&v36, v33) )
      goto LABEL_451;
    v32 = -v32;
    v201 = v32;
  }
  v214 = 0;
  v213 = 0;
  v212 = 0;
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
        LODWORD(v215) = 4;
LABEL_64:
        v214 = a11[10];
        v38 = v34 * v31;
        v213 = a11[11];
        v39 = 0;
        v40 = a11[12];
        v41 = 2;
        v228 = a11 + 10;
        v212 = v40;
        v196 = 0;
        v197 = 512;
        if ( (unsigned __int64)(v34 * v31) > 0xFFFFFFFF || v38 + 31 < v38 )
          goto LABEL_90;
        v42 = a9;
        v193 = a9;
        v43 = a9 * (unsigned __int64)(((v38 + 31) >> 3) & 0x1FFFFFFC);
        if ( v43 <= 0xFFFFFFFF )
        {
          v29 = a13;
          v32 = v201;
          v204 = a8;
LABEL_140:
          HIDWORD(v216) = v43;
          goto LABEL_141;
        }
LABEL_89:
        HIDWORD(v216) = -1;
LABEL_90:
        v46 = 534;
LABEL_452:
        EngSetLastError(v46);
        return 0LL;
      }
      if ( (_DWORD)v34 == 32 )
      {
        LODWORD(v215) = 6;
        goto LABEL_64;
      }
    }
LABEL_451:
    v46 = 87;
    goto LABEL_452;
  }
  if ( !v33 )
  {
    if ( (unsigned int)v34 <= 8 )
    {
      switch ( (_DWORD)v34 )
      {
        case 1:
          LODWORD(v215) = 1;
          v39 = 2;
          v196 = 2;
          v41 = 1;
          v197 = 1024;
          goto LABEL_85;
        case 4:
          v197 = 1024;
          LODWORD(v215) = 2;
          v39 = 16;
          v196 = 16;
          v41 = 1;
          goto LABEL_85;
        case 8:
          v39 = 256;
          LODWORD(v215) = 3;
          v196 = 256;
          v41 = 1;
          v197 = 1024;
          goto LABEL_85;
      }
    }
    v196 = 0;
    v44 = 0;
    v197 = 512;
    if ( a12 != 1 )
      v44 = a12;
    v39 = 0;
    a12 = v44;
    switch ( (_DWORD)v34 )
    {
      case 0x20:
        LODWORD(v215) = 6;
        a12 = v44;
        break;
      case 0x10:
        LODWORD(v215) = 4;
        v41 = 2;
        v214 = 31744;
        v213 = 992;
        v212 = 31;
        a12 = v44;
        goto LABEL_85;
      case 0x18:
        LODWORD(v215) = 5;
        break;
      default:
        goto LABEL_451;
    }
    v41 = 8;
LABEL_85:
    v45 = v34 * v31;
    if ( (unsigned __int64)(v34 * v31) > 0xFFFFFFFF || v45 + 31 < v45 )
      goto LABEL_90;
    v42 = a9;
    v193 = a9;
    v43 = a9 * (unsigned __int64)(((v45 + 31) >> 3) & 0x1FFFFFFC);
    if ( v43 <= 0xFFFFFFFF )
    {
      v204 = a8;
      goto LABEL_140;
    }
    goto LABEL_89;
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
              LODWORD(v215) = 9;
              v39 = 0;
              v196 = 0;
              v197 = 512;
            }
            else
            {
              if ( v33 != 5 )
                goto LABEL_451;
              v42 = a9;
              v41 = 8;
              LODWORD(v215) = 10;
              v39 = 0;
              v196 = 0;
              v197 = 512;
            }
LABEL_139:
            LODWORD(v43) = a11[5];
            v193 = v42;
            v204 = 0;
            goto LABEL_140;
          }
          DCOBJ::DCOBJ((DCOBJ *)v258, a1);
          if ( !v258[0] || !(unsigned int)DC::bIsCMYKColor(v258[0]) )
          {
            EngSetLastError(0x57u);
            if ( v258[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v258);
            return 0LL;
          }
          if ( v49 )
            XDCOBJ::vUnlockFast((XDCOBJ *)v258);
          v32 = v201;
        }
        if ( (_DWORD)v34 != 8 )
          goto LABEL_451;
        v39 = 256;
        LODWORD(v215) = 8;
        v196 = 256;
LABEL_138:
        LODWORD(v31) = v200;
        v41 = 1;
        v209 = 1;
        v42 = v32;
        v197 = 1024;
        goto LABEL_139;
      }
      DCOBJ::DCOBJ((DCOBJ *)v259, a1);
      if ( !v259[0] || !(unsigned int)DC::bIsCMYKColor(v259[0]) )
      {
        EngSetLastError(0x57u);
        if ( v259[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v259);
        return 0LL;
      }
      if ( v50 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v259);
      v32 = v201;
    }
    if ( (_DWORD)v34 != 4 )
      goto LABEL_451;
    LODWORD(v215) = 7;
    v39 = 16;
    v196 = 16;
    goto LABEL_138;
  }
  DCOBJ::DCOBJ((DCOBJ *)v256, a1);
  if ( !v256[0] || !(unsigned int)DC::bIsCMYKColor(v256[0]) )
    goto LABEL_113;
  switch ( (_DWORD)v34 )
  {
    case 1:
      LODWORD(v215) = 1;
      v39 = 2;
      goto LABEL_102;
    case 4:
      LODWORD(v215) = 2;
      v39 = 16;
      goto LABEL_102;
    case 8:
      LODWORD(v215) = 3;
      v39 = 256;
LABEL_102:
      v41 = 1;
      v197 = 1024;
      goto LABEL_103;
  }
  if ( (_DWORD)v34 != 32 )
  {
LABEL_113:
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v256);
    return 0LL;
  }
  LODWORD(v215) = 6;
  v39 = 0;
  v197 = 512;
  v41 = 16;
LABEL_103:
  LODWORD(v31) = v200;
  v196 = v39;
  v48 = v34 * (unsigned int)v200;
  if ( v48 > 0xFFFFFFFF || (int)v48 + 31 < (unsigned int)v48 )
  {
LABEL_111:
    EngSetLastError(0x216u);
    if ( v256[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v256);
    return 0LL;
  }
  v42 = a9;
  v193 = a9;
  v43 = a9 * (unsigned __int64)(((unsigned int)(v48 + 31) >> 3) & 0x1FFFFFFC);
  if ( v43 > 0xFFFFFFFF )
  {
    HIDWORD(v216) = -1;
    goto LABEL_111;
  }
  HIDWORD(v216) = a9 * (((unsigned int)(v48 + 31) >> 3) & 0x1FFFFFFC);
  if ( v47 )
  {
    XDCOBJ::vUnlockFast((XDCOBJ *)v256);
    LODWORD(v43) = HIDWORD(v216);
    v39 = v196;
    v32 = v201;
    LODWORD(v31) = v200;
  }
  else
  {
    v32 = v201;
  }
  v204 = a8;
LABEL_141:
  v281 = v29 - v30;
  v51 = v39;
  if ( v35 && v35 <= v39 )
    v51 = v35;
  if ( v221[1] - v221[2] < (unsigned __int64)(unsigned int)v43 )
    goto LABEL_451;
  v52 = v210;
  v53 = (unsigned int)v32;
  HIDWORD(v215) = v31;
  v194 = 0LL;
  v195 = 0LL;
  if ( (unsigned int)(v210 - 4) > 1 )
    v53 = v42;
  LODWORD(v216) = v53;
  LOBYTE(v53) = 1;
  v194 = (DC *)HmgLockEx(a1, v53, 0LL);
  if ( !v194 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v60);
LABEL_167:
    v58 = v194;
    goto LABEL_168;
  }
  v54 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v54 && (v55 = *v54) != 0 && (v56 = *(_QWORD *)(v55 + 40), v56 != v55 + 40) )
    v57 = (struct UMPDOBJ *)(v56 - 40);
  else
    v57 = 0LL;
  v58 = v194;
  if ( *((_WORD *)v194 + 6) == 1 )
  {
    *((_QWORD *)v194 + 271) = v57;
    *((_DWORD *)v194 + 544) = 0xFFFF;
    v58 = v194;
  }
  else if ( *((struct UMPDOBJ **)v194 + 271) != v57 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v194, v57);
    _InterlockedDecrement((volatile signed __int32 *)v194 + 3);
    v194 = 0LL;
    goto LABEL_438;
  }
  if ( !HIDWORD(v195) )
  {
LABEL_168:
    if ( !v58 )
      goto LABEL_438;
    if ( (*((_DWORD *)v58 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v195) )
      {
        v61 = XDCOBJ::GetUserAttr((XDCOBJ *)&v194);
        if ( v61 && !DC::SaveAttributes(v194, v61) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v194 + 3);
          v194 = 0LL;
          goto LABEL_438;
        }
        v58 = v194;
      }
      *((_DWORD *)v58 + 11) |= 2u;
      v58 = v194;
      LODWORD(v195) = 1;
    }
    if ( (*((_DWORD *)v58 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v58);
      v58 = v194;
    }
    if ( !v58 || (*((_DWORD *)v58 + 9) & 0x10000) != 0 )
      goto LABEL_438;
    v62 = a11[4];
    v63 = v208;
    v64 = *((_QWORD *)v58 + 6);
    v249 = v199;
    v248 = v208;
    if ( v62 - 4 <= 1 && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v194, v62) || a12 || v229) )
    {
      v42 = 0;
      v193 = 0;
    }
    if ( a14 )
    {
      v253 = *(_DWORD *)(*((_QWORD *)v58 + 122) + 208LL);
      v254 = *(_DWORD *)(*((_QWORD *)v58 + 122) + 108LL) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v58 + 122) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v252, (struct XDCOBJ *)&v194, 0x204u, 0);
        v58 = v194;
        v65 = (unsigned __int64)v252;
      }
      else
      {
        v65 = (unsigned __int64)v58 + 320;
        v252 = (char *)v58 + 320;
      }
      if ( (*(_BYTE *)(v65 + 32) & 0x43) != 0x43 )
      {
        bCvtPts1(v65, &v248, 1LL);
        v58 = v194;
        v63 = v248;
        v65 = (unsigned __int64)v252;
        v199 = v249;
      }
      if ( v42 && a11[4] - 4 <= 1 )
      {
        if ( (*(_BYTE *)(v65 + 32) & 1) == 0 )
          v42 = 0;
        v193 = v42;
      }
    }
    v66 = *((_DWORD *)v58 + 130);
    v67 = v211;
    v68 = a5;
    v246 = v211;
    v247 = a5;
    if ( (v66 & 1) != 0 && (v66 & 2) == 0 )
    {
      v260 = *(_QWORD *)((char *)v58 + 524);
      EPOINTL::vScale((EPOINTL *)&v246, (const struct POINTFL *)&v260);
      v58 = v194;
      v68 = v247;
      v67 = v246;
    }
    v69 = v199;
    v70 = v67 + v63;
    v266.left = v63;
    v71 = v70;
    v266.top = v199;
    v266.right = v67 + v63;
    v72 = v68 + v199;
    v266.bottom = v68 + v199;
    if ( v63 > v70 )
    {
      v71 = v63;
      v266.left = v70;
      v266.right = v63;
      v63 = v70;
    }
    if ( v199 > v68 + v199 )
    {
      v72 = v199;
      v266.top = v68 + v199;
      v266.bottom = v199;
      v69 = v68 + v199;
    }
    if ( v63 == v71 || v69 == v72 || !v42 )
    {
LABEL_439:
      v185 = v193;
      goto LABEL_440;
    }
    if ( (*((_DWORD *)v58 + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)&v194, (struct ERECTL *)&v266);
    v73 = 0LL;
    v242 = 256;
    v240 = 0LL;
    v241 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v236, (struct XDCOBJ *)&v194, 0);
    v58 = v194;
    v76 = *((_QWORD *)v194 + 62);
    *(_QWORD *)&v257.left = v76;
    if ( !v76 )
    {
LABEL_393:
      v168 = v240;
      if ( v240 && HIBYTE(v242) )
      {
        v169 = *((_QWORD *)v240 + 6);
        if ( (v238 & 0x1000) != 0 )
        {
          DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v236);
          if ( (v238 & 0x10) != 0 )
          {
            *((_DWORD *)v240 + 9) &= ~0x4000u;
            DC::pSurface(v240, *(struct SURFACE **)(v169 + 2528));
          }
          DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v236);
        }
        DLODCOBJ::vUnlock((DLODCOBJ *)&v240);
        v58 = v194;
        v240 = 0LL;
      }
      v170 = v238;
      if ( (v238 & 0x1000) != 0 )
      {
        GreDecLockCount(v168, v74, v75, v58);
        v238 &= ~0x1000u;
        v171 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( v171 )
        {
          *(_QWORD *)(v171 + 320) = 0LL;
          *(_QWORD *)(v171 + 312) = 0LL;
        }
        v170 = v238;
      }
      else
      {
        if ( (v238 & 0x800000) == 0 )
        {
LABEL_407:
          if ( v236 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
            GreReleaseSemaphoreInternal(v236);
            v58 = v194;
            v170 = v238;
          }
          if ( (v170 & 8) != 0 )
            v238 = v170 & 0xFFFFFFF7;
          if ( v237 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
            GreReleaseSemaphoreInternal(v237);
            v58 = v194;
          }
          if ( v244 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v251, v245);
            LOBYTE(v172) = 5;
            v173 = HmgShareLock(v243, v172);
            LOBYTE(v174) = 5;
            v175 = (__int64 *)v173;
            v176 = (struct SURFACE *)HmgShareLock(v244, v174);
            v177 = *v175;
            v178 = v176;
            DC::pSurface(v251[0], v176);
            DEC_SHARE_REF_CNT(v175);
            DEC_SHARE_REF_CNT(v178);
            GreDereferenceObject(v177, 1LL);
            v179 = v251[0];
            v245 = 0LL;
            v243 = 0LL;
            *((_DWORD *)v251[0] + 9) |= v239;
            v180 = Gre::Base::Globals(v179);
            if ( (*((_DWORD *)v251[0] + 9) & 0x200) != 0 )
            {
              v181 = 0;
              if ( !(unsigned int)GreGetLockCount(v251[0])
                && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v180 + 15)) )
              {
                GreAcquireSemaphoreSharedInternal(*((_QWORD *)v180 + 15));
                EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v180 + 15));
                v181 = 1;
              }
              DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v207);
              LOBYTE(v189) = 5;
              v182 = HmgShareUnlockRemoveObject(v244, 0LL, 0LL, 0LL, (_DWORD)v189);
              if ( v182 )
                SURFACE::bDeleteSurface(v182, 0LL, 1LL);
              *((_QWORD *)v251[0] + 63) = 0LL;
              DC::vClearRendering(v251[0]);
              v244 = 0LL;
              DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v207);
              if ( v181 )
              {
                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                GreReleaseSemaphoreInternal(*((_QWORD *)v180 + 15));
              }
            }
            else
            {
              LOBYTE(v189) = 5;
              v183 = HmgShareUnlockRemoveObject(v244, 0LL, 0LL, 0LL, (_DWORD)v189);
              if ( v183 )
                SURFACE::bDeleteSurface(v183, 0LL, 1LL);
              *((_QWORD *)v251[0] + 63) = 0LL;
              v244 = 0LL;
            }
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
            GreReleaseSemaphoreInternal(*((_QWORD *)v180 + 10));
            if ( v251[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v251);
            v58 = v194;
          }
          if ( v240 )
          {
            if ( (_BYTE)v242 )
            {
              *((_DWORD *)v240 + 10) &= ~2u;
              v58 = v194;
              LOBYTE(v242) = 0;
            }
            if ( v240 )
            {
              if ( (_DWORD)v241 && (*((_DWORD *)v240 + 11) & 2) != 0 )
              {
                XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v240);
                *((_DWORD *)v240 + 11) &= ~2u;
                LODWORD(v241) = 0;
              }
              v231 = 0;
              v184 = *(_QWORD *)v240;
              HmgDecrementExclusiveReferenceCountEx(v240, HIDWORD(v241), &v231);
              if ( v231 )
                GrepDeleteDC(v184, 0x2000000LL);
              v58 = v194;
            }
          }
          goto LABEL_439;
        }
        GreDecLockCount(v168, v74, v75, v58);
        v170 = v238 & 0xFF7FFFFF;
        v238 &= ~0x800000u;
      }
      v58 = v194;
      goto LABEL_407;
    }
    v77 = v229;
    if ( !v229 )
    {
      v77 = *(_QWORD *)(*((_QWORD *)v194 + 122) + 248LL);
      v229 = v77;
    }
    v208 = *((_DWORD *)v194 + 30);
    v78 = (Gre::Base *)v208;
    if ( (v208 & 0x10000000) != 0 && (!v77 || (unsigned int)(v52 - 10) > 2) )
    {
      v78 = (Gre::Base *)(v208 & 0xFFFFFFF);
      LODWORD(v78) = (unsigned int)v78 | 0x20000000;
      v208 = (unsigned int)v78;
    }
    v79 = *(_QWORD *)(v76 + 128);
    v220 = 0;
    v219 = 0LL;
    v80 = (_QWORD *)*((_QWORD *)v194 + 11);
    if ( v80 != *((_QWORD **)Gre::Base::Globals(v78) + 750) )
      *(_QWORD *)(v76 + 176) = *v80;
    v199 = 1;
    v198 = 0;
    v203 = 0LL;
    v230 = 0LL;
    if ( a12 )
    {
      if ( a12 != 1 )
      {
        v81 = *(_DWORD *)(v76 + 96);
        if ( v81 != (_DWORD)v215 )
        {
          if ( v81 == 2 )
          {
            v82 = (_DWORD)v215 == 7;
          }
          else
          {
            if ( v81 != 3 )
            {
LABEL_226:
              EngSetLastError(0x57u);
LABEL_227:
              v83 = 0;
              v199 = 0;
LABEL_256:
              v84 = v73;
              goto LABEL_257;
            }
            v82 = (_DWORD)v215 == 8;
          }
          if ( !v82 )
            goto LABEL_226;
        }
        v83 = 0;
        v84 = (char *)Gre::Base::Globals((Gre::Base *)(unsigned int)v215) + 6896;
        v203 = v84;
LABEL_257:
        v98 = (void *)(v221[2] + *v221);
        v223 = 0LL;
        v224 = 0;
        v225 = 0;
        SURFMEM::bCreateDIB((SURFMEM *)&v223, (struct _DEVBITMAPINFO *)&v215, v98, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( v199 && v223 )
        {
          *(_DWORD *)(v223 + 92) = 0;
          if ( (v238 & 1) == 0 )
            goto LABEL_387;
          v99 = v194;
          v100 = *((_DWORD *)v194 + 10) & 1;
          v101 = *((int *)v194 + 2 * v100 + 254);
          if ( (unsigned __int64)(v101 + v266.left + 0x80000000LL) > 0xFFFFFFFF )
            goto LABEL_387;
          if ( (unsigned __int64)(v101 + v266.right + 0x80000000LL) > 0xFFFFFFFF )
            goto LABEL_387;
          v102 = *((int *)v194 + 2 * v100 + 255);
          if ( (unsigned __int64)(v102 + v266.top + 0x80000000LL) > 0xFFFFFFFF
            || (unsigned __int64)(v102 + v266.bottom + 0x80000000LL) > 0xFFFFFFFF )
          {
            goto LABEL_387;
          }
          left = v101 + v266.left;
          v266.left += v101;
          right = *((_DWORD *)v194 + 2 * v100 + 254) + v266.right;
          v266.right = right;
          top = *((_DWORD *)v194 + 2 * v100 + 255) + v266.top;
          v266.top = top;
          bottom = *((_DWORD *)v194 + 2 * v100 + 255) + v266.bottom;
          v266.bottom = bottom;
          if ( v83 )
          {
            v107 = v219;
            if ( v219 )
            {
              INC_SHARE_REF_CNT(v219);
              v107 = v219;
            }
            *(_QWORD *)(v223 + 128) = v107;
            v99 = v194;
            bottom = v266.bottom;
            right = v266.right;
            top = v266.top;
            left = v266.left;
          }
          v108 = *(_QWORD *)(v76 + 48);
          v109 = v201 - a5 - a7;
          v110 = v201 - a7;
          v265.left = v202;
          v111 = v211 + v202;
          v265.top = v109;
          v265.right = v211 + v202;
          v265.bottom = v201 - a7;
          if ( v209 )
          {
            v112 = XDCOBJ::prgnEffRao(&v194);
            v279 = 1;
            v277 = 0LL;
            v278 = 0;
            v280 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)v275, v112, (struct ERECTL *)&v266, 0);
            if ( !ERECTL::bEmpty((ERECTL *)v276) )
            {
              if ( (*((_DWORD *)v194 + 9) & 0xE0) != 0 )
              {
                v263 = v276[0];
                XDCOBJ::vAccumulateTight((XDCOBJ *)&v194, v113, &v263);
              }
              v114 = v223;
              ++*(_DWORD *)(v76 + 92);
              v115 = (struct _SURFOBJ *)(v114 + 24);
              if ( !v114 )
                v115 = 0LL;
              if ( bClipSrcDstRectsAndValidate(
                     (struct _SURFOBJ *)(v76 + 24),
                     v115,
                     (struct DCOBJ *)&v194,
                     0LL,
                     v189,
                     &v266,
                     &v265) )
              {
                if ( (unsigned int)DC::bDpiScaleTransform(v194) )
                {
                  if ( (v116 & 2) != 0 )
                    v117 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v108 + 2824);
                  else
                    v117 = EngStretchBlt;
                  v118 = v223 + 24;
                  if ( !v223 )
                    v118 = 0LL;
                  ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, char *, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v117)(
                    v76 + 24,
                    v118,
                    0LL,
                    v275,
                    v84,
                    0LL,
                    0LL,
                    &v266,
                    &v265,
                    0LL,
                    3);
                }
                else
                {
                  v255[0] = v265.left;
                  v255[1] = v265.top;
                  if ( (v116 & 0x400) != 0 )
                    v119 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v108 + 2816);
                  else
                    v119 = EngCopyBits;
                  v120 = v223 + 24;
                  if ( !v223 )
                    v120 = 0LL;
                  ((void (__fastcall *)(__int64, __int64, _BYTE *, char *, struct _RECTL *, _DWORD *))v119)(
                    v76 + 24,
                    v120,
                    v275,
                    v84,
                    &v266,
                    v255);
                }
              }
            }
            goto LABEL_387;
          }
          v121 = v201 - v204 - v193;
          v122 = v202;
          v257 = v265;
          if ( v202 < 0 )
            v122 = v250;
          v202 = v122;
          if ( v121 > v109 )
            v109 = v201 - v204 - v193;
          v265.left = v122;
          v265.top = v109;
          if ( v200 < v111 )
            v111 = v200;
          v265.right = v111;
          if ( v201 - v204 < v110 )
            v110 = v201 - v204;
          v265.bottom = v110;
          if ( v111 < v122 )
          {
            v265.left = v111;
LABEL_387:
            SURFMEM::~SURFMEM((SURFMEM *)&v223);
            if ( v73 )
            {
              v167 = *((_DWORD *)v73 + 9);
              if ( v167 < 0 )
              {
                if ( v167 == -1 )
                  FreeThreadBufferWithTag(v73);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v166) + 8 * *((int *)v73 + 9) + 1658);
              }
            }
            PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v219);
            v58 = v194;
            goto LABEL_393;
          }
          if ( v110 < v109 )
            v109 = v110;
          v265.top = v109;
          if ( v122 == v111 || v109 == v110 )
            goto LABEL_387;
          v123 = v122 - v257.left;
          v222 = v265;
          v124 = v265.right - v257.right;
          v125 = v265.top - v257.top;
          v126 = v265.bottom - v257.bottom;
          v222.left = v123;
          v127 = *((_DWORD *)v99 + 130);
          v222.right = v265.right - v257.right;
          v222.top = v265.top - v257.top;
          v222.bottom = v265.bottom - v257.bottom;
          if ( (v127 & 1) != 0 && (v127 & 2) == 0 )
          {
            v261 = *(_QWORD *)((char *)v99 + 524);
            ERECTL::vScale((ERECTL *)&v222, (const struct POINTFL *)&v261);
            v99 = v194;
            bottom = v266.bottom;
            right = v266.right;
            top = v266.top;
            left = v266.left;
            v126 = v222.bottom;
            v124 = v222.right;
            v125 = v222.top;
            v123 = v222.left;
          }
          v266.left = v123 + left;
          v266.right = v124 + right;
          v266.bottom = v126 + bottom;
          v266.top = v125 + top;
          if ( v123 + left == v124 + right || v125 + top == v126 + bottom )
            goto LABEL_387;
          if ( *((_QWORD *)v99 + 146) && (*((_DWORD *)v99 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v99)
            || *((_QWORD *)v99 + 144) )
          {
            v128 = DC::prgnRao(v99);
          }
          else if ( !*((_QWORD *)v99 + 145)
                 || (*((_DWORD *)v99 + 10) & 2) == 0
                 || !(unsigned int)DC::bDpiScaledSurface(v99) )
          {
            v128 = (struct REGION *)*((_QWORD *)v99 + 143);
          }
          v129 = 0;
          v273 = 1;
          v271 = 0LL;
          v272 = 0;
          v274 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v269, v128, (struct ERECTL *)&v266, 0);
          if ( v270.m128i_i32[0] == v270.m128i_i32[2] || v270.m128i_i32[1] == v270.m128i_i32[3] )
            goto LABEL_387;
          if ( (*((_DWORD *)v194 + 9) & 0xE0) != 0 )
          {
            v264 = v270;
            XDCOBJ::vAccumulateTight((XDCOBJ *)&v194, v130, &v264);
          }
          if ( (unsigned int)(v210 - 4) <= 1 )
          {
            v131 = v121;
            v265.bottom += v121 - v265.top;
            v265.top = v121;
          }
          else
          {
            v265.bottom -= v121;
            v131 = v265.top - v121;
            v265.top -= v121;
          }
          ++*(_DWORD *)(v76 + 92);
          v132 = 0;
          v133 = 0;
          v267 = v266;
          v202 = v265.left;
          v232 = 0;
          v233 = 0;
          if ( *(int *)(v76 + 112) < 0 )
          {
            v134 = *(_DWORD **)(v76 + 48);
            if ( v134 )
            {
              if ( (v134[10] & 0x20000) != 0 )
              {
                v132 = v134[640];
                v133 = v134[641];
                v232 = v132;
                v233 = v133;
              }
            }
          }
          v135 = v223;
          v136 = *(_DWORD *)(v76 + 56);
          v235 = v133 + *(_DWORD *)(v76 + 60);
          v137 = v132 + v136;
          v234 = v137;
          v138 = 0;
          v211 = 0;
          v139 = v223 + 112;
          if ( !v223 )
            v139 = 88LL;
          if ( *(int *)v139 < 0 )
          {
            v140 = v223 + 48;
            if ( !v223 )
              v140 = 24LL;
            v141 = *(_DWORD **)v140;
            if ( v141 && (v141[10] & 0x20000) != 0 )
            {
              v138 = v141[641];
              v129 = v141[640];
              v211 = v138;
            }
          }
          v142 = v194;
          v143 = v223 + 56;
          if ( !v223 )
            v143 = 32LL;
          v144 = *(_DWORD *)v143;
          v145 = v223 + 60;
          v210 = v129 + v144;
          if ( !v223 )
            v145 = 36LL;
          v146 = *(_DWORD *)v145;
          v147 = *((_DWORD *)v194 + 130);
          v209 = v138 + v146;
          if ( (v147 & 1) != 0 && (v147 & 2) == 0 )
          {
            v148 = 1.0 / COERCE_FLOAT(*(_QWORD *)((char *)v194 + 524));
            *((float *)&v221 + 1) = 1.0 / *((float *)v194 + 132);
            *(float *)&v221 = v148;
            ERECTL::vScale((ERECTL *)&v232, (const struct POINTFL *)&v221);
            ERECTL::vScale((ERECTL *)&v267, (const struct POINTFL *)&v221);
            v142 = v194;
            v135 = v223;
            v133 = v233;
            v132 = v232;
            v138 = v211;
            v137 = v234;
          }
          v149 = v267.left;
          v202 -= v267.left;
          v150 = v267.top;
          v151 = v131 - v267.top;
          v152 = v267.bottom;
          if ( v132 > v267.left )
            v149 = v132;
          if ( v133 > v267.top )
            v150 = v133;
          v153 = v267.right;
          if ( v137 < v267.right )
            v153 = v137;
          if ( v235 < v267.bottom )
            v152 = v235;
          if ( v153 >= v149 )
          {
            if ( v152 < v150 )
              v150 = v152;
          }
          else
          {
            v149 = v153;
          }
          v154 = v151 + v150;
          v155 = v202 + v149;
          v156 = v151 + v152;
          v157 = v153 + v202;
          if ( v129 > v155 )
            v155 = v129;
          if ( v138 > v154 )
            v154 = v138;
          if ( v210 < v157 )
            v157 = v210;
          if ( v209 < v156 )
            v156 = v209;
          if ( v157 >= v155 )
          {
            if ( v156 < v154 )
              v154 = v156;
          }
          else
          {
            v155 = v157;
          }
          v268.bottom = v156;
          v158 = v156 - v151;
          v268.left = v155;
          *(_QWORD *)&v268.top = __PAIR64__(v157, v154);
          v267.left = v155 - v202;
          v267.top = v154 - v151;
          v267.right = v157 - v202;
          v267.bottom = v158;
          if ( v155 - v202 >= v157 - v202 || v154 - v151 >= v158 )
            goto LABEL_387;
          v159 = *((_DWORD *)v142 + 130);
          if ( (v159 & 1) != 0 && (v159 & 2) == 0 )
          {
            v262 = *(_QWORD *)((char *)v142 + 524);
            ERECTL::vScale((ERECTL *)&v267, (const struct POINTFL *)&v262);
            v142 = v194;
            v135 = v223;
          }
          v265 = v268;
          v266 = v267;
          v160 = *((_DWORD *)v142 + 130);
          if ( (v160 & 1) == 0 || (v160 & 2) != 0 )
          {
            v82 = (*(_DWORD *)(v76 + 112) & 0x400) == 0;
            v250 = __PAIR64__(v154, v155);
            if ( v82 )
              v164 = EngCopyBits;
            else
              v164 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v108 + 2816);
            v165 = v135 + 24;
            if ( !v135 )
              v165 = 0LL;
            v163 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, char *, struct _RECTL *, unsigned __int64 *))v164)(
                     v76 + 24,
                     v165,
                     v269,
                     v203,
                     &v266,
                     &v250);
          }
          else
          {
            if ( (*(_DWORD *)(v76 + 112) & 2) != 0 )
              v161 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v108 + 2824);
            else
              v161 = EngStretchBlt;
            v162 = v135 + 24;
            if ( !v135 )
              v162 = 0LL;
            v163 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, char *, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))v161)(
                     v76 + 24,
                     v162,
                     0LL,
                     v269,
                     v203,
                     0LL,
                     0LL,
                     &v266,
                     &v265,
                     0LL,
                     3);
          }
          if ( v163 )
            goto LABEL_387;
        }
        v193 = 0;
        goto LABEL_387;
      }
      if ( v281 >= 2 * (unsigned __int64)v51 )
      {
        v85 = v196;
        Xlate = EXLATEOBJ::bMakeXlate(&v230, v228, v80, v76, v51, v196);
        v73 = (char *)v230;
        if ( Xlate )
        {
          v203 = (char *)v230;
          if ( *((_DWORD *)Gre::Base::Globals(v87) + 812)
            && (*(_DWORD *)(v64 + 40) & 1) != 0
            && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v219, v41, v85, 0LL, v214, v213, v212, v197, 1) )
          {
            v88 = *(_QWORD *)(v76 + 128);
            if ( !v88 )
              v88 = *(_QWORD *)(v64 + 1776);
            XEPALOBJ::vGetEntriesFrom(&v219, v80, v88, v228, v51);
            v83 = 1;
          }
          else
          {
            v83 = v198;
          }
          goto LABEL_256;
        }
        v199 = 0;
        v84 = 0LL;
        v83 = 0;
        goto LABEL_257;
      }
LABEL_230:
      EngSetLastError(0x57u);
      v83 = 0;
      v199 = 0;
      goto LABEL_256;
    }
    if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v219, v41, v196, 0LL, v214, v213, v212, v197, 1) )
      goto LABEL_227;
    if ( v51 )
    {
      if ( v281 < 4 * v51 )
        goto LABEL_230;
      if ( (unsigned int)(v210 - 10) <= 2 )
      {
        XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v219, v228, v89, v51);
      }
      else
      {
        v90 = *(_DWORD *)(v219 + 28);
        v91 = *(Gre::Base **)(v219 + 112);
        if ( v51 <= v90 || (v51 = *(_DWORD *)(v219 + 28), v90) )
        {
          v92 = (char *)v228 + 1;
          do
          {
            *((_BYTE *)v91 + 3) = 0;
            v91 = (Gre::Base *)((char *)v91 + 4);
            v93 = *(v92 - 1);
            v92 += 4;
            *((_BYTE *)v91 - 2) = v93;
            *((_BYTE *)v91 - 4) = *(v92 - 3);
            *((_BYTE *)v91 - 3) = *(v92 - 4);
            --v51;
          }
          while ( v51 );
          v76 = *(_QWORD *)&v257.left;
        }
        v94 = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v91) + 962);
        *(_DWORD *)(v219 + 32) = v94;
        v95 = v219;
        v96 = *(_QWORD *)(v219 + 120);
        if ( v96 == v219 )
          goto LABEL_252;
        *(_DWORD *)(v96 + 32) = v94;
      }
    }
    v95 = v219;
LABEL_252:
    LODWORD(v192) = 0xFFFFFF;
    LODWORD(v191) = 0;
    LODWORD(v190) = 0;
    XlateObject = CreateXlateObject(v229, v208, v95, v79, v80, v80, v190, v191, v192, 0);
    v230 = XlateObject;
    v73 = (char *)XlateObject;
    v83 = 0;
    if ( XlateObject )
    {
      v84 = (char *)XlateObject;
      v203 = (char *)XlateObject;
    }
    else
    {
      v199 = 0;
      v84 = 0LL;
    }
    goto LABEL_257;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v58 + 6) + 40LL) & 0x8000) != 0 )
  {
    v59 = *((_DWORD *)v58 + 528);
    if ( v59 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v58 = v194;
      goto LABEL_161;
    }
    v42 = v193;
    goto LABEL_167;
  }
LABEL_161:
  _InterlockedDecrement((volatile signed __int32 *)v58 + 3);
  v194 = 0LL;
LABEL_438:
  EngSetLastError(0x57u);
  v58 = v194;
  v185 = 0;
LABEL_440:
  if ( v58 )
  {
    if ( (_DWORD)v195 && (*((_DWORD *)v58 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v195) )
      {
        v186 = XDCOBJ::GetUserAttr((XDCOBJ *)&v194);
        if ( v186 )
          DC::RestoreAttributes(v194, v186);
        v58 = v194;
      }
      *((_DWORD *)v58 + 11) &= ~2u;
      v58 = v194;
      LODWORD(v195) = 0;
    }
    v226 = 0;
    v187 = *(_QWORD *)v58;
    HmgDecrementExclusiveReferenceCountEx(v58, HIDWORD(v195), &v226);
    if ( v226 )
      GrepDeleteDC(v187, 0x2000000LL);
  }
  return v185;
}
