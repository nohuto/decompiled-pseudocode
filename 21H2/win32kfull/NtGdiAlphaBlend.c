/*
 * XREFs of NtGdiAlphaBlend @ 0x1C0039BB0
 * Callers:
 *     BltIcon @ 0x1C00BE16C (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0246DE4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003BF70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0043D24 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00DA9D8 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00DAB40 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0113C58 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C014913C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0149194 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D630 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026B538 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C026C238 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0275B34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C028A2A0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v14; // rbx
  char *v15; // r9
  int v16; // edi
  __int64 v17; // rcx
  int v18; // r8d
  float v19; // xmm4_4
  LONG left; // edx
  LONG top; // r11d
  LONG right; // eax
  LONG bottom; // r10d
  int v24; // edi
  int v25; // ecx
  int v26; // edx
  int v27; // r8d
  int v28; // eax
  __int32 v29; // eax
  __int32 v30; // eax
  FIX x; // r10d
  FIX v32; // r8d
  FIX y; // r11d
  FIX v34; // ecx
  int v35; // r9d
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r8d
  __int64 v42; // rsi
  __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rdi
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rax
  int v51; // ecx
  _DWORD *v52; // rcx
  ULONG v53; // ecx
  int v54; // r10d
  int *v55; // rcx
  __int64 v56; // r11
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int32 v59; // edi
  int *v60; // rcx
  __int64 v61; // r11
  __int64 v62; // r10
  LONG v63; // r10d
  __int64 v64; // r11
  LONG v65; // r9d
  LONG v66; // edi
  LONG v67; // r8d
  bool v68; // zf
  _DWORD *v69; // rax
  LONG v70; // ecx
  LONG v71; // r10d
  bool v72; // cc
  int v73; // edi
  HDC v74; // rcx
  __int64 v75; // rax
  char v76; // di
  _DWORD *v77; // rax
  HDC v78; // rdi
  __int64 v79; // r14
  int v80; // ecx
  HDC v81; // rax
  int v82; // r8d
  __int64 v83; // rax
  int v84; // ecx
  __int64 v85; // rax
  __int64 v86; // rdx
  int v87; // r8d
  int v88; // ecx
  unsigned int v89; // eax
  HDC v90; // rax
  unsigned int v91; // r11d
  int v92; // eax
  unsigned int v93; // eax
  __int64 v94; // r8
  __int64 v95; // r10
  unsigned int v96; // eax
  __int64 v97; // r8
  __int64 v98; // r10
  XLATEOBJ *v99; // rdx
  int v100; // r9d
  __int64 v101; // rcx
  int v102; // r8d
  int v103; // eax
  unsigned int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rcx
  int v107; // r8d
  int v108; // eax
  __int64 v109; // rax
  __int64 XlateObject; // rax
  HDC v111; // r13
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // r8d
  __int64 v115; // rcx
  __int64 v116; // rax
  HDC v117; // rax
  int v118; // r8d
  __int64 v119; // rax
  int v120; // ecx
  XLATEOBJ *v121; // r12
  XLATEOBJ *v122; // r14
  __int64 v123; // rax
  __int64 v124; // rsi
  __int64 v125; // rax
  int v126; // edi
  unsigned int v127; // r12d
  HDC v128; // rax
  unsigned int v129; // r11d
  int v130; // ecx
  HDC v131; // rdx
  int v132; // eax
  unsigned int v133; // eax
  __int64 v134; // r8
  __int64 v135; // r10
  unsigned int v136; // eax
  __int64 v137; // r8
  __int64 v138; // r10
  __int64 v139; // rdx
  int v140; // r9d
  unsigned int v141; // eax
  XLATEOBJ *v142; // rax
  __int64 v143; // rax
  int v144; // ecx
  __int64 v145; // rax
  XLATEOBJ *v146; // r13
  unsigned int v147; // eax
  __int64 v148; // rax
  unsigned int v149; // r11d
  int v150; // eax
  unsigned int v151; // eax
  __int64 v152; // r8
  __int64 v153; // r10
  unsigned int v154; // eax
  __int64 v155; // r8
  __int64 v156; // r10
  XLATEOBJ *v157; // rdx
  int v158; // r9d
  __int64 v159; // rcx
  unsigned int v160; // eax
  __int64 v161; // rax
  __int64 v162; // rax
  int v163; // edx
  __int64 v164; // rax
  __int64 v165; // rax
  int v166; // eax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rcx
  int inited; // edi
  __int64 v171; // rcx
  __int64 v172; // rcx
  int v173; // edi
  __int64 v174; // rcx
  int v175; // edx
  unsigned int v176; // eax
  __int64 v177; // rax
  unsigned int v178; // r11d
  int v179; // ecx
  HDC v180; // rdx
  int v181; // eax
  unsigned int v182; // eax
  __int64 v183; // r8
  __int64 v184; // r10
  unsigned int v185; // eax
  __int64 v186; // r8
  __int64 v187; // r10
  XLATEOBJ *v188; // rdx
  int v189; // r9d
  XLATEOBJ *v190; // rsi
  unsigned int v191; // eax
  __int64 v192; // rdi
  __int64 v193; // rdx
  struct REGION *v194; // rdx
  __int64 v195; // r15
  int v196; // eax
  __int64 *v197; // rax
  int v199; // edx
  LONG v200; // edi
  ULONG v201; // ecx
  SURFOBJ *v202; // rcx
  __int64 v203; // r10
  LONG v204; // r8d
  _DWORD *v205; // rdx
  _DWORD *v206; // r9
  _DWORD *v207; // rcx
  _DWORD *v208; // rdi
  LONG v209; // eax
  _DWORD *v210; // r8
  unsigned __int64 v211; // rdx
  SURFOBJ *v212; // rdx
  SURFOBJ *v213; // rcx
  __int64 v214; // r9
  DC *v215; // r8
  struct ECLIPOBJ *v216; // rdx
  struct ECLIPOBJ **v217; // rdi
  ULONG v218; // ecx
  BOOL (__stdcall *v219)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 cEntries; // rax
  __int64 v221; // rax
  __int64 v222; // rax
  __int64 v223; // rcx
  __int64 v224; // rax
  int v225; // ebx
  int v227; // [rsp+70h] [rbp-90h]
  int v228; // [rsp+70h] [rbp-90h]
  int v229; // [rsp+70h] [rbp-90h]
  int v230; // [rsp+70h] [rbp-90h]
  int v231; // [rsp+70h] [rbp-90h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v233; // [rsp+74h] [rbp-8Ch]
  int v234; // [rsp+74h] [rbp-8Ch]
  int v235; // [rsp+74h] [rbp-8Ch]
  int v236; // [rsp+74h] [rbp-8Ch]
  int v237; // [rsp+78h] [rbp-88h]
  int v238; // [rsp+78h] [rbp-88h]
  int v239; // [rsp+78h] [rbp-88h]
  int v240; // [rsp+78h] [rbp-88h]
  HDC v241; // [rsp+80h] [rbp-80h]
  int v242; // [rsp+88h] [rbp-78h]
  char v243; // [rsp+8Ch] [rbp-74h]
  unsigned int v245; // [rsp+90h] [rbp-70h]
  int v246; // [rsp+90h] [rbp-70h]
  unsigned int v247; // [rsp+90h] [rbp-70h]
  unsigned int v248; // [rsp+90h] [rbp-70h]
  int v249; // [rsp+90h] [rbp-70h]
  char v250; // [rsp+94h] [rbp-6Ch]
  int v251; // [rsp+94h] [rbp-6Ch]
  int v252; // [rsp+94h] [rbp-6Ch]
  XLATEOBJ *v253; // [rsp+98h] [rbp-68h] BYREF
  XLATEOBJ *v254; // [rsp+A0h] [rbp-60h]
  POINTFIX v255; // [rsp+A8h] [rbp-58h]
  __int64 v256; // [rsp+B0h] [rbp-50h]
  __int64 v257; // [rsp+B8h] [rbp-48h]
  XLATEOBJ *pxlo; // [rsp+C0h] [rbp-40h] BYREF
  XLATEOBJ *v259; // [rsp+C8h] [rbp-38h] BYREF
  HDC v260; // [rsp+D0h] [rbp-30h]
  HDC v261; // [rsp+D8h] [rbp-28h] BYREF
  XLATEOBJ *v262; // [rsp+E0h] [rbp-20h] BYREF
  POINTL pptlSrc; // [rsp+E8h] [rbp-18h] BYREF
  char *v264; // [rsp+F0h] [rbp-10h] BYREF
  int v265; // [rsp+F8h] [rbp-8h]
  int v266; // [rsp+FCh] [rbp-4h]
  __int64 v267; // [rsp+100h] [rbp+0h]
  HDC v268; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v269[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v270[32]; // [rsp+120h] [rbp+20h] BYREF
  DC *v271[2]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v272[32]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v273; // [rsp+170h] [rbp+70h] BYREF
  char v274; // [rsp+178h] [rbp+78h]
  int v275; // [rsp+17Ch] [rbp+7Ch]
  __int64 v276; // [rsp+180h] [rbp+80h] BYREF
  char v277; // [rsp+188h] [rbp+88h]
  int v278; // [rsp+18Ch] [rbp+8Ch]
  __int64 v279; // [rsp+190h] [rbp+90h] BYREF
  char v280; // [rsp+198h] [rbp+98h]
  int v281; // [rsp+19Ch] [rbp+9Ch]
  __int64 v282; // [rsp+1A0h] [rbp+A0h]
  __int64 v283; // [rsp+1A8h] [rbp+A8h]
  __int64 v284; // [rsp+1B0h] [rbp+B0h] BYREF
  int v285; // [rsp+1B8h] [rbp+B8h]
  int v286; // [rsp+1BCh] [rbp+BCh]
  __m128i v287; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v288; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v289; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v290; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v291; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v292; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v293; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v294; // [rsp+200h] [rbp+100h] BYREF
  __int64 v295; // [rsp+208h] [rbp+108h] BYREF
  _DWORD *v296; // [rsp+210h] [rbp+110h]
  __int64 v297; // [rsp+218h] [rbp+118h] BYREF
  __int64 v298; // [rsp+220h] [rbp+120h] BYREF
  __int64 v299; // [rsp+228h] [rbp+128h] BYREF
  struct PALETTE *v300; // [rsp+230h] [rbp+130h] BYREF
  __int64 v301; // [rsp+238h] [rbp+138h] BYREF
  __int64 v302; // [rsp+240h] [rbp+140h] BYREF
  _DWORD v303[4]; // [rsp+248h] [rbp+148h] BYREF
  __int64 v304; // [rsp+258h] [rbp+158h]
  __int64 v305; // [rsp+260h] [rbp+160h]
  _DWORD v306[4]; // [rsp+268h] [rbp+168h] BYREF
  __int64 v307; // [rsp+278h] [rbp+178h]
  __int64 v308; // [rsp+280h] [rbp+180h]
  _DWORD v309[4]; // [rsp+288h] [rbp+188h] BYREF
  __int64 v310; // [rsp+298h] [rbp+198h]
  __int64 v311; // [rsp+2A0h] [rbp+1A0h]
  __int64 v312; // [rsp+2A8h] [rbp+1A8h] BYREF
  struct PALETTE *v313; // [rsp+2B0h] [rbp+1B0h] BYREF
  _DWORD v314[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  HDC v315; // [rsp+2C0h] [rbp+1C0h]
  XLATEOBJ *v316; // [rsp+2C8h] [rbp+1C8h]
  XLATEOBJ *v317; // [rsp+2D0h] [rbp+1D0h]
  RECTL v318; // [rsp+2E0h] [rbp+1E0h] BYREF
  _OWORD v319[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v320; // [rsp+310h] [rbp+210h]
  __int64 v321; // [rsp+318h] [rbp+218h]
  char v322; // [rsp+320h] [rbp+220h]
  int v323; // [rsp+324h] [rbp+224h]
  int v324; // [rsp+348h] [rbp+248h]
  __int128 v325; // [rsp+350h] [rbp+250h]
  int v326; // [rsp+360h] [rbp+260h]
  __int64 v327; // [rsp+368h] [rbp+268h]
  __int64 v328; // [rsp+370h] [rbp+270h]
  char v329[32]; // [rsp+378h] [rbp+278h] BYREF
  __int16 v330; // [rsp+398h] [rbp+298h]
  __int64 v331; // [rsp+3A0h] [rbp+2A0h]
  __int64 v332; // [rsp+3A8h] [rbp+2A8h]
  char v333[32]; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int16 v334; // [rsp+3D0h] [rbp+2D0h]
  __int64 v335; // [rsp+3D8h] [rbp+2D8h]
  __int128 v336; // [rsp+3E0h] [rbp+2E0h]
  __int64 v337; // [rsp+3F0h] [rbp+2F0h]
  __int64 v338; // [rsp+3F8h] [rbp+2F8h]
  __int64 v339; // [rsp+400h] [rbp+300h]
  __int64 v340; // [rsp+408h] [rbp+308h]
  RECTL prclDest; // [rsp+410h] [rbp+310h] BYREF
  __m128i v342; // [rsp+420h] [rbp+320h] BYREF
  __int64 v343; // [rsp+430h] [rbp+330h] BYREF
  int v344; // [rsp+438h] [rbp+338h]
  int v345; // [rsp+43Ch] [rbp+33Ch]
  _BYTE v346[4]; // [rsp+440h] [rbp+340h] BYREF
  int v347; // [rsp+444h] [rbp+344h]
  int v348; // [rsp+448h] [rbp+348h]
  int v349; // [rsp+44Ch] [rbp+34Ch]
  int v350; // [rsp+450h] [rbp+350h]
  __int64 v351; // [rsp+490h] [rbp+390h]
  int v352; // [rsp+498h] [rbp+398h]
  int v353; // [rsp+4C0h] [rbp+3C0h]
  __int64 v354; // [rsp+4D0h] [rbp+3D0h]
  struct _POINTFIX v355; // [rsp+4E0h] [rbp+3E0h] BYREF
  FIX v356; // [rsp+4E8h] [rbp+3E8h]
  int v357; // [rsp+4ECh] [rbp+3ECh]
  int v358; // [rsp+4F0h] [rbp+3F0h]
  FIX v359; // [rsp+4F4h] [rbp+3F4h]
  FIX v360; // [rsp+4F8h] [rbp+3F8h]
  int v361; // [rsp+4FCh] [rbp+3FCh]
  struct _POINTL v362; // [rsp+500h] [rbp+400h] BYREF
  int v363; // [rsp+508h] [rbp+408h]
  int v364; // [rsp+50Ch] [rbp+40Ch]
  int v365; // [rsp+510h] [rbp+410h]
  int v366; // [rsp+514h] [rbp+414h]
  POINTFIX pptfx; // [rsp+518h] [rbp+418h] BYREF
  POINTFIX v368; // [rsp+520h] [rbp+420h]
  POINTFIX v369; // [rsp+528h] [rbp+428h]

  v260 = a6;
  v261 = a1;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_438;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_438:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v250 = BYTE1(a11);
  v255.x = BYTE1(a11) & 0x80;
  v14 = 0LL;
  BYTE1(a11) &= ~0x80u;
  v271[0] = 0LL;
  v271[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v272);
  XDCOBJ::vLock((XDCOBJ *)v271, v261);
  if ( !v271[0] || (*((_DWORD *)v271[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_436;
  }
  v269[0] = 0LL;
  v269[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v270);
  XDCOBJ::vLock((XDCOBJ *)v269, v260);
  if ( !v269[0] )
    goto LABEL_433;
  bSpDwmValidateSurface((struct XDCOBJ *)v269, a7, a8, a9, a10);
  bSpDwmValidateSurface((struct XDCOBJ *)v271, a2, a3, a4, a5);
  v265 = *(_DWORD *)(*((_QWORD *)v271[0] + 122) + 208LL);
  v266 = *(_DWORD *)(*((_QWORD *)v271[0] + 122) + 108LL) & 1;
  if ( (*(_DWORD *)(*((_QWORD *)v271[0] + 122) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v264, (struct XDCOBJ *)v271, 0x204u, 0);
    v15 = v264;
  }
  else
  {
    v15 = (char *)v271[0] + 320;
    v264 = (char *)v271[0] + 320;
  }
  v285 = *(_DWORD *)(*(_QWORD *)(v269[0] + 976LL) + 208LL);
  v16 = *(_DWORD *)(*(_QWORD *)(v269[0] + 976LL) + 108LL) & 1;
  v286 = v16;
  if ( (*(_DWORD *)(*(_QWORD *)(v269[0] + 976LL) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v284, (struct XDCOBJ *)v269, 0x204u, 0);
    v15 = v264;
    v17 = v284;
    v16 = v286;
  }
  else
  {
    v17 = v269[0] + 320LL;
    v284 = v269[0] + 320LL;
  }
  v18 = *(_DWORD *)(v17 + 32);
  if ( (v18 & 1) == 0 || (v19 = 0.0, !v16) && (*(float *)v17 < 0.0 || *(float *)(v17 + 12) < 0.0) )
  {
LABEL_433:
    EngSetLastError(0x57u);
    goto LABEL_434;
  }
  left = a7;
  prclDest.left = a7;
  top = a8;
  right = a9 + a7;
  prclDest.top = a8;
  bottom = a10 + a8;
  prclDest.right = a9 + a7;
  prclDest.bottom = a10 + a8;
  if ( (v18 & 0x43) != 0x43 )
  {
    bCvtPts1(v17, &prclDest, 2LL);
    v15 = v264;
    bottom = prclDest.bottom;
    right = prclDest.right;
    top = prclDest.top;
    left = prclDest.left;
    v16 = v286;
  }
  if ( v16 )
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
  if ( (*((_DWORD *)v15 + 8) & 1) != 0 && (v266 || v19 <= *(float *)v15 && v19 <= *((float *)v15 + 3)) )
  {
    v24 = a2 + a4;
    v25 = a3 + a5;
    v26 = a2;
    v342.m128i_i32[3] = a3 + a5;
    v342.m128i_i64[0] = __PAIR64__(a3, a2);
    v27 = a3;
    v342.m128i_i32[2] = a2 + a4;
    v28 = *((_DWORD *)v15 + 8) & 0x43;
    pptlSrc.x = 0;
    if ( (_BYTE)v28 != 67 )
    {
      bCvtPts1(v15, &v342, 2LL);
      v25 = v342.m128i_i32[3];
      v27 = v342.m128i_i32[1];
      v26 = v342.m128i_i32[0];
      v24 = v342.m128i_i32[2];
    }
    if ( v266 )
    {
      ++v26;
      ++v24;
      v342.m128i_i32[0] = v26;
      v342.m128i_i32[2] = v24;
    }
    if ( v26 > v24 )
    {
      v29 = v26;
      v26 = v24;
      v342.m128i_i32[0] = v24;
      v24 = v29;
      v342.m128i_i32[2] = v29;
    }
    if ( v27 > v25 )
    {
      v30 = v27;
      v342.m128i_i32[1] = v25;
      v27 = v25;
      v342.m128i_i32[3] = v30;
      v25 = v30;
    }
  }
  else
  {
    pptlSrc.x = 1;
    v363 = a2 + a4;
    v362.x = a2;
    v366 = a3 + a5;
    v362.y = a3;
    v364 = a3;
    v365 = a2;
    EXFORMOBJ::bXform((EXFORMOBJ *)&v264, &v362, &v355, 3uLL);
    x = v355.x;
    v32 = v356;
    if ( (*((_DWORD *)v264 + 8) & 1) != 0 )
    {
      if ( v355.x > v356 )
      {
        x = v355.x + 16;
        v32 = v356 + 16;
        v358 += 16;
        v355.x += 16;
        v356 += 16;
      }
      y = v355.y;
      v34 = v359;
      v35 = v357;
      if ( v355.y > v359 )
      {
        y = v355.y + 16;
        v35 = v357 + 16;
        v34 = v359 + 16;
        v355.y += 16;
        v359 += 16;
        v357 += 16;
      }
    }
    else
    {
      v34 = v359;
      v35 = v357;
      y = v355.y;
    }
    v360 = v32 + v358 - x;
    v361 = v34 + v35 - y;
    v36 = (v32 <= v360) ^ (unsigned int)(v32 > x);
    v37 = (unsigned int)v36;
    v38 = (v35 <= v361) ^ (unsigned int)(v35 > y);
    if ( *(&v355.x + 2 * v36) > *(&v355.x + 2 * ((unsigned int)v36 ^ 3LL)) )
      v37 = (unsigned int)v36 ^ 3;
    if ( *(&v355.y + 2 * v38) > *(&v355.y + 2 * ((unsigned int)v38 ^ 3LL)) )
      LODWORD(v38) = v38 ^ 3;
    v39 = (unsigned int)v38;
    v40 = (unsigned int)v37 ^ 3LL;
    v26 = (*(&v355.x + 2 * v37) + 15) >> 4;
    v41 = *(&v355.y + 2 * v39);
    v342.m128i_i32[0] = v26;
    v27 = (v41 + 15) >> 4;
    v24 = (*(&v355.x + 2 * v40) + 15) >> 4;
    v25 = (*(&v355.y + 2 * (v39 ^ 3)) + 15) >> 4;
    v342.m128i_i32[1] = v27;
    v342.m128i_i64[1] = __PAIR64__(v25, v24);
  }
  if ( v26 == v24 || v27 == v25 )
  {
    LODWORD(v14) = 1;
    goto LABEL_434;
  }
  if ( (*((_DWORD *)v271[0] + 9) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)v271, (struct ERECTL *)&v342);
  v321 = 0LL;
  v322 = 0;
  v323 = 0;
  v324 = 0;
  v327 = 0LL;
  v328 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v329);
  v330 = 256;
  v331 = 0LL;
  v332 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v333);
  v334 = 256;
  memset(v319, 0, sizeof(v319));
  v325 = 0LL;
  v336 = 0LL;
  v320 = 0LL;
  v326 = 0;
  v335 = 0LL;
  v337 = 0LL;
  v340 = 0LL;
  v338 = 0LL;
  v339 = 0LL;
  v327 = 0LL;
  v331 = 0LL;
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v319, (struct XDCOBJ *)v271, (struct XDCOBJ *)v269, 0) )
  {
    v225 = XDCOBJ::bFullScreen((XDCOBJ *)v269);
    LODWORD(v14) = XDCOBJ::bFullScreen((XDCOBJ *)v271) | v225;
LABEL_431:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v319);
    goto LABEL_434;
  }
  v42 = *((_QWORD *)v271[0] + 62);
  v267 = v42;
  if ( !v42
    || (v43 = *(_QWORD *)(v42 + 128),
        v44 = *((_QWORD *)v271[0] + 11),
        v282 = v43,
        v45 = *(_QWORD *)(v269[0] + 496LL),
        v256 = v44,
        (v257 = v45) == 0) )
  {
    LODWORD(v14) = 1;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v319);
    goto LABEL_434;
  }
  if ( *(_DWORD *)(v45 + 656) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v45 + 656) )
    goto LABEL_428;
  v46 = *(_DWORD *)(v45 + 112);
  if ( (v46 & 0x800) != 0 )
  {
    v47 = UserSurfaceAccessCheck(*(_QWORD *)(v45 + 648));
  }
  else
  {
    if ( (v46 & 0x10000000) == 0 )
      goto LABEL_67;
    v47 = UserScreenAccessCheck();
  }
  if ( !v47 )
    goto LABEL_428;
LABEL_67:
  if ( ((*(_DWORD *)(v42 + 116) & 8) != 0 || *(_QWORD *)(v42 + 224))
    && _bittest16((const signed __int16 *)(v42 + 102), 9u) )
  {
    goto LABEL_428;
  }
  v48 = *(_DWORD *)(v42 + 112);
  if ( (v48 & 0x800) != 0 )
  {
    v49 = UserSurfaceAccessCheck(*(_QWORD *)(v42 + 648));
    goto LABEL_74;
  }
  if ( (v48 & 0x10000000) != 0 )
  {
    v49 = UserScreenAccessCheck();
LABEL_74:
    if ( v49 )
      goto LABEL_75;
LABEL_428:
    EngSetLastError(6u);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v319);
    goto LABEL_434;
  }
LABEL_75:
  v243 = HIBYTE(a11) & 1;
  if ( (a11 & 0x1000000) != 0 )
  {
    v50 = *(_QWORD *)(v45 + 128);
    if ( *(_DWORD *)(v45 + 96) != 6
      || !v50
      || (v51 = *(_DWORD *)(v50 + 24), (v51 & 8) == 0)
      && ((v51 & 2) == 0 || (v52 = *(_DWORD **)(v50 + 112), *v52 != 16711680) || v52[1] != 65280 || v52[2] != 255) )
    {
      v53 = 87;
LABEL_427:
      EngSetLastError(v53);
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v319);
      goto LABEL_434;
    }
  }
  v54 = _mm_cvtsi128_si32(v342);
  v287 = v342;
  v55 = (int *)((char *)v271[0] + 1024);
  if ( (*((_DWORD *)v271[0] + 10) & 1) == 0 )
    v55 = (int *)((char *)v271[0] + 1016);
  v56 = *v55;
  v342.m128i_i32[0] = v54;
  if ( (unsigned __int64)(v56 + v54 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_426;
  if ( (unsigned __int64)(v56 + v342.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_426;
  v57 = v55[1];
  if ( (unsigned __int64)(v57 + v342.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned __int64)(v57 + v342.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
  {
    goto LABEL_426;
  }
  v58 = v269[0];
  v342.m128i_i32[0] = v56 + v54;
  v342.m128i_i32[2] += *v55;
  v342.m128i_i32[1] += v55[1];
  v59 = v55[1] + v342.m128i_i32[3];
  v60 = (int *)(v269[0] + 1024LL);
  v342.m128i_i32[3] = v59;
  if ( (*(_DWORD *)(v269[0] + 40LL) & 1) == 0 )
    v60 = (int *)(v269[0] + 1016LL);
  v61 = *v60;
  if ( (unsigned __int64)(v61 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned __int64)(v61 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
    || (v62 = v60[1], (unsigned __int64)(v62 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
    || (unsigned __int64)(v62 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
  {
LABEL_426:
    v53 = 534;
    goto LABEL_427;
  }
  v63 = v61 + prclDest.left;
  v64 = v257;
  prclDest.left = v63;
  v65 = *v60 + prclDest.right;
  prclDest.right = v65;
  v66 = v60[1] + prclDest.top;
  prclDest.top = v66;
  v67 = v60[1] + prclDest.bottom;
  prclDest.bottom = v67;
  v68 = *(_WORD *)(v257 + 100) == 1;
  v69 = *(_DWORD **)(v257 + 48);
  v296 = v69;
  if ( v68 && v69 && (v69[10] & 0x20000) != 0 )
  {
    v70 = v69[640];
    if ( v63 >= v70 )
    {
      v71 = v69[641];
      if ( v66 >= v71 && v65 <= *(_DWORD *)(v257 + 56) + v70 )
      {
        v72 = v67 <= v71 + *(_DWORD *)(v257 + 60);
        goto LABEL_107;
      }
    }
  }
  else if ( v63 >= 0 && v66 >= 0 && v65 <= *(_DWORD *)(v257 + 56) )
  {
    v72 = v67 <= *(_DWORD *)(v257 + 60);
LABEL_107:
    v73 = 0;
    if ( v72 )
      goto LABEL_109;
  }
  v73 = 1;
LABEL_109:
  if ( v257 == v267 )
  {
    v318 = prclDest;
    ERECTL::operator*=(&v318.left, v342.m128i_i32);
    if ( !ERECTL::bEmpty((ERECTL *)&v318) )
    {
LABEL_425:
      EngSetLastError(0x57u);
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v319);
      goto LABEL_434;
    }
    v58 = v269[0];
    v64 = v257;
  }
  if ( v73 )
    goto LABEL_425;
  if ( BYTE2(a11) == 0xFF && !v243 && (v250 & 1) == 0 )
  {
    v74 = v261;
    v75 = *((_QWORD *)v271[0] + 122);
    v76 = *(_BYTE *)(v75 + 215);
    *(_BYTE *)(v75 + 215) = 3;
    LODWORD(v14) = GreStretchBltInternal(v74, a2, a3, a4, a5, v260, a7, a8, a9, a10, 13369376, -1, 0);
    *(_BYTE *)(*((_QWORD *)v271[0] + 122) + 215LL) = v76;
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v319);
    goto LABEL_434;
  }
  v77 = *(_DWORD **)(v58 + 976);
  v78 = *(HDC *)(v64 + 128);
  v79 = *(_QWORD *)(v58 + 88);
  v242 = v77[45];
  v80 = v77[44];
  v227 = v77[46];
  v261 = 0LL;
  v233 = v80;
  if ( !v78 )
  {
    if ( !v43
      || (*(_DWORD *)(v43 + 24) & 0x800) != 0 && ((v109 = *(_QWORD *)(v44 + 80)) == 0 || v109 == *(_QWORD *)(v44 + 72)) )
    {
      v114 = 1;
      v115 = *(_QWORD *)(v58 + 976);
      v86 = v269[0];
      v254 = xloIdent;
      v253 = xloIdent;
      v241 = (HDC)xloIdent;
      v234 = *(_DWORD *)(v115 + 176);
      v237 = *(_DWORD *)(v115 + 184);
      v228 = 1;
      goto LABEL_171;
    }
LABEL_155:
    XlateObject = CreateXlateObject(0LL, 0LL, v78, v43, v79, v44, v227, v233, v242, 0);
    v254 = (XLATEOBJ *)XlateObject;
    v111 = (HDC)XlateObject;
    v253 = (XLATEOBJ *)XlateObject;
    if ( XlateObject )
    {
      if ( v78 && v43 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
        EXLATEOBJ::vAddToCache(&v253, v78, v43, v79, v256);
      v88 = 1;
    }
    else
    {
      v88 = 0;
    }
    v86 = v269[0];
    v228 = v88;
    v241 = v111;
    v112 = *(_QWORD *)(v269[0] + 976LL);
    v237 = *(_DWORD *)(v112 + 184);
    v234 = *(_DWORD *)(v112 + 176);
    if ( v78 )
      goto LABEL_163;
    v44 = v256;
    v114 = v88;
LABEL_171:
    if ( gppalRGB )
    {
      if ( (*((_DWORD *)gppalRGB + 6) & 0x800) == 0
        || (v116 = *(_QWORD *)(v79 + 80)) != 0 && v116 != *(_QWORD *)(v79 + 72) )
      {
        v88 = v228;
        goto LABEL_176;
      }
    }
LABEL_186:
    v228 = v114;
    goto LABEL_187;
  }
  if ( !v43 )
  {
    if ( ((_DWORD)v78[6] & 0x800) != 0 )
    {
      v105 = *(_QWORD *)(v44 + 80);
      if ( !v105 || v105 == *(_QWORD *)(v44 + 72) )
      {
        v106 = *(_QWORD *)(v58 + 976);
        v86 = v269[0];
        v254 = xloIdent;
        v107 = *(_DWORD *)(v106 + 176);
        v253 = xloIdent;
        v228 = 1;
        v241 = (HDC)xloIdent;
        v108 = *(_DWORD *)(v106 + 184);
        v88 = 1;
        v234 = v107;
        v237 = v108;
        goto LABEL_164;
      }
    }
    goto LABEL_155;
  }
  v81 = (HDC)*((_QWORD *)v78 + 15);
  if ( v81 == v78 )
    v82 = *((_DWORD *)v78 + 8);
  else
    v82 = *((_DWORD *)v81 + 8);
  v83 = *(_QWORD *)(v43 + 120);
  if ( v83 == v43 )
    v84 = *(_DWORD *)(v43 + 32);
  else
    v84 = *(_DWORD *)(v83 + 32);
  if ( v82 == v84 )
  {
    v85 = *(_QWORD *)(v58 + 976);
    v86 = v269[0];
    v228 = 1;
    v87 = *(_DWORD *)(v85 + 176);
    v88 = 1;
    v237 = *(_DWORD *)(v85 + 184);
    v254 = xloIdent;
    v253 = xloIdent;
    v241 = (HDC)xloIdent;
    v234 = v87;
LABEL_163:
    v44 = v256;
    goto LABEL_164;
  }
  v89 = *((_DWORD *)v78 + 14);
  v297 = v44;
  v298 = v79;
  v290 = v43;
  v245 = v89;
  v299 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v90 = (HDC)*((_QWORD *)v78 + 15);
  v91 = v245;
  v268 = v90;
  v238 = 0;
  while ( 1 )
  {
    if ( v90 == v78 )
      v92 = *((_DWORD *)v78 + 8);
    else
      v92 = *((_DWORD *)v90 + 8);
    if ( *((_DWORD *)&xlateTable + 8 * v91 + 4) != v92 )
      goto LABEL_143;
    v93 = XEPALOBJ::ulTime((XEPALOBJ *)&v290);
    if ( *(_DWORD *)(v94 + v95 + 20) != v93 )
      goto LABEL_143;
    v96 = XEPALOBJ::ulTime((XEPALOBJ *)&v297);
    if ( *(_DWORD *)(v97 + v98 + 28) != v96 )
      goto LABEL_143;
    v99 = *(XLATEOBJ **)(v97 + v98 + 8);
    v253 = v99;
    if ( (v99[3].flXlate & 0x6000) != 0 )
      goto LABEL_143;
    v100 = v99[3].flXlate & 0x100;
    if ( (v99->flXlate & 4) != 0 )
      break;
    if ( !v100 )
      goto LABEL_137;
LABEL_141:
    if ( v227 == v99[1].flXlate && v233 == *(_DWORD *)&v99[1].iSrcType )
      goto LABEL_137;
LABEL_143:
    v91 = ((_BYTE)v91 + 1) & 7;
    if ( (unsigned int)++v238 >= 8 )
    {
      if ( ghsemPalette )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
        GreReleaseSemaphoreInternal(ghsemPalette);
      }
      goto LABEL_155;
    }
    v90 = v268;
  }
  if ( v242 != v99[1].iUniq || (v104 = XEPALOBJ::ulTime((XEPALOBJ *)&v298), *(_DWORD *)(v97 + v98 + 24) != v104) )
  {
    if ( !v100 )
      goto LABEL_143;
    goto LABEL_141;
  }
LABEL_137:
  _InterlockedIncrement((volatile signed __int32 *)(v97 + v98));
  *((_DWORD *)v78 + 14) = v91;
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v299);
  v86 = v269[0];
  v228 = 1;
  v254 = v253;
  v241 = (HDC)v253;
  v101 = *(_QWORD *)(v269[0] + 976LL);
  v102 = *(_DWORD *)(v101 + 176);
  v103 = *(_DWORD *)(v101 + 184);
  v88 = 1;
  v234 = v102;
  v237 = v103;
LABEL_164:
  if ( !gppalRGB && ((_DWORD)v78[6] & 0x800) != 0 )
  {
    v113 = *(_QWORD *)(v79 + 80);
    if ( !v113 || v113 == *(_QWORD *)(v79 + 72) )
    {
      v114 = v228;
LABEL_187:
      v121 = xloIdent;
      pxlo = xloIdent;
      goto LABEL_188;
    }
  }
LABEL_176:
  if ( !v78 || !gppalRGB )
    goto LABEL_216;
  v117 = (HDC)*((_QWORD *)v78 + 15);
  if ( v117 == v78 )
    v118 = *((_DWORD *)v78 + 8);
  else
    v118 = *((_DWORD *)v117 + 8);
  v119 = *((_QWORD *)gppalRGB + 15);
  if ( (struct PALETTE *)v119 == gppalRGB )
    v120 = *((_DWORD *)gppalRGB + 8);
  else
    v120 = *(_DWORD *)(v119 + 32);
  if ( v118 == v120 )
  {
    v114 = v228;
    goto LABEL_186;
  }
  v127 = *((_DWORD *)v78 + 14);
  v301 = v79;
  v302 = v79;
  v300 = gppalRGB;
  v312 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v128 = (HDC)*((_QWORD *)v78 + 15);
  v129 = 0;
  v130 = v228;
  v131 = v241;
  v260 = v128;
  while ( 2 )
  {
    v246 = v130;
    v241 = v131;
    v229 = v130;
    if ( v128 == v78 )
      v132 = *((_DWORD *)v78 + 8);
    else
      v132 = *((_DWORD *)v128 + 8);
    if ( *((_DWORD *)&xlateTable + 8 * v127 + 4) == v132 )
    {
      v133 = XEPALOBJ::ulTime((XEPALOBJ *)&v300);
      if ( *(_DWORD *)(v134 + v135 + 20) == v133 )
      {
        v136 = XEPALOBJ::ulTime((XEPALOBJ *)&v301);
        if ( *(_DWORD *)(v137 + v138 + 28) == v136 )
        {
          v139 = *(_QWORD *)(v137 + v138 + 8);
          pxlo = (XLATEOBJ *)v139;
          if ( (*(_DWORD *)(v139 + 76) & 0x6000) == 0 )
          {
            v140 = *(_DWORD *)(v139 + 76) & 0x100;
            if ( (*(_DWORD *)(v139 + 4) & 4) == 0 )
            {
              if ( !v140 )
                goto LABEL_203;
              goto LABEL_207;
            }
            if ( v242 == *(_DWORD *)(v139 + 24) )
            {
              v141 = XEPALOBJ::ulTime((XEPALOBJ *)&v302);
              if ( *(_DWORD *)(v137 + v138 + 24) == v141 )
              {
LABEL_203:
                _InterlockedIncrement((volatile signed __int32 *)(v137 + v138));
                *((_DWORD *)v78 + 14) = v127;
                SEMOBJ::~SEMOBJ((SEMOBJ *)&v312);
                v122 = v253;
                v114 = v246;
                v121 = pxlo;
                v86 = v269[0];
                v228 = v246;
                v254 = v253;
                goto LABEL_189;
              }
            }
            if ( v140 )
            {
LABEL_207:
              if ( v237 == *(_DWORD *)(v139 + 28) && v234 == *(_DWORD *)(v139 + 32) )
                goto LABEL_203;
            }
          }
          v131 = v241;
        }
      }
      v130 = v229;
    }
    ++v129;
    v127 = ((_BYTE)v127 + 1) & 7;
    if ( v129 < 8 )
    {
      v128 = v260;
      continue;
    }
    break;
  }
  if ( ghsemPalette )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
    GreReleaseSemaphoreInternal(ghsemPalette);
  }
  v88 = v229;
LABEL_216:
  v228 = v88;
  v142 = (XLATEOBJ *)CreateXlateObject(0LL, 0LL, v78, gppalRGB, v79, v79, v237, v234, v242, 0);
  pxlo = v142;
  v121 = v142;
  if ( v142 )
  {
    if ( v78 && gppalRGB && (v142[3].flXlate & 0x200) == 0 )
      EXLATEOBJ::vAddToCache(&pxlo, v78, gppalRGB, v79, v79);
    v86 = v269[0];
    v114 = v228;
  }
  else
  {
    v86 = v269[0];
    v114 = 0;
    v228 = 0;
  }
LABEL_188:
  v122 = v254;
LABEL_189:
  v123 = *(_QWORD *)(v86 + 976);
  v260 = (HDC)v121;
  v235 = *(_DWORD *)(v123 + 176);
  v124 = v282;
  v251 = *(_DWORD *)(v123 + 184);
  if ( !v282 )
  {
    if ( gppalRGB )
    {
      if ( (*((_DWORD *)gppalRGB + 6) & 0x800) == 0 )
        goto LABEL_257;
      v164 = *(_QWORD *)(v44 + 80);
      if ( v164 )
      {
        if ( v164 != *(_QWORD *)(v44 + 72) )
          goto LABEL_257;
      }
    }
    v146 = xloIdent;
    v259 = xloIdent;
LABEL_265:
    v166 = 1;
    goto LABEL_266;
  }
  if ( !gppalRGB )
  {
    if ( (*(_DWORD *)(v282 + 24) & 0x800) == 0 )
      goto LABEL_257;
    v161 = *(_QWORD *)(v44 + 80);
    if ( v161 )
    {
      if ( v161 != *(_QWORD *)(v44 + 72) )
        goto LABEL_257;
    }
    v162 = *(_QWORD *)(v86 + 976);
    v163 = v114;
    v146 = xloIdent;
    v259 = xloIdent;
    v228 = v114;
    v239 = *(_DWORD *)(v162 + 176);
    v236 = *(_DWORD *)(v162 + 184);
    goto LABEL_273;
  }
  v125 = *(_QWORD *)(v282 + 120);
  if ( v125 == v282 )
    v126 = *(_DWORD *)(v282 + 32);
  else
    v126 = *(_DWORD *)(v125 + 32);
  v143 = *((_QWORD *)gppalRGB + 15);
  if ( (struct PALETTE *)v143 == gppalRGB )
    v144 = *((_DWORD *)gppalRGB + 8);
  else
    v144 = *(_DWORD *)(v143 + 32);
  if ( v126 != v144 )
  {
    v147 = *(_DWORD *)(v282 + 56);
    v288 = v44;
    v289 = v44;
    v313 = gppalRGB;
    v247 = v147;
    v291 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v148 = *(_QWORD *)(v124 + 120);
    v149 = v247;
    v283 = v148;
    v240 = 0;
    while ( 1 )
    {
      if ( v148 == v124 )
        v150 = *(_DWORD *)(v124 + 32);
      else
        v150 = *(_DWORD *)(v148 + 32);
      if ( *((_DWORD *)&xlateTable + 8 * v149 + 4) != v150 )
        goto LABEL_245;
      v151 = XEPALOBJ::ulTime((XEPALOBJ *)&v313);
      if ( *(_DWORD *)(v152 + v153 + 20) != v151 )
        goto LABEL_245;
      v154 = XEPALOBJ::ulTime((XEPALOBJ *)&v288);
      if ( *(_DWORD *)(v155 + v156 + 28) != v154 )
        goto LABEL_245;
      v157 = *(XLATEOBJ **)(v155 + v156 + 8);
      v259 = v157;
      if ( (v157[3].flXlate & 0x6000) != 0 )
        goto LABEL_245;
      v158 = v157[3].flXlate & 0x100;
      if ( (v157->flXlate & 4) == 0 )
        break;
      if ( v242 == v157[1].iUniq )
      {
        v160 = XEPALOBJ::ulTime((XEPALOBJ *)&v289);
        if ( *(_DWORD *)(v155 + v156 + 24) == v160 )
        {
LABEL_239:
          _InterlockedIncrement((volatile signed __int32 *)(v155 + v156));
          *(_DWORD *)(v124 + 56) = v149;
          SEMOBJ::~SEMOBJ((SEMOBJ *)&v291);
          v122 = v253;
          v114 = v228;
          v121 = pxlo;
          v159 = *(_QWORD *)(v269[0] + 976LL);
          v146 = v259;
          v254 = v253;
          v236 = *(_DWORD *)(v159 + 184);
          v239 = *(_DWORD *)(v159 + 176);
          goto LABEL_267;
        }
      }
      if ( v158 )
        goto LABEL_243;
LABEL_245:
      v149 = ((_BYTE)v149 + 1) & 7;
      if ( (unsigned int)++v240 >= 8 )
      {
        if ( ghsemPalette )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
          GreReleaseSemaphoreInternal(ghsemPalette);
        }
LABEL_257:
        v165 = CreateXlateObject(0LL, 0LL, v124, gppalRGB, v44, v44, v251, v235, v242, 0);
        v259 = (XLATEOBJ *)v165;
        v146 = (XLATEOBJ *)v165;
        if ( v165 )
        {
          if ( v124 && gppalRGB && (*(_DWORD *)(v165 + 76) & 0x200) == 0 )
            EXLATEOBJ::vAddToCache(&v259, v124, gppalRGB, v256, v256);
          v86 = v269[0];
          v114 = v228;
          goto LABEL_265;
        }
        v86 = v269[0];
        v166 = 0;
        v114 = v228;
LABEL_266:
        v114 &= v166;
        v167 = *(_QWORD *)(v86 + 976);
        v228 = v114;
        v236 = *(_DWORD *)(v167 + 184);
        v239 = *(_DWORD *)(v167 + 176);
        if ( gppalRGB )
          goto LABEL_267;
        v163 = v114;
        if ( v124 )
        {
LABEL_273:
          v168 = v256;
          if ( (*(_DWORD *)(v124 + 24) & 0x800) == 0 )
            goto LABEL_276;
          v171 = *(_QWORD *)(v256 + 80);
          if ( v171 )
          {
            if ( v171 != *(_QWORD *)(v256 + 72) )
              goto LABEL_276;
          }
        }
        inited = v163;
LABEL_317:
        v190 = xloIdent;
        v262 = xloIdent;
        goto LABEL_318;
      }
      v148 = v283;
    }
    if ( !v158 )
      goto LABEL_239;
LABEL_243:
    if ( v251 == v157[1].flXlate && v235 == *(_DWORD *)&v157[1].iSrcType )
      goto LABEL_239;
    goto LABEL_245;
  }
  v145 = *(_QWORD *)(v86 + 976);
  v146 = xloIdent;
  v259 = xloIdent;
  v228 = v114;
  v239 = *(_DWORD *)(v145 + 176);
  v236 = *(_DWORD *)(v145 + 184);
LABEL_267:
  v168 = v256;
  if ( !v124 && (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
  {
    v169 = *(_QWORD *)(v256 + 80);
    if ( !v169 || v169 == *(_QWORD *)(v256 + 72) )
    {
      inited = v228;
      goto LABEL_317;
    }
  }
LABEL_276:
  if ( !gppalRGB || !v124 )
    goto LABEL_309;
  v172 = *((_QWORD *)gppalRGB + 15);
  if ( (struct PALETTE *)v172 == gppalRGB )
    v173 = *((_DWORD *)gppalRGB + 8);
  else
    v173 = *(_DWORD *)(v172 + 32);
  v174 = *(_QWORD *)(v124 + 120);
  if ( v174 == v124 )
    v175 = *(_DWORD *)(v124 + 32);
  else
    v175 = *(_DWORD *)(v174 + 32);
  if ( v173 == v175 )
  {
    inited = v114;
    goto LABEL_317;
  }
  v293 = v168;
  v294 = v168;
  v176 = *((_DWORD *)gppalRGB + 14);
  v292 = v124;
  v248 = v176;
  v295 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v177 = *((_QWORD *)gppalRGB + 15);
  v178 = v248;
  v179 = v228;
  v180 = v241;
  v283 = v177;
  v252 = 0;
  while ( 2 )
  {
    v249 = v179;
    v241 = v180;
    v230 = v179;
    if ( (struct PALETTE *)v177 == gppalRGB )
      v181 = *((_DWORD *)gppalRGB + 8);
    else
      v181 = *(_DWORD *)(v177 + 32);
    if ( *((_DWORD *)&xlateTable + 8 * v178 + 4) == v181 )
    {
      v182 = XEPALOBJ::ulTime((XEPALOBJ *)&v292);
      if ( *(_DWORD *)(v183 + v184 + 20) == v182 )
      {
        v185 = XEPALOBJ::ulTime((XEPALOBJ *)&v293);
        if ( *(_DWORD *)(v186 + v187 + 28) == v185 )
        {
          v188 = *(XLATEOBJ **)(v186 + v187 + 8);
          v262 = v188;
          if ( (v188[3].flXlate & 0x6000) == 0 )
          {
            v189 = v188[3].flXlate & 0x100;
            if ( (v188->flXlate & 4) == 0 )
            {
              if ( !v189 )
                goto LABEL_296;
              goto LABEL_300;
            }
            if ( v242 == v188[1].iUniq )
            {
              v191 = XEPALOBJ::ulTime((XEPALOBJ *)&v294);
              if ( *(_DWORD *)(v186 + v187 + 24) == v191 )
              {
LABEL_296:
                _InterlockedIncrement((volatile signed __int32 *)(v186 + v187));
                *((_DWORD *)gppalRGB + 14) = v178;
                SEMOBJ::~SEMOBJ((SEMOBJ *)&v295);
                v122 = v253;
                inited = v249;
                v121 = pxlo;
                v146 = v259;
                v190 = v262;
                v254 = v253;
                goto LABEL_318;
              }
            }
            if ( v189 )
            {
LABEL_300:
              if ( v236 == v188[1].flXlate && v239 == *(_DWORD *)&v188[1].iSrcType )
                goto LABEL_296;
            }
          }
          v180 = v241;
        }
      }
      v179 = v230;
    }
    v178 = ((_BYTE)v178 + 1) & 7;
    if ( (unsigned int)++v252 < 8 )
    {
      v177 = v283;
      continue;
    }
    break;
  }
  if ( ghsemPalette )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
    GreReleaseSemaphoreInternal(ghsemPalette);
  }
  v114 = v230;
LABEL_309:
  v192 = v256;
  v231 = v114;
  v262 = (XLATEOBJ *)CreateXlateObject(0LL, 0LL, gppalRGB, v124, v256, v256, v236, v239, v242, 0);
  v190 = v262;
  if ( v262 )
  {
    if ( gppalRGB && v282 && (v262[3].flXlate & 0x200) == 0 )
      EXLATEOBJ::vAddToCache(&v262, gppalRGB, v282, v192, v192);
    inited = v231;
  }
  else
  {
    inited = 0;
  }
LABEL_318:
  v193 = *((_QWORD *)v271[0] + 146);
  if ( v193 && (*((_DWORD *)v271[0] + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v271[0]) )
  {
LABEL_323:
    if ( (*((_DWORD *)v271[0] + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v271[0]) )
      goto LABEL_325;
  }
  else if ( *((_QWORD *)v271[0] + 144) )
  {
    if ( v193 )
      goto LABEL_323;
LABEL_325:
    v194 = (struct REGION *)*((_QWORD *)v271[0] + 144);
  }
  else
  {
    v194 = DC::prgnVisSnap(v271[0]);
  }
  v351 = 0LL;
  v352 = 0;
  v353 = 1;
  v354 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v346, v194, (struct ERECTL *)&v342, 0);
  if ( v347 == v349 || v348 == v350 )
  {
    LODWORD(v14) = 1;
    goto LABEL_424;
  }
  v279 = 0LL;
  v280 = 0;
  v281 = 0;
  v195 = *(_QWORD *)(v267 + 48);
  if ( !v255.x || (v196 = *(_DWORD *)(*((_QWORD *)v271[0] + 122) + 108LL), (v196 & 1) == 0) || (v196 & 9) == 9 )
  {
LABEL_339:
    v276 = 0LL;
    v277 = 0;
    v278 = 0;
    v273 = 0LL;
    v274 = 0;
    v275 = 0;
    if ( !pptlSrc.x )
      goto LABEL_380;
    v306[1] = v342.m128i_i32[2] - v342.m128i_i32[0];
    v306[2] = v342.m128i_i32[3] - v342.m128i_i32[1];
    v306[3] = 0;
    v308 = 0LL;
    v306[0] = 6;
    v307 = *(_QWORD *)gppalRGB;
    DIB = SURFMEM::bCreateDIB((SURFMEM *)&v276, (struct _DEVBITMAPINFO *)v306, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) & inited;
    if ( DIB )
    {
      if ( !v243 )
      {
        v309[1] = prclDest.right - prclDest.left;
        v309[2] = prclDest.bottom - prclDest.top;
        v309[3] = 0;
        v311 = 0LL;
        v309[0] = 6;
        v310 = *(_QWORD *)gppalRGB;
        DIB = SURFMEM::bCreateDIB((SURFMEM *)&v273, (struct _DEVBITMAPINFO *)v309, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( DIB )
        {
          v200 = prclDest.left;
          pptlSrc.x = prclDest.left;
          v255.x = prclDest.top;
          pptlSrc.y = prclDest.top;
          if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
          {
            v201 = 87;
LABEL_372:
            EngSetLastError(v201);
            SURFMEM::~SURFMEM((SURFMEM *)&v273);
            SURFMEM::~SURFMEM((SURFMEM *)&v276);
            goto LABEL_373;
          }
          if ( prclDest.right > prclDest.left
            && prclDest.bottom > prclDest.top
            && v200 <= *(_DWORD *)(v257 + 56)
            && v255.x <= *(_DWORD *)(v257 + 60) )
          {
            v202 = (SURFOBJ *)(v273 + 24);
            if ( !v273 )
              v202 = 0LL;
            EngCopyBits(v202, (SURFOBJ *)(v257 + 24), 0LL, v121, &prclDest, &pptlSrc);
          }
          v203 = v273;
          v204 = 0;
          v257 = v273;
          v205 = *(_DWORD **)(v273 + 80);
          v206 = (_DWORD *)((char *)v205 + *(_DWORD *)(v273 + 60) * *(_DWORD *)(v273 + 88));
          if ( v205 != v206 )
          {
            do
            {
              if ( v204 >= prclDest.top && v204 < prclDest.bottom )
              {
                v207 = v205;
                v208 = &v205[*(int *)(v203 + 56)];
                v209 = 0;
                if ( v205 != v208 )
                {
                  do
                  {
                    if ( v209 >= prclDest.left && v209 < prclDest.right )
                      *v207 |= 0xFF000000;
                    ++v209;
                    ++v207;
                  }
                  while ( v207 != v208 );
                  v203 = v273;
                }
              }
              ++v204;
              v205 = (_DWORD *)((char *)v205 + *(int *)(v203 + 88));
            }
            while ( v205 != v206 );
            v257 = v203;
          }
          HIBYTE(a11) |= 1u;
          v260 = (HDC)xloIdent;
        }
      }
      v210 = *(_DWORD **)(v276 + 72);
      v211 = (unsigned __int64)*(unsigned int *)(v276 + 64) >> 2;
      if ( v211 )
      {
        if ( ((unsigned __int8)v210 & 4) == 0 )
          goto LABEL_368;
        *v210 = 0;
        if ( --v211 )
        {
          ++v210;
LABEL_368:
          memset(v210, 0, 8 * (v211 >> 1));
          if ( (v211 & 1) != 0 )
            v210[v211 - 1] = 0;
        }
      }
    }
    if ( !DIB )
    {
      v201 = 8;
      goto LABEL_372;
    }
    `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    v255.x = v355.x - 16 * v287.m128i_i32[0];
    v255.y = v355.y - 16 * v287.m128i_i32[1];
    pptfx = v255;
    v255.x = v356 - 16 * v287.m128i_i32[0];
    v255.y = v357 - 16 * v287.m128i_i32[1];
    v368 = v255;
    v255.x = v358 - 16 * v287.m128i_i32[0];
    v255.y = v359 - 16 * v287.m128i_i32[1];
    v369 = v255;
    v212 = (SURFOBJ *)(v257 + 24);
    if ( !v257 )
      v212 = 0LL;
    if ( v276 )
      v213 = (SURFOBJ *)(v276 + 24);
    else
      v213 = 0LL;
    EngPlgBlt(v213, v212, 0LL, 0LL, (XLATEOBJ *)v260, 0LL, 0LL, &pptfx, &prclDest, 0LL, 3u);
    inited = EXLATEOBJ::bInitXlateObj(
               (__int64 *)&v261,
               0LL,
               0,
               (__int64)gppalRGB,
               v282,
               0LL,
               v256,
               *(_DWORD *)(*(_QWORD *)(v269[0] + 976LL) + 184LL),
               *(_DWORD *)(*(_QWORD *)(v269[0] + 976LL) + 176LL),
               v242,
               0);
    *(_QWORD *)&prclDest.left = 0LL;
    v241 = v261;
    v260 = (HDC)xloIdent;
    v257 = v276;
    prclDest.right = v342.m128i_i32[2] - v342.m128i_i32[0];
    prclDest.bottom = v342.m128i_i32[3] - v342.m128i_i32[1];
    `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
    v122 = v254;
LABEL_380:
    if ( inited )
    {
      v214 = v267;
      ++*(_DWORD *)(v267 + 92);
      v215 = v271[0];
      v216 = *(struct ECLIPOBJ **)(v269[0] + 48LL);
      v217 = (struct ECLIPOBJ **)*((_QWORD *)v271[0] + 6);
      if ( v217 == (struct ECLIPOBJ **)v216 || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v271) && v217[437] == v216 )
      {
        if ( (*((_DWORD *)v215 + 9) & 0xE0) != 0 )
        {
          v287 = v342;
          XDCOBJ::vAccumulateTight((XDCOBJ *)v271, v216, &v287);
          v214 = v267;
        }
        v314[1] = 0;
        v314[0] = a11;
        v315 = v260;
        v316 = v146;
        v317 = v190;
        if ( v342.m128i_i32[2] - v342.m128i_i32[0] == prclDest.right - prclDest.left
          && v342.m128i_i32[3] - v342.m128i_i32[1] == prclDest.bottom - prclDest.top )
        {
          BYTE1(v314[0]) = BYTE1(a11) & 0xFE;
        }
        if ( (*(_DWORD *)(v214 + 112) & 0x10000) != 0 )
          v219 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v195 + 3232);
        else
          v219 = EngAlphaBlend;
        if ( v257 )
          v14 = v257 + 24;
        LODWORD(v14) = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, __m128i *, RECTL *, _DWORD *))v219)(
                         v214 + 24,
                         v14,
                         v346,
                         v241,
                         &v342,
                         &prclDest,
                         v314);
        goto LABEL_398;
      }
      v218 = 87;
    }
    else
    {
      v218 = 6;
    }
    EngSetLastError(v218);
LABEL_398:
    SURFMEM::~SURFMEM((SURFMEM *)&v273);
    SURFMEM::~SURFMEM((SURFMEM *)&v276);
    SURFMEM::~SURFMEM((SURFMEM *)&v279);
    if ( v190 )
    {
      cEntries = (int)v190[1].cEntries;
      if ( (int)cEntries < 0 )
      {
        if ( (_DWORD)cEntries == -1 )
          FreeThreadBufferWithTag(v190);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
        v122 = v253;
        v121 = pxlo;
        v146 = v259;
      }
    }
    if ( v146 )
    {
      v221 = (int)v146[1].cEntries;
      if ( (int)v221 < 0 )
      {
        if ( (_DWORD)v221 == -1 )
          FreeThreadBufferWithTag(v146);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v221);
        v122 = v253;
        v121 = pxlo;
      }
    }
    if ( v121 )
    {
      v222 = (int)v121[1].cEntries;
      if ( (int)v222 < 0 )
      {
        if ( (_DWORD)v222 == -1 )
          FreeThreadBufferWithTag(v121);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v222);
        v122 = v253;
      }
    }
    if ( v261 )
    {
      v223 = *((int *)v261 + 9);
      if ( (int)v223 < 0 )
      {
        if ( (_DWORD)v223 == -1 )
          FreeThreadBufferWithTag(v261);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v223);
        v122 = v253;
      }
    }
    if ( v122 )
    {
      v224 = (int)v122[1].cEntries;
      if ( (int)v224 >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v224);
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v319);
        goto LABEL_434;
      }
      if ( (_DWORD)v224 == -1 )
      {
        FreeThreadBufferWithTag(v122);
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v319);
        goto LABEL_434;
      }
    }
    goto LABEL_431;
  }
  v303[1] = *(_DWORD *)(v257 + 56);
  v303[2] = *(_DWORD *)(v257 + 60);
  v303[0] = *(_DWORD *)(v257 + 96);
  v197 = *(__int64 **)(v257 + 128);
  v303[3] = 0;
  v305 = 0LL;
  v304 = *v197;
  SURFMEM::bCreateDIB((SURFMEM *)&v279, (struct _DEVBITMAPINFO *)v303, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v279 )
  {
    v343 = 0LL;
    v268 = 0LL;
    v68 = (*(_DWORD *)(v257 + 112) & 0x400) == 0;
    v344 = *(_DWORD *)(v257 + 56);
    v345 = *(_DWORD *)(v257 + 60);
    if ( v68
       ? ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64 *, HDC *))EngCopyBits)(
           v279 + 24,
           v257 + 24,
           0LL,
           0LL,
           &v343,
           &v268)
       : (*((unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, HDC *))v296 + 352))(
           v279 + 24,
           v257 + 24,
           0LL,
           0LL,
           &v343,
           &v268) )
    {
      v199 = *(_DWORD *)(v279 + 96);
      if ( (unsigned int)(v199 - 1) <= 5 )
      {
        ((void (*)(void))(&apfnMirror)[v199])();
        v257 = v279;
        goto LABEL_339;
      }
    }
  }
LABEL_373:
  SURFMEM::~SURFMEM((SURFMEM *)&v279);
LABEL_424:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v262);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v259);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v261);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v253);
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v319);
LABEL_434:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v269);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v270);
LABEL_436:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v271);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v272);
  return (unsigned int)v14;
}
