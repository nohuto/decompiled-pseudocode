/*
 * XREFs of NtGdiBitBltInternal @ 0x1C0088600
 * Callers:
 *     _DrawIconEx @ 0x1C0043EF4 (_DrawIconEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0044F6C (-UT_InvertCaret@@YAXXZ.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0066A58 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006DF90 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00715B4 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     NtGdiBitBlt @ 0x1C0084DE0 (NtGdiBitBlt.c)
 *     xxxDrawCaptionBar @ 0x1C00DCAB8 (xxxDrawCaptionBar.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00F2220 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     BitBltSysBmp @ 0x1C0106EBC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0107010 (NtUserBitBltSysBmp.c)
 *     RecolorDeskPattern @ 0x1C01369E0 (RecolorDeskPattern.c)
 *     xxxClientExtTextOutW @ 0x1C0158F28 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159250 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C0159590 (CreateCompatiblePublicDC.c)
 *     UpdateSpriteArea @ 0x1C015B014 (UpdateSpriteArea.c)
 *     xxxSnapWindow @ 0x1C016040C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C01617C0 (CreateSpb.c)
 *     StopFade @ 0x1C01E7A90 (StopFade.c)
 *     xxxPrintWindow @ 0x1C01E7D10 (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C0219F30 (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C02329DC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232E44 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236180 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C023DFF0 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E3AC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C024221C (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246EAC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B3F8 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C024BE2C (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C024D2E4 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C025063C (BltColor.c)
 *     DxgkEngBltViaGDI @ 0x1C0276750 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GreClientRgnUpdatedStable @ 0x1C0071524 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C0075010 (GreClientRgnUpdated.c)
 *     bCvtPts1 @ 0x1C0084C60 (bCvtPts1.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00872D0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087CC8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     _NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState @ 0x1C0089AAC (_NtGdiBitBltInternal_--_2_--ScreenAccessState--_ScreenAccessState.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C800 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00B7720 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00B9DA0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00D3F20 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D40AC (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C0169E3C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D1FC (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026E63C (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0277CF4 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C0277E78 (SimBitBlt.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        LONG left,
        LONG top,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        LONG a8,
        int a9,
        unsigned int a10,
        char a11)
{
  HDC v12; // rdx
  LONG v13; // ebx
  HDC v14; // r10
  LONG v15; // r14d
  int v18; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int v20; // r15d
  int v21; // r12d
  __int64 v22; // rdx
  DC *v23; // r9
  __int64 v24; // r10
  int v25; // r8d
  __int64 v26; // rbx
  unsigned int v27; // eax
  struct MATRIX *v28; // rdx
  int v29; // ecx
  LONG x; // edx
  LONG y; // r8d
  LONG bottom; // r8d
  LONG right; // edx
  LONG v34; // eax
  LONG v35; // eax
  DC *v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  DC *v39; // r13
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rdx
  HDC v44; // r10
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // r12
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rdi
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  _DWORD *v55; // rcx
  __int64 v56; // rdi
  int v57; // r11d
  int v58; // edx
  int v59; // r10d
  LONG v60; // ebx
  __int64 v61; // rax
  int v62; // eax
  int v63; // r10d
  int v64; // eax
  LONG v65; // edx
  struct ECLIPOBJ *v66; // rdx
  struct REGION *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  XLATEOBJ *v70; // rbx
  __int64 v71; // r15
  __int64 v72; // rax
  unsigned int v73; // ecx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // edx
  __int64 v78; // rax
  int v79; // ecx
  unsigned int v80; // r13d
  __int64 v81; // r12
  unsigned int i; // r11d
  int v83; // eax
  unsigned int v84; // eax
  __int64 v85; // r8
  __int64 v86; // r10
  unsigned int v87; // eax
  __int64 v88; // r8
  __int64 v89; // r10
  XLATEOBJ *v90; // rdx
  int v91; // r9d
  unsigned int v92; // eax
  XLATEOBJ *XlateObject; // rax
  int v94; // eax
  int v95; // edx
  SURFACE *v96; // rsi
  int v97; // r8d
  RECTL v98; // xmm6
  bool v99; // sf
  _DWORD *v100; // rax
  LONG v101; // edi
  int v102; // eax
  LONG v103; // r14d
  _DWORD *v104; // rax
  unsigned int v105; // eax
  float v106; // xmm1_4
  unsigned int v107; // eax
  float v108; // xmm3_4
  __int64 v109; // kr00_8
  int v110; // ecx
  LONG v111; // r9d
  LONG v112; // r8d
  int v113; // r10d
  int v114; // eax
  int v115; // edx
  __m128i v116; // xmm0
  int v117; // r11d
  __m128i v118; // xmm6
  bool v119; // cc
  LONG v120; // ecx
  int v121; // eax
  int v122; // eax
  LONG v123; // edx
  LONG v124; // r8d
  LONG v125; // ecx
  LONG v126; // eax
  RECTL v127; // xmm6
  LONG v128; // eax
  LONG v129; // ecx
  __int64 v130; // r8
  __int64 v131; // r9
  _OWORD *v132; // rax
  unsigned int v133; // eax
  __int64 v134; // rdi
  int v135; // r14d
  __int64 v136; // rax
  unsigned int v137; // eax
  __int64 v138; // rax
  int (*v139)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v140; // rdx
  __int64 v141; // r8
  int v142; // r11d
  __int64 cEntries; // rax
  int v144; // r15d
  char v146; // [rsp+70h] [rbp-90h]
  bool v147[7]; // [rsp+71h] [rbp-8Fh] BYREF
  XLATEOBJ *v148; // [rsp+78h] [rbp-88h]
  unsigned int v149; // [rsp+80h] [rbp-80h]
  XLATEOBJ *v150; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v151; // [rsp+90h] [rbp-70h]
  unsigned int v152; // [rsp+94h] [rbp-6Ch]
  int v153; // [rsp+98h] [rbp-68h]
  signed int v154; // [rsp+9Ch] [rbp-64h]
  HDC v155; // [rsp+A0h] [rbp-60h]
  HDC v156; // [rsp+A8h] [rbp-58h]
  unsigned int v157; // [rsp+B0h] [rbp-50h]
  LONG v158; // [rsp+B8h] [rbp-48h]
  __int64 v159; // [rsp+C0h] [rbp-40h]
  unsigned int v160; // [rsp+C8h] [rbp-38h]
  int v161; // [rsp+D0h] [rbp-30h] BYREF
  int v162; // [rsp+D4h] [rbp-2Ch]
  int v163; // [rsp+D8h] [rbp-28h]
  int v164; // [rsp+DCh] [rbp-24h]
  unsigned __int64 v165; // [rsp+E0h] [rbp-20h] BYREF
  LONG v166; // [rsp+E8h] [rbp-18h]
  LONG v167; // [rsp+ECh] [rbp-14h]
  DC *v168[6]; // [rsp+F0h] [rbp-10h] BYREF
  float v169[2]; // [rsp+120h] [rbp+20h] BYREF
  float v170[2]; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v171; // [rsp+130h] [rbp+30h] BYREF
  int v172; // [rsp+138h] [rbp+38h]
  int v173; // [rsp+13Ch] [rbp+3Ch]
  struct MATRIX *v174; // [rsp+140h] [rbp+40h] BYREF
  int v175; // [rsp+148h] [rbp+48h]
  int v176; // [rsp+14Ch] [rbp+4Ch]
  _QWORD v177[6]; // [rsp+150h] [rbp+50h] BYREF
  SURFACE *v178; // [rsp+180h] [rbp+80h]
  RECTL v179; // [rsp+190h] [rbp+90h]
  __int64 v180; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v181; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v182; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v183; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v184; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v185; // [rsp+1C8h] [rbp+C8h] BYREF
  __int128 v186; // [rsp+1D0h] [rbp+D0h]
  RECTL v187; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v188[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v189; // [rsp+210h] [rbp+110h]
  __int64 v190; // [rsp+218h] [rbp+118h]
  char v191; // [rsp+220h] [rbp+120h]
  int v192; // [rsp+224h] [rbp+124h]
  int v193; // [rsp+248h] [rbp+148h]
  __int128 v194; // [rsp+250h] [rbp+150h]
  int v195; // [rsp+260h] [rbp+160h]
  __int64 v196; // [rsp+268h] [rbp+168h]
  __int64 v197; // [rsp+270h] [rbp+170h]
  char v198[32]; // [rsp+278h] [rbp+178h] BYREF
  __int16 v199; // [rsp+298h] [rbp+198h]
  __int64 v200; // [rsp+2A0h] [rbp+1A0h]
  __int64 v201; // [rsp+2A8h] [rbp+1A8h]
  char v202[32]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int16 v203; // [rsp+2D0h] [rbp+1D0h]
  __int64 v204; // [rsp+2D8h] [rbp+1D8h]
  __int128 v205; // [rsp+2E0h] [rbp+1E0h]
  __int64 v206; // [rsp+2F0h] [rbp+1F0h]
  __int64 v207; // [rsp+2F8h] [rbp+1F8h]
  __int64 v208; // [rsp+300h] [rbp+200h]
  __int64 v209; // [rsp+308h] [rbp+208h]
  RECTL v210; // [rsp+310h] [rbp+210h] BYREF
  POINTL v211[2]; // [rsp+320h] [rbp+220h] BYREF
  RECTL v212; // [rsp+330h] [rbp+230h] BYREF
  RECTL v213; // [rsp+340h] [rbp+240h] BYREF

  v12 = a6;
  v13 = a8;
  v14 = a1;
  v15 = a7;
  v147[0] = (a11 & 4) != 0;
  v156 = a1;
  v18 = a5;
  LODWORD(v148) = a5;
  v155 = a6;
  v153 = a8;
  if ( (a11 & 4) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v18 = (int)v148;
    v12 = v155;
    v14 = v156;
    if ( ThreadWin32Thread )
      *(_DWORD *)(ThreadWin32Thread + 328) |= 0x10u;
    else
      v147[0] = 0;
  }
  v20 = 0;
  if ( (a9 & 0x40000000) == 0 )
  {
    v154 = a9 & 0xDFFFFFFF;
    v160 = 0;
    v21 = a9 & 0x5FFFFFFF;
    DCOBJ::DCOBJ((DCOBJ *)v168, v14);
    if ( !v168[0] || (*((_DWORD *)v168[0] + 9) & 0x10000) != 0 )
      goto LABEL_251;
    if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v21 != 16711778 && v21 != 66 )
      bSpDwmValidateSurface((struct XDCOBJ *)v168, left, top, a4, (int)v148);
    DCOBJ::DCOBJ((DCOBJ *)v177, v155);
    if ( !v177[0] )
    {
LABEL_250:
      DCOBJ::~DCOBJ((DCOBJ *)v177);
LABEL_251:
      DCOBJ::~DCOBJ((DCOBJ *)v168);
      goto LABEL_252;
    }
    bSpDwmValidateSurface((struct XDCOBJ *)v177, a7, a8, a4, (int)v148);
    v22 = v177[0];
    v23 = v168[0];
    v24 = *((_QWORD *)v168[0] + 122);
    v25 = *(_DWORD *)(v24 + 108);
    if ( (((unsigned __int8)v25 ^ *(_BYTE *)(*(_QWORD *)(v177[0] + 976LL) + 108LL)) & 7) != 0
      && (v154 < 0 && (v25 & 1) != 0 || (v25 & 9) == 9) )
    {
      v26 = *(_QWORD *)(v24 + 308);
      v27 = DC::dwSetLayout(v168[0], -1, 0);
      v23 = v168[0];
      v22 = v177[0];
      left = v26 - a4 - left;
      v160 = v27;
      v13 = v153;
      v154 = 0x80000000;
    }
    else
    {
      v154 = 0;
    }
    v172 = *(_DWORD *)(*((_QWORD *)v23 + 122) + 208LL);
    v173 = *(_DWORD *)(*((_QWORD *)v23 + 122) + 108LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v23 + 122) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v171, (struct XDCOBJ *)v168, 0x204u, 0);
      v22 = v177[0];
    }
    else
    {
      v171 = (unsigned __int64)v23 + 320;
    }
    v175 = *(_DWORD *)(*(_QWORD *)(v22 + 976) + 208LL);
    v176 = *(_DWORD *)(*(_QWORD *)(v22 + 976) + 108LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v22 + 976) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v174, (struct XDCOBJ *)v177, 0x204u, 0);
      v28 = v174;
    }
    else
    {
      v28 = (struct MATRIX *)(v22 + 320);
      v174 = v28;
    }
    if ( (*(_DWORD *)(v171 + 32) & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v171, v28) )
    {
      v29 = (int)v148;
      x = a7 + a4;
      v211[0].x = a7;
      v211[0].y = v13;
      y = v13 + (_DWORD)v148;
      v211[1].x = a7 + a4;
      v211[1].y = v13 + (_DWORD)v148;
      if ( (*((_BYTE *)v174 + 32) & 0x43) != 0x43 )
      {
        bCvtPts1((unsigned __int64)v174, v211, 2LL);
        y = v211[1].y;
        x = v211[1].x;
        v29 = (int)v148;
        v13 = v211[0].y;
        v15 = v211[0].x;
      }
      if ( v176 )
      {
        ++v15;
        ++x;
        v211[0].x = v15;
        v211[1].x = x;
      }
      if ( v15 > x )
      {
        v211[0].x = x;
        v211[1].x = v15;
      }
      if ( v13 > y )
      {
        v211[0].y = y;
        v211[1].y = v13;
      }
      bottom = v29 + top;
      v210.left = left;
      right = left + a4;
      v210.top = top;
      v210.right = left + a4;
      v210.bottom = v29 + top;
      if ( (*(_BYTE *)(v171 + 32) & 0x43) != 0x43 )
      {
        bCvtPts1(v171, &v210, 2LL);
        bottom = v210.bottom;
        right = v210.right;
        top = v210.top;
        left = v210.left;
      }
      if ( v173 )
      {
        ++left;
        ++right;
        v210.left = left;
        v210.right = right;
      }
      if ( left > right )
      {
        v34 = left;
        v210.left = right;
        left = right;
        v210.right = v34;
        right = v34;
      }
      if ( top > bottom )
      {
        v35 = top;
        v210.top = bottom;
        top = bottom;
        v210.bottom = v35;
        bottom = v35;
      }
      if ( left != right && top != bottom )
      {
        v36 = v168[0];
        v37 = *((_DWORD *)v168[0] + 9);
        if ( (v37 & 0xE0) != 0 )
        {
          if ( (v37 & 0x20) != 0 )
          {
            ERECTL::operator|=((char *)v168[0] + 1064, &v210);
            v36 = v168[0];
          }
          if ( (*((_DWORD *)v36 + 9) & 0x80u) != 0 )
            ERECTL::operator|=((char *)v36 + 1096, &v210);
        }
        v190 = 0LL;
        v191 = 0;
        v192 = 0;
        v193 = 0;
        v196 = 0LL;
        v197 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v198);
        v199 = 256;
        v200 = 0LL;
        v201 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v202);
        v203 = 256;
        memset(v188, 0, sizeof(v188));
        v194 = 0LL;
        v205 = 0LL;
        v189 = 0LL;
        v195 = 0;
        v204 = 0LL;
        v206 = 0LL;
        v209 = 0LL;
        v207 = 0LL;
        v208 = 0LL;
        v196 = 0LL;
        v200 = 0LL;
        if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v188, (struct XDCOBJ *)v168, (struct XDCOBJ *)v177, 0) )
        {
          v144 = XDCOBJ::bFullScreen((XDCOBJ *)v177);
          v20 = XDCOBJ::bFullScreen((XDCOBJ *)v168) | v144;
LABEL_245:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v188);
          goto LABEL_248;
        }
        v39 = v168[0];
        v40 = *((_QWORD *)v168[0] + 62);
        v178 = (SURFACE *)v40;
        if ( !v40 )
          goto LABEL_243;
        v41 = *(_QWORD *)(v40 + 128);
        v42 = *((_QWORD *)v168[0] + 11);
        v153 = (BYTE2(v21) << 8) | BYTE2(v21);
        if ( ((BYTE2(v21) ^ (unsigned __int8)(16 * BYTE2(v21))) & 0xF0) != 0 )
        {
          v43 = *((_QWORD *)v168[0] + 122);
          v44 = (HDC)((char *)v168[0] + 1208);
          v156 = (HDC)((char *)v168[0] + 1208);
          if ( (*(_DWORD *)(v43 + 152) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v168[0], *(_QWORD *)(v43 + 160));
            v44 = v156;
            v39 = v168[0];
          }
          v38 = *((_QWORD *)v39 + 122);
          v45 = *(_DWORD *)(v38 + 152);
          if ( (v45 & 1) != 0 || (*((_DWORD *)v39 + 79) & 1) != 0 )
          {
            *(_DWORD *)(v38 + 152) = v45 & 0xFFFFFFFE;
            *((_DWORD *)v168[0] + 79) &= ~1u;
            EBRUSHOBJ::vInitBrush(v44, v168[0], *((_QWORD *)v168[0] + 17), v42, v41, v40, 1);
            v39 = v168[0];
          }
        }
        else
        {
          v156 = 0LL;
        }
        v46 = (__int64)v39 + 1024;
        v47 = v177[0];
        if ( (*((_DWORD *)v39 + 10) & 1) == 0 )
          v46 = (__int64)v39 + 1016;
        v48 = (unsigned int)(*(_DWORD *)v46 + v210.left);
        v210.left += *(_DWORD *)v46;
        v210.right += *(_DWORD *)v46;
        v49 = (unsigned int)(*(_DWORD *)(v46 + 4) + v210.top);
        v210.top += *(_DWORD *)(v46 + 4);
        v210.bottom += *(_DWORD *)(v46 + 4);
        v50 = *(_QWORD *)(v177[0] + 496LL);
        v159 = v50;
        if ( !v50 )
          goto LABEL_243;
        if ( (a11 & 2) != 0 )
        {
LABEL_82:
          v55 = (_DWORD *)(v47 + 1024);
          v56 = *(_QWORD *)(v50 + 128);
          if ( (*(_DWORD *)(v47 + 40) & 1) == 0 )
            v55 = (_DWORD *)(v47 + 1016);
          v57 = 0;
          v58 = 0;
          v59 = v49 - *(_DWORD *)(v47 + 8LL * (*(_DWORD *)(v47 + 40) & 1) + 1020) - v211[0].y;
          v60 = v48 - *v55 - v211[0].x;
          v61 = *(_QWORD *)(v159 + 48);
          v158 = v60;
          LODWORD(v148) = v59;
          if ( v61 && v159 == *(_QWORD *)(v61 + 2552) && (*(_DWORD *)(v61 + 40) & 0x20000) != 0 )
          {
            v58 = *(_DWORD *)(v61 + 2584);
            v57 = *(_DWORD *)(v61 + 2588);
          }
          if ( v58 + v60 > (int)v48 )
            LODWORD(v48) = v58 + v60;
          v62 = v59 + v57;
          v63 = v210.right;
          v210.left = v48;
          if ( v62 > (int)v49 )
            LODWORD(v49) = v62;
          v64 = v210.bottom;
          v210.top = v49;
          v65 = *(_DWORD *)(v159 + 56) + v60 + v58;
          if ( v65 < v210.right )
            v63 = v65;
          v210.right = v63;
          v66 = (struct ECLIPOBJ *)(unsigned int)(*(_DWORD *)(v159 + 60) + v57 + (_DWORD)v148);
          if ( (int)v66 < v210.bottom )
            v64 = *(_DWORD *)(v159 + 60) + v57 + (_DWORD)v148;
          v210.bottom = v64;
          if ( (int)v48 < v63 && (int)v49 < v64 )
          {
            v155 = 0LL;
            if ( (int)v48 >= *((_DWORD *)v39 + 250)
              && v63 <= *((_DWORD *)v39 + 252)
              && (int)v49 >= *((_DWORD *)v39 + 251)
              && v64 <= *((_DWORD *)v39 + 253) )
            {
LABEL_104:
              if ( (*((_DWORD *)v39 + 9) & 0xE0) != 0 )
              {
                v187 = v210;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v168, v66, (struct ERECTL *)&v187);
                LODWORD(v49) = v210.top;
                LODWORD(v48) = v210.left;
                v39 = v168[0];
                v47 = v177[0];
              }
              v68 = (unsigned int)v148;
              v211[0].x = v48 - v60;
              v211[0].y = v49 - (_DWORD)v148;
              v69 = *((_QWORD *)v39 + 62);
              v70 = 0LL;
              v150 = 0LL;
              if ( *(_QWORD *)(v47 + 496) == v69 )
              {
                v148 = 0LL;
                v20 = 1;
                goto LABEL_163;
              }
              v71 = *(_QWORD *)(v47 + 88);
              v149 = a10;
              if ( a10 == -1 )
                v149 = *(_DWORD *)(*(_QWORD *)(v47 + 976) + 180LL);
              v72 = *((_QWORD *)v39 + 122);
              v73 = *(_DWORD *)(v72 + 176);
              v152 = *(_DWORD *)(v72 + 184);
              v157 = *((_DWORD *)v39 + 30);
              v151 = v73;
              if ( !v56
                && (!v41
                 || (*(_DWORD *)(v41 + 24) & 0x800) != 0
                 && ((v74 = *(_QWORD *)(v42 + 80)) == 0 || v74 == *(_QWORD *)(v42 + 72)))
                || !v41
                && (*(_DWORD *)(v56 + 24) & 0x800) != 0
                && ((v75 = *(_QWORD *)(v42 + 80)) == 0 || v75 == *(_QWORD *)(v42 + 72)) )
              {
                v70 = xloIdent;
                v20 = 1;
                v150 = xloIdent;
                goto LABEL_160;
              }
              if ( v56 && v41 )
              {
                v76 = *(_QWORD *)(v56 + 120);
                if ( v76 == v56 )
                  v77 = *(_DWORD *)(v56 + 32);
                else
                  v77 = *(_DWORD *)(v76 + 32);
                v78 = *(_QWORD *)(v41 + 120);
                if ( v78 == v41 )
                  v79 = *(_DWORD *)(v41 + 32);
                else
                  v79 = *(_DWORD *)(v78 + 32);
                if ( v77 == v79 )
                {
                  v70 = xloIdent;
                  v20 = 1;
                  v150 = xloIdent;
LABEL_159:
                  v68 = (unsigned int)v148;
LABEL_160:
                  v94 = *((_DWORD *)v39 + 9);
                  v148 = v70;
                  if ( (v94 & 1) == 0 )
                  {
                    v211[1].x = v210.right - v158;
                    v211[1].y = v210.bottom - v68;
                  }
                  if ( !v20 )
                    goto LABEL_238;
LABEL_163:
                  v95 = 0;
                  v96 = v178;
                  v97 = 0;
                  v98 = v210;
                  v179 = v210;
                  v99 = *((int *)v178 + 28) < 0;
                  v186 = *(_OWORD *)&v211[0].x;
                  v213 = v210;
                  v212 = *(RECTL *)&v211[0].x;
                  v161 = 0;
                  v162 = 0;
                  if ( v99 )
                  {
                    v100 = (_DWORD *)*((_QWORD *)v178 + 6);
                    if ( v100 )
                    {
                      if ( (v100[10] & 0x20000) != 0 )
                      {
                        v95 = v100[646];
                        v97 = v100[647];
                        v161 = v95;
                        v162 = v97;
                      }
                    }
                  }
                  v101 = 0;
                  v102 = v95 + *((_DWORD *)v178 + 14);
                  v165 = 0LL;
                  v103 = 0;
                  v163 = v102;
                  v99 = *(int *)(v159 + 112) < 0;
                  v164 = v97 + *((_DWORD *)v178 + 15);
                  if ( v99 )
                  {
                    v104 = *(_DWORD **)(v159 + 48);
                    if ( v104 )
                    {
                      if ( (v104[10] & 0x20000) != 0 )
                      {
                        v101 = v104[646];
                        v103 = v104[647];
                        v165 = __PAIR64__(v103, v101);
                      }
                    }
                  }
                  v166 = v101 + *(_DWORD *)(v159 + 56);
                  v167 = v103 + *(_DWORD *)(v159 + 60);
                  v105 = *((_DWORD *)v39 + 130);
                  v152 = v105;
                  v157 = v105 & 1;
                  if ( (v105 & 1) != 0 && (v105 & 2) == 0 )
                  {
                    v106 = 1.0 / *((float *)v39 + 132);
                    v169[0] = 1.0 / *((float *)v39 + 131);
                    v169[1] = v106;
                    ERECTL::vScale((ERECTL *)&v161, (const struct POINTFL *)v169);
                    ERECTL::vScale((ERECTL *)&v213, (const struct POINTFL *)v169);
                    v98 = v213;
                  }
                  v107 = *(_DWORD *)(v47 + 520);
                  v149 = v107;
                  v151 = v107 & 1;
                  if ( (v107 & 1) != 0 && (v107 & 2) == 0 )
                  {
                    v108 = 1.0 / *(float *)(v47 + 528);
                    v170[0] = 1.0 / *(float *)(v47 + 524);
                    v170[1] = v108;
                    ERECTL::vScale((ERECTL *)&v165, (const struct POINTFL *)v170);
                    ERECTL::vScale((ERECTL *)&v212, (const struct POINTFL *)v170);
                    v103 = HIDWORD(v165);
                    v101 = v165;
                  }
                  v109 = *(_QWORD *)&v212.left;
                  v110 = _mm_cvtsi128_si32((__m128i)v98);
                  v212 = v98;
                  v111 = v98.top;
                  v112 = v98.right;
                  v113 = v109 - v110;
                  v114 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v98, 4));
                  v115 = v110;
                  v116 = _mm_srli_si128((__m128i)v98, 8);
                  v117 = HIDWORD(v109) - v114;
                  v118 = _mm_srli_si128((__m128i)v98, 12);
                  v119 = v161 <= v110;
                  v120 = v212.bottom;
                  if ( !v119 )
                    v115 = v161;
                  v119 = v162 <= v114;
                  v121 = _mm_cvtsi128_si32(v116);
                  if ( !v119 )
                    v111 = v162;
                  v119 = v163 < v121;
                  v122 = _mm_cvtsi128_si32(v118);
                  if ( v119 )
                    v112 = v163;
                  v158 = v112;
                  if ( v164 < v122 )
                    v120 = v164;
                  if ( v112 >= v115 )
                  {
                    if ( v120 < v111 )
                      v111 = v120;
                  }
                  else
                  {
                    v115 = v112;
                  }
                  v123 = v113 + v115;
                  v124 = v113 + v112;
                  v125 = v117 + v120;
                  v126 = v117 + v111;
                  if ( v101 > v123 )
                    v123 = v101;
                  v212.left = v123;
                  if ( v103 > v126 )
                    v126 = v103;
                  v212.top = v126;
                  if ( v166 < v124 )
                    v124 = v166;
                  v212.right = v124;
                  if ( v167 < v125 )
                    v125 = v167;
                  v212.bottom = v125;
                  if ( v124 >= v123 )
                  {
                    if ( v125 < v126 )
                      v126 = v125;
                    v212.top = v126;
                  }
                  else
                  {
                    v123 = v124;
                    v212.left = v124;
                  }
                  v127 = v212;
                  v68 = (unsigned int)(v123 - v113);
                  v128 = v126 - v117;
                  *(_QWORD *)&v213.left = __PAIR64__(v128, v68);
                  v129 = v125 - v117;
                  v213.right = v124 - v113;
                  v213.bottom = v129;
                  if ( (int)v68 >= v124 - v113 || v128 >= v129 )
                  {
                    LOBYTE(v68) = 0;
                  }
                  else
                  {
                    if ( v157 && (v152 & 2) == 0 )
                    {
                      v183 = *(_QWORD *)((char *)v39 + 524);
                      ERECTL::vScale((ERECTL *)&v213, (const struct POINTFL *)&v183);
                    }
                    if ( v151 && (v149 & 2) == 0 )
                    {
                      v184 = *(_QWORD *)(v47 + 524);
                      ERECTL::vScale((ERECTL *)&v212, (const struct POINTFL *)&v184);
                      v127 = v212;
                    }
                    LOBYTE(v68) = 1;
                    v210 = v213;
                    *(RECTL *)&v211[0].x = v127;
                    ++*((_DWORD *)v96 + 23);
                    v39 = v168[0];
                    v47 = v177[0];
                  }
                  v146 = v68;
                  if ( *((_QWORD *)v39 + 6) == *(_QWORD *)(v47 + 48)
                    || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v168) && *(_QWORD *)(v130 + 3520) == v131
                    || !*(_WORD *)(v159 + 100) && !*(_QWORD *)(v159 + 24) && (*(_DWORD *)(v130 + 40) & 0x80u) == 0 )
                  {
                    if ( v153 == 52428 )
                    {
                      v134 = *((_QWORD *)v96 + 6);
                      v135 = a11 & 1;
                      if ( v135 )
                      {
                        EtwWindowRendering(
                          *((_QWORD *)v39 + 58),
                          *((_QWORD *)v39 + 59),
                          **((_QWORD **)v39 + 62),
                          (unsigned int)v179.left,
                          v179.top,
                          v179.right,
                          v179.bottom,
                          *(_QWORD *)(v47 + 464),
                          *(_QWORD *)(v47 + 472),
                          **(_QWORD **)(v47 + 496),
                          v186,
                          DWORD1(v186),
                          v186 + abs32(v179.right - v179.bottom),
                          DWORD1(v186) + abs32(v179.bottom - v179.top));
                        v96 = v178;
                        *((_WORD *)v178 + 51) |= 0x40u;
                        v136 = W32GetThreadWin32Thread(KeGetCurrentThread());
                        if ( v136 )
                          *(_DWORD *)(v136 + 328) &= ~1u;
                        GreClientRgnUpdated(0);
                        GreClientRgnUpdatedStable();
                        v70 = v150;
                      }
                      if ( v146 )
                      {
                        if ( (*((_DWORD *)v96 + 28) & 0x400) != 0 )
                          v137 = (*(__int64 (__fastcall **)(__int64, __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))(v134 + 2840))(
                                   (__int64)v96 + 24,
                                   v159 + 24,
                                   v155,
                                   v148,
                                   &v210,
                                   v211);
                        else
                          v137 = ((__int64 (__fastcall *)(char *, __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                                   (char *)v96 + 24,
                                   v159 + 24,
                                   v155,
                                   v148,
                                   &v210,
                                   v211);
                        v20 = v137;
                      }
                      if ( v135 )
                      {
                        *((_WORD *)v96 + 51) &= ~0x40u;
                        v138 = W32GetThreadWin32Thread(KeGetCurrentThread());
                        v70 = v150;
                        if ( v138 )
                          *(_DWORD *)(v138 + 328) |= 1u;
                      }
                      goto LABEL_238;
                    }
                    if ( (_BYTE)v68 )
                    {
                      v139 = SURFACE::pfnBitBlt(v96);
                      v133 = ((__int64 (__fastcall *)(char *, __int64, _QWORD, HDC, XLATEOBJ *, RECTL *, POINTL *, _QWORD, HDC, __int64, int))v139)(
                               (char *)v96 + 24,
                               v140,
                               0LL,
                               v155,
                               v148,
                               &v210,
                               v211,
                               0LL,
                               v156,
                               v141,
                               v142);
LABEL_237:
                      v20 = v133;
                    }
                  }
                  else if ( (_BYTE)v68 )
                  {
                    v132 = v188;
                    if ( (*(_DWORD *)(*((_QWORD *)v96 + 6) + 40LL) & 0x80u) == 0 )
                      v132 = 0LL;
                    v133 = SimBitBlt(
                             (SURFOBJ *)((char *)v96 + 24),
                             (SURFOBJ *)(v159 + 24),
                             v148,
                             &v210,
                             v211,
                             0LL,
                             (__int64)v156,
                             (POINTL *)v39 + 150,
                             v153,
                             (__int64)v132);
                    goto LABEL_237;
                  }
LABEL_238:
                  if ( v70 )
                  {
                    cEntries = (int)v70[1].cEntries;
                    if ( (int)cEntries >= 0 )
                    {
                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v188);
                      goto LABEL_248;
                    }
                    if ( (_DWORD)cEntries == -1 )
                    {
                      FreeThreadBufferWithTag(v70, v68);
                      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v188);
                      goto LABEL_248;
                    }
                  }
                  goto LABEL_245;
                }
                v80 = *(_DWORD *)(v56 + 56);
                v180 = v42;
                v181 = v71;
                v185 = v41;
                v182 = ghsemPalette;
                GreAcquireSemaphore(ghsemPalette);
                v81 = *(_QWORD *)(v56 + 120);
                for ( i = 0; i < 8; ++i )
                {
                  if ( v81 == v56 )
                    v83 = *(_DWORD *)(v56 + 32);
                  else
                    v83 = *(_DWORD *)(v81 + 32);
                  if ( *((_DWORD *)&xlateTable + 8 * v80 + 4) == v83 )
                  {
                    v84 = XEPALOBJ::ulTime((XEPALOBJ *)&v185);
                    if ( *(_DWORD *)(v85 + v86 + 20) == v84 )
                    {
                      v87 = XEPALOBJ::ulTime((XEPALOBJ *)&v180);
                      if ( *(_DWORD *)(v88 + v89 + 28) == v87 )
                      {
                        v90 = *(XLATEOBJ **)(v88 + v89 + 8);
                        v150 = v90;
                        if ( (v90[3].flXlate & 0x6000) == 0 )
                        {
                          if ( (v91 = v90[3].flXlate & 0x100, (v90->flXlate & 4) == 0) && !v91
                            || (v90->flXlate & 4) != 0
                            && v149 == v90[1].iUniq
                            && (v92 = XEPALOBJ::ulTime((XEPALOBJ *)&v181), *(_DWORD *)(v88 + v89 + 24) == v92)
                            || v91 && v152 == v90[1].flXlate && v151 == *(_DWORD *)&v90[1].iSrcType )
                          {
                            _InterlockedIncrement((volatile signed __int32 *)(v88 + v89));
                            *(_DWORD *)(v56 + 56) = v80;
                            SEMOBJ::~SEMOBJ((SEMOBJ *)&v182);
                            v70 = v150;
                            v20 = 1;
                            goto LABEL_158;
                          }
                        }
                      }
                    }
                  }
                  v80 = ((_BYTE)v80 + 1) & 7;
                }
                if ( ghsemPalette )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                  GreReleaseSemaphoreInternal(ghsemPalette);
                }
              }
              XlateObject = (XLATEOBJ *)CreateXlateObject(0LL, v157, v56, v41, v71, v42, v152, v151, v149, 0);
              v150 = XlateObject;
              v70 = XlateObject;
              if ( XlateObject )
              {
                if ( v56 && v41 && (XlateObject[3].flXlate & 0x200) == 0 )
                  EXLATEOBJ::vAddToCache(&v150, v56, v41, v71, v42);
                v20 = 1;
              }
              else
              {
                v20 = 0;
              }
LABEL_158:
              v39 = v168[0];
              v47 = v177[0];
              goto LABEL_159;
            }
            v155 = (HDC)((char *)v39 + 1776);
            v67 = XDCOBJ::prgnEffRao((XDCOBJ *)v168);
            XCLIPOBJ::vSetup((DC *)((char *)v39 + 1776), v67, (struct ERECTL *)&v210, 2);
            v210 = *(RECTL *)((char *)v39 + 1780);
            if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v210) )
            {
              v39 = v168[0];
              v47 = v177[0];
              LODWORD(v49) = v210.top;
              LODWORD(v48) = v210.left;
              goto LABEL_104;
            }
          }
LABEL_243:
          v20 = 1;
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v188);
          goto LABEL_248;
        }
        if ( *(_DWORD *)(v50 + 656) )
        {
          if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v50 + 656) )
            goto LABEL_108;
          v39 = v168[0];
          v47 = v177[0];
          v49 = (unsigned int)v210.top;
          v48 = (unsigned int)v210.left;
        }
        v51 = *(_DWORD *)(v50 + 112);
        if ( (v51 & 0x800) != 0 )
        {
          v52 = UserSurfaceAccessCheck(*(_QWORD *)(v50 + 648), v38, v49, v48);
        }
        else
        {
          if ( (v51 & 0x10000000) == 0 )
          {
LABEL_73:
            if ( (*(_DWORD *)(v40 + 116) & 8) == 0 && !*(_QWORD *)(v40 + 224)
              || (v46 = 512LL, (*(_WORD *)(v40 + 102) & 0x200) == 0) )
            {
              v53 = *(_DWORD *)(v40 + 112);
              if ( (v53 & 0x800) != 0 )
              {
                v54 = UserSurfaceAccessCheck(*(_QWORD *)(v40 + 648), v38, v49, v48);
              }
              else
              {
                if ( (v53 & 0x10000000) == 0 )
                  goto LABEL_82;
                v54 = UserScreenAccessCheck(v46, v38, v49, v48);
              }
              if ( v54 )
              {
                v39 = v168[0];
                v47 = v177[0];
                LODWORD(v49) = v210.top;
                LODWORD(v48) = v210.left;
                goto LABEL_82;
              }
            }
LABEL_108:
            EngSetLastError(6u);
            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v188);
            goto LABEL_248;
          }
          v52 = UserScreenAccessCheck(v46, v38, v49, v48);
        }
        if ( !v52 )
          goto LABEL_108;
        v39 = v168[0];
        v47 = v177[0];
        v49 = (unsigned int)v210.top;
        v48 = (unsigned int)v210.left;
        goto LABEL_73;
      }
      v20 = 1;
    }
    else
    {
      v20 = GreStretchBltInternal(v156, left, (int)v148, v155, a7, v13, a4, (int)v148, v21, a10, 0);
    }
LABEL_248:
    if ( v154 )
      DC::dwSetLayout(v168[0], -1, v160);
    goto LABEL_250;
  }
  v20 = GreStretchBltInternal(
          v14,
          left,
          v18,
          v12,
          a7,
          a8,
          a4,
          v18,
          a9 & 0xDFFFFFFF,
          a10,
          (a9 & 0x20000000) != 0 ? 2 : 0);
LABEL_252:
  NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState(v147);
  return v20;
}
