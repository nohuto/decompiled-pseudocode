/*
 * XREFs of GreStretchBltInternal @ 0x1C00FF3A0
 * Callers:
 *     BltIcon @ 0x1C00274A8 (BltIcon.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002BA80 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiStretchBlt @ 0x1C0096040 (NtGdiStretchBlt.c)
 *     BitBltSysBmp @ 0x1C009A400 (BitBltSysBmp.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     GreStretchBlt @ 0x1C013F104 (GreStretchBlt.c)
 *     NtUserBitBltSysBmp @ 0x1C01CCDC0 (NtUserBitBltSysBmp.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C0220810 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C026F280 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002200 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0016F70 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0017910 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001D278 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C001EF1C (--1BLTRECORD@@QEAA@XZ.c)
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     GreMovePointer @ 0x1C0078400 (GreMovePointer.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0099AE4 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00AC154 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     NtGdiPatBlt @ 0x1C00DBEF0 (NtGdiPatBlt.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00DC33C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     bCvtPts1 @ 0x1C00F7380 (bCvtPts1.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F8B40 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00FE090 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FE930 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0101D80 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C01026C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0107D28 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C0E4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x1C011C724 (-bValid@DLODCOBJ@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E4C0 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EAC8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EB4C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026572C (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026BA54 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C02704B0 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028EBA0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C029334C (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A3300 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A66FC (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02C06A4 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreStretchBltInternal(
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
        int a11,
        int a12,
        char a13)
{
  unsigned int v14; // r13d
  int v15; // edi
  unsigned int v16; // edi
  int v17; // ebx
  char v19; // al
  unsigned int v20; // ebx
  __int64 v22; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  bool v26; // zf
  struct UMPDOBJ *v27; // rax
  DC *v28; // rdx
  int v29; // ebx
  struct _DC_ATTR *UserAttr; // rax
  int v31; // edi
  __int64 v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  struct UMPDOBJ *v36; // rax
  DC *v37; // rdx
  int v38; // ebx
  struct _DC_ATTR *v39; // rax
  DC *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  ULONG v44; // ecx
  DC *v45; // r8
  DC *v46; // r9
  struct SURFACE *v47; // rbx
  int v48; // eax
  int v49; // eax
  struct SURFACE *v50; // rcx
  int v51; // eax
  int v52; // eax
  __int64 v53; // rbx
  unsigned int v54; // eax
  struct SURFACE *v55; // rdi
  __int64 v56; // r12
  __int64 v57; // r15
  char v58; // r14
  __int64 v59; // rcx
  SURFACE *v60; // rcx
  int v61; // ebx
  DC *v62; // r8
  __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  struct SURFACE *v65; // rax
  struct SURFACE *v66; // rbx
  __int64 v67; // rbx
  DC *v68; // rcx
  void *v69; // r9
  __int64 v70; // rax
  int v71; // r8d
  __int64 v72; // r14
  __int64 v73; // rdi
  int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // edx
  __int64 v79; // rax
  int v80; // esi
  __int64 v81; // rsi
  unsigned int v82; // edx
  __int64 v83; // rax
  int v84; // ecx
  int v85; // eax
  __int64 v86; // r10
  int v87; // eax
  __int64 v88; // r10
  char *v89; // r9
  int v90; // r8d
  int v91; // eax
  __int64 v92; // r11
  __int64 XlateObject; // rax
  unsigned int v94; // r14d
  __int64 v95; // r8
  int v96; // ecx
  int v97; // ebx
  int v98; // r11d
  int v99; // r8d
  unsigned int v100; // esi
  unsigned int v101; // eax
  int v102; // edi
  int v103; // esi
  int v104; // r10d
  int v105; // r9d
  __int64 v106; // rcx
  unsigned int v107; // eax
  unsigned int v108; // eax
  SURFACE *v109; // rax
  DC *v110; // rcx
  DC *v111; // r8
  __int64 v112; // rcx
  __int64 v113; // r8
  DC *v114; // rcx
  DC *v115; // rcx
  DC *v116; // r9
  int v117; // eax
  __int64 *v118; // rax
  __int64 v119; // rax
  struct Gre::Base::SESSION_GLOBALS *v120; // rbx
  Gre::Base *v121; // rcx
  struct Gre::Base::SESSION_GLOBALS *v122; // rbx
  __int64 v123; // rbx
  __int64 v124; // rbx
  __int64 CurrentProcess; // rax
  int v126; // eax
  __int64 *v127; // rax
  __int64 v128; // rax
  struct Gre::Base::SESSION_GLOBALS *v129; // rbx
  Gre::Base *v130; // rcx
  struct Gre::Base::SESSION_GLOBALS *v131; // rbx
  __int64 v132; // rbx
  SURFACE *v133; // rcx
  SURFACE *v134; // rcx
  __int64 v135; // rbx
  __int64 v136; // rax
  int v137; // eax
  __int64 *v138; // rax
  __int64 v139; // rax
  struct Gre::Base::SESSION_GLOBALS *v140; // rbx
  Gre::Base *v141; // rcx
  struct Gre::Base::SESSION_GLOBALS *v142; // rbx
  __int64 v143; // rbx
  __int16 v144; // ax
  int v145; // eax
  __int64 *v146; // rax
  __int64 v147; // rax
  struct Gre::Base::SESSION_GLOBALS *v148; // rbx
  Gre::Base *v149; // rcx
  struct Gre::Base::SESSION_GLOBALS *v150; // rbx
  __int64 v151; // rbx
  __int64 *v152; // rax
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rax
  __int64 v156; // rdx
  HSURF v157; // rbx
  Gre::Base *v158; // rcx
  struct Gre::Base::SESSION_GLOBALS *v159; // rbx
  char v160; // di
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rdx
  HSURF v166; // rbx
  Gre::Base *v167; // rcx
  struct Gre::Base::SESSION_GLOBALS *v168; // rbx
  char v169; // di
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rbx
  DC *v173; // rcx
  __int64 v174; // rbx
  DC *v175; // rcx
  struct _DC_ATTR *v176; // rax
  __int64 v177; // rbx
  signed __int32 v178[8]; // [rsp+0h] [rbp-100h] BYREF
  char v179[8]; // [rsp+20h] [rbp-E0h]
  __int64 v180; // [rsp+30h] [rbp-D0h]
  __int64 v181; // [rsp+38h] [rbp-C8h]
  __int64 v182; // [rsp+40h] [rbp-C0h]
  __int64 v183; // [rsp+48h] [rbp-B8h]
  _BYTE v184[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v185; // [rsp+54h] [rbp-ACh] BYREF
  int v186; // [rsp+58h] [rbp-A8h]
  int v187; // [rsp+5Ch] [rbp-A4h] BYREF
  int v188; // [rsp+60h] [rbp-A0h] BYREF
  int v189; // [rsp+64h] [rbp-9Ch] BYREF
  DC *v190; // [rsp+68h] [rbp-98h] BYREF
  __int64 v191; // [rsp+70h] [rbp-90h]
  char v192[32]; // [rsp+78h] [rbp-88h] BYREF
  DC *v193; // [rsp+98h] [rbp-68h] BYREF
  __int64 v194; // [rsp+A0h] [rbp-60h]
  _BYTE v195[32]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v196; // [rsp+C8h] [rbp-38h]
  int v197; // [rsp+CCh] [rbp-34h] BYREF
  int v198[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v199; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v200; // [rsp+F0h] [rbp-10h]
  __int64 v201; // [rsp+100h] [rbp+0h]
  __int64 v202; // [rsp+108h] [rbp+8h] BYREF
  char v203; // [rsp+110h] [rbp+10h]
  int v204; // [rsp+114h] [rbp+14h]
  _BYTE v205[32]; // [rsp+118h] [rbp+18h] BYREF
  int v206; // [rsp+138h] [rbp+38h]
  __int128 v207; // [rsp+140h] [rbp+40h]
  unsigned int v208; // [rsp+150h] [rbp+50h]
  int v209; // [rsp+154h] [rbp+54h]
  DC *v210; // [rsp+158h] [rbp+58h] BYREF
  __int64 v211; // [rsp+160h] [rbp+60h]
  _BYTE v212[32]; // [rsp+168h] [rbp+68h] BYREF
  __int16 v213; // [rsp+188h] [rbp+88h]
  DC *v214; // [rsp+190h] [rbp+90h] BYREF
  __int64 v215; // [rsp+198h] [rbp+98h]
  _BYTE v216[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int16 v217; // [rsp+1C0h] [rbp+C0h]
  __int64 v218; // [rsp+1C8h] [rbp+C8h]
  __int128 v219; // [rsp+1D0h] [rbp+D0h]
  HDC v220; // [rsp+1E0h] [rbp+E0h]
  __int64 v221; // [rsp+1E8h] [rbp+E8h]
  __int64 v222; // [rsp+1F0h] [rbp+F0h]
  HDC v223; // [rsp+1F8h] [rbp+F8h]
  int v224; // [rsp+200h] [rbp+100h]
  struct SURFACE *v225; // [rsp+208h] [rbp+108h]
  int v226; // [rsp+210h] [rbp+110h]
  int v227; // [rsp+214h] [rbp+114h]
  int v228; // [rsp+218h] [rbp+118h]
  int v229; // [rsp+21Ch] [rbp+11Ch]
  unsigned int v230; // [rsp+220h] [rbp+120h]
  unsigned int v231; // [rsp+224h] [rbp+124h]
  int v232; // [rsp+228h] [rbp+128h]
  unsigned int v233; // [rsp+22Ch] [rbp+12Ch]
  __int64 v234; // [rsp+230h] [rbp+130h]
  void *v235; // [rsp+238h] [rbp+138h]
  __int64 v236; // [rsp+240h] [rbp+140h]
  struct Gre::Base::SESSION_GLOBALS *v237; // [rsp+248h] [rbp+148h]
  __int64 v238; // [rsp+250h] [rbp+150h] BYREF
  __int64 v239; // [rsp+258h] [rbp+158h] BYREF
  __int64 v240; // [rsp+260h] [rbp+160h] BYREF
  __int64 v241; // [rsp+268h] [rbp+168h] BYREF
  DC *v242[2]; // [rsp+270h] [rbp+170h] BYREF
  char v243[32]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v244[16]; // [rsp+2A0h] [rbp+1A0h] BYREF
  DC *v245[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
  char v246[32]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v247[32]; // [rsp+2E0h] [rbp+1E0h] BYREF
  HSURF *v248; // [rsp+300h] [rbp+200h]
  _BYTE v249[32]; // [rsp+308h] [rbp+208h] BYREF
  HSURF *v250; // [rsp+328h] [rbp+228h]
  _BYTE v251[32]; // [rsp+330h] [rbp+230h] BYREF
  struct SURFACE *v252; // [rsp+350h] [rbp+250h]
  _BYTE v253[32]; // [rsp+358h] [rbp+258h] BYREF
  struct SURFACE *v254; // [rsp+378h] [rbp+278h]
  _BYTE v255[16]; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v256[16]; // [rsp+390h] [rbp+290h] BYREF
  _DWORD v257[4]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v258[2]; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v259; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v260; // [rsp+3D0h] [rbp+2D0h]
  __int64 v261; // [rsp+3D8h] [rbp+2D8h]
  __int64 v262; // [rsp+3E0h] [rbp+2E0h]
  __int64 v263; // [rsp+3E8h] [rbp+2E8h]
  struct SURFACE *v264; // [rsp+3F0h] [rbp+2F0h]
  struct SURFACE *v265; // [rsp+3F8h] [rbp+2F8h]
  __int64 v266; // [rsp+400h] [rbp+300h]
  char *v267; // [rsp+408h] [rbp+308h] BYREF
  char *v268; // [rsp+410h] [rbp+310h]
  int v269; // [rsp+440h] [rbp+340h] BYREF
  int v270; // [rsp+444h] [rbp+344h]
  int v271; // [rsp+448h] [rbp+348h]
  int v272; // [rsp+44Ch] [rbp+34Ch]
  int v273; // [rsp+458h] [rbp+358h] BYREF
  int v274; // [rsp+45Ch] [rbp+35Ch]
  int v275; // [rsp+460h] [rbp+360h]
  unsigned int v276; // [rsp+464h] [rbp+364h]
  __int64 v277; // [rsp+478h] [rbp+378h]
  unsigned int v278; // [rsp+480h] [rbp+380h]
  int v279; // [rsp+484h] [rbp+384h]

  v14 = 0;
  v224 = a2;
  v187 = a4;
  v266 = 0LL;
  v197 = a11 & 0x40000000;
  v15 = 0x3FFFFFFF;
  v279 = 0;
  if ( (a11 & 0x40000000) == 0 )
    v15 = 0x7FFFFFFF;
  v231 = 0;
  v16 = a11 & v15;
  v17 = a3;
  v185 = a3;
  v186 = (a11 & 0x40000000) != 0;
  v189 = a5;
  v278 = ((v16 >> 8) | v16 & 0xFF0000) >> 8;
  v19 = gajRop3[(unsigned __int64)v278 >> 8] | gajRop3[(unsigned __int16)(v16 >> 8) >> 8];
  v233 = gajRop3[(unsigned __int64)v278 >> 8] | gajRop3[(unsigned __int16)(v16 >> 8) >> 8];
  v188 = v19 & 0xD4;
  if ( (v19 & 0xD4) == 0 && (unsigned __int8)((unsigned __int16)(v16 >> 8) >> 8) == ((v16 >> 8) | v16 & 0xFF0000) >> 16 )
  {
    v20 = NtGdiPatBlt(a1, a2, a3, a4, a5, v16);
    BLTRECORD::~BLTRECORD((BLTRECORD *)v258);
    return v20;
  }
  v191 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v192);
  LOBYTE(v22) = 1;
  v190 = (DC *)HmgLockEx(a1, v22, 0LL);
  if ( v190 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread
      || (v24 = *ThreadWin32Thread) == 0
      || (v25 = *(_QWORD *)(v24 + 40), v26 = v25 == v24 + 40, v27 = (struct UMPDOBJ *)(v25 - 40), v26) )
    {
      v27 = 0LL;
    }
    v28 = v190;
    if ( *((_WORD *)v190 + 6) == 1 )
    {
      *((_QWORD *)v190 + 271) = v27;
      *((_DWORD *)v190 + 544) = 0xFFFF;
      v28 = v190;
    }
    else if ( *((struct UMPDOBJ **)v190 + 271) != v27 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v190, v27);
      _InterlockedDecrement((volatile signed __int32 *)v190 + 3);
      v190 = 0LL;
      goto LABEL_36;
    }
    if ( HIDWORD(v191) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v28 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_17:
        _InterlockedDecrement((volatile signed __int32 *)v28 + 3);
        v190 = 0LL;
        goto LABEL_36;
      }
      v29 = *((_DWORD *)v28 + 528);
      v26 = v29 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
      v17 = v185;
      if ( !v26 )
      {
        v28 = v190;
        goto LABEL_17;
      }
    }
    else
    {
      if ( !*((_DWORD *)v28 + 528) )
        goto LABEL_26;
      *((_DWORD *)v28 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v28 = v190;
LABEL_26:
  if ( v28 )
  {
    if ( (*((_DWORD *)v28 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v191) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v190);
        if ( UserAttr && !DC::SaveAttributes(v190, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v190 + 3);
          v190 = 0LL;
          goto LABEL_36;
        }
        v28 = v190;
      }
      *((_DWORD *)v28 + 11) |= 2u;
      v28 = v190;
      LODWORD(v191) = 1;
    }
    if ( (*((_DWORD *)v28 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v28);
  }
LABEL_36:
  if ( ((gajRop3[(unsigned __int8)v16] | gajRop3[BYTE1(v16)]) & 2) == 0 || v16 == 16711778 )
  {
    v31 = v187;
  }
  else
  {
    v26 = v16 == 66;
    v31 = v187;
    if ( !v26 )
      bSpDwmValidateSurface((struct XDCOBJ *)&v190, a2, v17, v187, v189);
  }
  v193 = 0LL;
  v194 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v195);
  LOBYTE(v32) = 1;
  v193 = (DC *)HmgLockEx(a6, v32, HIDWORD(v194));
  if ( v193 )
  {
    v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v33
      || (v34 = *v33) == 0
      || (v35 = *(_QWORD *)(v34 + 40), v26 = v35 == v34 + 40, v36 = (struct UMPDOBJ *)(v35 - 40), v26) )
    {
      v36 = 0LL;
    }
    v37 = v193;
    if ( *((_WORD *)v193 + 6) == 1 )
    {
      *((_QWORD *)v193 + 271) = v36;
      *((_DWORD *)v193 + 544) = 0xFFFF;
      v37 = v193;
    }
    else if ( *((struct UMPDOBJ **)v193 + 271) != v36 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v193, v36);
      _InterlockedDecrement((volatile signed __int32 *)v193 + 3);
      v193 = 0LL;
      goto LABEL_71;
    }
    if ( HIDWORD(v194) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v37 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_52:
        _InterlockedDecrement((volatile signed __int32 *)v37 + 3);
        v193 = 0LL;
        goto LABEL_71;
      }
      v38 = *((_DWORD *)v37 + 528);
      if ( v38 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v37 = v193;
        goto LABEL_52;
      }
    }
    else
    {
      if ( !*((_DWORD *)v37 + 528) )
        goto LABEL_61;
      *((_DWORD *)v37 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v37 = v193;
LABEL_61:
  if ( v37 )
  {
    if ( (*((_DWORD *)v37 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v194) )
      {
        v39 = XDCOBJ::GetUserAttr((XDCOBJ *)&v193);
        if ( v39 && !DC::SaveAttributes(v193, v39) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v193 + 3);
          v193 = 0LL;
          goto LABEL_71;
        }
        v37 = v193;
      }
      *((_DWORD *)v37 + 11) |= 2u;
      v37 = v193;
      LODWORD(v194) = 1;
    }
    if ( (*((_DWORD *)v37 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v37);
  }
LABEL_71:
  bSpDwmValidateSurface((struct XDCOBJ *)&v193, a7, a8, a9, a10);
  v40 = v190;
  if ( v190 )
  {
    if ( (*((_DWORD *)v190 + 9) & 0x10000) == 0 )
    {
      v41 = *((_QWORD *)v190 + 122);
      if ( (*(_DWORD *)(v41 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v190, *(_QWORD *)(v41 + 160));
        v40 = v190;
      }
    }
    if ( v40 && (*((_DWORD *)v40 + 9) & 0x10000) == 0 && (v193 || !v188) )
    {
      v202 = 0LL;
      v203 = 0;
      v204 = 0;
      v206 = 0;
      v210 = 0LL;
      v211 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v212);
      v213 = 256;
      v214 = 0LL;
      v215 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v216);
      v217 = 256;
      v199 = 0LL;
      v200 = 0LL;
      v207 = 0LL;
      v219 = 0LL;
      v201 = 0LL;
      v208 = 0;
      v218 = 0LL;
      v220 = 0LL;
      v223 = 0LL;
      v221 = 0LL;
      v222 = 0LL;
      v210 = 0LL;
      v214 = 0LL;
      if ( v188 )
        DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)&v199, (struct XDCOBJ *)&v190, (struct XDCOBJ *)&v193, v186);
      else
        DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)&v199, (struct XDCOBJ *)&v190);
      if ( (v208 & 1) == 0 )
      {
        v44 = 8;
LABEL_84:
        EngSetLastError(v44);
LABEL_85:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v199, v42, v45);
        DCOBJ::~DCOBJ((DCOBJ *)&v193);
        DCOBJ::~DCOBJ((DCOBJ *)&v190);
        BLTRECORD::~BLTRECORD((BLTRECORD *)v258);
        return 0LL;
      }
      v46 = v190;
      v45 = v193;
      if ( v190 )
      {
        if ( *((_QWORD *)v190 + 62) )
        {
          if ( (*((_DWORD *)v190 + 9) & 0x5000) != 0x1000
            && v193
            && *((_QWORD *)v193 + 62)
            && (*((_DWORD *)v193 + 9) & 0x5000) != 0x1000
            && (*(_DWORD *)(*((_QWORD *)v193 + 62) + 112LL) & 0x10000000) == 0 )
          {
            goto LABEL_97;
          }
LABEL_95:
          if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v193) )
          {
            if ( (*((_DWORD *)v45 + 9) & 1) == 0 )
              goto LABEL_85;
LABEL_97:
            if ( v188 )
            {
              v47 = (struct SURFACE *)*((_QWORD *)v45 + 62);
              if ( !v47 )
                v47 = SURFACE::pdibDefault;
              if ( *((_DWORD *)v47 + 164) )
              {
                if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v47 + 164) )
                  goto LABEL_552;
                v46 = v190;
                v45 = v193;
              }
              v48 = *((_DWORD *)v47 + 28);
              if ( (v48 & 0x800) != 0 )
              {
                v49 = UserSurfaceAccessCheck(*((_QWORD *)v47 + 81));
LABEL_107:
                if ( !v49 )
                  goto LABEL_552;
                v46 = v190;
                v45 = v193;
                goto LABEL_109;
              }
              if ( (v48 & 0x10000000) != 0 )
              {
                v49 = UserScreenAccessCheck(v43, v42, v45);
                goto LABEL_107;
              }
            }
LABEL_109:
            v50 = (struct SURFACE *)*((_QWORD *)v46 + 62);
            if ( !v50 )
              v50 = SURFACE::pdibDefault;
            if ( (*((_DWORD *)v50 + 29) & 8) == 0 && !*((_QWORD *)v50 + 28)
              || !_bittest16((const signed __int16 *)v50 + 51, 9u) )
            {
              v51 = *((_DWORD *)v50 + 28);
              if ( (v51 & 0x800) != 0 )
              {
                v52 = UserSurfaceAccessCheck(*((_QWORD *)v50 + 81));
              }
              else
              {
                if ( (v51 & 0x10000000) == 0 )
                  goto LABEL_120;
                v52 = UserScreenAccessCheck(v50, v42, v45);
              }
              if ( v52 )
              {
                v46 = v190;
                v45 = v193;
LABEL_120:
                if ( (unsigned __int8)v278 != BYTE1(v278) )
                {
                  v44 = 87;
                  goto LABEL_84;
                }
                if ( (a11 < 0 && (*(_DWORD *)(*((_QWORD *)v46 + 122) + 108LL) & 1) != 0
                   || (*(_BYTE *)(*((_QWORD *)v46 + 122) + 108LL) & 9) == 9)
                  && a6 != a1 )
                {
                  v53 = *(_QWORD *)(*((_QWORD *)v46 + 122) + 308LL);
                  v54 = DC::dwSetLayout(v46, -1, 0);
                  v46 = v190;
                  v45 = v193;
                  v224 = v53 - v31 - a2;
                  v231 = v54;
                  v230 = 0x80000000;
                }
                else
                {
                  v230 = 0;
                }
                v55 = (struct SURFACE *)*((_QWORD *)v45 + 62);
                v235 = 0LL;
                v225 = v55;
                if ( !v55 )
                {
                  v55 = SURFACE::pdibDefault;
                  v225 = SURFACE::pdibDefault;
                }
                LODWORD(v56) = 0;
                v57 = *((_QWORD *)v55 + 6);
                v58 = a13;
                v236 = 0LL;
                if ( !v197 )
                  goto LABEL_159;
                if ( (*((_DWORD *)v45 + 9) & 1) == 0
                  || (v59 = *((_QWORD *)v45 + 6), (*(_DWORD *)(v59 + 40) & 0x80u) != 0)
                  || v59 != *((_QWORD *)v46 + 6)
                  && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v190)
                   || (v46 = v190, v45 = v193, *((_QWORD *)v193 + 6) != *(_QWORD *)(*((_QWORD *)v190 + 6) + 3496LL)))
                  || !v57 )
                {
                  v186 = 0;
                  goto LABEL_159;
                }
                if ( v188 )
                {
                  if ( (*((_DWORD *)v45 + 9) & 0x4000) != 0 )
                  {
                    v60 = (SURFACE *)*((_QWORD *)v45 + 62);
                    if ( v60 != *((SURFACE **)v46 + 62) )
                    {
                      SURFACE::bUnMap(v60, 0LL, 0LL);
                      v46 = v190;
                    }
                  }
                }
                if ( (*((_DWORD *)v46 + 9) & 0x4000) != 0 )
                  SURFACE::bUnMap(*((SURFACE **)v46 + 62), 0LL, v46);
                GreAcquireSemaphore(*(_QWORD *)(v57 + 56));
                EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v57 + 56), 4LL);
                v56 = *(_QWORD *)(v57 + 64);
                v236 = v56;
                UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v244);
                if ( (a13 & 2) == 0 || !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
                  GreMovePointer(*((_DWORD **)v55 + 6), -1, -1, 0);
                SURFACE::vSetIncludeSprites();
                v61 = 0;
                if ( v188 && (*((_DWORD *)v193 + 9) & 0x4000) != 0 )
                {
                  v62 = v190;
                  v63 = *((_QWORD *)v193 + 62);
                  if ( v63 == *((_QWORD *)v190 + 62) )
                    goto LABEL_152;
                  if ( (unsigned int)SURFACE::Map(v63, 0LL) == 2 )
                  {
                    v61 = 1;
                    *((_DWORD *)v193 + 11) |= 1u;
                  }
                }
                v62 = v190;
LABEL_152:
                if ( (*((_DWORD *)v62 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v62 + 62), 0LL) == 2 )
                {
                  *((_DWORD *)v190 + 11) |= 1u;
                  UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v244);
LABEL_245:
                  v100 = 0;
                  goto LABEL_246;
                }
                if ( v61 )
                {
                  UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v244);
                  goto LABEL_245;
                }
                UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v244);
LABEL_159:
                EXFORMOBJ::vInit((EXFORMOBJ *)v258, (struct XDCOBJ *)&v190, 0x204u, 0);
                v65 = (struct SURFACE *)*((_QWORD *)v190 + 62);
                if ( !v65 )
                  v65 = SURFACE::pdibDefault;
                v264 = v65;
                v260 = *((_QWORD *)v65 + 16);
                v261 = *((_QWORD *)v190 + 11);
                EXFORMOBJ::vInit((EXFORMOBJ *)&v259, (struct XDCOBJ *)&v193, 0x204u, 0);
                v66 = (struct SURFACE *)*((_QWORD *)v193 + 62);
                if ( !v66 )
                  v66 = SURFACE::pdibDefault;
                v265 = v66;
                v67 = *((_QWORD *)v66 + 16);
                v262 = v67;
                v234 = *((_QWORD *)v193 + 11);
                v263 = v234;
                if ( a12 == -1 )
                  a12 = *(_DWORD *)(*((_QWORD *)v193 + 122) + 180LL);
                v68 = v190;
                if ( (a13 & 1) != 0 )
                {
                  v69 = *(void **)(*((_QWORD *)v190 + 122) + 248LL);
                  v235 = v69;
                }
                else
                {
                  v69 = 0LL;
                }
                v70 = *((_QWORD *)v190 + 122);
                v71 = *((_DWORD *)v190 + 30);
                v72 = v261;
                v73 = v260;
                v74 = *(_DWORD *)(v70 + 176);
                v229 = *(_DWORD *)(v70 + 184);
                v228 = v74;
                v232 = v71;
                if ( !v67
                  && (!v260
                   || (*(_DWORD *)(v260 + 24) & 0x800) != 0
                   && ((v75 = *(_QWORD *)(v261 + 80)) == 0 || v75 == *(_QWORD *)(v261 + 72)))
                  || !v260
                  && (*(_DWORD *)(v67 + 24) & 0x800) != 0
                  && ((v76 = *(_QWORD *)(v261 + 80)) == 0 || v76 == *(_QWORD *)(v261 + 72))
                  || v67
                  && v260
                  && ((v77 = *(_QWORD *)(v67 + 120), v77 == v67)
                    ? (v78 = *(_DWORD *)(v67 + 32))
                    : (v78 = *(_DWORD *)(v77 + 32)),
                      (v79 = *(_QWORD *)(v260 + 120), v79 == v260)
                    ? (v68 = (DC *)*(unsigned int *)(v260 + 32))
                    : (v68 = (DC *)*(unsigned int *)(v79 + 32)),
                      v78 == (_DWORD)v68) )
                {
                  v267 = (char *)Gre::Base::Globals(v68) + 6896;
                }
                else
                {
                  v80 = 1;
                  v227 = 1;
                  if ( (v71 & 7) != 0 && v69 )
                  {
                    v80 = 0;
                    goto LABEL_213;
                  }
                  if ( v67 && v260 )
                  {
                    v240 = v234;
                    v196 = *(_DWORD *)(v67 + 56);
                    v239 = v261;
                    v238 = v260;
                    v237 = Gre::Base::Globals(v68);
                    v81 = *((_QWORD *)v237 + 5);
                    v241 = v81;
                    GreAcquireSemaphore(v81);
                    v82 = v196;
                    v226 = 0;
                    while ( 1 )
                    {
                      v83 = *(_QWORD *)(v67 + 120);
                      if ( v83 == v67 )
                        v84 = *(_DWORD *)(v67 + 32);
                      else
                        v84 = *(_DWORD *)(v83 + 32);
                      if ( *((_DWORD *)v237 + 8 * v82 + 1662) == v84 )
                      {
                        v85 = XEPALOBJ::ulTime((XEPALOBJ *)&v238);
                        if ( *(_DWORD *)(v86 + 6652) == v85 )
                        {
                          v87 = XEPALOBJ::ulTime((XEPALOBJ *)&v239);
                          if ( *(_DWORD *)(v88 + 6660) == v87 )
                          {
                            v89 = *(char **)(v88 + 6640);
                            v267 = v89;
                            if ( (*((_DWORD *)v89 + 19) & 0x6000) == 0 )
                            {
                              v90 = *((_DWORD *)v89 + 19) & 0x100;
                              if ( (*((_DWORD *)v89 + 1) & 4) != 0 )
                              {
                                if ( a12 == *((_DWORD *)v89 + 6) )
                                {
                                  v91 = XEPALOBJ::ulTime((XEPALOBJ *)&v240);
                                  if ( *((_DWORD *)v237 + 8 * v92 + 1664) == v91 )
                                    goto LABEL_202;
                                  LOBYTE(v82) = v196;
                                }
                                if ( !v90 )
                                  goto LABEL_209;
                              }
                              else if ( !v90 )
                              {
                                goto LABEL_202;
                              }
                              if ( v229 == *((_DWORD *)v89 + 7) && v228 == *((_DWORD *)v89 + 8) )
                              {
LABEL_202:
                                _InterlockedIncrement((volatile signed __int32 *)(v88 + 6632));
                                *(_DWORD *)(v67 + 56) = v196;
                                SEMOBJ::~SEMOBJ((SEMOBJ *)&v241);
                                goto LABEL_219;
                              }
                            }
                          }
                        }
                      }
LABEL_209:
                      v82 = ((_BYTE)v82 + 1) & 7;
                      v196 = v82;
                      if ( (unsigned int)++v226 >= 8 )
                      {
                        v267 = 0LL;
                        if ( v81 )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsem");
                          GreReleaseSemaphoreInternal(v81);
                        }
                        v80 = v227;
                        break;
                      }
                    }
                  }
LABEL_213:
                  LODWORD(v183) = 0;
                  LODWORD(v182) = a12;
                  LODWORD(v181) = v228;
                  LODWORD(v180) = v229;
                  XlateObject = CreateXlateObject(v235, v232, v67, v73, v234, v72, v180, v181, v182, v183);
                  v267 = (char *)XlateObject;
                  if ( !XlateObject )
                  {
LABEL_244:
                    v55 = v225;
                    v58 = a13;
                    goto LABEL_245;
                  }
                  if ( v80 && v67 && v73 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                    EXLATEOBJ::vAddToCache((Gre::Base *)&v267, v67, v73, v234, v72);
                }
LABEL_219:
                v279 |= 2u;
                v94 = v233;
                if ( (v233 & 0xE8) != 0 )
                {
                  v268 = (char *)v190 + 1200;
                  v95 = *((_QWORD *)v190 + 122);
                  v96 = *(_DWORD *)(v95 + 152);
                  if ( (v96 & 1) != 0 || (*((_DWORD *)v190 + 79) & 1) != 0 )
                  {
                    LODWORD(v180) = 1;
                    *(_DWORD *)(v95 + 152) = v96 & 0xFFFFFFFE;
                    *((_DWORD *)v190 + 79) &= ~1u;
                    EBRUSHOBJ::vInitBrush(v268, v190, *((_QWORD *)v190 + 17), v261, v260, v264, v180);
                  }
                  v277 = *((_QWORD *)v190 + 149);
                }
                else
                {
                  v268 = 0LL;
                }
                v266 = 0LL;
                if ( (*(_DWORD *)(v259 + 32) & 1) != 0 )
                {
                  v97 = a7;
                  v98 = a8;
                  v99 = a7 + a9;
                  v64 = (unsigned int)(a8 + a10);
                  v275 = a7 + a9;
                  v276 = a8 + a10;
                  v273 = a7;
                  v274 = a8;
                  if ( (*(_BYTE *)(v259 + 32) & 0x43) == 0x43 )
                    goto LABEL_229;
                  if ( (unsigned int)bCvtPts1(v259, &v273, 2LL) )
                  {
                    v64 = v276;
                    v99 = v275;
                    v98 = v274;
                    v97 = v273;
LABEL_229:
                    if ( v188 && (v97 == v99 || v98 == (_DWORD)v64) )
                    {
                      v55 = v225;
                      v100 = 1;
                      v58 = a13;
                      goto LABEL_246;
                    }
                    if ( (*(_DWORD *)(v258[0] + 32) & 1) == 0 )
                    {
                      BLTRECORD::TrgPlg((BLTRECORD *)v258, v224, v185, v187, v189);
                      v101 = BLTRECORD::bRotate(
                               (BLTRECORD *)v258,
                               (struct DCOBJ *)&v190,
                               (struct DCOBJ *)&v193,
                               v94,
                               *(_BYTE *)(*((_QWORD *)v190 + 122) + 215LL));
                      v55 = v225;
                      v100 = v101;
                      v58 = a13;
                      goto LABEL_246;
                    }
                    v102 = v224;
                    v103 = v185;
                    v104 = v224 + v187;
                    v105 = v185 + v189;
                    v271 = v224 + v187;
                    v272 = v185 + v189;
                    v269 = v224;
                    v270 = v185;
                    if ( (*(_BYTE *)(v258[0] + 32) & 0x43) == 0x43 )
                      goto LABEL_238;
                    if ( (unsigned int)bCvtPts1(v258[0], &v269, 2LL) )
                    {
                      LODWORD(v64) = v276;
                      v99 = v275;
                      v98 = v274;
                      v97 = v273;
                      v105 = v272;
                      v104 = v271;
                      v103 = v270;
                      v102 = v269;
LABEL_238:
                      v106 = *((_QWORD *)v190 + 122);
                      if ( *(_BYTE *)(v106 + 215) != 4 && v99 - v97 == v104 - v102 && (_DWORD)v64 - v98 == v105 - v103 )
                      {
                        v107 = BLTRECORD::bBitBlt((BLTRECORD *)v258, &v190, (struct DCOBJ *)&v193, v94);
                        v55 = v225;
                        v100 = v107;
                        v58 = a13;
                      }
                      else
                      {
                        v108 = BLTRECORD::bStretch(
                                 (BLTRECORD *)v258,
                                 (struct DCOBJ *)&v190,
                                 (struct DCOBJ *)&v193,
                                 v94,
                                 *(_BYTE *)(v106 + 215));
                        v55 = v225;
                        v100 = v108;
                        v58 = a13;
                      }
LABEL_246:
                      if ( v230 )
                        DC::dwSetLayout(v190, -1, v231);
                      if ( !v186 )
                      {
LABEL_269:
                        v113 = v208;
                        if ( (v208 & 0x1000) == 0 )
                          goto LABEL_299;
                        if ( (v208 & 0x8000) != 0 )
                        {
                          v114 = v210;
                          if ( v210 && HIBYTE(v213) )
                          {
                            if ( (v208 & 0x400) != 0 )
                            {
                              bUnHookRedir((struct XDCOBJ *)&v210);
                              v114 = v210;
                              LOWORD(v113) = v208 & 0xFBFF;
                              v208 &= ~0x400u;
                            }
                            if ( (v113 & 0x2000) != 0 )
                            {
                              bUnHookBmpDrv((struct XDCOBJ *)&v210);
                              v114 = v210;
                              LOWORD(v113) = v208 & 0xDFFF;
                              v208 &= ~0x2000u;
                            }
                            if ( (v113 & 0x1000) != 0 )
                            {
                              if ( (*((_DWORD *)v114 + 11) & 1) == 0 && *((_QWORD *)v114 + 62) )
                              {
                                SURFACE::bUnMap(*((SURFACE **)v114 + 62), &v199, v114);
                                v114 = v210;
                              }
                              *((_DWORD *)v114 + 11) &= ~1u;
                            }
                          }
                          _InterlockedOr(v178, 0);
                          v115 = v214;
                          if ( !v214 || !HIBYTE(v217) )
                          {
                            v116 = v210;
                            goto LABEL_291;
                          }
                          v113 = v208;
                          if ( (v208 & 0x1000) != 0 )
                          {
                            if ( (*((_DWORD *)v214 + 11) & 1) == 0 && *((_QWORD *)v214 + 62) )
                            {
                              SURFACE::bUnMap(*((SURFACE **)v214 + 62), &v199, 0LL);
                              v115 = v214;
                            }
                            *((_DWORD *)v115 + 11) &= ~1u;
LABEL_289:
                            v116 = v210;
LABEL_290:
                            v115 = v214;
LABEL_291:
                            v113 = v208;
                            goto LABEL_292;
                          }
                          v116 = v210;
                        }
                        else
                        {
                          v64 = (unsigned __int64)v214;
                          if ( v214 && HIBYTE(v217) )
                          {
                            if ( (*((_DWORD *)v214 + 11) & 1) == 0 )
                            {
                              v133 = (SURFACE *)*((_QWORD *)v214 + 62);
                              if ( v133 )
                              {
                                SURFACE::bUnMap(v133, &v199, 0LL);
                                v64 = (unsigned __int64)v214;
                              }
                            }
                            *(_DWORD *)(v64 + 44) &= ~1u;
                          }
                          _InterlockedOr(v178, 0);
                          v116 = v210;
                          if ( !v210 || !HIBYTE(v213) )
                            goto LABEL_290;
                          v113 = v208;
                          if ( (v208 & 0x400) != 0 )
                          {
                            bUnHookRedir((struct XDCOBJ *)&v210);
                            v113 = v208;
                            v116 = v210;
                            LODWORD(v113) = v208 & 0xFFFFFBFF;
                            v208 &= ~0x400u;
                          }
                          if ( (v113 & 0x2000) != 0 )
                          {
                            bUnHookBmpDrv((struct XDCOBJ *)&v210);
                            v113 = v208;
                            v116 = v210;
                            LODWORD(v113) = v208 & 0xFFFFDFFF;
                            v208 &= ~0x2000u;
                          }
                          if ( (v113 & 0x1000) != 0 )
                          {
                            if ( (*((_DWORD *)v116 + 11) & 1) == 0 )
                            {
                              v134 = (SURFACE *)*((_QWORD *)v116 + 62);
                              if ( v134 )
                              {
                                SURFACE::bUnMap(v134, &v199, v116);
                                v116 = v210;
                              }
                            }
                            *((_DWORD *)v116 + 11) &= ~1u;
                            goto LABEL_289;
                          }
                          v115 = v214;
                        }
LABEL_292:
                        if ( !v116
                          || !HIBYTE(v213)
                          || (v113 & 0x1000) == 0
                          || (*((_DWORD *)v116 + 9) & 0x4000) == 0
                          || !*((_QWORD *)v116 + 59)
                          || !*((_DWORD *)v116 + 122) )
                        {
LABEL_300:
                          if ( v202 )
                          {
                            if ( v206 )
                            {
                              PopThreadGuardedObject(v205);
                              v206 = 0;
                            }
                            DEVLOCKBLTOBJ::TmpSrcCleanup((DEVLOCKBLTOBJ *)&v199);
                            v115 = v214;
                            v116 = v210;
                            v113 = v208;
                          }
                          if ( (v113 & 0x1000) == 0 )
                          {
                            if ( (v113 & 0x800000) == 0 )
                            {
LABEL_474:
                              if ( (_QWORD)v199 )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
                                GreReleaseSemaphoreInternal(v199);
                                v115 = v214;
                                LODWORD(v113) = v208;
                              }
                              if ( *((_QWORD *)&v199 + 1) )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsemSrc");
                                GreReleaseSemaphoreInternal(*((_QWORD *)&v199 + 1));
                                v115 = v214;
                                LODWORD(v113) = v208;
                              }
                              if ( (v113 & 8) != 0 )
                                v208 = v113 & 0xFFFFFFF7;
                              if ( (_QWORD)v200 )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
                                GreReleaseSemaphoreInternal(v200);
                                v115 = v214;
                              }
                              if ( *((_QWORD *)&v219 + 1) )
                              {
                                DCOBJ::DCOBJ((DCOBJ *)v242, v220);
                                SURFREF::SURFREF((SURFREF *)v247);
                                SURFREF::SURFREF((SURFREF *)v251);
                                LOBYTE(v154) = 5;
                                v155 = HmgShareLock(v219, v154);
                                LOBYTE(v156) = 5;
                                v248 = (HSURF *)v155;
                                v252 = (struct SURFACE *)HmgShareLock(*((_QWORD *)&v219 + 1), v156);
                                v157 = *v248;
                                DC::pSurface(v242[0], v252);
                                DEC_SHARE_REF_CNT(v248);
                                v248 = 0LL;
                                DEC_SHARE_REF_CNT(v252);
                                v252 = 0LL;
                                GreDereferenceObject(v157, 1u);
                                v158 = v242[0];
                                v220 = 0LL;
                                *(_QWORD *)&v219 = 0LL;
                                *((_DWORD *)v242[0] + 9) |= v209;
                                v159 = Gre::Base::Globals(v158);
                                if ( (*((_DWORD *)v242[0] + 9) & 0x200) != 0 )
                                {
                                  v160 = 0;
                                  if ( !(unsigned int)GreGetLockCount()
                                    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v159 + 15)) )
                                  {
                                    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v159 + 15));
                                    EtwTraceGreLockAcquireSemaphoreShared(
                                      L"GreBaseGlobals.hsemGreLock",
                                      *((_QWORD *)v159 + 15));
                                    v160 = 1;
                                  }
                                  DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v184);
                                  v179[0] = 5;
                                  v161 = HmgShareUnlockRemoveObject(
                                           *((_QWORD *)&v219 + 1),
                                           0LL,
                                           0LL,
                                           0LL,
                                           *(_DWORD *)v179);
                                  if ( v161 )
                                    SURFACE::bDeleteSurface(v161, 0LL, 1LL);
                                  *((_QWORD *)v242[0] + 63) = 0LL;
                                  DC::vClearRendering(v242[0]);
                                  *((_QWORD *)&v219 + 1) = 0LL;
                                  DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v184);
                                  if ( v160 )
                                  {
                                    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                                    GreReleaseSemaphoreInternal(*((_QWORD *)v159 + 15));
                                  }
                                }
                                else
                                {
                                  v179[0] = 5;
                                  v162 = HmgShareUnlockRemoveObject(
                                           *((_QWORD *)&v219 + 1),
                                           0LL,
                                           0LL,
                                           0LL,
                                           *(_DWORD *)v179);
                                  if ( v162 )
                                    SURFACE::bDeleteSurface(v162, 0LL, 1LL);
                                  *((_QWORD *)v242[0] + 63) = 0LL;
                                  *((_QWORD *)&v219 + 1) = 0LL;
                                }
                                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
                                GreReleaseSemaphoreInternal(*((_QWORD *)v159 + 10));
                                if ( v252 )
                                  DEC_SHARE_REF_CNT(v252);
                                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v251);
                                if ( v248 )
                                  DEC_SHARE_REF_CNT(v248);
                                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v247);
                                if ( v242[0] )
                                  XDCOBJ::vUnlockFast((XDCOBJ *)v242);
                                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v243);
                                v115 = v214;
                              }
                              if ( v222 )
                              {
                                DCOBJ::DCOBJ((DCOBJ *)v245, v223);
                                SURFREF::SURFREF((SURFREF *)v249);
                                SURFREF::SURFREF((SURFREF *)v253);
                                LOBYTE(v163) = 5;
                                v164 = HmgShareLock(v221, v163);
                                LOBYTE(v165) = 5;
                                v250 = (HSURF *)v164;
                                v254 = (struct SURFACE *)HmgShareLock(v222, v165);
                                v166 = *v250;
                                DC::pSurface(v245[0], v254);
                                DEC_SHARE_REF_CNT(v250);
                                v250 = 0LL;
                                DEC_SHARE_REF_CNT(v254);
                                v254 = 0LL;
                                GreDereferenceObject(v166, 1u);
                                v223 = 0LL;
                                v221 = 0LL;
                                v168 = Gre::Base::Globals(v167);
                                if ( (*((_DWORD *)v245[0] + 9) & 0x200) != 0 )
                                {
                                  v169 = 0;
                                  if ( !(unsigned int)GreGetLockCount()
                                    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v168 + 15)) )
                                  {
                                    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v168 + 15));
                                    EtwTraceGreLockAcquireSemaphoreShared(
                                      L"GreBaseGlobals.hsemGreLock",
                                      *((_QWORD *)v168 + 15));
                                    v169 = 1;
                                  }
                                  DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v184);
                                  v179[0] = 5;
                                  v170 = HmgShareUnlockRemoveObject(v222, 0LL, 0LL, 0LL, *(_DWORD *)v179);
                                  if ( v170 )
                                    SURFACE::bDeleteSurface(v170, 0LL, 1LL);
                                  *((_QWORD *)v245[0] + 63) = 0LL;
                                  DC::vClearRendering(v245[0]);
                                  v222 = 0LL;
                                  DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v184);
                                  if ( v169 )
                                  {
                                    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                                    GreReleaseSemaphoreInternal(*((_QWORD *)v168 + 15));
                                  }
                                }
                                else
                                {
                                  v179[0] = 5;
                                  v171 = HmgShareUnlockRemoveObject(v222, 0LL, 0LL, 0LL, *(_DWORD *)v179);
                                  if ( v171 )
                                    SURFACE::bDeleteSurface(v171, 0LL, 1LL);
                                  *((_QWORD *)v245[0] + 63) = 0LL;
                                  v222 = 0LL;
                                }
                                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
                                GreReleaseSemaphoreInternal(*((_QWORD *)v168 + 10));
                                if ( v254 )
                                  DEC_SHARE_REF_CNT(v254);
                                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v253);
                                if ( v250 )
                                  DEC_SHARE_REF_CNT(v250);
                                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v249);
                                if ( v245[0] )
                                  XDCOBJ::vUnlockFast((XDCOBJ *)v245);
                                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v246);
                                v115 = v214;
                              }
                              if ( v115 )
                              {
                                if ( (_BYTE)v217 )
                                {
                                  *((_DWORD *)v115 + 10) &= ~2u;
                                  v115 = v214;
                                  LOBYTE(v217) = 0;
                                }
                                if ( v115 )
                                {
                                  if ( (_DWORD)v215 && (*((_DWORD *)v115 + 11) & 2) != 0 )
                                  {
                                    XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v214);
                                    *((_DWORD *)v214 + 11) &= ~2u;
                                    v115 = v214;
                                    LODWORD(v215) = 0;
                                  }
                                  v187 = 0;
                                  v172 = *(_QWORD *)v115;
                                  HmgDecrementExclusiveReferenceCountEx(v115, HIDWORD(v215), &v187);
                                  if ( v187 )
                                    GrepDeleteDC(v172, 0x2000000LL);
                                }
                                v214 = 0LL;
                              }
                              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v216);
                              v173 = v210;
                              if ( v210 )
                              {
                                if ( (_BYTE)v213 )
                                {
                                  *((_DWORD *)v210 + 10) &= ~2u;
                                  v173 = v210;
                                  LOBYTE(v213) = 0;
                                }
                                if ( v173 )
                                {
                                  if ( (_DWORD)v211 && (*((_DWORD *)v173 + 11) & 2) != 0 )
                                  {
                                    XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v210);
                                    *((_DWORD *)v210 + 11) &= ~2u;
                                    v173 = v210;
                                    LODWORD(v211) = 0;
                                  }
                                  v198[0] = 0;
                                  v174 = *(_QWORD *)v173;
                                  HmgDecrementExclusiveReferenceCountEx(v173, HIDWORD(v211), v198);
                                  if ( v198[0] )
                                    GrepDeleteDC(v174, 0x2000000LL);
                                }
                                v210 = 0LL;
                              }
                              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v212);
                              if ( v206 )
                              {
                                PopThreadGuardedObject(v205);
                                v206 = 0;
                              }
                              SURFMEM::~SURFMEM((SURFMEM *)&v202);
                              v175 = v193;
                              if ( v193 )
                              {
                                if ( (_DWORD)v194 && (*((_DWORD *)v193 + 11) & 2) != 0 )
                                {
                                  if ( !HIDWORD(v194) )
                                  {
                                    v176 = XDCOBJ::GetUserAttr((XDCOBJ *)&v193);
                                    v175 = v193;
                                    if ( v176 )
                                    {
                                      DC::RestoreAttributes(v193, v176);
                                      v175 = v193;
                                    }
                                  }
                                  *((_DWORD *)v175 + 11) &= ~2u;
                                  v175 = v193;
                                  LODWORD(v194) = 0;
                                }
                                v197 = 0;
                                v177 = *(_QWORD *)v175;
                                HmgDecrementExclusiveReferenceCountEx(v175, HIDWORD(v194), &v197);
                                if ( v197 )
                                  GrepDeleteDC(v177, 0x2000000LL);
                              }
                              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v195);
                              DCOBJ::~DCOBJ((DCOBJ *)&v190);
                              BLTRECORD::~BLTRECORD((BLTRECORD *)v258);
                              return v100;
                            }
                            GreDecLockCount(v115, v64, v113, v116);
                            LODWORD(v113) = v208 & 0xFF7FFFFF;
                            v208 &= ~0x800000u;
LABEL_473:
                            v115 = v214;
                            goto LABEL_474;
                          }
                          if ( (v113 & 0x8000) != 0 )
                          {
                            if ( v116 && HIBYTE(v213) )
                            {
                              v64 = *((_QWORD *)v116 + 6);
                              if ( (v113 & 0x10) != 0 )
                              {
                                *((_DWORD *)v116 + 9) &= ~0x4000u;
                                DC::pSurface(v210, *(struct SURFACE **)(v64 + 2528));
                                v115 = v214;
                                v116 = v210;
                                v113 = v208;
                              }
                              if ( v116 )
                              {
                                if ( (v113 & 0x1000) != 0
                                  && (!v115 || !HIBYTE(v217) || !HIBYTE(v213) || *(_QWORD *)v115 != *(_QWORD *)v116) )
                                {
                                  v117 = *((_DWORD *)v116 + 9);
                                  if ( (v117 & 0x200) != 0 )
                                  {
                                    if ( (v117 & 0x4000) == 0 )
                                    {
                                      v118 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                      if ( v118 )
                                      {
                                        v119 = *v118;
                                        if ( v119 )
                                          *(_DWORD *)(v119 + 328) &= ~1u;
                                      }
                                      v116 = v210;
                                      v115 = v214;
                                    }
                                    if ( v116 && HIBYTE(v213) && !(_QWORD)v219
                                      || v115 && HIBYTE(v217) && *(_QWORD *)v116 == *(_QWORD *)v115 && !v221 )
                                    {
                                      v120 = Gre::Base::Globals(v115);
                                      GreAcquireSemaphoreSharedInternal(*((_QWORD *)v120 + 11));
                                      EtwTraceGreLockAcquireSemaphoreShared(
                                        L"GreBaseGlobals.hsemDCVisRgn",
                                        *((_QWORD *)v120 + 11));
                                      DC::vClearRendering(v210);
                                      v122 = Gre::Base::Globals(v121);
                                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                      GreReleaseSemaphoreInternal(*((_QWORD *)v122 + 11));
                                      v116 = v210;
                                    }
                                  }
                                }
                                if ( v116 )
                                {
                                  if ( (_BYTE)v213 )
                                  {
                                    *((_DWORD *)v116 + 10) &= ~2u;
                                    v116 = v210;
                                    LOBYTE(v213) = 0;
                                  }
                                  if ( v116 )
                                  {
                                    if ( (_DWORD)v211 && (*((_DWORD *)v116 + 11) & 2) != 0 )
                                    {
                                      XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v210);
                                      *((_DWORD *)v210 + 11) &= ~2u;
                                      v116 = v210;
                                      LODWORD(v211) = 0;
                                    }
                                    v189 = 0;
                                    v123 = *(_QWORD *)v116;
                                    HmgDecrementExclusiveReferenceCountEx(v116, HIDWORD(v211), &v189);
                                    if ( v189 )
                                      GrepDeleteDC(v123, 0x2000000LL);
                                  }
                                }
                              }
                              v210 = 0LL;
                            }
                            _InterlockedOr(v178, 0);
                            v115 = v214;
                            if ( !v214 || !HIBYTE(v217) )
                              goto LABEL_376;
                            v64 = *((_QWORD *)v214 + 6);
                            if ( (v208 & 0x20) != 0 )
                            {
                              *((_DWORD *)v214 + 9) &= ~0x4000u;
                              DC::pSurface(v214, *(struct SURFACE **)(v64 + 2528));
                              v115 = v214;
                            }
                            if ( v218 )
                            {
                              v124 = *(_QWORD *)(v218 + 72);
                              CurrentProcess = PsGetCurrentProcess(v115, v64, v113);
                              MmUnmapViewOfSection(CurrentProcess, v124);
                              v115 = v214;
                            }
                            if ( v115 )
                            {
                              if ( (v208 & 0x1000) == 0 )
                                goto LABEL_366;
                              v64 = (unsigned __int64)v210;
                              if ( HIBYTE(v217) )
                              {
                                if ( v210 && HIBYTE(v213) && *(_QWORD *)v115 == *(_QWORD *)v210 )
                                  goto LABEL_366;
                              }
                              v126 = *((_DWORD *)v115 + 9);
                              if ( (v126 & 0x200) == 0 )
                                goto LABEL_366;
                              if ( (v126 & 0x4000) == 0 )
                              {
                                v127 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                if ( v127 )
                                {
                                  v128 = *v127;
                                  if ( v128 )
                                    *(_DWORD *)(v128 + 328) &= ~1u;
                                }
                                v64 = (unsigned __int64)v210;
                                v115 = v214;
                              }
                              if ( v64 && HIBYTE(v213) && *(_QWORD *)v115 == *(_QWORD *)v64 && !(_QWORD)v219 )
                                goto LABEL_365;
                              if ( v115 )
                              {
                                if ( HIBYTE(v217) && !v221 )
                                {
LABEL_365:
                                  v129 = Gre::Base::Globals(v115);
                                  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v129 + 11));
                                  EtwTraceGreLockAcquireSemaphoreShared(
                                    L"GreBaseGlobals.hsemDCVisRgn",
                                    *((_QWORD *)v129 + 11));
                                  DC::vClearRendering(v214);
                                  v131 = Gre::Base::Globals(v130);
                                  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                  GreReleaseSemaphoreInternal(*((_QWORD *)v131 + 11));
                                  v115 = v214;
                                }
LABEL_366:
                                if ( v115 )
                                {
                                  if ( (_BYTE)v217 )
                                  {
                                    *((_DWORD *)v115 + 10) &= ~2u;
                                    v115 = v214;
                                    LOBYTE(v217) = 0;
                                  }
                                  if ( v115 )
                                  {
                                    if ( (_DWORD)v215 && (*((_DWORD *)v115 + 11) & 2) != 0 )
                                    {
                                      XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v214);
                                      *((_DWORD *)v214 + 11) &= ~2u;
                                      v115 = v214;
                                      LODWORD(v215) = 0;
                                    }
                                    v185 = 0;
                                    v132 = *(_QWORD *)v115;
                                    HmgDecrementExclusiveReferenceCountEx(v115, HIDWORD(v215), &v185);
                                    if ( v185 )
                                      GrepDeleteDC(v132, 0x2000000LL);
                                  }
                                }
                              }
                            }
                            v214 = 0LL;
LABEL_376:
                            v208 &= ~0x8000u;
                            goto LABEL_467;
                          }
                          if ( !v115 || !HIBYTE(v217) )
                          {
LABEL_433:
                            _InterlockedOr(v178, 0);
                            v116 = v210;
                            if ( !v210 || !HIBYTE(v213) )
                              goto LABEL_467;
                            v144 = v208;
                            v64 = *((_QWORD *)v210 + 6);
                            if ( (v208 & 0x10) != 0 )
                            {
                              *((_DWORD *)v210 + 9) &= ~0x4000u;
                              DC::pSurface(v210, *(struct SURFACE **)(v64 + 2528));
                              v116 = v210;
                              v144 = v208;
                            }
                            if ( !v116 )
                              goto LABEL_466;
                            if ( (v144 & 0x1000) != 0 )
                            {
                              v64 = (unsigned __int64)v214;
                              if ( !v214
                                || !HIBYTE(v217)
                                || !DLODCOBJ::bValid((DLODCOBJ *)&v210)
                                || *(_QWORD *)v64 != *(_QWORD *)v116 )
                              {
                                if ( !v116 )
                                {
LABEL_466:
                                  v210 = 0LL;
LABEL_467:
                                  GreDecLockCount(v115, v64, v113, v116);
                                  v208 &= ~0x1000u;
                                  v152 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                  if ( v152 )
                                  {
                                    v153 = *v152;
                                    if ( v153 )
                                    {
                                      *(_QWORD *)(v153 + 320) = 0LL;
                                      *(_QWORD *)(v153 + 312) = 0LL;
                                    }
                                  }
                                  LODWORD(v113) = v208;
                                  goto LABEL_473;
                                }
                                v145 = *((_DWORD *)v116 + 9);
                                if ( (v145 & 0x200) != 0 )
                                {
                                  if ( (v145 & 0x4000) == 0 )
                                  {
                                    v146 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                    if ( v146 )
                                    {
                                      v147 = *v146;
                                      if ( v147 )
                                        *(_DWORD *)(v147 + 328) &= ~1u;
                                    }
                                    v116 = v210;
                                  }
                                  if ( v116 && HIBYTE(v213) && !(_QWORD)v219
                                    || DLODCOBJ::bValid((DLODCOBJ *)&v214) && *(_QWORD *)v116 == *(_QWORD *)v64 && !v221 )
                                  {
                                    v148 = Gre::Base::Globals(v115);
                                    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v148 + 11));
                                    EtwTraceGreLockAcquireSemaphoreShared(
                                      L"GreBaseGlobals.hsemDCVisRgn",
                                      *((_QWORD *)v148 + 11));
                                    DC::vClearRendering(v210);
                                    v150 = Gre::Base::Globals(v149);
                                    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                    GreReleaseSemaphoreInternal(*((_QWORD *)v150 + 11));
                                    v116 = v210;
                                  }
                                }
                              }
                            }
                            if ( v116 )
                            {
                              if ( (_BYTE)v213 )
                              {
                                *((_DWORD *)v116 + 10) &= ~2u;
                                v116 = v210;
                                LOBYTE(v213) = 0;
                              }
                              if ( v116 )
                              {
                                if ( (_DWORD)v211 && (*((_DWORD *)v116 + 11) & 2) != 0 )
                                {
                                  XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v210);
                                  *((_DWORD *)v210 + 11) &= ~2u;
                                  v116 = v210;
                                  LODWORD(v211) = 0;
                                }
                                v185 = 0;
                                v151 = *(_QWORD *)v116;
                                HmgDecrementExclusiveReferenceCountEx(v116, HIDWORD(v211), &v185);
                                if ( v185 )
                                  GrepDeleteDC(v151, 0x2000000LL);
                              }
                            }
                            goto LABEL_466;
                          }
                          v64 = *((_QWORD *)v115 + 6);
                          if ( (v113 & 0x20) != 0 )
                          {
                            *((_DWORD *)v115 + 9) &= ~0x4000u;
                            DC::pSurface(v214, *(struct SURFACE **)(v64 + 2528));
                            v115 = v214;
                            v116 = v210;
                            v113 = v208;
                          }
                          if ( v218 )
                          {
                            v135 = *(_QWORD *)(v218 + 72);
                            v136 = PsGetCurrentProcess(v115, v64, v113);
                            MmUnmapViewOfSection(v136, v135);
                            v115 = v214;
                            v116 = v210;
                            v113 = v208;
                          }
                          if ( v115 )
                          {
                            if ( (v113 & 0x1000) == 0
                              || HIBYTE(v217) && v116 && HIBYTE(v213) && *(_QWORD *)v115 == *(_QWORD *)v116 )
                            {
                              goto LABEL_423;
                            }
                            v137 = *((_DWORD *)v115 + 9);
                            if ( (v137 & 0x200) == 0 )
                              goto LABEL_423;
                            if ( (v137 & 0x4000) == 0 )
                            {
                              v138 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                              if ( v138 )
                              {
                                v139 = *v138;
                                if ( v139 )
                                  *(_DWORD *)(v139 + 328) &= ~1u;
                              }
                              v116 = v210;
                              v115 = v214;
                            }
                            if ( v116 && HIBYTE(v213) && *(_QWORD *)v115 == *(_QWORD *)v116 && !(_QWORD)v219 )
                              goto LABEL_422;
                            if ( v115 )
                            {
                              if ( HIBYTE(v217) && !v221 )
                              {
LABEL_422:
                                v140 = Gre::Base::Globals(v115);
                                GreAcquireSemaphoreSharedInternal(*((_QWORD *)v140 + 11));
                                EtwTraceGreLockAcquireSemaphoreShared(
                                  L"GreBaseGlobals.hsemDCVisRgn",
                                  *((_QWORD *)v140 + 11));
                                DC::vClearRendering(v214);
                                v142 = Gre::Base::Globals(v141);
                                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                GreReleaseSemaphoreInternal(*((_QWORD *)v142 + 11));
                                v115 = v214;
                              }
LABEL_423:
                              if ( v115 )
                              {
                                if ( (_BYTE)v217 )
                                {
                                  *((_DWORD *)v115 + 10) &= ~2u;
                                  v115 = v214;
                                  LOBYTE(v217) = 0;
                                }
                                if ( v115 )
                                {
                                  if ( (_DWORD)v215 && (*((_DWORD *)v115 + 11) & 2) != 0 )
                                  {
                                    XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v214);
                                    *((_DWORD *)v214 + 11) &= ~2u;
                                    v115 = v214;
                                    LODWORD(v215) = 0;
                                  }
                                  v188 = 0;
                                  v143 = *(_QWORD *)v115;
                                  HmgDecrementExclusiveReferenceCountEx(v115, HIDWORD(v215), &v188);
                                  if ( v188 )
                                    GrepDeleteDC(v143, 0x2000000LL);
                                }
                              }
                            }
                          }
                          v214 = 0LL;
                          goto LABEL_433;
                        }
                        GreUpdateSpriteDevLockEnd((struct XDCOBJ *)&v210, v113 & 0x400000);
                        v113 = v208;
LABEL_299:
                        v116 = v210;
                        v115 = v214;
                        goto LABEL_300;
                      }
                      SURFACE::vClearIncludeSprites();
                      if ( v188 && (*((_DWORD *)v193 + 9) & 0x4000) != 0 )
                      {
                        v109 = (SURFACE *)*((_QWORD *)v193 + 62);
                        v110 = v190;
                        if ( v109 == *((SURFACE **)v190 + 62) )
                          goto LABEL_254;
                        SURFACE::bUnMap(v109, 0LL, 0LL);
                      }
                      v110 = v190;
LABEL_254:
                      if ( (*((_DWORD *)v110 + 9) & 0x4000) != 0 )
                        SURFACE::bUnMap(*((SURFACE **)v110 + 62), 0LL, v110);
                      UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v255);
                      if ( (v58 & 2) == 0 || !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
                        GreMovePointer(*((_DWORD **)v55 + 6), v56, SHIDWORD(v236), 0);
                      EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()");
                      GreReleaseSemaphoreInternal(*(_QWORD *)(v57 + 56));
                      if ( v188 && (*((_DWORD *)v193 + 9) & 0x4000) != 0 )
                      {
                        v111 = v190;
                        v112 = *((_QWORD *)v193 + 62);
                        if ( v112 == *((_QWORD *)v190 + 62) )
                          goto LABEL_265;
                        if ( (unsigned int)SURFACE::Map(v112, 0LL) == 2 )
                          *((_DWORD *)v193 + 11) |= 1u;
                      }
                      v111 = v190;
LABEL_265:
                      if ( (*((_DWORD *)v111 + 9) & 0x4000) != 0
                        && (unsigned int)SURFACE::Map(*((_QWORD *)v111 + 62), 0LL) == 2 )
                      {
                        *((_DWORD *)v190 + 11) |= 1u;
                      }
                      UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v255);
                      goto LABEL_269;
                    }
                  }
                }
                EngSetLastError(0x57u);
                goto LABEL_244;
              }
            }
LABEL_552:
            v44 = 5;
            goto LABEL_84;
          }
        }
      }
      else if ( MEMORY[0x1F0] )
      {
        goto LABEL_95;
      }
      if ( (*((_DWORD *)v46 + 9) & 0xE0) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v256, (struct XDCOBJ *)&v190, 516);
        v257[2] = v31 + a2;
        v257[0] = a2;
        v257[3] = v185 + v189;
        v257[1] = v185;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v256, (struct ERECTL *)v257) )
        {
          ERECTL::vOrder((ERECTL *)v257);
          XDCOBJ::vAccumulate((XDCOBJ *)&v190, (struct ERECTL *)v257);
        }
      }
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v199, v42, v45);
      DCOBJ::~DCOBJ((DCOBJ *)&v193);
      DCOBJ::~DCOBJ((DCOBJ *)&v190);
      BLTRECORD::~BLTRECORD((BLTRECORD *)v258);
      return 1LL;
    }
  }
  EngSetLastError(6u);
  if ( !v188 || v193 )
    v14 = 1;
  DCOBJ::~DCOBJ((DCOBJ *)&v193);
  DCOBJ::~DCOBJ((DCOBJ *)&v190);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v258);
  return v14;
}
