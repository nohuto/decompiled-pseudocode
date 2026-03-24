/*
 * XREFs of NtGdiAlphaBlend @ 0x1C0085150
 * Callers:
 *     BltIcon @ 0x1C00442EC (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B3F8 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024D2E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     EngCopyBits @ 0x1C007EAA0 (EngCopyBits.c)
 *     bCvtPts1 @ 0x1C0084C60 (bCvtPts1.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00872D0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087CC8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C800 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B121C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00B2DD4 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00D3F20 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D40AC (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0125358 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0156A28 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0156A80 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C0169DAC (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C0169E3C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A038 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D1FC (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C026DF64 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0277CF4 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C028BFC0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        XLATEOBJ *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        POINTL a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v14; // r14d
  unsigned int v15; // ebx
  int v16; // r15d
  char *v17; // rsi
  int v18; // edi
  unsigned __int64 v19; // rcx
  int v20; // r8d
  float v21; // xmm4_4
  int left; // edx
  int top; // r10d
  LONG right; // eax
  LONG bottom; // r9d
  int v26; // edx
  int v27; // edi
  int v28; // ecx
  int v29; // r9d
  int v30; // eax
  __int32 v31; // eax
  __int32 v32; // eax
  FIX x; // r9d
  FIX v34; // r8d
  FIX y; // r11d
  FIX v36; // ecx
  int v37; // r10d
  __int64 v38; // r8
  __int64 v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // r8
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  DC *v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // r13
  __int64 v50; // r12
  __int64 v51; // rsi
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int64 v56; // rax
  int v57; // ecx
  _DWORD *v58; // rcx
  ULONG v59; // ecx
  int v60; // edx
  int *v61; // rcx
  __int64 v62; // r11
  __int64 v63; // r10
  int *v64; // rcx
  __int64 v65; // r10
  __int64 v66; // r9
  int v67; // r9d
  LONG v68; // r8d
  LONG v69; // edx
  LONG v70; // edi
  _DWORD *v71; // rax
  int v72; // ecx
  LONG v73; // r9d
  bool v74; // cc
  int v75; // edi
  int v76; // eax
  int v77; // edx
  XLATEOBJ *v78; // rcx
  __int64 v79; // rax
  char v80; // di
  __int64 v81; // rdi
  _DWORD *v82; // rax
  __int64 v83; // r15
  int v84; // ecx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rax
  int v90; // ecx
  int v91; // eax
  __int64 v92; // rax
  unsigned int v93; // r11d
  int v94; // eax
  unsigned int v95; // eax
  __int64 v96; // r8
  __int64 v97; // r10
  unsigned int v98; // eax
  __int64 v99; // r8
  __int64 v100; // r10
  _DWORD *v101; // rdx
  int v102; // r9d
  unsigned int v103; // eax
  __int64 XlateObject; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  XLATEOBJ *v107; // r12
  int v108; // edi
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // edx
  __int64 v112; // rax
  int v113; // ecx
  unsigned int v114; // r12d
  XLATEOBJ *v115; // rax
  unsigned int v116; // r11d
  int v117; // eax
  unsigned int v118; // eax
  __int64 v119; // r8
  __int64 v120; // r10
  unsigned int v121; // eax
  __int64 v122; // r8
  __int64 v123; // r10
  XLATEOBJ *v124; // rdx
  int v125; // r9d
  unsigned int v126; // eax
  __int64 v127; // rax
  int v128; // edi
  __int64 v129; // rsi
  __int64 v130; // rcx
  __int64 v131; // rax
  XLATEOBJ *v132; // r15
  __int64 v133; // rax
  __int64 v134; // rax
  int v135; // edx
  __int64 v136; // rax
  int v137; // ecx
  unsigned int v138; // r15d
  __int64 v139; // rax
  unsigned int v140; // r11d
  int v141; // eax
  unsigned int v142; // eax
  __int64 v143; // r8
  __int64 v144; // r10
  unsigned int v145; // eax
  __int64 v146; // r8
  __int64 v147; // r10
  XLATEOBJ *v148; // rdx
  int v149; // r9d
  unsigned int v150; // eax
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rax
  XLATEOBJ *v154; // rsi
  int v155; // eax
  __int64 v156; // rax
  __int64 v157; // rax
  int v158; // edx
  __int64 v159; // rax
  int v160; // ecx
  int v161; // eax
  __int64 v162; // rax
  unsigned int v163; // r11d
  int v164; // eax
  unsigned int v165; // eax
  __int64 v166; // r8
  __int64 v167; // r10
  unsigned int v168; // eax
  __int64 v169; // r8
  __int64 v170; // r10
  _DWORD *v171; // rdx
  int v172; // r9d
  unsigned int v173; // eax
  __int64 v174; // rax
  int v175; // edi
  __int64 v176; // rdx
  __int64 v177; // rax
  struct REGION *v178; // rdx
  __int64 v179; // r13
  int v180; // eax
  _DWORD *v181; // rdi
  __int64 *v182; // rax
  bool v183; // zf
  BOOL (__stdcall *v184)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v185; // edx
  __int64 v186; // r14
  LONG v187; // edi
  ULONG v188; // ecx
  SURFOBJ *v189; // rcx
  LONG v190; // r10d
  _DWORD *v191; // r9
  _DWORD *v192; // r11
  __int64 v193; // r13
  _DWORD *v194; // rdx
  LONG v195; // ecx
  __int64 v196; // rdi
  unsigned __int64 v197; // r8
  _DWORD *v198; // rax
  unsigned __int64 v199; // r8
  _DWORD *v200; // r8
  unsigned __int64 v201; // rdx
  SURFOBJ *v202; // rdx
  SURFOBJ *v203; // rcx
  int inited; // eax
  __int64 v205; // r9
  DC *v206; // r8
  struct ECLIPOBJ *v207; // rdx
  struct ECLIPOBJ **v208; // rdi
  ULONG v209; // ecx
  BOOL (__stdcall *v210)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v211; // rdx
  __int64 v212; // rdx
  __int64 cEntries; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rcx
  int v217; // ecx
  int v218; // r14d
  ULONG iMode; // [rsp+50h] [rbp-B0h]
  int v221; // [rsp+70h] [rbp-90h]
  int v222; // [rsp+70h] [rbp-90h]
  int v223; // [rsp+70h] [rbp-90h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v226; // [rsp+74h] [rbp-8Ch]
  int v227; // [rsp+78h] [rbp-88h]
  int v228; // [rsp+78h] [rbp-88h]
  int v229; // [rsp+78h] [rbp-88h]
  int v230; // [rsp+78h] [rbp-88h]
  int v231; // [rsp+7Ch] [rbp-84h]
  int v232; // [rsp+7Ch] [rbp-84h]
  int v233; // [rsp+7Ch] [rbp-84h]
  int v234; // [rsp+7Ch] [rbp-84h]
  char v235; // [rsp+80h] [rbp-80h]
  int v236[2]; // [rsp+88h] [rbp-78h] BYREF
  XLATEOBJ *v237; // [rsp+90h] [rbp-70h] BYREF
  int v238[2]; // [rsp+98h] [rbp-68h] BYREF
  POINTFIX v239; // [rsp+A0h] [rbp-60h]
  int v240[2]; // [rsp+A8h] [rbp-58h]
  XLATEOBJ *v241; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v242; // [rsp+B8h] [rbp-48h]
  XLATEOBJ *pxlo; // [rsp+C0h] [rbp-40h]
  __int64 v244; // [rsp+C8h] [rbp-38h]
  POINTL pptlSrc; // [rsp+D0h] [rbp-30h] BYREF
  int v246; // [rsp+D8h] [rbp-28h]
  __int64 v247; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v248; // [rsp+E8h] [rbp-18h]
  __int64 v249; // [rsp+F0h] [rbp-10h]
  char *v250; // [rsp+F8h] [rbp-8h] BYREF
  int v251; // [rsp+100h] [rbp+0h]
  int v252; // [rsp+104h] [rbp+4h]
  DC *v253[2]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v254[32]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v255; // [rsp+138h] [rbp+38h] BYREF
  char v256; // [rsp+140h] [rbp+40h]
  int v257; // [rsp+144h] [rbp+44h]
  __int64 v258; // [rsp+148h] [rbp+48h] BYREF
  char v259; // [rsp+150h] [rbp+50h]
  int v260; // [rsp+154h] [rbp+54h]
  __int64 v261; // [rsp+158h] [rbp+58h] BYREF
  char v262; // [rsp+160h] [rbp+60h]
  int v263; // [rsp+164h] [rbp+64h]
  __int64 v264; // [rsp+168h] [rbp+68h]
  _QWORD v265[2]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v266[32]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v267; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v268; // [rsp+1A8h] [rbp+A8h] BYREF
  int v269; // [rsp+1B0h] [rbp+B0h]
  int v270; // [rsp+1B4h] [rbp+B4h]
  struct PALETTE *v271; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v272; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v273; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v274; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v275; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v276; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v277; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v278; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v279; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD *v280; // [rsp+200h] [rbp+100h]
  __int64 v281; // [rsp+208h] [rbp+108h]
  __int64 v282; // [rsp+210h] [rbp+110h] BYREF
  __int64 v283; // [rsp+218h] [rbp+118h] BYREF
  __int64 v284; // [rsp+220h] [rbp+120h] BYREF
  struct PALETTE *v285; // [rsp+228h] [rbp+128h] BYREF
  __int64 v286; // [rsp+230h] [rbp+130h] BYREF
  _DWORD v287[4]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v288; // [rsp+248h] [rbp+148h]
  __int64 v289; // [rsp+250h] [rbp+150h]
  _DWORD v290[4]; // [rsp+258h] [rbp+158h] BYREF
  __int64 v291; // [rsp+268h] [rbp+168h]
  __int64 v292; // [rsp+270h] [rbp+170h]
  _DWORD v293[4]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v294; // [rsp+288h] [rbp+188h]
  __int64 v295; // [rsp+290h] [rbp+190h]
  __int64 v296; // [rsp+298h] [rbp+198h] BYREF
  __int64 v297; // [rsp+2A0h] [rbp+1A0h] BYREF
  __m128i v298; // [rsp+2B0h] [rbp+1B0h]
  int v299; // [rsp+2C0h] [rbp+1C0h] BYREF
  XLATEOBJ *v300; // [rsp+2C8h] [rbp+1C8h]
  XLATEOBJ *v301; // [rsp+2D0h] [rbp+1D0h]
  XLATEOBJ *v302; // [rsp+2D8h] [rbp+1D8h]
  RECTL v303; // [rsp+2E0h] [rbp+1E0h] BYREF
  __m128i v304; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v305; // [rsp+300h] [rbp+200h]
  _OWORD v306[2]; // [rsp+310h] [rbp+210h] BYREF
  __int64 v307; // [rsp+330h] [rbp+230h]
  __int64 v308; // [rsp+338h] [rbp+238h]
  char v309; // [rsp+340h] [rbp+240h]
  int v310; // [rsp+344h] [rbp+244h]
  int v311; // [rsp+368h] [rbp+268h]
  __int128 v312; // [rsp+370h] [rbp+270h]
  int v313; // [rsp+380h] [rbp+280h]
  __int64 v314; // [rsp+388h] [rbp+288h]
  __int64 v315; // [rsp+390h] [rbp+290h]
  char v316[32]; // [rsp+398h] [rbp+298h] BYREF
  __int16 v317; // [rsp+3B8h] [rbp+2B8h]
  __int64 v318; // [rsp+3C0h] [rbp+2C0h]
  __int64 v319; // [rsp+3C8h] [rbp+2C8h]
  char v320[32]; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int16 v321; // [rsp+3F0h] [rbp+2F0h]
  __int64 v322; // [rsp+3F8h] [rbp+2F8h]
  __int128 v323; // [rsp+400h] [rbp+300h]
  __int64 v324; // [rsp+410h] [rbp+310h]
  __int64 v325; // [rsp+418h] [rbp+318h]
  __int64 v326; // [rsp+420h] [rbp+320h]
  __int64 v327; // [rsp+428h] [rbp+328h]
  RECTL prclDest; // [rsp+430h] [rbp+330h] BYREF
  __m128i v329; // [rsp+440h] [rbp+340h] BYREF
  __int64 v330; // [rsp+450h] [rbp+350h] BYREF
  int v331; // [rsp+458h] [rbp+358h]
  int v332; // [rsp+45Ch] [rbp+35Ch]
  _BYTE v333[4]; // [rsp+460h] [rbp+360h] BYREF
  int v334; // [rsp+464h] [rbp+364h]
  int v335; // [rsp+468h] [rbp+368h]
  int v336; // [rsp+46Ch] [rbp+36Ch]
  int v337; // [rsp+470h] [rbp+370h]
  __int64 v338; // [rsp+498h] [rbp+398h]
  __int64 v339; // [rsp+4B0h] [rbp+3B0h]
  int v340; // [rsp+4B8h] [rbp+3B8h]
  int v341; // [rsp+4E0h] [rbp+3E0h]
  __int64 v342; // [rsp+4F0h] [rbp+3F0h]
  struct _POINTFIX v343; // [rsp+500h] [rbp+400h] BYREF
  FIX v344; // [rsp+508h] [rbp+408h]
  int v345; // [rsp+50Ch] [rbp+40Ch]
  int v346; // [rsp+510h] [rbp+410h]
  FIX v347; // [rsp+514h] [rbp+414h]
  FIX v348; // [rsp+518h] [rbp+418h]
  int v349; // [rsp+51Ch] [rbp+41Ch]
  struct _POINTL v350; // [rsp+520h] [rbp+420h] BYREF
  int v351; // [rsp+528h] [rbp+428h]
  int v352; // [rsp+52Ch] [rbp+42Ch]
  int v353; // [rsp+530h] [rbp+430h]
  int v354; // [rsp+534h] [rbp+434h]
  POINTFIX pptfx; // [rsp+538h] [rbp+438h] BYREF
  POINTFIX v356; // [rsp+540h] [rbp+440h]
  POINTFIX v357; // [rsp+548h] [rbp+448h]

  v14 = 1;
  pptlSrc = a6;
  v240[0] = a7;
  v238[0] = a2;
  v236[0] = a8;
  LODWORD(v237) = a3;
  pxlo = a1;
  if ( !(_BYTE)a11 && (a11 & 0xFE000000) == 0 )
  {
    if ( !a9 || !a10 )
      return 1LL;
    if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
    {
      v239.x = BYTE1(a11) & 0x80;
      v15 = 0;
      LODWORD(v241) = BYTE1(a11) & 0x7F;
      BYTE1(a11) &= ~0x80u;
      v253[0] = 0LL;
      v253[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v254);
      XDCOBJ::vLock((XDCOBJ *)v253, (HDC)pxlo);
      if ( !v253[0] || (*((_DWORD *)v253[0] + 9) & 0x10000) != 0 )
      {
        EngSetLastError(6u);
        goto LABEL_432;
      }
      v265[0] = 0LL;
      v265[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v266);
      XDCOBJ::vLock((XDCOBJ *)v265, *(HDC *)&pptlSrc);
      if ( !v265[0] )
        goto LABEL_428;
      bSpDwmValidateSurface((struct XDCOBJ *)v265, v240[0], v236[0], a9, a10);
      bSpDwmValidateSurface((struct XDCOBJ *)v253, a2, a3, a4, a5);
      v251 = *(_DWORD *)(*((_QWORD *)v253[0] + 122) + 208LL);
      v16 = *(_DWORD *)(*((_QWORD *)v253[0] + 122) + 108LL) & 1;
      v252 = v16;
      if ( (*(_DWORD *)(*((_QWORD *)v253[0] + 122) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v250, (struct XDCOBJ *)v253, 0x204u, 0);
        v16 = v252;
        v17 = v250;
      }
      else
      {
        v17 = (char *)v253[0] + 320;
        v250 = (char *)v253[0] + 320;
      }
      v269 = *(_DWORD *)(*(_QWORD *)(v265[0] + 976LL) + 208LL);
      v18 = *(_DWORD *)(*(_QWORD *)(v265[0] + 976LL) + 108LL) & 1;
      v270 = v18;
      if ( (*(_DWORD *)(*(_QWORD *)(v265[0] + 976LL) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v268, (struct XDCOBJ *)v265, 0x204u, 0);
        v19 = v268;
        v16 = v252;
        v17 = v250;
        v18 = v270;
      }
      else
      {
        v19 = v265[0] + 320LL;
        v268 = v265[0] + 320LL;
      }
      v20 = *(_DWORD *)(v19 + 32);
      if ( (v20 & 1) == 0 || (v21 = 0.0, !v18) && (*(float *)v19 < 0.0 || *(float *)(v19 + 12) < 0.0) )
      {
LABEL_428:
        v14 = 0;
        EngSetLastError(0x57u);
        goto LABEL_429;
      }
      left = v240[0];
      top = v236[0];
      right = v240[0] + a9;
      bottom = v236[0] + a10;
      prclDest.left = v240[0];
      prclDest.top = v236[0];
      prclDest.right = v240[0] + a9;
      prclDest.bottom = v236[0] + a10;
      if ( (v20 & 0x43) != 0x43 )
      {
        bCvtPts1(v19, &prclDest, 2LL);
        bottom = prclDest.bottom;
        right = prclDest.right;
        top = prclDest.top;
        left = prclDest.left;
      }
      if ( v18 )
      {
        ++left;
        ++right;
        prclDest.left = left;
        prclDest.right = right;
      }
      if ( left > right )
      {
        prclDest.left = right;
        prclDest.right = left;
      }
      if ( top > bottom )
      {
        prclDest.top = bottom;
        prclDest.bottom = top;
      }
      if ( (*((_DWORD *)v17 + 8) & 1) != 0 && (v16 || v21 <= *(float *)v17 && v21 <= *((float *)v17 + 3)) )
      {
        v26 = a2;
        v27 = a2 + a4;
        v28 = a3 + a5;
        v329.m128i_i32[2] = a2 + a4;
        v329.m128i_i32[3] = a3 + a5;
        v29 = a3;
        v329.m128i_i64[0] = __PAIR64__(a3, a2);
        v30 = *((_DWORD *)v17 + 8) & 0x43;
        v246 = 0;
        if ( (_BYTE)v30 != 67 )
        {
          bCvtPts1((unsigned __int64)v17, &v329, 2LL);
          v28 = v329.m128i_i32[3];
          v29 = v329.m128i_i32[1];
          v26 = v329.m128i_i32[0];
          v27 = v329.m128i_i32[2];
        }
        if ( v16 )
        {
          ++v26;
          ++v27;
          v329.m128i_i32[0] = v26;
          v329.m128i_i32[2] = v27;
        }
        if ( v26 > v27 )
        {
          v31 = v26;
          v26 = v27;
          v329.m128i_i32[0] = v27;
          v27 = v31;
          v329.m128i_i32[2] = v31;
        }
        if ( v29 > v28 )
        {
          v32 = v29;
          v329.m128i_i32[1] = v28;
          v29 = v28;
          v329.m128i_i32[3] = v32;
          v28 = v32;
        }
      }
      else
      {
        v246 = 1;
        v350.x = a2;
        v350.y = a3;
        v352 = a3;
        v351 = a4 + a2;
        v353 = a2;
        v354 = a3 + a5;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v250, &v350, &v343, 3uLL);
        x = v343.x;
        v34 = v344;
        if ( (*((_DWORD *)v250 + 8) & 1) != 0 )
        {
          if ( v343.x > v344 )
          {
            x = v343.x + 16;
            v34 = v344 + 16;
            v346 += 16;
            v343.x += 16;
            v344 += 16;
          }
          y = v343.y;
          v36 = v347;
          v37 = v345;
          if ( v343.y > v347 )
          {
            y = v343.y + 16;
            v37 = v345 + 16;
            v36 = v347 + 16;
            v343.y += 16;
            v347 += 16;
            v345 += 16;
          }
        }
        else
        {
          v36 = v347;
          v37 = v345;
          y = v343.y;
        }
        v348 = v34 + v346 - x;
        v349 = v36 + v37 - y;
        v38 = (v34 <= v348) ^ (unsigned int)(v34 > x);
        v39 = (v37 <= v349) ^ (unsigned int)(v37 > y);
        v40 = v38 ^ 3;
        if ( *(&v343.x + 2 * v38) <= *(&v343.x + 2 * ((unsigned int)v38 ^ 3LL)) )
          v40 = v38;
        v41 = v40;
        v42 = *(&v343.x + 2 * v40);
        v43 = (unsigned int)v39 ^ 3;
        if ( *(&v343.y + 2 * v39) <= *(&v343.y + 2 * ((unsigned int)v39 ^ 3LL)) )
          v43 = (unsigned int)v39;
        v26 = (v42 + 15) >> 4;
        v329.m128i_i32[0] = v26;
        v29 = (*(&v343.y + 2 * v43) + 15) >> 4;
        v27 = (*(&v343.x + 2 * (v41 ^ 3)) + 15) >> 4;
        v28 = (*(&v343.y + 2 * ((unsigned int)v43 ^ 3LL)) + 15) >> 4;
        v329.m128i_i32[1] = v29;
        v329.m128i_i64[1] = __PAIR64__(v28, v27);
      }
      if ( v26 == v27 || v29 == v28 )
        goto LABEL_429;
      if ( (*((_DWORD *)v253[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v253, (struct ERECTL *)&v329);
      v308 = 0LL;
      v309 = 0;
      v310 = 0;
      v311 = 0;
      v314 = 0LL;
      v315 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v316);
      v317 = 256;
      v318 = 0LL;
      v319 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v320);
      v321 = 256;
      memset(v306, 0, sizeof(v306));
      v312 = 0LL;
      v323 = 0LL;
      v307 = 0LL;
      v313 = 0;
      v322 = 0LL;
      v324 = 0LL;
      v327 = 0LL;
      v325 = 0LL;
      v326 = 0LL;
      v314 = 0LL;
      v318 = 0LL;
      if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v306, (struct XDCOBJ *)v253, (struct XDCOBJ *)v265, 0) )
      {
        v218 = XDCOBJ::bFullScreen((XDCOBJ *)v265);
        v14 = XDCOBJ::bFullScreen((XDCOBJ *)v253) | v218;
        goto LABEL_427;
      }
      v47 = v253[0];
      v48 = *((_QWORD *)v253[0] + 62);
      v248 = v48;
      if ( !v48 )
        goto LABEL_427;
      v49 = *(_QWORD *)(v48 + 128);
      v50 = *((_QWORD *)v253[0] + 11);
      v281 = v49;
      v51 = *(_QWORD *)(v265[0] + 496LL);
      v244 = v50;
      v242 = v51;
      if ( !v51 )
        goto LABEL_427;
      if ( *(_DWORD *)(v51 + 656) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v51 + 656) )
        goto LABEL_425;
      v52 = *(_DWORD *)(v51 + 112);
      if ( (v52 & 0x800) != 0 )
      {
        v53 = UserSurfaceAccessCheck(*(_QWORD *)(v51 + 648), v44, v45, v46);
      }
      else
      {
        if ( (v52 & 0x10000000) == 0 )
        {
LABEL_67:
          if ( (*(_DWORD *)(v48 + 116) & 8) == 0 && !*(_QWORD *)(v48 + 224) || (*(_WORD *)(v48 + 102) & 0x200) == 0 )
          {
            v54 = *(_DWORD *)(v48 + 112);
            if ( (v54 & 0x800) != 0 )
            {
              v55 = UserSurfaceAccessCheck(*(_QWORD *)(v48 + 648), v44, v45, v46);
            }
            else
            {
              if ( (v54 & 0x10000000) == 0 )
              {
LABEL_75:
                v235 = HIBYTE(a11) & 1;
                if ( (a11 & 0x1000000) != 0 )
                {
                  if ( *(_DWORD *)(v51 + 96) != 6
                    || (v56 = *(_QWORD *)(v51 + 128)) == 0
                    || (v57 = *(_DWORD *)(v56 + 24), (v57 & 8) == 0)
                    && ((v57 & 2) == 0
                     || (v58 = *(_DWORD **)(v56 + 112), *v58 != 16711680)
                     || v58[1] != 65280
                     || v58[2] != 255) )
                  {
                    v59 = 87;
LABEL_424:
                    EngSetLastError(v59);
                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v306);
                    goto LABEL_430;
                  }
                }
                v60 = _mm_cvtsi128_si32(v329);
                v298 = v329;
                v61 = (int *)((char *)v253[0] + 1024);
                if ( (*((_DWORD *)v253[0] + 10) & 1) == 0 )
                  v61 = (int *)((char *)v253[0] + 1016);
                v62 = *v61;
                v329.m128i_i32[0] = v60;
                if ( (unsigned __int64)(v62 + v60 + 0x80000000LL) > 0xFFFFFFFF )
                  goto LABEL_423;
                if ( (unsigned __int64)(v62 + v329.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
                  goto LABEL_423;
                v63 = v61[1];
                if ( (unsigned __int64)(v63 + v329.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
                  || (unsigned __int64)(v63 + v329.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
                {
                  goto LABEL_423;
                }
                v329.m128i_i32[0] = v62 + v60;
                v329.m128i_i32[2] += *v61;
                v329.m128i_i32[1] += v61[1];
                v329.m128i_i32[3] += v61[1];
                v64 = (int *)(v265[0] + 1024LL);
                if ( (*(_DWORD *)(v265[0] + 40LL) & 1) == 0 )
                  v64 = (int *)(v265[0] + 1016LL);
                v65 = *v64;
                if ( (unsigned __int64)(v65 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
                  || (unsigned __int64)(v65 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                  || (v66 = v64[1], (unsigned __int64)(v66 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                  || (unsigned __int64)(v66 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
                {
LABEL_423:
                  v59 = 534;
                  goto LABEL_424;
                }
                v67 = v65 + prclDest.left;
                prclDest.left += v65;
                v68 = *v64 + prclDest.right;
                prclDest.right = v68;
                v69 = v64[1] + prclDest.top;
                prclDest.top = v69;
                v70 = v64[1] + prclDest.bottom;
                prclDest.bottom = v70;
                v71 = *(_DWORD **)(v51 + 48);
                v280 = v71;
                if ( *(_WORD *)(v51 + 100) == 1 && v71 && (v71[10] & 0x20000) != 0 )
                {
                  v72 = v71[646];
                  if ( v67 >= v72 )
                  {
                    v73 = v71[647];
                    if ( v69 >= v73 && v68 <= *(_DWORD *)(v51 + 56) + v72 )
                    {
                      v74 = v70 <= v73 + *(_DWORD *)(v51 + 60);
                      goto LABEL_107;
                    }
                  }
                }
                else if ( v67 >= 0 && v69 >= 0 && v68 <= *(_DWORD *)(v51 + 56) )
                {
                  v74 = v70 <= *(_DWORD *)(v51 + 60);
LABEL_107:
                  v75 = 0;
                  if ( v74 )
                    goto LABEL_109;
                }
                v75 = 1;
LABEL_109:
                if ( v51 == v248
                  && (v303 = prclDest, ERECTL::operator*=(&v303), !(unsigned int)ERECTL::bEmpty((ERECTL *)&v303))
                  || v75 )
                {
                  EngSetLastError(0x57u);
                  v14 = 0;
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v306);
                  goto LABEL_429;
                }
                v76 = 1;
                if ( BYTE2(a11) == 0xFF && !v235 && ((unsigned __int8)v241 & 1) == 0 )
                {
                  v77 = v238[0];
                  v78 = pxlo;
                  v79 = *((_QWORD *)v253[0] + 122);
                  v80 = *(_BYTE *)(v79 + 215);
                  *(_BYTE *)(v79 + 215) = 3;
                  v14 = GreStretchBltInternal(
                          (HDC)v78,
                          v77,
                          a5,
                          *(HDC *)&pptlSrc,
                          v240[0],
                          v236[0],
                          a9,
                          a10,
                          13369376,
                          -1,
                          0);
                  v76 = 0;
                  *(_BYTE *)(*((_QWORD *)v253[0] + 122) + 215LL) = v80;
                }
                if ( (v76 & v14) == 0 )
                  goto LABEL_427;
                v81 = *(_QWORD *)(v51 + 128);
                v247 = 0LL;
                v82 = *(_DWORD **)(v265[0] + 976LL);
                v83 = *(_QWORD *)(v265[0] + 88LL);
                v226 = v82[45];
                v84 = v82[44];
                v240[0] = v82[46];
                v227 = v84;
                if ( (v81
                   || v49
                   && ((*(_DWORD *)(v49 + 24) & 0x800) == 0
                    || (v85 = *(_QWORD *)(v50 + 80)) != 0 && v85 != *(_QWORD *)(v50 + 72)))
                  && (v49
                   || (*(_DWORD *)(v81 + 24) & 0x800) == 0
                   || (v86 = *(_QWORD *)(v50 + 80)) != 0 && v86 != *(_QWORD *)(v50 + 72)) )
                {
                  if ( !v81 || !v49 )
                  {
LABEL_158:
                    XlateObject = CreateXlateObject(0LL, 0LL, v81, v49, v83, v50, v240[0], v227, v226, 0, iMode);
                    *(_QWORD *)v236 = XlateObject;
                    if ( !XlateObject )
                    {
                      v221 = 0;
LABEL_164:
                      v249 = *(_QWORD *)v236;
                      v105 = *(_QWORD *)(v265[0] + 976LL);
                      v232 = *(_DWORD *)(v105 + 176);
                      v228 = *(_DWORD *)(v105 + 184);
                      if ( (v81
                         || gppalRGB
                         && ((*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                          || (v106 = *(_QWORD *)(v83 + 80)) != 0 && v106 != *(_QWORD *)(v83 + 72)))
                        && (gppalRGB
                         || (*(_DWORD *)(v81 + 24) & 0x800) == 0
                         || (v109 = *(_QWORD *)(v83 + 80)) != 0 && v109 != *(_QWORD *)(v83 + 72)) )
                      {
                        if ( !v81 || !gppalRGB )
                          goto LABEL_206;
                        v110 = *(_QWORD *)(v81 + 120);
                        if ( v110 == v81 )
                          v111 = *(_DWORD *)(v81 + 32);
                        else
                          v111 = *(_DWORD *)(v110 + 32);
                        v112 = *((_QWORD *)gppalRGB + 15);
                        if ( (struct PALETTE *)v112 == gppalRGB )
                          v113 = *((_DWORD *)gppalRGB + 8);
                        else
                          v113 = *(_DWORD *)(v112 + 32);
                        if ( v111 != v113 )
                        {
                          if ( gppalRGB )
                          {
                            v114 = *(_DWORD *)(v81 + 56);
                            v286 = v83;
                            v296 = v83;
                            v285 = gppalRGB;
                            v297 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v115 = *(XLATEOBJ **)(v81 + 120);
                            v116 = 0;
                            for ( pxlo = v115; ; v115 = pxlo )
                            {
                              if ( v115 == (XLATEOBJ *)v81 )
                                v117 = *(_DWORD *)(v81 + 32);
                              else
                                v117 = *(_DWORD *)&v115[1].iSrcType;
                              if ( *((_DWORD *)&xlateTable + 8 * v114 + 4) == v117 )
                              {
                                v118 = XEPALOBJ::ulTime((XEPALOBJ *)&v285);
                                if ( *(_DWORD *)(v119 + v120 + 20) == v118 )
                                {
                                  v121 = XEPALOBJ::ulTime((XEPALOBJ *)&v286);
                                  if ( *(_DWORD *)(v122 + v123 + 28) == v121 )
                                  {
                                    v124 = *(XLATEOBJ **)(v122 + v123 + 8);
                                    v237 = v124;
                                    if ( (v124[3].flXlate & 0x6000) == 0 )
                                    {
                                      if ( (v125 = v124[3].flXlate & 0x100, (v124->flXlate & 4) == 0) && !v125
                                        || (v124->flXlate & 4) != 0
                                        && v226 == v124[1].iUniq
                                        && (v126 = XEPALOBJ::ulTime((XEPALOBJ *)&v296),
                                            *(_DWORD *)(v122 + v123 + 24) == v126)
                                        || v125 && v228 == v124[1].flXlate && v232 == *(_DWORD *)&v124[1].iSrcType )
                                      {
                                        _InterlockedIncrement((volatile signed __int32 *)(v122 + v123));
                                        *(_DWORD *)(v81 + 56) = v114;
                                        SEMOBJ::~SEMOBJ((SEMOBJ *)&v297);
                                        v107 = v237;
                                        v108 = 1;
                                        goto LABEL_212;
                                      }
                                    }
                                  }
                                }
                              }
                              ++v116;
                              v114 = ((_BYTE)v114 + 1) & 7;
                              if ( v116 >= 8 )
                                break;
                            }
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                          }
LABEL_206:
                          v127 = CreateXlateObject(0LL, 0LL, v81, gppalRGB, v83, v83, v228, v232, v226, 0, iMode);
                          v237 = (XLATEOBJ *)v127;
                          v107 = (XLATEOBJ *)v127;
                          if ( !v127 )
                          {
                            v108 = 0;
                            goto LABEL_212;
                          }
                          if ( v81 && gppalRGB && (*(_DWORD *)(v127 + 76) & 0x200) == 0 )
                          {
                            EXLATEOBJ::vAddToCache(&v237, v81, gppalRGB, v83, v83);
                            v108 = 1;
                            goto LABEL_212;
                          }
LABEL_170:
                          v108 = 1;
LABEL_212:
                          v128 = v221 & v108;
                          v129 = v244;
                          v222 = v128;
                          v130 = *(_QWORD *)(v265[0] + 976LL);
                          pxlo = v107;
                          v233 = *(_DWORD *)(v130 + 176);
                          v229 = *(_DWORD *)(v130 + 184);
                          if ( !v49
                            && (!gppalRGB
                             || (*((_DWORD *)gppalRGB + 6) & 0x800) != 0
                             && ((v131 = *(_QWORD *)(v244 + 80)) == 0 || v131 == *(_QWORD *)(v244 + 72))) )
                          {
                            v132 = xloIdent;
                            v241 = xloIdent;
                            goto LABEL_262;
                          }
                          if ( !gppalRGB && (*(_DWORD *)(v49 + 24) & 0x800) != 0 )
                          {
                            v133 = *(_QWORD *)(v244 + 80);
                            if ( !v133 || v133 == *(_QWORD *)(v244 + 72) )
                            {
                              v132 = xloIdent;
                              v241 = xloIdent;
                              v222 = v128;
                              goto LABEL_262;
                            }
                          }
                          if ( v49 && gppalRGB )
                          {
                            v134 = *(_QWORD *)(v49 + 120);
                            if ( v134 == v49 )
                              v135 = *(_DWORD *)(v49 + 32);
                            else
                              v135 = *(_DWORD *)(v134 + 32);
                            v136 = *((_QWORD *)gppalRGB + 15);
                            if ( (struct PALETTE *)v136 == gppalRGB )
                              v137 = *((_DWORD *)gppalRGB + 8);
                            else
                              v137 = *(_DWORD *)(v136 + 32);
                            if ( v135 == v137 )
                            {
                              v132 = xloIdent;
                              v241 = xloIdent;
                              v222 = v128;
                              goto LABEL_262;
                            }
                            if ( gppalRGB )
                            {
                              v138 = *(_DWORD *)(v49 + 56);
                              v272 = v244;
                              v273 = v244;
                              v271 = gppalRGB;
                              v274 = ghsemPalette;
                              GreAcquireSemaphore(ghsemPalette);
                              v139 = *(_QWORD *)(v49 + 120);
                              v140 = 0;
                              for ( *(_QWORD *)v240 = v139; ; v139 = *(_QWORD *)v240 )
                              {
                                if ( v139 == v49 )
                                  v141 = *(_DWORD *)(v49 + 32);
                                else
                                  v141 = *(_DWORD *)(v139 + 32);
                                if ( *((_DWORD *)&xlateTable + 8 * v138 + 4) == v141 )
                                {
                                  v142 = XEPALOBJ::ulTime((XEPALOBJ *)&v271);
                                  if ( *(_DWORD *)(v143 + v144 + 20) == v142 )
                                  {
                                    v145 = XEPALOBJ::ulTime((XEPALOBJ *)&v272);
                                    if ( *(_DWORD *)(v146 + v147 + 28) == v145 )
                                    {
                                      v148 = *(XLATEOBJ **)(v146 + v147 + 8);
                                      v241 = v148;
                                      if ( (v148[3].flXlate & 0x6000) == 0 )
                                      {
                                        if ( (v149 = v148[3].flXlate & 0x100, (v148->flXlate & 4) == 0) && !v149
                                          || (v148->flXlate & 4) != 0
                                          && v226 == v148[1].iUniq
                                          && (v150 = XEPALOBJ::ulTime((XEPALOBJ *)&v273),
                                              *(_DWORD *)(v146 + v147 + 24) == v150)
                                          || v149 && v229 == v148[1].flXlate && v233 == *(_DWORD *)&v148[1].iSrcType )
                                        {
                                          _InterlockedIncrement((volatile signed __int32 *)(v146 + v147));
                                          *(_DWORD *)(v49 + 56) = v138;
                                          SEMOBJ::~SEMOBJ((SEMOBJ *)&v274);
                                          v107 = v237;
                                          v132 = v241;
                                          goto LABEL_262;
                                        }
                                      }
                                    }
                                  }
                                }
                                ++v140;
                                v138 = ((_BYTE)v138 + 1) & 7;
                                if ( v140 >= 8 )
                                  break;
                              }
                              if ( ghsemPalette )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                GreReleaseSemaphoreInternal(ghsemPalette);
                              }
                            }
                          }
                          v151 = CreateXlateObject(0LL, 0LL, v49, gppalRGB, v129, v129, v229, v233, v226, 0, iMode);
                          v241 = (XLATEOBJ *)v151;
                          v132 = (XLATEOBJ *)v151;
                          if ( v151 )
                          {
                            if ( v49 && gppalRGB && (*(_DWORD *)(v151 + 76) & 0x200) == 0 )
                              EXLATEOBJ::vAddToCache(&v241, v49, gppalRGB, v129, v129);
                            v222 = v128;
                          }
                          else
                          {
                            v222 = 0;
                          }
LABEL_262:
                          v152 = *(_QWORD *)(v265[0] + 976LL);
                          v230 = *(_DWORD *)(v152 + 176);
                          v240[0] = *(_DWORD *)(v152 + 184);
                          if ( (gppalRGB
                             || v49
                             && ((*(_DWORD *)(v49 + 24) & 0x800) == 0
                              || (v153 = *(_QWORD *)(v129 + 80)) != 0 && v153 != *(_QWORD *)(v129 + 72)))
                            && (v49
                             || (*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                             || (v156 = *(_QWORD *)(v129 + 80)) != 0 && v156 != *(_QWORD *)(v129 + 72)) )
                          {
                            if ( !gppalRGB || !v49 )
                              goto LABEL_303;
                            v157 = *((_QWORD *)gppalRGB + 15);
                            if ( (struct PALETTE *)v157 == gppalRGB )
                              v158 = *((_DWORD *)gppalRGB + 8);
                            else
                              v158 = *(_DWORD *)(v157 + 32);
                            v159 = *(_QWORD *)(v49 + 120);
                            if ( v159 == v49 )
                              v160 = *(_DWORD *)(v49 + 32);
                            else
                              v160 = *(_DWORD *)(v159 + 32);
                            if ( v158 != v160 )
                            {
                              v161 = *((_DWORD *)gppalRGB + 14);
                              v276 = v129;
                              v277 = v129;
                              v275 = v49;
                              v238[0] = v161;
                              v279 = ghsemPalette;
                              GreAcquireSemaphore(ghsemPalette);
                              v162 = *((_QWORD *)gppalRGB + 15);
                              v163 = v238[0];
                              v264 = v162;
                              v234 = 0;
                              while ( 1 )
                              {
                                if ( (struct PALETTE *)v162 == gppalRGB )
                                  v164 = *((_DWORD *)gppalRGB + 8);
                                else
                                  v164 = *(_DWORD *)(v162 + 32);
                                if ( *((_DWORD *)&xlateTable + 8 * v163 + 4) == v164 )
                                {
                                  v165 = XEPALOBJ::ulTime((XEPALOBJ *)&v275);
                                  if ( *(_DWORD *)(v166 + v167 + 20) == v165 )
                                  {
                                    v168 = XEPALOBJ::ulTime((XEPALOBJ *)&v276);
                                    if ( *(_DWORD *)(v169 + v170 + 28) == v168 )
                                    {
                                      v171 = *(_DWORD **)(v169 + v170 + 8);
                                      *(_QWORD *)v238 = v171;
                                      if ( (v171[19] & 0x6000) == 0 )
                                      {
                                        if ( (v172 = v171[19] & 0x100, (v171[1] & 4) == 0) && !v172
                                          || (v171[1] & 4) != 0
                                          && v226 == v171[6]
                                          && (v173 = XEPALOBJ::ulTime((XEPALOBJ *)&v277),
                                              *(_DWORD *)(v169 + v170 + 24) == v173)
                                          || v172 && v240[0] == v171[7] && v230 == v171[8] )
                                        {
                                          _InterlockedIncrement((volatile signed __int32 *)(v169 + v170));
                                          *((_DWORD *)gppalRGB + 14) = v163;
                                          SEMOBJ::~SEMOBJ((SEMOBJ *)&v279);
                                          v107 = v237;
                                          v155 = 1;
                                          v132 = v241;
                                          v154 = *(XLATEOBJ **)v238;
                                          goto LABEL_309;
                                        }
                                      }
                                    }
                                  }
                                }
                                v163 = ((_BYTE)v163 + 1) & 7;
                                if ( (unsigned int)++v234 >= 8 )
                                  break;
                                v162 = v264;
                              }
                              if ( ghsemPalette )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                GreReleaseSemaphoreInternal(ghsemPalette);
                              }
LABEL_303:
                              v174 = CreateXlateObject(
                                       0LL,
                                       0LL,
                                       gppalRGB,
                                       v49,
                                       v129,
                                       v129,
                                       v240[0],
                                       v230,
                                       v226,
                                       0,
                                       iMode);
                              *(_QWORD *)v238 = v174;
                              v154 = (XLATEOBJ *)v174;
                              if ( !v174 )
                              {
                                v155 = 0;
                                goto LABEL_309;
                              }
                              if ( gppalRGB && v49 && (*(_DWORD *)(v174 + 76) & 0x200) == 0 )
                              {
                                EXLATEOBJ::vAddToCache(v238, gppalRGB, v49, v244, v244);
                                v155 = 1;
                                goto LABEL_309;
                              }
LABEL_268:
                              v155 = 1;
LABEL_309:
                              v175 = v155 & v222;
                              v223 = v155 & v222;
                              v176 = *((_QWORD *)v253[0] + 147);
                              if ( v176
                                && (*((_DWORD *)v253[0] + 10) & 2) != 0
                                && (unsigned int)DC::bDpiScaledSurface(v253[0]) )
                              {
                                v177 = v176;
                              }
                              else
                              {
                                v177 = *((_QWORD *)v253[0] + 145);
                              }
                              if ( v177 )
                              {
                                if ( !v176
                                  || (*((_DWORD *)v253[0] + 10) & 2) == 0
                                  || !(unsigned int)DC::bDpiScaledSurface(v253[0]) )
                                {
                                  v178 = (struct REGION *)*((_QWORD *)v253[0] + 145);
                                }
                              }
                              else
                              {
                                v178 = DC::prgnVisSnap(v253[0]);
                              }
                              v338 = 0LL;
                              v339 = 0LL;
                              v340 = 0;
                              v341 = 1;
                              v342 = 0LL;
                              XCLIPOBJ::vSetup((XCLIPOBJ *)v333, v178, (struct ERECTL *)&v329, 0);
                              if ( v334 == v336 || v335 == v337 )
                              {
                                v15 = 1;
                                goto LABEL_421;
                              }
                              v261 = 0LL;
                              v262 = 0;
                              v263 = 0;
                              v179 = *(_QWORD *)(v248 + 48);
                              v264 = v179;
                              if ( v239.x
                                && (v180 = *(_DWORD *)(*((_QWORD *)v253[0] + 122) + 108LL), (v180 & 1) != 0)
                                && (v180 & 9) != 9 )
                              {
                                v181 = (_DWORD *)v242;
                                v287[1] = *(_DWORD *)(v242 + 56);
                                v287[2] = *(_DWORD *)(v242 + 60);
                                v287[0] = *(_DWORD *)(v242 + 96);
                                v182 = *(__int64 **)(v242 + 128);
                                v287[3] = 0;
                                v289 = 0LL;
                                v288 = *v182;
                                SURFMEM::bCreateDIB(
                                  (SURFMEM *)&v261,
                                  (struct _DEVBITMAPINFO *)v287,
                                  0LL,
                                  0LL,
                                  0,
                                  0LL,
                                  0LL,
                                  0,
                                  1,
                                  0,
                                  0);
                                if ( !v261 )
                                  goto LABEL_370;
                                v183 = (v181[28] & 0x400) == 0;
                                v331 = v181[14];
                                v332 = v181[15];
                                v330 = 0LL;
                                v267 = 0LL;
                                v184 = v183
                                     ? EngCopyBits
                                     : (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v280 + 355);
                                if ( !((unsigned int (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))v184)(
                                        v261 + 24,
                                        v181 + 6,
                                        0LL,
                                        0LL,
                                        &v330,
                                        &v267) )
                                  goto LABEL_370;
                                v185 = *(_DWORD *)(v261 + 96);
                                if ( (unsigned int)(v185 - 1) > 5 )
                                  goto LABEL_370;
                                ((void (*)(void))(&apfnMirror)[v185])();
                                v186 = v261;
                                v175 = v223;
                                v242 = v261;
                              }
                              else
                              {
                                v186 = v242;
                              }
                              v258 = 0LL;
                              v259 = 0;
                              v260 = 0;
                              v255 = 0LL;
                              v256 = 0;
                              v257 = 0;
                              if ( !v246 )
                                goto LABEL_377;
                              v290[1] = v329.m128i_i32[2] - v329.m128i_i32[0];
                              v290[2] = v329.m128i_i32[3] - v329.m128i_i32[1];
                              v290[3] = 0;
                              v292 = 0LL;
                              v290[0] = 6;
                              v291 = *(_QWORD *)gppalRGB;
                              DIB = SURFMEM::bCreateDIB(
                                      (SURFMEM *)&v258,
                                      (struct _DEVBITMAPINFO *)v290,
                                      0LL,
                                      0LL,
                                      0,
                                      0LL,
                                      0LL,
                                      0,
                                      1,
                                      0,
                                      0) & v175;
                              if ( DIB )
                              {
                                if ( !v235 )
                                {
                                  v293[1] = prclDest.right - prclDest.left;
                                  v293[2] = prclDest.bottom - prclDest.top;
                                  v293[3] = 0;
                                  v295 = 0LL;
                                  v293[0] = 6;
                                  v294 = *(_QWORD *)gppalRGB;
                                  DIB = SURFMEM::bCreateDIB(
                                          (SURFMEM *)&v255,
                                          (struct _DEVBITMAPINFO *)v293,
                                          0LL,
                                          0LL,
                                          0,
                                          0LL,
                                          0LL,
                                          0,
                                          1,
                                          0,
                                          0);
                                  if ( DIB )
                                  {
                                    v187 = prclDest.left;
                                    pptlSrc.x = prclDest.left;
                                    v239.x = prclDest.top;
                                    pptlSrc.y = prclDest.top;
                                    if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
                                    {
                                      v188 = 87;
LABEL_369:
                                      EngSetLastError(v188);
                                      SURFMEM::~SURFMEM((SURFMEM *)&v255);
                                      SURFMEM::~SURFMEM((SURFMEM *)&v258);
LABEL_370:
                                      SURFMEM::~SURFMEM((SURFMEM *)&v261);
LABEL_421:
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v238);
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v241);
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v237);
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v247);
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v236);
                                      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v306);
LABEL_430:
                                      MDCOBJ::~MDCOBJ((MDCOBJ *)v265);
                                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v266);
LABEL_432:
                                      MDCOBJ::~MDCOBJ((MDCOBJ *)v253);
                                      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v254);
                                      return v15;
                                    }
                                    if ( prclDest.right > prclDest.left
                                      && prclDest.bottom > prclDest.top
                                      && v187 <= *(_DWORD *)(v242 + 56)
                                      && v239.x <= *(_DWORD *)(v242 + 60) )
                                    {
                                      v189 = (SURFOBJ *)(v255 + 24);
                                      if ( !v255 )
                                        v189 = 0LL;
                                      EngCopyBits(v189, (SURFOBJ *)(v242 + 24), 0LL, v107, &prclDest, &pptlSrc);
                                    }
                                    v190 = 0;
                                    v242 = v255;
                                    v191 = *(_DWORD **)(v255 + 80);
                                    v192 = (_DWORD *)((char *)v191 + *(_DWORD *)(v255 + 60) * *(_DWORD *)(v255 + 88));
                                    if ( v191 != v192 )
                                    {
                                      v193 = v255;
                                      do
                                      {
                                        if ( v190 >= prclDest.top && v190 < prclDest.bottom )
                                        {
                                          v194 = v191;
                                          v195 = 0;
                                          v196 = 0LL;
                                          v197 = *(int *)(v193 + 56);
                                          v198 = &v191[v197];
                                          v199 = (v197 * 4) >> 2;
                                          if ( v191 > v198 )
                                            v199 = 0LL;
                                          if ( v199 )
                                          {
                                            do
                                            {
                                              if ( v195 >= prclDest.left && v195 < prclDest.right )
                                                *v194 |= 0xFF000000;
                                              ++v195;
                                              ++v194;
                                              ++v196;
                                            }
                                            while ( v196 != v199 );
                                            v193 = v255;
                                          }
                                        }
                                        ++v190;
                                        v191 = (_DWORD *)((char *)v191 + *(int *)(v193 + 88));
                                      }
                                      while ( v191 != v192 );
                                      v242 = v193;
                                      v179 = v264;
                                    }
                                    HIBYTE(a11) |= 1u;
                                    pxlo = xloIdent;
                                  }
                                }
                                v200 = *(_DWORD **)(v258 + 72);
                                v201 = (unsigned __int64)*(unsigned int *)(v258 + 64) >> 2;
                                if ( v201 )
                                {
                                  if ( ((unsigned __int8)v200 & 4) == 0 )
                                    goto LABEL_365;
                                  *v200 = 0;
                                  if ( --v201 )
                                  {
                                    ++v200;
LABEL_365:
                                    memset(v200, 0, 8 * (v201 >> 1));
                                    if ( (v201 & 1) != 0 )
                                      v200[v201 - 1] = 0;
                                  }
                                }
                              }
                              if ( !DIB )
                              {
                                v188 = 8;
                                goto LABEL_369;
                              }
                              `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                              v239.x = v343.x - 16 * v298.m128i_i32[0];
                              v239.y = v343.y - 16 * v298.m128i_i32[1];
                              pptfx = v239;
                              v239.x = v344 - 16 * v298.m128i_i32[0];
                              v239.y = v345 - 16 * v298.m128i_i32[1];
                              v356 = v239;
                              v239.x = v346 - 16 * v298.m128i_i32[0];
                              v239.y = v347 - 16 * v298.m128i_i32[1];
                              v357 = v239;
                              v202 = (SURFOBJ *)(v242 + 24);
                              if ( !v242 )
                                v202 = 0LL;
                              if ( v258 )
                                v203 = (SURFOBJ *)(v258 + 24);
                              else
                                v203 = 0LL;
                              EngPlgBlt(v203, v202, 0LL, 0LL, pxlo, 0LL, 0LL, &pptfx, &prclDest, 0LL, 3u);
                              v305 = 0LL;
                              inited = EXLATEOBJ::bInitXlateObj(
                                         &v247,
                                         0LL,
                                         0,
                                         (__int64)gppalRGB,
                                         v281,
                                         0LL,
                                         v244,
                                         *(_DWORD *)(*(_QWORD *)(v265[0] + 976LL) + 184LL),
                                         *(_DWORD *)(*(_QWORD *)(v265[0] + 976LL) + 176LL),
                                         v226,
                                         0);
                              v186 = v258;
                              v175 = inited;
                              *(_QWORD *)&prclDest.left = 0LL;
                              v249 = v247;
                              pxlo = xloIdent;
                              prclDest.right = v329.m128i_i32[2] - v329.m128i_i32[0];
                              prclDest.bottom = v329.m128i_i32[3] - v329.m128i_i32[1];
                              `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_377:
                              if ( v175 )
                              {
                                v205 = v248;
                                ++*(_DWORD *)(v248 + 92);
                                v206 = v253[0];
                                v207 = *(struct ECLIPOBJ **)(v265[0] + 48LL);
                                v208 = (struct ECLIPOBJ **)*((_QWORD *)v253[0] + 6);
                                if ( v208 == (struct ECLIPOBJ **)v207
                                  || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v253) && v208[440] == v207 )
                                {
                                  if ( (*((_DWORD *)v206 + 9) & 0xE0) != 0 )
                                  {
                                    v304 = v329;
                                    XDCOBJ::vAccumulateTight((XDCOBJ *)v253, v207, (struct ERECTL *)&v304);
                                    v205 = v248;
                                  }
                                  v299 = a11;
                                  v300 = pxlo;
                                  v301 = v132;
                                  v302 = v154;
                                  if ( v329.m128i_i32[2] - v329.m128i_i32[0] == prclDest.right - prclDest.left
                                    && v329.m128i_i32[3] - v329.m128i_i32[1] == prclDest.bottom - prclDest.top )
                                  {
                                    BYTE1(v299) = BYTE1(a11) & 0xFE;
                                  }
                                  if ( (*(_DWORD *)(v205 + 112) & 0x10000) != 0 )
                                    v210 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v179 + 3256);
                                  else
                                    v210 = EngAlphaBlend;
                                  v211 = v186 + 24;
                                  if ( !v186 )
                                    v211 = 0LL;
                                  v14 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __m128i *, RECTL *, int *))v210)(
                                          v205 + 24,
                                          v211,
                                          v333,
                                          v249,
                                          &v329,
                                          &prclDest,
                                          &v299);
LABEL_395:
                                  SURFMEM::~SURFMEM((SURFMEM *)&v255);
                                  SURFMEM::~SURFMEM((SURFMEM *)&v258);
                                  SURFMEM::~SURFMEM((SURFMEM *)&v261);
                                  if ( v154 )
                                  {
                                    cEntries = (int)v154[1].cEntries;
                                    if ( (int)cEntries < 0 )
                                    {
                                      if ( (_DWORD)cEntries == -1 )
                                        FreeThreadBufferWithTag(v154, v212);
                                    }
                                    else
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                                      v107 = v237;
                                      v132 = v241;
                                    }
                                  }
                                  if ( v132 )
                                  {
                                    v214 = (int)v132[1].cEntries;
                                    if ( (int)v214 < 0 )
                                    {
                                      if ( (_DWORD)v214 == -1 )
                                        FreeThreadBufferWithTag(v132, v212);
                                    }
                                    else
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v214);
                                      v107 = v237;
                                    }
                                  }
                                  if ( v107 )
                                  {
                                    v215 = (int)v107[1].cEntries;
                                    if ( (int)v215 < 0 )
                                    {
                                      if ( (_DWORD)v215 == -1 )
                                        FreeThreadBufferWithTag(v107, v212);
                                    }
                                    else
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v215);
                                    }
                                  }
                                  if ( v247 )
                                  {
                                    v216 = *(int *)(v247 + 36);
                                    if ( (int)v216 < 0 )
                                    {
                                      if ( (_DWORD)v216 == -1 )
                                        FreeThreadBufferWithTag(v247, v212);
                                    }
                                    else
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v216);
                                    }
                                  }
                                  if ( *(_QWORD *)v236 )
                                  {
                                    v217 = *(_DWORD *)(*(_QWORD *)v236 + 36LL);
                                    if ( v217 >= 0 )
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * *(int *)(*(_QWORD *)v236 + 36LL));
                                      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v306);
LABEL_429:
                                      v15 = v14;
                                      goto LABEL_430;
                                    }
                                    if ( v217 == -1 )
                                    {
                                      FreeThreadBufferWithTag(*(_QWORD *)v236, v212);
                                      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v306);
                                      goto LABEL_429;
                                    }
                                  }
LABEL_427:
                                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v306);
                                  goto LABEL_429;
                                }
                                v209 = 87;
                              }
                              else
                              {
                                v209 = 6;
                              }
                              EngSetLastError(v209);
                              v14 = 0;
                              goto LABEL_395;
                            }
                          }
                          v154 = xloIdent;
                          *(_QWORD *)v238 = xloIdent;
                          goto LABEL_268;
                        }
                      }
                      v107 = xloIdent;
                      v237 = xloIdent;
                      goto LABEL_170;
                    }
                    if ( v81 && v49 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                    {
                      EXLATEOBJ::vAddToCache(v236, v81, v49, v83, v50);
                      v221 = 1;
                      goto LABEL_164;
                    }
LABEL_123:
                    v221 = 1;
                    goto LABEL_164;
                  }
                  v87 = *(_QWORD *)(v81 + 120);
                  if ( v87 == v81 )
                    v88 = *(_DWORD *)(v81 + 32);
                  else
                    v88 = *(_DWORD *)(v87 + 32);
                  v89 = *(_QWORD *)(v49 + 120);
                  if ( v89 == v49 )
                    v90 = *(_DWORD *)(v49 + 32);
                  else
                    v90 = *(_DWORD *)(v89 + 32);
                  if ( v88 != v90 )
                  {
                    v91 = *(_DWORD *)(v81 + 56);
                    v282 = v50;
                    v283 = v83;
                    v278 = v49;
                    v238[0] = v91;
                    v284 = ghsemPalette;
                    GreAcquireSemaphore(ghsemPalette);
                    v92 = *(_QWORD *)(v81 + 120);
                    v93 = v238[0];
                    v249 = v92;
                    v231 = 0;
                    while ( 1 )
                    {
                      if ( v92 == v81 )
                        v94 = *(_DWORD *)(v81 + 32);
                      else
                        v94 = *(_DWORD *)(v92 + 32);
                      if ( *((_DWORD *)&xlateTable + 8 * v93 + 4) == v94 )
                      {
                        v95 = XEPALOBJ::ulTime((XEPALOBJ *)&v278);
                        if ( *(_DWORD *)(v96 + v97 + 20) == v95 )
                        {
                          v98 = XEPALOBJ::ulTime((XEPALOBJ *)&v282);
                          if ( *(_DWORD *)(v99 + v100 + 28) == v98 )
                          {
                            v101 = *(_DWORD **)(v99 + v100 + 8);
                            *(_QWORD *)v236 = v101;
                            if ( (v101[19] & 0x6000) == 0 )
                            {
                              if ( (v102 = v101[19] & 0x100, (v101[1] & 4) == 0) && !v102
                                || (v101[1] & 4) != 0
                                && v226 == v101[6]
                                && (v103 = XEPALOBJ::ulTime((XEPALOBJ *)&v283), *(_DWORD *)(v99 + v100 + 24) == v103)
                                || v102 && v240[0] == v101[7] && v227 == v101[8] )
                              {
                                _InterlockedIncrement((volatile signed __int32 *)(v99 + v100));
                                *(_DWORD *)(v81 + 56) = v93;
                                SEMOBJ::~SEMOBJ((SEMOBJ *)&v284);
                                v221 = 1;
                                goto LABEL_164;
                              }
                            }
                          }
                        }
                      }
                      v93 = ((_BYTE)v93 + 1) & 7;
                      if ( (unsigned int)++v231 >= 8 )
                        break;
                      v92 = v249;
                    }
                    if ( ghsemPalette )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                      GreReleaseSemaphoreInternal(ghsemPalette);
                    }
                    goto LABEL_158;
                  }
                }
                *(_QWORD *)v236 = xloIdent;
                goto LABEL_123;
              }
              v55 = UserScreenAccessCheck(512LL, v44, v45, v46);
            }
            if ( v55 )
              goto LABEL_75;
          }
LABEL_425:
          EngSetLastError(6u);
          v14 = 0;
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v306);
          goto LABEL_429;
        }
        v53 = UserScreenAccessCheck(v47, v44, v45, v46);
      }
      if ( !v53 )
        goto LABEL_425;
      goto LABEL_67;
    }
  }
  EngSetLastError(0x57u);
  return 0LL;
}
