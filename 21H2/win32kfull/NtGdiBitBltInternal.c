/*
 * XREFs of NtGdiBitBltInternal @ 0x1C003DD70
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0025910 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiBitBlt @ 0x1C0041B30 (NtGdiBitBlt.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009050C (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C00B967C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxClientExtTextOutW @ 0x1C00B9C04 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C00BA240 (CreateCompatiblePublicDC.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00C09C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00C2950 (-UT_InvertCaret@@YAXXZ.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     UpdateSpriteArea @ 0x1C010C8C8 (UpdateSpriteArea.c)
 *     RecolorDeskPattern @ 0x1C0121FE0 (RecolorDeskPattern.c)
 *     NtUserBitBltSysBmp @ 0x1C014C140 (NtUserBitBltSysBmp.c)
 *     RestoreSpb @ 0x1C0158DC0 (RestoreSpb.c)
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 *     xxxPrintWindow @ 0x1C01E297C (xxxPrintWindow.c)
 *     xxxClientLpkDrawTextEx @ 0x1C022C7DC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C022CBE4 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C022FE00 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C0239C94 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023D3F4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023E320 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0246DE4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C0247828 (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C024DBD4 (BltColor.c)
 *     DxgkEngBltViaGDI @ 0x1C02745B0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003BF70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     _NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState @ 0x1C003F234 (_NtGdiBitBltInternal_--_2_--ScreenAccessState--_ScreenAccessState.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     GreClientRgnUpdatedStable @ 0x1C0049624 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C00496B4 (GreClientRgnUpdated.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C008E810 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C008E834 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00DA9D8 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00DAB40 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D630 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026B538 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026C90C (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0275B34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C0275CB8 (SimBitBlt.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        LONG left,
        int top,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  HDC v12; // rdx
  int v13; // ebx
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
  __int64 bottom; // r8
  LONG right; // edx
  LONG v34; // eax
  unsigned int v35; // eax
  DC *v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  DC *v39; // r13
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // r14
  unsigned __int8 v43; // cl
  __int64 v44; // rdx
  char *v45; // r10
  int v46; // ecx
  _DWORD *v47; // rcx
  __int64 v48; // r12
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // rdi
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  _DWORD *v56; // rcx
  __int64 v57; // rdi
  int v58; // r10d
  int v59; // edx
  int v60; // r15d
  int v61; // ebx
  __int64 v62; // rax
  int v63; // ecx
  LONG v64; // eax
  unsigned __int64 v65; // rdx
  struct REGION *v66; // rax
  XLATEOBJ *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // r15
  __int64 v70; // rax
  int v71; // ecx
  __int64 v72; // rax
  int v73; // edx
  __int64 v74; // rax
  int v75; // ecx
  unsigned int v76; // r13d
  __int64 v77; // r12
  unsigned int v78; // r11d
  int v79; // eax
  unsigned int v80; // eax
  __int64 v81; // r8
  __int64 v82; // r10
  unsigned int v83; // eax
  __int64 v84; // r8
  __int64 v85; // r10
  XLATEOBJ *v86; // rdx
  int v87; // r9d
  unsigned int v88; // eax
  XLATEOBJ *XlateObject; // rax
  __int64 v90; // rax
  int v91; // eax
  int v92; // edx
  SURFACE *v93; // rsi
  int v94; // r8d
  RECTL v95; // xmm6
  bool v96; // sf
  _DWORD *v97; // rax
  LONG v98; // edi
  int v99; // eax
  LONG v100; // r14d
  _DWORD *v101; // rax
  int v102; // eax
  float v103; // xmm0_4
  int v104; // eax
  float v105; // xmm1_4
  __int64 v106; // kr00_8
  int v107; // ecx
  LONG v108; // r9d
  LONG v109; // r8d
  int v110; // r10d
  int v111; // eax
  int v112; // edx
  __m128i v113; // xmm0
  int v114; // r11d
  __m128i v115; // xmm6
  bool v116; // cc
  LONG v117; // ecx
  int v118; // eax
  int v119; // eax
  __int64 v120; // rax
  LONG v121; // edx
  LONG v122; // eax
  LONG v123; // r8d
  LONG v124; // ecx
  RECTL v125; // xmm6
  LONG v126; // eax
  LONG v127; // ecx
  int v128; // eax
  int v129; // eax
  char v130; // dl
  __int64 v131; // r8
  __int64 v132; // r9
  _OWORD *v133; // rax
  unsigned int v134; // eax
  __int64 v135; // rdi
  int v136; // r14d
  __int64 v137; // rax
  unsigned int v138; // eax
  __int64 v139; // rax
  int (*v140)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v141; // r9
  int v142; // r8d
  __int64 cEntries; // rax
  int v144; // r15d
  POINTL *v146; // [rsp+30h] [rbp-D0h]
  char v147; // [rsp+70h] [rbp-90h]
  bool v148[3]; // [rsp+71h] [rbp-8Fh] BYREF
  int v149; // [rsp+74h] [rbp-8Ch]
  XLATEOBJ *v150; // [rsp+78h] [rbp-88h] BYREF
  int v151; // [rsp+80h] [rbp-80h]
  signed int v152; // [rsp+84h] [rbp-7Ch]
  HDC v153; // [rsp+88h] [rbp-78h]
  HDC v154; // [rsp+90h] [rbp-70h] BYREF
  XLATEOBJ *v155; // [rsp+98h] [rbp-68h]
  __int64 v156; // [rsp+A0h] [rbp-60h]
  int v157; // [rsp+A8h] [rbp-58h]
  int v158; // [rsp+ACh] [rbp-54h]
  unsigned int v159; // [rsp+B0h] [rbp-50h]
  int v160; // [rsp+B8h] [rbp-48h] BYREF
  int v161; // [rsp+BCh] [rbp-44h]
  int v162; // [rsp+C0h] [rbp-40h]
  int v163; // [rsp+C4h] [rbp-3Ch]
  unsigned __int64 v164; // [rsp+C8h] [rbp-38h] BYREF
  LONG v165; // [rsp+D0h] [rbp-30h]
  LONG v166; // [rsp+D4h] [rbp-2Ch]
  DC *v167[6]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v168; // [rsp+108h] [rbp+8h]
  int v169; // [rsp+110h] [rbp+10h]
  int v170; // [rsp+114h] [rbp+14h]
  float v171[2]; // [rsp+118h] [rbp+18h] BYREF
  char *v172; // [rsp+120h] [rbp+20h] BYREF
  int v173; // [rsp+128h] [rbp+28h]
  int v174; // [rsp+12Ch] [rbp+2Ch]
  _QWORD v175[6]; // [rsp+130h] [rbp+30h] BYREF
  struct MATRIX *v176; // [rsp+160h] [rbp+60h] BYREF
  int v177; // [rsp+168h] [rbp+68h]
  int v178; // [rsp+16Ch] [rbp+6Ch]
  SURFACE *v179; // [rsp+170h] [rbp+70h]
  RECTL v180; // [rsp+180h] [rbp+80h]
  __int64 v181; // [rsp+190h] [rbp+90h] BYREF
  __int64 v182; // [rsp+198h] [rbp+98h] BYREF
  __int64 v183; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v184; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v185; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v186; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v187; // [rsp+1C0h] [rbp+C0h]
  __m128i v188[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v189[2]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v190; // [rsp+220h] [rbp+120h]
  __int64 v191; // [rsp+228h] [rbp+128h]
  char v192; // [rsp+230h] [rbp+130h]
  int v193; // [rsp+234h] [rbp+134h]
  int v194; // [rsp+258h] [rbp+158h]
  __int128 v195; // [rsp+260h] [rbp+160h]
  int v196; // [rsp+270h] [rbp+170h]
  __int64 v197; // [rsp+278h] [rbp+178h]
  __int64 v198; // [rsp+280h] [rbp+180h]
  char v199[32]; // [rsp+288h] [rbp+188h] BYREF
  __int16 v200; // [rsp+2A8h] [rbp+1A8h]
  __int64 v201; // [rsp+2B0h] [rbp+1B0h]
  __int64 v202; // [rsp+2B8h] [rbp+1B8h]
  char v203[32]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int16 v204; // [rsp+2E0h] [rbp+1E0h]
  __int64 v205; // [rsp+2E8h] [rbp+1E8h]
  __int128 v206; // [rsp+2F0h] [rbp+1F0h]
  __int64 v207; // [rsp+300h] [rbp+200h]
  __int64 v208; // [rsp+308h] [rbp+208h]
  __int64 v209; // [rsp+310h] [rbp+210h]
  __int64 v210; // [rsp+318h] [rbp+218h]
  RECTL v211; // [rsp+320h] [rbp+220h] BYREF
  POINTL v212[2]; // [rsp+330h] [rbp+230h] BYREF
  RECTL v213; // [rsp+340h] [rbp+240h] BYREF
  RECTL v214; // [rsp+350h] [rbp+250h] BYREF

  v12 = a6;
  v13 = a8;
  v14 = a1;
  v15 = a7;
  v148[0] = (a11 & 4) != 0;
  v154 = a1;
  v18 = a5;
  v149 = a5;
  v153 = a6;
  v151 = a8;
  if ( (a11 & 4) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v18 = v149;
    v12 = v153;
    v14 = v154;
    if ( ThreadWin32Thread )
      *(_DWORD *)(ThreadWin32Thread + 328) |= 8u;
    else
      v148[0] = 0;
  }
  v20 = 0;
  if ( (a9 & 0x40000000) == 0 )
  {
    v152 = a9 & 0xDFFFFFFF;
    v159 = 0;
    v21 = a9 & 0x5FFFFFFF;
    DCOBJ::DCOBJ((DCOBJ *)v167, v14);
    if ( !v167[0] || (*((_DWORD *)v167[0] + 9) & 0x10000) != 0 )
      goto LABEL_247;
    if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v21 != 16711778 && v21 != 66 )
      bSpDwmValidateSurface((struct XDCOBJ *)v167, left, top, a4, v149);
    DCOBJ::DCOBJ((DCOBJ *)v175, v153);
    if ( !v175[0] )
    {
LABEL_246:
      DCOBJ::~DCOBJ((DCOBJ *)v175);
LABEL_247:
      DCOBJ::~DCOBJ((DCOBJ *)v167);
      goto LABEL_248;
    }
    bSpDwmValidateSurface((struct XDCOBJ *)v175, a7, a8, a4, v149);
    v22 = v175[0];
    v23 = v167[0];
    v24 = *((_QWORD *)v167[0] + 122);
    v25 = *(_DWORD *)(v24 + 108);
    if ( (((unsigned __int8)v25 ^ *(_BYTE *)(*(_QWORD *)(v175[0] + 976LL) + 108LL)) & 7) != 0
      && (v152 < 0 && (v25 & 1) != 0 || (v25 & 9) == 9) )
    {
      v26 = *(_QWORD *)(v24 + 308);
      v27 = DC::dwSetLayout(v167[0], -1, 0);
      v23 = v167[0];
      v22 = v175[0];
      left = v26 - a4 - left;
      v159 = v27;
      v13 = v151;
      v152 = 0x80000000;
    }
    else
    {
      v152 = 0;
    }
    v173 = *(_DWORD *)(*((_QWORD *)v23 + 122) + 208LL);
    v174 = *(_DWORD *)(*((_QWORD *)v23 + 122) + 108LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v23 + 122) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v172, (struct XDCOBJ *)v167, 0x204u, 0);
      v22 = v175[0];
    }
    else
    {
      v172 = (char *)v23 + 320;
    }
    v177 = *(_DWORD *)(*(_QWORD *)(v22 + 976) + 208LL);
    v178 = *(_DWORD *)(*(_QWORD *)(v22 + 976) + 108LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v22 + 976) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v176, (struct XDCOBJ *)v175, 0x204u, 0);
      v28 = v176;
    }
    else
    {
      v28 = (struct MATRIX *)(v22 + 320);
      v176 = v28;
    }
    if ( (*((_DWORD *)v172 + 8) & 1) == 0 || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v172, v28) )
    {
      v20 = GreStretchBltInternal(v154, left, top, a4, v149, v153, a7, v13, a4, v149, v21, a10, 0);
      goto LABEL_244;
    }
    v29 = v149;
    x = a7 + a4;
    v212[0].x = a7;
    v212[0].y = v13;
    y = v13 + v149;
    v212[1].x = a7 + a4;
    v212[1].y = v13 + v149;
    if ( (*((_BYTE *)v176 + 32) & 0x43) != 0x43 )
    {
      bCvtPts1(v176, v212, 2LL);
      y = v212[1].y;
      x = v212[1].x;
      v29 = v149;
      v13 = v212[0].y;
      v15 = v212[0].x;
    }
    if ( v178 )
    {
      ++v15;
      ++x;
      v212[0].x = v15;
      v212[1].x = x;
    }
    if ( v15 > x )
    {
      v212[0].x = x;
      v212[1].x = v15;
    }
    if ( v13 > y )
    {
      v212[0].y = y;
      v212[1].y = v13;
    }
    bottom = (unsigned int)(v29 + top);
    v211.left = left;
    right = left + a4;
    v211.top = top;
    v211.right = left + a4;
    v211.bottom = v29 + top;
    if ( (v172[32] & 0x43) != 0x43 )
    {
      bCvtPts1(v172, &v211, 2LL);
      bottom = (unsigned int)v211.bottom;
      right = v211.right;
      top = v211.top;
      left = v211.left;
    }
    if ( v174 )
    {
      ++left;
      ++right;
      v211.left = left;
      v211.right = right;
    }
    if ( left > right )
    {
      v34 = left;
      v211.left = right;
      left = right;
      v211.right = v34;
      right = v34;
    }
    if ( top > (int)bottom )
    {
      v35 = top;
      v211.top = bottom;
      top = bottom;
      v211.bottom = v35;
      bottom = v35;
    }
    if ( left == right || top == (_DWORD)bottom )
    {
      v20 = 1;
      goto LABEL_244;
    }
    v36 = v167[0];
    v37 = *((_DWORD *)v167[0] + 9);
    if ( (v37 & 0xE0) != 0 )
    {
      if ( (v37 & 0x20) != 0 )
      {
        ERECTL::operator|=((char *)v167[0] + 1064, &v211, bottom);
        v36 = v167[0];
      }
      if ( (*((_DWORD *)v36 + 9) & 0x80u) != 0 )
        ERECTL::operator|=((char *)v36 + 1096, &v211, bottom);
    }
    v191 = 0LL;
    v192 = 0;
    v193 = 0;
    v194 = 0;
    v197 = 0LL;
    v198 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v199);
    v200 = 256;
    v201 = 0LL;
    v202 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v203);
    v204 = 256;
    memset(v189, 0, sizeof(v189));
    v195 = 0LL;
    v206 = 0LL;
    v190 = 0LL;
    v196 = 0;
    v205 = 0LL;
    v207 = 0LL;
    v210 = 0LL;
    v208 = 0LL;
    v209 = 0LL;
    v197 = 0LL;
    v201 = 0LL;
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v189, (struct XDCOBJ *)v167, (struct XDCOBJ *)v175, 0) )
    {
      v144 = XDCOBJ::bFullScreen((XDCOBJ *)v175);
      v20 = XDCOBJ::bFullScreen((XDCOBJ *)v167) | v144;
      goto LABEL_241;
    }
    v39 = v167[0];
    v40 = *((_QWORD *)v167[0] + 62);
    v179 = (SURFACE *)v40;
    if ( !v40 )
      goto LABEL_239;
    v41 = *(_QWORD *)(v40 + 128);
    v42 = *((_QWORD *)v167[0] + 11);
    v43 = (a9 & 0x5FFFFFFFu) >> 16;
    v151 = (v43 << 8) | v43;
    if ( ((v43 ^ (unsigned __int8)(16 * v43)) & 0xF0) != 0 )
    {
      v44 = *((_QWORD *)v167[0] + 122);
      v45 = (char *)v167[0] + 1200;
      v168 = (__int64)v167[0] + 1200;
      if ( (*(_DWORD *)(v44 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v167[0], *(_QWORD *)(v44 + 160));
        v45 = (char *)v168;
        v39 = v167[0];
      }
      v38 = *((_QWORD *)v39 + 122);
      v46 = *(_DWORD *)(v38 + 152);
      if ( (v46 & 1) != 0 || (*((_DWORD *)v39 + 79) & 1) != 0 )
      {
        *(_DWORD *)(v38 + 152) = v46 & 0xFFFFFFFE;
        *((_DWORD *)v167[0] + 79) &= ~1u;
        EBRUSHOBJ::vInitBrush(v45, v167[0], *((_QWORD *)v167[0] + 17), v42, v41, v40, 1);
        v39 = v167[0];
      }
    }
    else
    {
      v168 = 0LL;
    }
    v47 = (_DWORD *)((char *)v39 + 1024);
    v48 = v175[0];
    if ( (*((_DWORD *)v39 + 10) & 1) == 0 )
      v47 = (_DWORD *)((char *)v39 + 1016);
    v49 = (unsigned int)(*v47 + v211.left);
    v211.left += *v47;
    v211.right += *v47;
    v50 = (unsigned int)(v47[1] + v211.top);
    v211.top += v47[1];
    v211.bottom += v47[1];
    v51 = *(_QWORD *)(v175[0] + 496LL);
    v156 = v51;
    if ( !v51 )
      goto LABEL_239;
    if ( (a11 & 2) != 0 )
    {
LABEL_82:
      v56 = (_DWORD *)(v48 + 1024);
      v57 = *(_QWORD *)(v51 + 128);
      if ( (*(_DWORD *)(v48 + 40) & 1) == 0 )
        v56 = (_DWORD *)(v48 + 1016);
      v58 = 0;
      v59 = 0;
      v60 = v50 - *(_DWORD *)(v48 + 8LL * (*(_DWORD *)(v48 + 40) & 1) + 1020) - v212[0].y;
      v61 = v49 - *v56 - v212[0].x;
      v62 = *(_QWORD *)(v156 + 48);
      v169 = v61;
      v170 = v60;
      if ( v62 && v156 == *(_QWORD *)(v62 + 2528) && (*(_DWORD *)(v62 + 40) & 0x20000) != 0 )
      {
        v59 = *(_DWORD *)(v62 + 2560);
        v58 = *(_DWORD *)(v62 + 2564);
      }
      v63 = v211.bottom;
      if ( v59 + v61 > (int)v49 )
        LODWORD(v49) = v59 + v61;
      v211.left = v49;
      if ( v60 + v58 > (int)v50 )
        LODWORD(v50) = v60 + v58;
      v211.top = v50;
      v64 = v59 + v61 + *(_DWORD *)(v156 + 56);
      v65 = (unsigned int)v211.right;
      if ( v64 < v211.right )
        v65 = (unsigned int)v64;
      v211.right = v65;
      if ( v58 + v60 + *(_DWORD *)(v156 + 60) < v211.bottom )
        v63 = v58 + v60 + *(_DWORD *)(v156 + 60);
      v211.bottom = v63;
      if ( (int)v49 < (int)v65 && (int)v50 < v63 )
      {
        v153 = 0LL;
        if ( (int)v49 >= *((_DWORD *)v39 + 250)
          && (int)v65 <= *((_DWORD *)v39 + 252)
          && (int)v50 >= *((_DWORD *)v39 + 251)
          && v63 <= *((_DWORD *)v39 + 253) )
        {
LABEL_104:
          if ( (*((_DWORD *)v39 + 9) & 0xE0) != 0 )
          {
            v188[0] = (__m128i)v211;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v167, (struct ECLIPOBJ *)v65, v188);
            LODWORD(v50) = v211.top;
            LODWORD(v49) = v211.left;
            v39 = v167[0];
            v48 = v175[0];
          }
          v212[0].x = v49 - v61;
          v212[0].y = v50 - v60;
          v67 = 0LL;
          v68 = *((_QWORD *)v39 + 62);
          v150 = 0LL;
          if ( *(_QWORD *)(v48 + 496) == v68 )
          {
            v155 = 0LL;
            v20 = 1;
            goto LABEL_153;
          }
          v69 = *(_QWORD *)(v48 + 88);
          v149 = a10;
          if ( a10 == -1 )
            v149 = *(_DWORD *)(*(_QWORD *)(v48 + 976) + 180LL);
          v70 = *((_QWORD *)v39 + 122);
          v71 = *(_DWORD *)(v70 + 176);
          v158 = *(_DWORD *)(v70 + 184);
          LODWORD(v155) = *((_DWORD *)v39 + 30);
          v157 = v71;
          if ( v57 )
          {
            if ( v41 )
            {
              v72 = *(_QWORD *)(v57 + 120);
              if ( v72 == v57 )
                v73 = *(_DWORD *)(v57 + 32);
              else
                v73 = *(_DWORD *)(v72 + 32);
              v74 = *(_QWORD *)(v41 + 120);
              if ( v74 == v41 )
                v75 = *(_DWORD *)(v41 + 32);
              else
                v75 = *(_DWORD *)(v74 + 32);
              if ( v73 != v75 )
              {
                v76 = *(_DWORD *)(v57 + 56);
                v181 = v42;
                v182 = v69;
                v186 = v41;
                v183 = ghsemPalette;
                GreAcquireSemaphore(ghsemPalette);
                v77 = *(_QWORD *)(v57 + 120);
                v78 = 0;
                while ( 1 )
                {
                  if ( v77 == v57 )
                    v79 = *(_DWORD *)(v57 + 32);
                  else
                    v79 = *(_DWORD *)(v77 + 32);
                  if ( *((_DWORD *)&xlateTable + 8 * v76 + 4) == v79 )
                  {
                    v80 = XEPALOBJ::ulTime((XEPALOBJ *)&v186);
                    if ( *(_DWORD *)(v81 + v82 + 20) == v80 )
                    {
                      v83 = XEPALOBJ::ulTime((XEPALOBJ *)&v181);
                      if ( *(_DWORD *)(v84 + v85 + 28) == v83 )
                      {
                        v86 = *(XLATEOBJ **)(v84 + v85 + 8);
                        v150 = v86;
                        if ( (v86[3].flXlate & 0x6000) == 0 )
                        {
                          v87 = v86[3].flXlate & 0x100;
                          if ( (v86->flXlate & 4) != 0 )
                          {
                            if ( v149 == v86[1].iUniq )
                            {
                              v88 = XEPALOBJ::ulTime((XEPALOBJ *)&v182);
                              if ( *(_DWORD *)(v84 + v85 + 24) == v88 )
                              {
LABEL_130:
                                _InterlockedIncrement((volatile signed __int32 *)(v84 + v85));
                                *(_DWORD *)(v57 + 56) = v76;
                                SEMOBJ::~SEMOBJ((SEMOBJ *)&v183);
                                v39 = v167[0];
                                v48 = v175[0];
                                v67 = v150;
                                goto LABEL_149;
                              }
                            }
                            if ( !v87 )
                              goto LABEL_136;
                          }
                          else if ( !v87 )
                          {
                            goto LABEL_130;
                          }
                          if ( v158 == v86[1].flXlate && v157 == *(_DWORD *)&v86[1].iSrcType )
                            goto LABEL_130;
                        }
                      }
                    }
                  }
LABEL_136:
                  ++v78;
                  v76 = ((_BYTE)v76 + 1) & 7;
                  if ( v78 >= 8 )
                  {
                    if ( ghsemPalette )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                      GreReleaseSemaphoreInternal(ghsemPalette);
                    }
LABEL_139:
                    LODWORD(v146) = v158;
                    XlateObject = (XLATEOBJ *)CreateXlateObject(0LL, (int)v155, v57, v41, v69, v42, v146, v157, v149, 0);
                    v150 = XlateObject;
                    v67 = XlateObject;
                    if ( XlateObject )
                    {
                      if ( v57 && v41 && !_bittest((const signed __int32 *)&XlateObject[3].flXlate, 9u) )
                        EXLATEOBJ::vAddToCache(&v150, v57, v41, v69, v42);
                      v39 = v167[0];
                      v48 = v175[0];
LABEL_149:
                      v20 = 1;
                    }
                    else
                    {
                      v39 = v167[0];
                      v48 = v175[0];
                      v20 = 0;
                    }
                    v91 = *((_DWORD *)v39 + 9);
                    v155 = v67;
                    if ( (v91 & 1) == 0 )
                    {
                      v212[1].x = v211.right - v169;
                      v212[1].y = v211.bottom - v170;
                    }
                    if ( v20 )
                    {
LABEL_153:
                      v92 = 0;
                      v93 = v179;
                      v94 = 0;
                      v95 = v211;
                      v180 = v211;
                      v96 = *((int *)v179 + 28) < 0;
                      v187 = *(_OWORD *)&v212[0].x;
                      v214 = v211;
                      v213 = *(RECTL *)&v212[0].x;
                      v160 = 0;
                      v161 = 0;
                      if ( v96 )
                      {
                        v97 = (_DWORD *)*((_QWORD *)v179 + 6);
                        if ( v97 )
                        {
                          if ( (v97[10] & 0x20000) != 0 )
                          {
                            v92 = v97[640];
                            v94 = v97[641];
                            v160 = v92;
                            v161 = v94;
                          }
                        }
                      }
                      v98 = 0;
                      v99 = v92 + *((_DWORD *)v179 + 14);
                      v164 = 0LL;
                      v100 = 0;
                      v162 = v99;
                      v96 = *(int *)(v156 + 112) < 0;
                      v163 = v94 + *((_DWORD *)v179 + 15);
                      if ( v96 )
                      {
                        v101 = *(_DWORD **)(v156 + 48);
                        if ( v101 )
                        {
                          if ( (v101[10] & 0x20000) != 0 )
                          {
                            v98 = v101[640];
                            v100 = v101[641];
                            v164 = __PAIR64__(v100, v98);
                          }
                        }
                      }
                      v165 = v98 + *(_DWORD *)(v156 + 56);
                      v166 = v100 + *(_DWORD *)(v156 + 60);
                      v102 = *((_DWORD *)v39 + 130);
                      if ( (v102 & 1) != 0 && (v102 & 2) == 0 )
                      {
                        v103 = 1.0 / *((float *)v39 + 132);
                        v171[0] = 1.0 / COERCE_FLOAT(*(_QWORD *)((char *)v39 + 524));
                        v171[1] = v103;
                        ERECTL::vScale((ERECTL *)&v160, (const struct POINTFL *)v171);
                        ERECTL::vScale((ERECTL *)&v214, (const struct POINTFL *)v171);
                        v39 = v167[0];
                        v48 = v175[0];
                        v95 = v214;
                      }
                      v104 = *(_DWORD *)(v48 + 520);
                      if ( (v104 & 1) != 0 && (v104 & 2) == 0 )
                      {
                        v105 = 1.0 / COERCE_FLOAT(*(_QWORD *)(v48 + 524));
                        *((float *)&v154 + 1) = 1.0 / *(float *)(v48 + 528);
                        *(float *)&v154 = v105;
                        ERECTL::vScale((ERECTL *)&v164, (const struct POINTFL *)&v154);
                        ERECTL::vScale((ERECTL *)&v213, (const struct POINTFL *)&v154);
                        v39 = v167[0];
                        v48 = v175[0];
                        v100 = HIDWORD(v164);
                        v98 = v164;
                      }
                      v106 = *(_QWORD *)&v213.left;
                      v107 = _mm_cvtsi128_si32((__m128i)v95);
                      v213 = v95;
                      v108 = v95.top;
                      v109 = v95.right;
                      v110 = v106 - v107;
                      v111 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v95, 4));
                      v112 = v107;
                      v113 = _mm_srli_si128((__m128i)v95, 8);
                      v114 = HIDWORD(v106) - v111;
                      v115 = _mm_srli_si128((__m128i)v95, 12);
                      v116 = v160 <= v107;
                      v117 = v213.bottom;
                      if ( !v116 )
                        v112 = v160;
                      v116 = v161 <= v111;
                      v118 = _mm_cvtsi128_si32(v113);
                      if ( !v116 )
                        v108 = v161;
                      v116 = v162 < v118;
                      v119 = _mm_cvtsi128_si32(v115);
                      if ( v116 )
                        v109 = v162;
                      if ( v163 < v119 )
                        v117 = v163;
                      if ( v109 >= v112 )
                      {
                        if ( v117 < v108 )
                          v108 = v117;
                      }
                      else
                      {
                        v112 = v109;
                      }
                      v121 = v110 + v112;
                      v122 = v114 + v108;
                      v123 = v110 + v109;
                      v124 = v114 + v117;
                      if ( v98 > v121 )
                        v121 = v98;
                      v213.left = v121;
                      if ( v100 > v122 )
                        v122 = v100;
                      v213.top = v122;
                      if ( v165 < v123 )
                        v123 = v165;
                      v213.right = v123;
                      if ( v166 < v124 )
                        v124 = v166;
                      v213.bottom = v124;
                      if ( v123 >= v121 )
                      {
                        if ( v124 < v122 )
                          v122 = v124;
                        v213.top = v122;
                      }
                      else
                      {
                        v121 = v123;
                        v213.left = v123;
                      }
                      v125 = v213;
                      v126 = v122 - v114;
                      v214.left = v121 - v110;
                      v127 = v124 - v114;
                      v214.top = v126;
                      v214.right = v123 - v110;
                      v214.bottom = v127;
                      if ( v121 - v110 >= v123 - v110 || v126 >= v127 )
                      {
                        v130 = 0;
                      }
                      else
                      {
                        v128 = *((_DWORD *)v39 + 130);
                        if ( (v128 & 1) != 0 && (v128 & 2) == 0 )
                        {
                          v184 = *(_QWORD *)((char *)v39 + 524);
                          ERECTL::vScale((ERECTL *)&v214, (const struct POINTFL *)&v184);
                          v48 = v175[0];
                        }
                        v129 = *(_DWORD *)(v48 + 520);
                        if ( (v129 & 1) != 0 && (v129 & 2) == 0 )
                        {
                          v185 = *(_QWORD *)(v48 + 524);
                          ERECTL::vScale((ERECTL *)&v213, (const struct POINTFL *)&v185);
                          v125 = v213;
                        }
                        v130 = 1;
                        v211 = v214;
                        *(RECTL *)&v212[0].x = v125;
                        ++*((_DWORD *)v93 + 23);
                        v39 = v167[0];
                        v48 = v175[0];
                      }
                      v147 = v130;
                      if ( *((_QWORD *)v39 + 6) == *(_QWORD *)(v48 + 48)
                        || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v167) && *(_QWORD *)(v131 + 3496) == v132
                        || !*(_WORD *)(v156 + 100) && !*(_QWORD *)(v156 + 24) && (*(_DWORD *)(v131 + 40) & 0x80u) == 0 )
                      {
                        if ( v151 == 52428 )
                        {
                          v135 = *((_QWORD *)v93 + 6);
                          v136 = a11 & 1;
                          if ( v136 )
                          {
                            EtwWindowRendering(
                              *((_QWORD *)v39 + 58),
                              *((_QWORD *)v39 + 59),
                              **((_QWORD **)v39 + 62),
                              (unsigned int)v180.left,
                              v180.top,
                              v180.right,
                              v180.bottom,
                              *(_QWORD *)(v48 + 464),
                              *(_QWORD *)(v48 + 472),
                              **(_QWORD **)(v48 + 496),
                              v187,
                              DWORD1(v187),
                              v187 + abs32(v180.right - v180.bottom),
                              DWORD1(v187) + abs32(v180.bottom - v180.top));
                            v93 = v179;
                            *((_WORD *)v179 + 51) |= 0x40u;
                            v137 = W32GetThreadWin32Thread(KeGetCurrentThread());
                            if ( v137 )
                              *(_DWORD *)(v137 + 328) &= ~1u;
                            GreClientRgnUpdated(0LL);
                            GreClientRgnUpdatedStable();
                            v67 = v150;
                          }
                          if ( v147 )
                          {
                            if ( (*((_DWORD *)v93 + 28) & 0x400) != 0 )
                              v138 = (*(__int64 (__fastcall **)(__int64, __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))(v135 + 2816))(
                                       (__int64)v93 + 24,
                                       v156 + 24,
                                       v153,
                                       v155,
                                       &v211,
                                       v212);
                            else
                              v138 = ((__int64 (__fastcall *)(char *, __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                                       (char *)v93 + 24,
                                       v156 + 24,
                                       v153,
                                       v155,
                                       &v211,
                                       v212);
                            v20 = v138;
                          }
                          if ( v136 )
                          {
                            *((_WORD *)v93 + 51) &= ~0x40u;
                            v139 = W32GetThreadWin32Thread(KeGetCurrentThread());
                            v67 = v150;
                            if ( v139 )
                              *(_DWORD *)(v139 + 328) |= 1u;
                          }
                        }
                        else if ( v130 )
                        {
                          v140 = SURFACE::pfnBitBlt(v93);
                          v134 = ((__int64 (__fastcall *)(char *, __int64, _QWORD, HDC, XLATEOBJ *, RECTL *, POINTL *, _QWORD, __int64, char *, int))v140)(
                                   (char *)v93 + 24,
                                   v141 + 24,
                                   0LL,
                                   v153,
                                   v155,
                                   &v211,
                                   v212,
                                   0LL,
                                   v168,
                                   (char *)v39 + 1192,
                                   v142);
                          goto LABEL_233;
                        }
                      }
                      else if ( v130 )
                      {
                        v133 = v189;
                        if ( (*(_DWORD *)(*((_QWORD *)v93 + 6) + 40LL) & 0x80u) == 0 )
                          v133 = 0LL;
                        v134 = SimBitBlt(
                                 (SURFOBJ *)((char *)v93 + 24),
                                 (SURFOBJ *)(v156 + 24),
                                 v155,
                                 &v211,
                                 v212,
                                 0LL,
                                 v168,
                                 (POINTL *)v39 + 149,
                                 v151,
                                 (__int64)v133);
LABEL_233:
                        v20 = v134;
                      }
                    }
                    if ( v67 )
                    {
                      cEntries = (int)v67[1].cEntries;
                      if ( (int)cEntries >= 0 )
                      {
                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v189);
                        goto LABEL_244;
                      }
                      if ( (_DWORD)cEntries == -1 )
                      {
                        FreeThreadBufferWithTag(v67);
                        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v189);
                        goto LABEL_244;
                      }
                    }
LABEL_241:
                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v189);
                    goto LABEL_244;
                  }
                }
              }
            }
            else
            {
              if ( (*(_DWORD *)(v57 + 24) & 0x800) == 0 )
                goto LABEL_139;
              v90 = *(_QWORD *)(v42 + 80);
              if ( v90 )
              {
                if ( v90 != *(_QWORD *)(v42 + 72) )
                  goto LABEL_139;
              }
            }
          }
          else if ( v41 )
          {
            if ( (*(_DWORD *)(v41 + 24) & 0x800) == 0 )
              goto LABEL_139;
            v120 = *(_QWORD *)(v42 + 80);
            if ( v120 )
            {
              if ( v120 != *(_QWORD *)(v42 + 72) )
                goto LABEL_139;
            }
          }
          v67 = xloIdent;
          v150 = xloIdent;
          goto LABEL_149;
        }
        v153 = (HDC)((char *)v39 + 1768);
        v66 = XDCOBJ::prgnEffRao((XDCOBJ *)v167);
        XCLIPOBJ::vSetup((DC *)((char *)v39 + 1768), v66, (struct ERECTL *)&v211, 2);
        v211 = *(RECTL *)((char *)v39 + 1772);
        if ( !ERECTL::bEmpty((ERECTL *)&v211) )
        {
          v39 = v167[0];
          v48 = v175[0];
          LODWORD(v50) = v211.top;
          LODWORD(v49) = v211.left;
          goto LABEL_104;
        }
      }
LABEL_239:
      v20 = 1;
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v189);
      goto LABEL_244;
    }
    if ( *(_DWORD *)(v51 + 656) )
    {
      if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v51 + 656) )
        goto LABEL_108;
      v39 = v167[0];
      v48 = v175[0];
      v50 = (unsigned int)v211.top;
      v49 = (unsigned int)v211.left;
    }
    v52 = *(_DWORD *)(v51 + 112);
    if ( (v52 & 0x800) != 0 )
    {
      v53 = UserSurfaceAccessCheck(*(_QWORD *)(v51 + 648));
    }
    else
    {
      if ( (v52 & 0x10000000) == 0 )
      {
LABEL_73:
        if ( (*(_DWORD *)(v40 + 116) & 8) == 0 && !*(_QWORD *)(v40 + 224)
          || !_bittest16((const signed __int16 *)(v40 + 102), 9u) )
        {
          v54 = *(_DWORD *)(v40 + 112);
          if ( (v54 & 0x800) != 0 )
          {
            v55 = UserSurfaceAccessCheck(*(_QWORD *)(v40 + 648));
          }
          else
          {
            if ( (v54 & 0x10000000) == 0 )
              goto LABEL_82;
            v55 = UserScreenAccessCheck(v47, v38, v50, v49);
          }
          if ( v55 )
          {
            v39 = v167[0];
            v48 = v175[0];
            LODWORD(v50) = v211.top;
            LODWORD(v49) = v211.left;
            goto LABEL_82;
          }
        }
        goto LABEL_108;
      }
      v53 = UserScreenAccessCheck(v47, v38, v50, v49);
    }
    if ( v53 )
    {
      v39 = v167[0];
      v48 = v175[0];
      v50 = (unsigned int)v211.top;
      v49 = (unsigned int)v211.left;
      goto LABEL_73;
    }
LABEL_108:
    EngSetLastError(6u);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v189);
LABEL_244:
    if ( v152 )
      DC::dwSetLayout(v167[0], -1, v159);
    goto LABEL_246;
  }
  v20 = GreStretchBltInternal(
          v14,
          left,
          top,
          a4,
          v18,
          v12,
          a7,
          a8,
          a4,
          v18,
          a9 & 0xDFFFFFFF,
          a10,
          (a9 & 0x20000000) != 0 ? 2 : 0);
LABEL_248:
  NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState(v148);
  return v20;
}
