/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C00ADD74
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C00ADAB0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     EngCopyBits @ 0x1C007EAA0 (EngCopyBits.c)
 *     bCvtPts1 @ 0x1C0084C60 (bCvtPts1.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00872D0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00A9A78 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF240 (GreSetDIBitsToDeviceInternal.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     NtGdiPatBlt @ 0x1C00B3F50 (NtGdiPatBlt.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0109380 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     GreCreateDIBitmapComp @ 0x1C0121C84 (GreCreateDIBitmapComp.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C0169DAC (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C0169E3C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A038 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BCCFC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BCDB8 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BEFF8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02C0528 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        int a13,
        unsigned int a14,
        unsigned int a15,
        __int64 a16)
{
  unsigned int v16; // r14d
  unsigned int v19; // edi
  char v20; // al
  __int64 v21; // r11
  int v22; // r9d
  unsigned int v23; // eax
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned int v28; // edx
  __int64 v29; // rdi
  int v30; // ecx
  int v31; // r15d
  signed int v32; // eax
  BOOL v33; // edi
  __int64 v34; // rcx
  int v35; // ecx
  int v36; // r10d
  int v37; // r12d
  unsigned int v38; // r15d
  __int64 v39; // r11
  unsigned int v40; // r8d
  __int64 v41; // rsi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  int v47; // eax
  unsigned int v49; // edx
  int v50; // r9d
  unsigned __int64 v51; // rdx
  unsigned int v52; // r13d
  int v53; // ebx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  unsigned int v56; // edi
  bool v57; // zf
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rsi
  BOOL v61; // eax
  int v62; // edx
  int v63; // r8d
  int v64; // r9d
  char v65; // cl
  int v66; // edx
  unsigned int v67; // r8d
  struct SURFACE *v68; // r13
  __int64 v69; // rdi
  struct PALETTE *v70; // rbx
  int v71; // r15d
  int v72; // esi
  XLATEOBJ *v73; // rdi
  __int64 v74; // r8
  XLATEOBJ *XlateObject; // rax
  int v76; // r8d
  _DWORD *v77; // rcx
  int v78; // r9d
  int v79; // eax
  unsigned int v80; // r15d
  int v81; // ecx
  char v82; // bl
  int v83; // edx
  int v84; // eax
  struct REGION *v85; // rax
  struct ECLIPOBJ *v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  BOOL (__stdcall *v89)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v90; // r11d
  int v91; // ecx
  int v92; // ecx
  __int64 v93; // r9
  unsigned int v94; // ebx
  int v95; // r12d
  int v96; // edi
  HDC CompatibleDC; // r15
  __int64 DIBitmapComp; // rax
  __int64 v99; // rsi
  int v100; // ebx
  unsigned int v101; // [rsp+80h] [rbp-80h]
  unsigned int v102; // [rsp+84h] [rbp-7Ch]
  int v103; // [rsp+8Ch] [rbp-74h]
  unsigned int v104; // [rsp+90h] [rbp-70h]
  int v105; // [rsp+94h] [rbp-6Ch]
  unsigned int v106; // [rsp+98h] [rbp-68h]
  char v107; // [rsp+9Ch] [rbp-64h]
  unsigned int v108; // [rsp+A0h] [rbp-60h]
  unsigned int v109; // [rsp+A4h] [rbp-5Ch]
  int v110; // [rsp+A4h] [rbp-5Ch]
  unsigned int v111; // [rsp+A8h] [rbp-58h]
  unsigned int v112; // [rsp+A8h] [rbp-58h]
  __int128 v113; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v114; // [rsp+C0h] [rbp-40h]
  unsigned int v115; // [rsp+D0h] [rbp-30h]
  unsigned int v116; // [rsp+D4h] [rbp-2Ch]
  unsigned int v117; // [rsp+D8h] [rbp-28h]
  int v118; // [rsp+DCh] [rbp-24h]
  int v119; // [rsp+E0h] [rbp-20h]
  int v120; // [rsp+E4h] [rbp-1Ch]
  int v121; // [rsp+E8h] [rbp-18h]
  __int64 v122; // [rsp+F0h] [rbp-10h]
  int v123; // [rsp+F8h] [rbp-8h]
  __int64 v124; // [rsp+100h] [rbp+0h] BYREF
  int v125; // [rsp+108h] [rbp+8h]
  unsigned int v126; // [rsp+110h] [rbp+10h]
  __int64 v127; // [rsp+118h] [rbp+18h] BYREF
  char v128; // [rsp+120h] [rbp+20h]
  int v129; // [rsp+124h] [rbp+24h]
  _QWORD v130[2]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v131[32]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v132; // [rsp+158h] [rbp+58h] BYREF
  __int64 v133; // [rsp+168h] [rbp+68h] BYREF
  int v134; // [rsp+170h] [rbp+70h]
  int v135; // [rsp+174h] [rbp+74h]
  DC *v136[2]; // [rsp+178h] [rbp+78h] BYREF
  _OWORD v137[2]; // [rsp+188h] [rbp+88h] BYREF
  unsigned __int64 v138; // [rsp+1A8h] [rbp+A8h] BYREF
  int v139; // [rsp+1B4h] [rbp+B4h]
  _BYTE v140[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v141[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v142[32]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v143; // [rsp+210h] [rbp+110h]
  int v144; // [rsp+230h] [rbp+130h] BYREF
  int v145; // [rsp+234h] [rbp+134h]
  int v146; // [rsp+238h] [rbp+138h]
  int v147; // [rsp+23Ch] [rbp+13Ch]
  struct tagRGBQUAD *v148; // [rsp+240h] [rbp+140h] BYREF
  int v149; // [rsp+248h] [rbp+148h]
  int v150; // [rsp+24Ch] [rbp+14Ch]
  RECTL prclDest; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v152[4]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v153[3]; // [rsp+264h] [rbp+164h] BYREF
  __int64 v154; // [rsp+298h] [rbp+198h]
  __int64 v155; // [rsp+2B0h] [rbp+1B0h]
  int v156; // [rsp+2B8h] [rbp+1B8h]
  int v157; // [rsp+2E0h] [rbp+1E0h]
  __int64 v158; // [rsp+2F0h] [rbp+1F0h]

  v16 = 0;
  v103 = a12;
  v19 = 0;
  *(_QWORD *)&prclDest.left = a10;
  v122 = a16;
  v121 = a2;
  v119 = a4;
  v20 = gajRop3[BYTE2(a13)];
  v120 = a3;
  v123 = a5;
  v104 = 0;
  if ( (v20 & 0xD4) == 0 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a5, a13);
  v130[0] = 0LL;
  v130[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v131);
  XDCOBJ::vLock((XDCOBJ *)v130, a1);
  if ( !v130[0]
    || !a11
    || (v21 = *(_QWORD *)&prclDest.left) == 0
    || (v22 = a12, a12 > 2)
    || a14 < 0xC
    || (v23 = *(_DWORD *)a11, v126 = v23, a14 < v23)
    || v23 < 0x28
    || *(int *)(a11 + 4) <= 0
    || !*(_DWORD *)(a11 + 8) )
  {
LABEL_76:
    MDCOBJ::~MDCOBJ((MDCOBJ *)v130);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v131);
    return v19;
  }
  v24 = *(_QWORD *)(v130[0] + 976LL);
  v25 = *(unsigned __int8 *)(v24 + 215);
  v134 = *(_DWORD *)(v24 + 208);
  v26 = *(_QWORD *)(v130[0] + 976LL);
  v118 = v25;
  v135 = *(_DWORD *)(v26 + 108) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v130[0] + 976LL) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v133, (struct XDCOBJ *)v130, 0x204u, 0);
    v27 = v133;
    v22 = a12;
    v21 = *(_QWORD *)&prclDest.left;
  }
  else
  {
    v27 = v130[0] + 320LL;
    v133 = v130[0] + 320LL;
  }
  v28 = *(_DWORD *)(a11 + 16);
  if ( v28 - 4 > 1 )
  {
    v29 = v122;
  }
  else
  {
    if ( !(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v130, v28) )
      goto LABEL_285;
    if ( BYTE2(a13) != 204 )
      goto LABEL_285;
    if ( (*(_DWORD *)(v27 + 32) & 1) == 0 )
      goto LABEL_285;
    if ( v22 )
      goto LABEL_285;
    v29 = v122;
    if ( v122 )
      goto LABEL_285;
  }
  if ( a4 == a8 && (v30 = a9, v123 == a9) && a9 > 0 )
  {
    v31 = a7;
    if ( a8 > 0 && !(a7 | a6) && BYTE2(a13) == 204 && v118 != 4 && (*(_DWORD *)(v27 + 32) & 2) != 0 )
    {
      v32 = abs32(*(_DWORD *)(a11 + 8));
      if ( a9 >= v32 )
        v30 = v32;
      v16 = GreSetDIBitsToDeviceInternal(a1, v123, a6, a7, a7, v30, v21, a11, v22, a15, a14, 1, v29);
      goto LABEL_285;
    }
  }
  else
  {
    v31 = a7;
  }
  v33 = 0;
  if ( v22 == 1 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v141);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v140, (struct XDCOBJ *)v130, 0);
    v34 = *(_QWORD *)(v130[0] + 496LL);
    if ( v34 )
      v33 = *(_DWORD *)(v34 + 96) == 1;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v140);
    if ( v141[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v141);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v142);
    v27 = v133;
    v22 = a12;
  }
  if ( BYTE2(a13) != 204 || (*(_DWORD *)(v27 + 32) & 1) == 0 || v33 )
  {
    v95 = *(_DWORD *)(a11 + 8);
    if ( v95 <= 0 )
      v96 = v31;
    else
      v96 = v95 - v31 - a9;
    CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
    if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
      DIBitmapComp = GreCreateDIBitmapComp(a1, *(__int64 *)&prclDest.left, a11, a12, a14, a15);
    else
      DIBitmapComp = GreCreateDIBitmapReal(
                       a1,
                       4,
                       *(void **)&prclDest.left,
                       (unsigned int *)a11,
                       a12,
                       a14,
                       a15,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    v99 = DIBitmapComp;
    if ( CompatibleDC && DIBitmapComp )
    {
      GreSelectBitmap(CompatibleDC, DIBitmapComp);
      v100 = GreStretchBltInternal(a1, v121, v123, CompatibleDC, a6, v96, a8, a9, a13, 0xFFFFFF, 1);
      bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      GreDeleteObject(v99);
      if ( v100 )
        goto LABEL_284;
    }
    else
    {
      bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      GreDeleteObject(v99);
    }
    v95 = 0;
LABEL_284:
    v16 = v95;
    goto LABEL_285;
  }
  v35 = *(_DWORD *)(a11 + 8);
  v36 = *(_DWORD *)(a11 + 16);
  v37 = 1;
  v38 = 0;
  v39 = *(unsigned int *)(a11 + 4);
  v40 = *(_DWORD *)(a11 + 32);
  v41 = *(unsigned __int16 *)(a11 + 14);
  v148 = (struct tagRGBQUAD *)(a11 + v126);
  v114 = 0LL;
  v105 = v36;
  v113 = 0LL;
  v109 = v39;
  v42 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  v111 = v40;
  v102 = 0;
  if ( v35 < 0 )
    v42 = 1;
  v101 = 0;
  DWORD2(v114) = v42;
  v43 = -v35;
  v117 = 0;
  v116 = 0;
  v115 = 0;
  if ( v35 >= 0 )
    v43 = v35;
  v106 = v43;
  if ( v36 == 3 )
  {
    if ( a14 < 0x34 )
    {
      EngSetLastError(0x57u);
      v37 = 0;
LABEL_62:
      v102 = 0;
LABEL_112:
      v52 = v101;
LABEL_124:
      v53 = 0;
LABEL_142:
      if ( !v37 )
        goto LABEL_75;
      v40 = v111;
      v36 = v105;
      LODWORD(v39) = v109;
      v50 = v106;
      goto LABEL_144;
    }
    v44 = 0;
    if ( v22 != 1 )
      v44 = v22;
    v103 = v44;
    if ( (_DWORD)v41 == 16 )
    {
      LODWORD(v113) = 4;
    }
    else if ( (_DWORD)v41 == 32 )
    {
      LODWORD(v113) = 6;
    }
    else
    {
      EngSetLastError(0x57u);
      LODWORD(v39) = v109;
      v37 = 0;
    }
    v38 = 512;
    v117 = *(_DWORD *)(a11 + 40);
    v45 = v41 * (unsigned int)v39;
    v116 = *(_DWORD *)(a11 + 44);
    v148 = (struct tagRGBQUAD *)(a11 + 40);
    v115 = *(_DWORD *)(a11 + 48);
    v101 = 2;
    if ( v45 > 0xFFFFFFFF || (int)v45 + 31 < (unsigned int)v45 )
      goto LABEL_64;
    v46 = v106 * (((unsigned __int64)(unsigned int)(v45 + 31) >> 3) & 0x1FFFFFFC);
    if ( v46 <= 0xFFFFFFFF )
    {
      HIDWORD(v113) = v46;
      goto LABEL_62;
    }
    goto LABEL_63;
  }
  if ( v36 )
  {
    if ( v36 == 10 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v136, a1);
      if ( !v136[0] || !(unsigned int)DC::bIsCMYKColor(v136[0]) )
        goto LABEL_110;
      if ( (_DWORD)v41 == 1 )
      {
        v102 = 2;
        LODWORD(v113) = 1;
        v101 = 1;
      }
      else
      {
        switch ( (_DWORD)v41 )
        {
          case 4:
            LODWORD(v113) = 2;
            v102 = 16;
            break;
          case 8:
            LODWORD(v113) = 3;
            v102 = 256;
            break;
          case 0x20:
            LODWORD(v113) = 6;
            v38 = 512;
            v102 = 0;
            v101 = 16;
LABEL_104:
            v54 = v41 * v109;
            if ( v54 <= 0xFFFFFFFF && (int)v54 + 31 >= (unsigned int)v54 )
            {
              v55 = v106 * (((unsigned __int64)(unsigned int)(v54 + 31) >> 3) & 0x1FFFFFFC);
              if ( v55 <= 0xFFFFFFFF )
              {
                HIDWORD(v113) = v55;
LABEL_111:
                MDCOBJ::~MDCOBJ((MDCOBJ *)v136);
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v137);
                goto LABEL_112;
              }
              HIDWORD(v113) = -1;
            }
            EngSetLastError(0x216u);
            MDCOBJ::~MDCOBJ((MDCOBJ *)v136);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v137);
            goto LABEL_285;
          default:
LABEL_110:
            EngSetLastError(0x57u);
            v37 = 0;
            goto LABEL_111;
        }
        v101 = 1;
      }
      v38 = 1024;
      goto LABEL_104;
    }
    if ( v36 != 2 )
    {
      if ( v36 != 12 )
      {
        if ( v36 != 1 )
        {
          if ( v36 != 11 )
          {
            if ( v36 == 4 )
            {
              LODWORD(v113) = 9;
LABEL_119:
              v52 = 8;
              v50 = v43;
              v56 = 0;
              v101 = 8;
              v38 = 512;
              v102 = 0;
              v53 = 0;
              HIDWORD(v113) = *(_DWORD *)(a11 + 20);
              goto LABEL_145;
            }
            if ( v36 == 5 )
            {
              LODWORD(v113) = 10;
              goto LABEL_119;
            }
            EngSetLastError(0x57u);
            v37 = 0;
LABEL_123:
            v52 = 0;
            goto LABEL_124;
          }
          DCOBJ::DCOBJ((DCOBJ *)v136, a1);
          if ( !v136[0] || !(unsigned int)DC::bIsCMYKColor(v136[0]) )
          {
            EngSetLastError(0x57u);
            v37 = 0;
          }
          MDCOBJ::~MDCOBJ((MDCOBJ *)v136);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v137);
          if ( !v37 )
            goto LABEL_123;
        }
        if ( (_DWORD)v41 != 8 )
          EngSetLastError(0x57u);
        LODWORD(v113) = 8;
        v102 = 256;
        v57 = (_DWORD)v41 == 8;
LABEL_139:
        HIDWORD(v113) = *(_DWORD *)(a11 + 20);
        v53 = 1;
        v58 = 0;
        v101 = 1;
        if ( v57 )
          v58 = v37;
        v38 = 1024;
        v37 = v58;
        v52 = 1;
        goto LABEL_142;
      }
      DCOBJ::DCOBJ((DCOBJ *)v136, a1);
      if ( !v136[0] || !(unsigned int)DC::bIsCMYKColor(v136[0]) )
      {
        EngSetLastError(0x57u);
        v37 = 0;
      }
      MDCOBJ::~MDCOBJ((MDCOBJ *)v136);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v137);
      if ( !v37 )
        goto LABEL_123;
    }
    if ( (_DWORD)v41 != 4 )
      EngSetLastError(0x57u);
    LODWORD(v113) = 7;
    v57 = (_DWORD)v41 == 4;
    v102 = 16;
    goto LABEL_139;
  }
  switch ( (_DWORD)v41 )
  {
    case 1:
      v102 = 2;
      LODWORD(v113) = 1;
      v101 = 1;
      goto LABEL_86;
    case 4:
      LODWORD(v113) = 2;
      v102 = 16;
      goto LABEL_83;
    case 8:
      LODWORD(v113) = 3;
      v102 = 256;
LABEL_83:
      v101 = 1;
LABEL_86:
      v38 = 1024;
      goto LABEL_87;
  }
  v47 = 0;
  if ( v22 != 1 )
    v47 = v22;
  v103 = v47;
  switch ( (_DWORD)v41 )
  {
    case 0x10:
      LODWORD(v113) = 4;
      v117 = 31744;
      v116 = 992;
      v115 = 31;
      v101 = 2;
      break;
    case 0x18:
      LODWORD(v113) = 5;
      v101 = 8;
      break;
    case 0x20:
      LODWORD(v113) = 6;
      v38 = 512;
      v102 = 0;
      v101 = 8;
      goto LABEL_87;
    default:
LABEL_74:
      EngSetLastError(0x57u);
LABEL_75:
      v19 = 0;
      goto LABEL_76;
  }
  v102 = 0;
  v38 = 512;
  v103 = v47;
LABEL_87:
  v49 = v41 * v39;
  if ( (unsigned __int64)(v41 * v39) > 0xFFFFFFFF || v49 + 31 < v49 )
    goto LABEL_64;
  v50 = v106;
  v51 = v106 * (unsigned __int64)(((v49 + 31) >> 3) & 0x1FFFFFFC);
  if ( v51 <= 0xFFFFFFFF )
  {
    v52 = v101;
    v53 = 0;
    HIDWORD(v113) = v51;
LABEL_144:
    v56 = v102;
LABEL_145:
    v108 = a14 - v126;
    v59 = v122;
    if ( !v122 )
    {
      v59 = *(_QWORD *)(*(_QWORD *)(v130[0] + 976LL) + 248LL);
      v122 = v59;
    }
    v110 = *(_DWORD *)(v130[0] + 120LL);
    if ( (v110 & 0x10000000) != 0 && (!v59 || (unsigned int)(v36 - 10) > 2) )
      v110 = v110 & 0xFFFFFFF | 0x20000000;
    *(_QWORD *)((char *)&v113 + 4) = __PAIR64__(v50, v39);
    if ( v40 )
    {
      if ( v40 > v56 )
        v40 = v56;
      v112 = v40;
    }
    else
    {
      v112 = v56;
    }
    if ( a15 >= HIDWORD(v113) )
    {
      v60 = *(_QWORD *)(v130[0] + 48LL);
      v146 = v121 + v119;
      v144 = v121;
      v145 = v120;
      v147 = v120 + v123;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v138, (struct XDCOBJ *)v130, 0x204u);
      v61 = (*(_BYTE *)(v138 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v138, &v144, 2LL);
      if ( v139 )
      {
        ++v144;
        ++v146;
      }
      if ( v61 )
      {
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v144) )
        {
          v19 = a9;
          goto LABEL_76;
        }
        v65 = 0;
        v107 = 0;
        if ( v63 > v62 )
        {
          v144 = v62;
          v146 = v63;
          if ( !v139 )
          {
            v144 = v64 + v62;
            v146 = v63 + 1;
          }
          v65 = v64;
          v107 = v64;
        }
        v66 = v145;
        if ( v145 > v147 )
        {
          v145 = v147 + 1;
          v107 = v65 ^ 2;
          v147 = v66 + 1;
        }
        v125 = 0;
        v124 = 0LL;
        if ( !v103 )
          v37 = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v124, v52, v56, 0LL, v117, v116, v115, v38, v64) != 0 ? v37 : 0;
        if ( !v37 )
        {
LABEL_271:
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v124);
          v19 = v104;
          goto LABEL_76;
        }
        v141[0] = 0LL;
        v141[1] = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v142);
        v143 = 256;
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v140, (struct XDCOBJ *)v130, 0);
        DWORD2(v114) |= 8 * (*(_DWORD *)(*(_QWORD *)(v130[0] + 48LL) + 40LL) & 0x8000);
        *(_QWORD *)&v114 = 0LL;
        v127 = 0LL;
        v128 = 0;
        v129 = 0;
        if ( v53 )
        {
          *(_QWORD *)&v132 = 0LL;
          BYTE8(v132) = 0;
          *(_OWORD *)v136 = v113;
          HIDWORD(v132) = 0;
          v137[0] = v114;
          if ( SURFMEM::bCreateDIB(
                 (SURFMEM *)&v132,
                 (struct _DEVBITMAPINFO *)v136,
                 *(void **)&prclDest.left,
                 0LL,
                 0,
                 0LL,
                 0LL,
                 0,
                 1,
                 0,
                 0)
            && (LODWORD(v113) = ((_DWORD)v113 != 7) + 2,
                SURFMEM::bCreateDIB((SURFMEM *)&v127, (struct _DEVBITMAPINFO *)&v113, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)) )
          {
            *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)&v113 + 4);
            *(_QWORD *)&prclDest.left = 0LL;
            EngCopyBits(
              (SURFOBJ *)((v127 + 24) & -(__int64)(v127 != 0)),
              (SURFOBJ *)((v132 + 24) & -(__int64)((_QWORD)v132 != 0LL)),
              0LL,
              0LL,
              &prclDest,
              &gptl00);
          }
          else
          {
            v37 = 0;
          }
          SURFMEM::~SURFMEM((SURFMEM *)&v132);
        }
        else
        {
          v37 = SURFMEM::bCreateDIB(
                  (SURFMEM *)&v127,
                  (struct _DEVBITMAPINFO *)&v113,
                  *(void **)&prclDest.left,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0,
                  1,
                  0,
                  0) != 0
              ? v37
              : 0;
        }
        if ( !v37 )
        {
LABEL_268:
          SURFMEM::~SURFMEM((SURFMEM *)&v127);
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v140);
          if ( v141[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v141);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v142);
          goto LABEL_271;
        }
        v68 = *(struct SURFACE **)(v130[0] + 496LL);
        if ( !v68 )
          v68 = SURFACE::pdibDefault;
        v69 = *((_QWORD *)v68 + 16);
        *(_QWORD *)&prclDest.left = 0LL;
        v70 = *(struct PALETTE **)(v130[0] + 88LL);
        if ( v70 != ppalDefault )
          *((_QWORD *)v68 + 22) = *(_QWORD *)v70;
        if ( v103 )
        {
          if ( v103 != 1 )
          {
            v71 = v105;
            v72 = 0;
            if ( v103 == 2 )
            {
              v73 = xloIdent;
              if ( *((_DWORD *)v68 + 24) != (_DWORD)v113 )
                v37 = 0;
            }
            else
            {
              v73 = 0LL;
            }
            goto LABEL_216;
          }
          if ( v108 >= 2 * (unsigned __int64)v112
            && (unsigned int)EXLATEOBJ::bMakeXlate(&prclDest, v148, v70, v68, v112, v102) )
          {
            v73 = *(XLATEOBJ **)&prclDest.left;
            if ( gbMultiMonMismatchColor && (*(_DWORD *)(v60 + 40) & 1) != 0 )
            {
              if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v124, v101, v102, 0LL, v117, v116, v115, v38, 1) )
              {
                v74 = *((_QWORD *)v68 + 16);
                if ( !v74 )
                  v74 = *(_QWORD *)(v60 + 1808);
                XEPALOBJ::vGetEntriesFrom(&v124, v70, v74, v148, v112);
                v72 = 1;
                goto LABEL_203;
              }
              v37 = 0;
            }
            v72 = 0;
LABEL_203:
            v71 = v105;
            goto LABEL_216;
          }
LABEL_267:
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&prclDest);
          goto LABEL_268;
        }
        if ( v112 )
        {
          if ( v108 < 4 * v112 )
            goto LABEL_267;
          v71 = v105;
          if ( (unsigned int)(v105 - 10) <= 2 )
            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v124, (const unsigned int *)&v148->rgbBlue, v67, v112);
          else
            XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v124, v148, 0, v112);
          XlateObject = (XLATEOBJ *)CreateXlateObject(
                                      (void *)v122,
                                      v110,
                                      v124,
                                      v69,
                                      (__int64)v70,
                                      (__int64)v70,
                                      0,
                                      0,
                                      0xFFFFFFu,
                                      0);
          *(_QWORD *)&prclDest.left = XlateObject;
          if ( !XlateObject )
            v37 = 0;
        }
        else
        {
          XlateObject = (XLATEOBJ *)CreateXlateObject(
                                      (void *)v122,
                                      v110,
                                      v124,
                                      v69,
                                      (__int64)v70,
                                      (__int64)v70,
                                      0,
                                      0,
                                      0xFFFFFFu,
                                      0);
          v71 = v105;
          *(_QWORD *)&prclDest.left = XlateObject;
          if ( !XlateObject )
          {
            v37 = 0;
            v73 = 0LL;
            goto LABEL_212;
          }
        }
        v73 = XlateObject;
LABEL_212:
        v72 = 0;
LABEL_216:
        if ( v37 )
        {
          if ( (*(_DWORD *)(v130[0] + 36LL) & 0xE0) != 0 )
            XDCOBJ::vAccumulate((XDCOBJ *)v130, (struct ERECTL *)&v144);
          if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v130) )
          {
            v104 = v106;
          }
          else if ( (v140[24] & 1) != 0 )
          {
            v76 = a6;
            v77 = (_DWORD *)(v130[0] + 1024LL);
            if ( (*(_DWORD *)(v130[0] + 40LL) & 1) == 0 )
              v77 = (_DWORD *)(v130[0] + 1016LL);
            v144 += *v77;
            v146 += *v77;
            v145 += v77[1];
            v147 += v77[1];
            LODWORD(v148) = a6;
            if ( v71 == 4 && (BYTE8(v114) & 1) != 0 )
            {
              v78 = a7;
              v79 = a9;
              v80 = v106;
            }
            else
            {
              v80 = v106;
              v79 = a9;
              v78 = v106 - a7 - a9;
            }
            v81 = v78 + v79;
            v82 = v107;
            v83 = a6 + a8;
            HIDWORD(v148) = v78;
            v150 = v78 + v79;
            v149 = a6 + a8;
            if ( a6 > a6 + a8 )
            {
              v76 = v83 + 1;
              v82 = v107 ^ 1;
              v83 = a6 + 1;
              LODWORD(v148) = v76;
              v149 = a6 + 1;
            }
            if ( v78 > v81 )
            {
              v84 = v78;
              v82 ^= 2u;
              v78 = v81 + 1;
              HIDWORD(v148) = v81 + 1;
              v81 = v84 + 1;
              v150 = v84 + 1;
            }
            if ( v83 > 0
              && v81 > 0
              && v76 < *(_DWORD *)(v127 + 56)
              && v78 < *(_DWORD *)(v127 + 60)
              && !(unsigned int)ERECTL::bEmpty((ERECTL *)&v148) )
            {
              v85 = XDCOBJ::prgnEffRao((XDCOBJ *)v130);
              v154 = 0LL;
              v155 = 0LL;
              v156 = 0;
              v157 = 1;
              v158 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)v152, v85, (struct ERECTL *)&v144, 0);
              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v153) )
              {
                v104 = v80;
              }
              else
              {
                if ( (*(_DWORD *)(v130[0] + 36LL) & 0xE0) != 0 )
                {
                  v132 = v153[0];
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v130, v86, (struct ERECTL *)&v132);
                }
                if ( v72 )
                {
                  v87 = v124;
                  if ( v124 )
                  {
                    INC_SHARE_REF_CNT(v124);
                    v87 = v124;
                  }
                  *(_QWORD *)(v127 + 128) = v87;
                }
                v88 = *((_QWORD *)v68 + 6);
                if ( (*((_DWORD *)v68 + 28) & 2) != 0 )
                  v89 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v88 + 2848);
                else
                  v89 = EngStretchBlt;
                v90 = v118;
                if ( (*((_DWORD *)v68 + 28) & 2) != 0 && (*(_DWORD *)(v88 + 40) & 0x20000) == 0 )
                {
                  if ( v118 == 4 && (*(_BYTE *)(v130[0] + 72LL) & 0x10) == 0 )
                    v89 = EngStretchBlt;
                  if ( (int)v148 < 0
                    || SHIDWORD(v148) < 0
                    || v149 > *(_DWORD *)(v127 + 56)
                    || v150 > *(_DWORD *)(v127 + 60) )
                  {
                    v89 = EngStretchBlt;
                  }
                }
                if ( (v82 & 1) != 0 )
                {
                  v91 = v144;
                  v144 = v146;
                  v146 = v91;
                }
                if ( (v82 & 2) != 0 )
                {
                  v92 = v145;
                  v145 = v147;
                  v147 = v92;
                }
                ++*((_DWORD *)v68 + 23);
                v93 = 0LL;
                if ( *(__int16 *)(v130[0] + 178LL) >= 0 )
                  v93 = v130[0] + 176LL;
                v94 = 0;
                if ( ((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, XLATEOBJ *, __int64, __int64, int *, struct tagRGBQUAD **, _QWORD, int))v89)(
                       (char *)v68 + 24,
                       (v127 + 24) & -(__int64)(v127 != 0),
                       0LL,
                       v152,
                       v73,
                       v93,
                       v130[0] + 1200LL,
                       &v144,
                       &v148,
                       0LL,
                       v90) )
                {
                  v94 = v80;
                }
                v104 = v94;
              }
            }
          }
        }
        goto LABEL_267;
      }
      goto LABEL_75;
    }
    goto LABEL_74;
  }
LABEL_63:
  HIDWORD(v113) = -1;
LABEL_64:
  EngSetLastError(0x216u);
LABEL_285:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v130);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v131);
  return v16;
}
