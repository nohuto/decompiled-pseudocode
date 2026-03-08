/*
 * XREFs of ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C008C990
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C008D400 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00057D8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0050964 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0059450 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00881C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     EngCopyBits @ 0x1C008AE00 (EngCopyBits.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008D3E0 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00906B0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00D91B8 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C00E3CD4 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02DACDC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02DAD78 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DE318 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DFBC8 (-GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEA.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02E01D8 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternalImpl(
        struct tagRGBQUAD *a1,
        int a2,
        LONG a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned int *a11,
        unsigned int a12,
        int a13,
        unsigned int a14,
        __int64 a15)
{
  unsigned int v15; // r14d
  unsigned int v17; // r12d
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r10
  int v21; // r9d
  int v22; // r13d
  BOOL v23; // edi
  int v24; // ecx
  unsigned int v25; // edx
  int v26; // r13d
  unsigned int v27; // r11d
  unsigned int v28; // r15d
  __int64 v29; // r8
  __int64 v30; // r10
  int v31; // eax
  int v32; // eax
  unsigned int v33; // edx
  int v34; // ebx
  unsigned __int64 v35; // rdx
  unsigned int v36; // edi
  __int64 v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rsi
  int v40; // eax
  LONG v41; // edx
  LONG v42; // r8d
  int v43; // r9d
  char v44; // cl
  LONG y; // edx
  void *v46; // r8
  bool v47; // zf
  Gre::Base *v48; // r12
  __int64 v49; // rdi
  _QWORD *v50; // rbx
  int IsPalDefault; // eax
  Gre::Base *v52; // rcx
  unsigned int v53; // r8d
  POINTL v54; // rdx
  int v55; // esi
  __int64 v56; // r8
  __int64 v57; // rcx
  int v58; // eax
  int v59; // r8d
  unsigned int v60; // esi
  int v61; // r13d
  int v62; // r9d
  int v63; // ecx
  char v64; // bl
  int v65; // edx
  struct REGION *v66; // rax
  int v67; // r11d
  struct ECLIPOBJ *v68; // rdx
  POINTL v69; // rdx
  int v70; // r15d
  __int64 v71; // rax
  BOOL (__stdcall *v72)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r11
  char *v73; // r8
  unsigned int v74; // ebx
  int v76; // ecx
  signed int v77; // eax
  int v78; // eax
  unsigned int v79; // edx
  __int64 v80; // rcx
  int v81; // eax
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rdx
  DC *v84; // r9
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rdx
  DC *v87; // rcx
  unsigned int v88; // eax
  unsigned int v89; // eax
  DC *v90; // rcx
  Gre::Base *v91; // rcx
  __int64 v92; // r8
  int v93; // eax
  __int64 v94; // rax
  LONG x; // ecx
  LONG v96; // ecx
  int v97; // r12d
  int v98; // edi
  int v99; // r13d
  int v100; // edi
  HDC CompatibleDC; // r15
  __int64 DIBitmapComp; // rax
  __int64 v103; // rsi
  Gre::Base *v104; // rcx
  int v105; // ebx
  __int64 v106; // [rsp+30h] [rbp-D0h]
  int v107[2]; // [rsp+38h] [rbp-C8h]
  __int64 v108; // [rsp+40h] [rbp-C0h]
  __int64 v109; // [rsp+48h] [rbp-B8h]
  unsigned int v110; // [rsp+80h] [rbp-80h]
  unsigned int v111; // [rsp+84h] [rbp-7Ch]
  unsigned int v112; // [rsp+88h] [rbp-78h]
  unsigned int v113; // [rsp+8Ch] [rbp-74h]
  int v114; // [rsp+8Ch] [rbp-74h]
  int v115; // [rsp+90h] [rbp-70h]
  unsigned int v116; // [rsp+94h] [rbp-6Ch]
  char v117; // [rsp+94h] [rbp-6Ch]
  unsigned int v118; // [rsp+98h] [rbp-68h]
  int v119; // [rsp+9Ch] [rbp-64h]
  unsigned int v120; // [rsp+A0h] [rbp-60h]
  unsigned int v121; // [rsp+A0h] [rbp-60h]
  unsigned int v122; // [rsp+A4h] [rbp-5Ch]
  DC *v123[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v124; // [rsp+B8h] [rbp-48h]
  POINTL pptlSrc; // [rsp+C0h] [rbp-40h] BYREF
  DC *v126; // [rsp+C8h] [rbp-38h] BYREF
  char v127; // [rsp+D0h] [rbp-30h]
  int v128; // [rsp+D4h] [rbp-2Ch]
  __int128 v129; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v130; // [rsp+E8h] [rbp-18h]
  unsigned int v131; // [rsp+F8h] [rbp-8h]
  unsigned int v132; // [rsp+FCh] [rbp-4h]
  unsigned int v133; // [rsp+100h] [rbp+0h]
  int v134; // [rsp+104h] [rbp+4h]
  int v135; // [rsp+108h] [rbp+8h]
  int v136; // [rsp+10Ch] [rbp+Ch]
  int v137; // [rsp+110h] [rbp+10h]
  Gre::Base *XlateObject; // [rsp+118h] [rbp+18h] BYREF
  char v139; // [rsp+120h] [rbp+20h]
  int v140; // [rsp+124h] [rbp+24h]
  __int64 v141; // [rsp+128h] [rbp+28h] BYREF
  int v142; // [rsp+130h] [rbp+30h]
  __int64 v143[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v144; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v145[12]; // [rsp+158h] [rbp+58h] BYREF
  int v146; // [rsp+164h] [rbp+64h]
  _BYTE v147[32]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v148; // [rsp+190h] [rbp+90h] BYREF
  __int64 v149; // [rsp+198h] [rbp+98h]
  __int16 v150; // [rsp+1A0h] [rbp+A0h]
  _OWORD v151[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _POINTL v152; // [rsp+1E0h] [rbp+E0h] BYREF
  LONG v153; // [rsp+1E8h] [rbp+E8h]
  LONG v154; // [rsp+1ECh] [rbp+ECh]
  struct tagRGBQUAD *v155; // [rsp+1F0h] [rbp+F0h] BYREF
  int v156; // [rsp+1F8h] [rbp+F8h]
  int v157; // [rsp+1FCh] [rbp+FCh]
  RECTL prclDest; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v159[4]; // [rsp+210h] [rbp+110h] BYREF
  __int128 v160[4]; // [rsp+214h] [rbp+114h] BYREF
  __int64 v161; // [rsp+260h] [rbp+160h]
  int v162; // [rsp+268h] [rbp+168h]
  int v163; // [rsp+290h] [rbp+190h]
  __int64 v164; // [rsp+2A0h] [rbp+1A0h]

  v15 = 0;
  v17 = 0;
  pptlSrc = (POINTL)a10;
  v143[0] = a15;
  v155 = a1;
  v124 = a2;
  v135 = a4;
  v47 = (gajRop3[BYTE2(a13)] & 0xD4) == 0;
  prclDest.left = a3;
  v115 = a12;
  v137 = a5;
  v118 = 0;
  if ( v47 )
    return (unsigned int)NtGdiPatBlt((HDC)a1, a2, a3, a4, a5, a13);
  v123[0] = 0LL;
  v123[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v123, (HDC)a1);
  if ( !v123[0] )
    goto LABEL_96;
  if ( !a11 )
    goto LABEL_96;
  if ( !**(_QWORD **)&pptlSrc )
    goto LABEL_96;
  if ( a12 > 2 )
    goto LABEL_96;
  if ( a14 < 0xC )
    goto LABEL_96;
  v116 = *a11;
  if ( a14 < *a11 || *a11 < 0x28 || (int)a11[1] <= 0 || !a11[2] )
    goto LABEL_96;
  v134 = *(unsigned __int8 *)(*((_QWORD *)v123[0] + 122) + 215LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v144, (struct XDCOBJ *)v123, 0x204u);
  v18 = a11[4];
  v19 = v144;
  if ( v18 - 4 <= 1 )
  {
    if ( !(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v123, v18) )
      goto LABEL_109;
    if ( BYTE2(a13) != 204 )
      goto LABEL_109;
    if ( (*(_DWORD *)(v19 + 32) & 1) == 0 )
      goto LABEL_109;
    v21 = a12;
    if ( a12 )
      goto LABEL_109;
    v20 = v143[0];
    if ( v143[0] )
      goto LABEL_109;
  }
  else
  {
    v20 = v143[0];
    v21 = a12;
  }
  if ( v135 == a8 && (v76 = a9, v137 == a9) && a9 > 0 )
  {
    v22 = a7;
    if ( a8 > 0 && !(a7 | a6) && BYTE2(a13) == 204 && v134 != 4 && (*(_DWORD *)(v19 + 32) & 2) != 0 )
    {
      v77 = abs32(a11[2]);
      if ( a9 >= v77 )
        v76 = v77;
      v15 = GreSetDIBitsToDeviceInternalImpl(
              (HDC)a1,
              v137,
              a6,
              a7,
              a7,
              v76,
              *(_QWORD *)&pptlSrc,
              (__int64)a11,
              v21,
              a14,
              1,
              v20);
      goto LABEL_109;
    }
  }
  else
  {
    v22 = a7;
  }
  v23 = 0;
  if ( v21 == 1 )
  {
    v148 = 0LL;
    v149 = 0LL;
    v150 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v147, (struct XDCOBJ *)v123, 0);
    v80 = *((_QWORD *)v123[0] + 62);
    if ( v80 )
      v23 = *(_DWORD *)(v80 + 96) == 1;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v147);
    if ( v148 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v148);
    v21 = a12;
    v19 = v144;
  }
  if ( BYTE2(a13) != 204 || (*(_DWORD *)(v19 + 32) & 1) == 0 || v23 )
  {
    v97 = a11[2];
    if ( v97 <= 0 )
    {
      v100 = v22;
      v99 = a9;
    }
    else
    {
      v98 = v97 - v22;
      v99 = a9;
      v100 = v98 - a9;
    }
    CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
    if ( a11[4] - 1 <= 1 )
      DIBitmapComp = GreCreateDIBitmapComp((HDC)a1, *(_QWORD *)&pptlSrc, (__int64)a11, a12, a14, v143[0]);
    else
      DIBitmapComp = GreCreateDIBitmapReal((HDC)a1, a12, a14, 0LL, 0, 0LL, 0, 0LL, 0LL);
    v103 = DIBitmapComp;
    if ( CompatibleDC && DIBitmapComp )
    {
      GreSelectBitmap(CompatibleDC, DIBitmapComp);
      Gre::Base::Globals(v104);
      v105 = GreStretchBltInternal(
               (HDC)v155,
               v124,
               prclDest.left,
               v135,
               v137,
               CompatibleDC,
               a6,
               v100,
               a8,
               v99,
               a13,
               0xFFFFFF,
               1);
      GrepDeleteDC(CompatibleDC, 0x400000LL);
      GreDeleteObject(v103);
      if ( v105 )
      {
LABEL_280:
        v15 = v97;
        goto LABEL_109;
      }
    }
    else
    {
      GrepDeleteDC(CompatibleDC, 0x400000LL);
      GreDeleteObject(v103);
    }
    v97 = 0;
    goto LABEL_280;
  }
  v24 = a11[2];
  v25 = a11[4];
  v26 = 1;
  v27 = v116;
  v28 = 0;
  v29 = *((unsigned __int16 *)a11 + 7);
  v30 = a11[1];
  LODWORD(XlateObject) = a11[8];
  v120 = v29;
  v155 = (struct tagRGBQUAD *)((char *)a11 + v116);
  v130 = 0LL;
  v119 = v25;
  v129 = 0LL;
  v113 = v30;
  v31 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  v110 = 0;
  v111 = 0;
  if ( v24 < 0 )
    v31 = 1;
  v133 = 0;
  DWORD2(v130) = v31;
  v17 = 0;
  v132 = 0;
  v32 = -v24;
  v131 = 0;
  v136 = 0;
  if ( v24 >= 0 )
    v32 = v24;
  v112 = v32;
  if ( v25 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      v81 = 0;
      if ( v21 != 1 )
        v81 = v21;
      v115 = v81;
      if ( (_DWORD)v29 == 16 )
      {
        LODWORD(v129) = 4;
      }
      else if ( (_DWORD)v29 == 32 )
      {
        LODWORD(v129) = 6;
      }
      else
      {
        EngSetLastError(0x57u);
        LODWORD(v29) = v120;
        v26 = 0;
      }
      LODWORD(v30) = v113;
      v133 = a11[10];
      v17 = 2;
      v132 = a11[11];
      v28 = 512;
      v131 = a11[12];
      v82 = (unsigned int)v29 * (unsigned __int64)v113;
      v155 = (struct tagRGBQUAD *)(a11 + 10);
      v111 = 2;
      if ( v82 > 0xFFFFFFFF || (int)v82 + 31 < (unsigned int)v82 )
        goto LABEL_160;
      v34 = v112;
      v83 = v112 * (unsigned __int64)(((unsigned int)(v82 + 31) >> 3) & 0x1FFFFFFC);
      if ( v83 > 0xFFFFFFFF )
        goto LABEL_159;
      HIDWORD(v129) = v83;
    }
    else
    {
      EngSetLastError(0x57u);
      LODWORD(v30) = v113;
      v26 = 0;
      v34 = v112;
    }
    v110 = 0;
    goto LABEL_219;
  }
  if ( !v25 )
  {
    switch ( (_DWORD)v29 )
    {
      case 1:
        v110 = 2;
        LODWORD(v129) = 1;
        v17 = 1;
LABEL_27:
        v28 = 1024;
        goto LABEL_28;
      case 4:
        LODWORD(v129) = 2;
        v110 = 16;
        break;
      case 8:
        LODWORD(v129) = 3;
        v110 = 256;
        break;
      default:
        v78 = 0;
        if ( v21 != 1 )
          v78 = v21;
        v115 = v78;
        switch ( (_DWORD)v29 )
        {
          case 0x10:
            LODWORD(v129) = 4;
            v17 = 2;
            v133 = 31744;
            v132 = 992;
            v131 = 31;
            break;
          case 0x18:
            LODWORD(v129) = 5;
            v17 = 8;
            break;
          case 0x20:
            LODWORD(v129) = 6;
            v17 = 8;
            v110 = 0;
            v28 = 512;
            goto LABEL_28;
          default:
LABEL_194:
            EngSetLastError(0x57u);
            goto LABEL_96;
        }
        v110 = 0;
        v28 = 512;
        v115 = v78;
LABEL_28:
        v111 = v17;
        v33 = v29 * v30;
        if ( (unsigned __int64)(v29 * v30) > 0xFFFFFFFF || v33 + 31 < v33 )
          goto LABEL_160;
        v34 = v112;
        v35 = v112 * (unsigned __int64)(((v33 + 31) >> 3) & 0x1FFFFFFC);
        if ( v35 <= 0xFFFFFFFF )
        {
          v36 = v110;
          HIDWORD(v129) = v35;
LABEL_32:
          if ( !v26 )
            goto LABEL_225;
          v25 = v119;
LABEL_34:
          v122 = a14 - v27;
          v37 = v143[0];
          if ( !v143[0] )
          {
            v37 = *(_QWORD *)(*((_QWORD *)v123[0] + 122) + 248LL);
            v143[0] = v37;
          }
          v114 = *((_DWORD *)v123[0] + 30);
          if ( (v114 & 0x10000000) != 0 && (!v37 || v25 - 10 > 2) )
            v114 = v114 & 0xFFFFFFF | 0x20000000;
          *(_QWORD *)((char *)&v129 + 4) = __PAIR64__(v34, v30);
          if ( (_DWORD)XlateObject )
          {
            v79 = v36;
            if ( (unsigned int)XlateObject <= v36 )
              v79 = (unsigned int)XlateObject;
            v121 = v79;
          }
          else
          {
            v121 = v36;
          }
          v38 = (_QWORD *)pptlSrc;
          if ( *(_QWORD *)(*(_QWORD *)&pptlSrc + 8LL) - *(_QWORD *)(*(_QWORD *)&pptlSrc + 16LL) < (unsigned __int64)HIDWORD(v129) )
          {
            EngSetLastError(0x57u);
          }
          else
          {
            v39 = *((_QWORD *)v123[0] + 6);
            v152.x = v124;
            v153 = v124 + v135;
            v152.y = prclDest.left;
            v154 = prclDest.left + v137;
            EXFORMOBJ::vQuickInit((EXFORMOBJ *)v145, (struct XDCOBJ *)v123, 0x204u);
            v40 = EXFORMOBJ::bXform((EXFORMOBJ *)v145, &v152, 2LL);
            if ( v146 )
            {
              ++v152.x;
              ++v153;
            }
            if ( v40 )
            {
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v152) )
              {
                v44 = 0;
                v117 = 0;
                if ( v42 > v41 )
                {
                  v152.x = v41;
                  v153 = v42;
                  if ( !v146 )
                  {
                    v152.x = v41 + 1;
                    v153 = v42 + 1;
                  }
                  v44 = v43;
                  v117 = v43;
                }
                y = v152.y;
                if ( v152.y > v154 )
                {
                  v152.y = v154 + 1;
                  v117 = v44 ^ 2;
                  v154 = y + 1;
                }
                v142 = 0;
                v141 = 0LL;
                if ( !v115 && !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v141, v17, v36, 0LL, v133, v132, v131, v28, v43) )
                  goto LABEL_95;
                v148 = 0LL;
                v149 = 0LL;
                v150 = 256;
                DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v147, (struct XDCOBJ *)v123, 0);
                v46 = (void *)(*v38 + v38[2]);
                DWORD2(v130) |= 8 * (*(_DWORD *)(*((_QWORD *)v123[0] + 6) + 40LL) & 0x8000);
                *(_QWORD *)&v130 = 0LL;
                v126 = 0LL;
                v127 = 0;
                v128 = 0;
                if ( v136 )
                {
                  XlateObject = 0LL;
                  v139 = 0;
                  v151[0] = v129;
                  v140 = 0;
                  v151[1] = v130;
                  if ( SURFMEM::bCreateDIB(
                         (SURFMEM *)&XlateObject,
                         (struct _DEVBITMAPINFO *)v151,
                         v46,
                         0LL,
                         0,
                         0LL,
                         0LL,
                         0,
                         1,
                         0,
                         0)
                    && (LODWORD(v129) = ((_DWORD)v129 != 7) + 2,
                        SURFMEM::bCreateDIB(
                          (SURFMEM *)&v126,
                          (struct _DEVBITMAPINFO *)&v129,
                          0LL,
                          0LL,
                          0,
                          0LL,
                          0LL,
                          0,
                          1,
                          0,
                          0)) )
                  {
                    *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)&v129 + 4);
                    *(_QWORD *)&prclDest.left = 0LL;
                    pptlSrc = 0LL;
                    EngCopyBits(
                      (SURFOBJ *)(((unsigned __int64)v126 + 24) & -(__int64)(v126 != 0LL)),
                      (SURFOBJ *)(((unsigned __int64)XlateObject + 24) & -(__int64)(XlateObject != 0LL)),
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
                  }
                  else
                  {
                    v26 = 0;
                  }
                  SURFMEM::~SURFMEM((SURFMEM *)&XlateObject);
                  v47 = v26 == 0;
                }
                else
                {
                  v47 = SURFMEM::bCreateDIB(
                          (SURFMEM *)&v126,
                          (struct _DEVBITMAPINFO *)&v129,
                          v46,
                          0LL,
                          0,
                          0LL,
                          0LL,
                          0,
                          1,
                          0,
                          0) == 0;
                }
                if ( v47 )
                {
LABEL_93:
                  SURFMEM::~SURFMEM((SURFMEM *)&v126);
                  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v147);
                  if ( v148 )
                    DLODCOBJ::vUnlock((DLODCOBJ *)&v148);
LABEL_95:
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v141);
                  v17 = v118;
                  goto LABEL_96;
                }
                pptlSrc = (POINTL)XDCOBJ::pSurfaceEff((XDCOBJ *)v123);
                v48 = 0LL;
                XlateObject = 0LL;
                v49 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 128LL);
                v50 = (_QWORD *)*((_QWORD *)v123[0] + 11);
                *(_QWORD *)&prclDest.left = v50;
                v124 = 0;
                IsPalDefault = XEPALOBJ::bIsPalDefault((XEPALOBJ *)&prclDest);
                v54 = pptlSrc;
                if ( !IsPalDefault )
                  *(_QWORD *)(*(_QWORD *)&pptlSrc + 176LL) = *v50;
                if ( v115 )
                {
                  if ( v115 == 1 )
                  {
                    if ( v122 < 2 * (unsigned __int64)v121
                      || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))EXLATEOBJ::bMakeXlate)(
                                          &XlateObject,
                                          v155,
                                          v50,
                                          v54,
                                          v121,
                                          v110) )
                    {
                      goto LABEL_92;
                    }
                    v48 = XlateObject;
                    if ( *((_DWORD *)Gre::Base::Globals(v91) + 812) && (*(_DWORD *)(v39 + 40) & 1) != 0 )
                    {
                      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v141, v111, v110, 0LL, v133, v132, v131, v28, 1) )
                      {
                        v92 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 128LL);
                        if ( !v92 )
                          v92 = *(_QWORD *)(v39 + 1776);
                        XEPALOBJ::vGetEntriesFrom(&v141, v50, v92, v155, v121);
                        v124 = 1;
                      }
                      else
                      {
                        v26 = 0;
                      }
                    }
                  }
                  else
                  {
                    if ( v115 != 2 )
                    {
                      v55 = v119;
                      goto LABEL_62;
                    }
                    if ( *(_DWORD *)(*(_QWORD *)&v54 + 96LL) != (_DWORD)v129 )
                      v26 = 0;
                    v48 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v52) + 6896);
                  }
                  v55 = v119;
                }
                else if ( v121 )
                {
                  if ( v122 < 4 * v121 )
                    goto LABEL_92;
                  v55 = v119;
                  if ( (unsigned int)(v119 - 10) <= 2 )
                    XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v141, (const unsigned int *)&v155->rgbBlue, v53, v121);
                  else
                    XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v141, v155, 0, v121);
                  LODWORD(v109) = 0;
                  LODWORD(v108) = 0xFFFFFF;
                  v107[0] = 0;
                  LODWORD(v106) = 0;
                  XlateObject = (Gre::Base *)CreateXlateObject(
                                               v143[0],
                                               v114,
                                               v141,
                                               v49,
                                               v50,
                                               v50,
                                               v106,
                                               *(_QWORD *)v107,
                                               v108,
                                               v109);
                  v48 = XlateObject;
                  if ( !XlateObject )
                    v26 = 0;
                }
                else
                {
                  LODWORD(v109) = 0;
                  LODWORD(v108) = 0xFFFFFF;
                  v107[0] = 0;
                  LODWORD(v106) = 0;
                  v55 = v119;
                  v48 = (Gre::Base *)CreateXlateObject(
                                       v143[0],
                                       v114,
                                       v141,
                                       v49,
                                       v50,
                                       v50,
                                       v106,
                                       *(_QWORD *)v107,
                                       v108,
                                       v109);
                  XlateObject = v48;
                  if ( !v48 )
                    v26 = 0;
                }
                if ( v26 )
                {
LABEL_62:
                  if ( (*((_DWORD *)v123[0] + 9) & 0xE0) != 0 )
                    XDCOBJ::vAccumulate((XDCOBJ *)v123, (struct ERECTL *)&v152);
                  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v123) )
                  {
                    v118 = v112;
                  }
                  else if ( (v147[24] & 1) != 0 )
                  {
                    v57 = *(_DWORD *)(v56 + 40) & 1LL;
                    v152.x += *(_DWORD *)(v56 + 8 * v57 + 1016);
                    v153 += *(_DWORD *)(v56 + 8 * v57 + 1016);
                    v152.y += *(_DWORD *)(v56 + 8 * v57 + 1020);
                    v58 = *(_DWORD *)(v56 + 8 * v57 + 1020);
                    v59 = a6;
                    v154 += v58;
                    LODWORD(v155) = a6;
                    if ( v55 == 4 && (BYTE8(v130) & 1) != 0 )
                    {
                      v62 = a7;
                      v61 = a9;
                      v60 = v112;
                    }
                    else
                    {
                      v60 = v112;
                      v61 = a9;
                      v62 = v112 - a7 - a9;
                    }
                    v63 = v62 + v61;
                    v64 = v117;
                    v65 = a6 + a8;
                    HIDWORD(v155) = v62;
                    v157 = v62 + v61;
                    v156 = a6 + a8;
                    if ( a6 > a6 + a8 )
                    {
                      v59 = v65 + 1;
                      v64 = v117 ^ 1;
                      v65 = a6 + 1;
                      LODWORD(v155) = v59;
                      v156 = a6 + 1;
                    }
                    if ( v62 > v63 )
                    {
                      v93 = v62;
                      v64 ^= 2u;
                      v62 = v63 + 1;
                      HIDWORD(v155) = v63 + 1;
                      v63 = v93 + 1;
                      v157 = v93 + 1;
                    }
                    if ( v65 > 0
                      && v63 > 0
                      && v59 < *((_DWORD *)v126 + 14)
                      && v62 < *((_DWORD *)v126 + 15)
                      && !(unsigned int)ERECTL::bEmpty((ERECTL *)&v155) )
                    {
                      v66 = XDCOBJ::prgnEffRao(v123);
                      v161 = 0LL;
                      v162 = 0;
                      v163 = v67;
                      v164 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)v159, v66, (struct ERECTL *)&v152, 0);
                      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v160) )
                      {
                        v118 = v60;
                      }
                      else
                      {
                        if ( (*((_DWORD *)v123[0] + 9) & 0xE0) != 0 )
                        {
                          *(_OWORD *)v143 = v160[0];
                          XDCOBJ::vAccumulateTight((XDCOBJ *)v123, v68, (__m128i *)v143);
                        }
                        if ( v124 )
                        {
                          v94 = v141;
                          if ( v141 )
                          {
                            INC_SHARE_REF_CNT(v141);
                            v94 = v141;
                          }
                          *((_QWORD *)v126 + 16) = v94;
                        }
                        v69 = pptlSrc;
                        v70 = v134;
                        v71 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 48LL);
                        if ( (*(_DWORD *)(*(_QWORD *)&pptlSrc + 112LL) & 2) != 0 )
                        {
                          v72 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v71 + 2824);
                          if ( (*(_DWORD *)(v71 + 40) & 0x20000) == 0 )
                          {
                            if ( v134 == 4 && (*((_BYTE *)v123[0] + 72) & 0x10) == 0 )
                              v72 = EngStretchBlt;
                            if ( (int)v155 < 0
                              || SHIDWORD(v155) < 0
                              || v156 > *((_DWORD *)v126 + 14)
                              || v157 > *((_DWORD *)v126 + 15) )
                            {
                              v72 = EngStretchBlt;
                            }
                          }
                        }
                        else
                        {
                          v72 = EngStretchBlt;
                        }
                        if ( (v64 & 1) != 0 )
                        {
                          x = v152.x;
                          v152.x = v153;
                          v153 = x;
                        }
                        if ( (v64 & 2) != 0 )
                        {
                          v96 = v152.y;
                          v152.y = v154;
                          v154 = v96;
                        }
                        ++*(_DWORD *)(*(_QWORD *)&pptlSrc + 92LL);
                        v73 = 0LL;
                        if ( *((__int16 *)v123[0] + 89) >= 0 )
                          v73 = (char *)v123[0] + 176;
                        v74 = 0;
                        if ( ((unsigned int (__fastcall *)(__int64, unsigned __int64, _QWORD, _BYTE *, Gre::Base *, char *, char *, struct _POINTL *, struct tagRGBQUAD **, _QWORD, int))v72)(
                               *(_QWORD *)&v69 + 24LL,
                               ((unsigned __int64)v126 + 24) & -(__int64)(v126 != 0LL),
                               0LL,
                               v159,
                               v48,
                               v73,
                               (char *)v123[0] + 1192,
                               &v152,
                               &v155,
                               0LL,
                               v70) )
                        {
                          v74 = v60;
                        }
                        v118 = v74;
                      }
                    }
                  }
                }
LABEL_92:
                EXLATEOBJ::vAltUnlock(&XlateObject);
                goto LABEL_93;
              }
              v17 = a9;
LABEL_96:
              if ( v123[0] )
                XDCOBJ::vUnlockFast((XDCOBJ *)v123);
              return v17;
            }
          }
LABEL_225:
          v17 = 0;
          goto LABEL_96;
        }
LABEL_159:
        HIDWORD(v129) = -1;
LABEL_160:
        EngSetLastError(0x216u);
LABEL_109:
        DCOBJ::~DCOBJ((DCOBJ *)v123);
        return v15;
    }
    v17 = 1;
    goto LABEL_27;
  }
  if ( v25 != 10 )
  {
    if ( v25 == 2 )
    {
LABEL_215:
      if ( (_DWORD)v29 != 4 )
      {
        EngSetLastError(0x57u);
        v26 = 0;
      }
      v89 = a11[5];
      v36 = 16;
      LODWORD(v129) = 7;
      v28 = 1024;
      v110 = 16;
      HIDWORD(v129) = v89;
      v17 = 1;
      v111 = 1;
      v136 = 1;
      goto LABEL_207;
    }
    if ( v25 != 12 )
    {
      if ( v25 != 1 )
      {
        if ( v25 != 11 )
        {
          if ( v25 == 4 )
          {
            LODWORD(v129) = 9;
          }
          else
          {
            if ( v25 != 5 )
              goto LABEL_194;
            LODWORD(v129) = 10;
          }
          v17 = 8;
          v34 = v32;
          v36 = 0;
          v111 = 8;
          v28 = 512;
          v110 = 0;
          HIDWORD(v129) = a11[5];
          goto LABEL_34;
        }
        DCOBJ::DCOBJ((DCOBJ *)&v126, (HDC)a1);
        if ( !v126 || !(unsigned int)DC::bIsCMYKColor(v126) )
        {
          EngSetLastError(0x57u);
          v87 = v126;
          v26 = 0;
        }
        if ( v87 )
          XDCOBJ::vUnlockFast((XDCOBJ *)&v126);
        if ( !v26 )
          goto LABEL_205;
        LODWORD(v29) = v120;
      }
      if ( (_DWORD)v29 != 8 )
      {
        EngSetLastError(0x57u);
        v26 = 0;
      }
      v88 = a11[5];
      v17 = 1;
      v110 = 256;
      v111 = 1;
      v28 = 1024;
      LODWORD(v129) = 8;
      HIDWORD(v129) = v88;
LABEL_205:
      v36 = v110;
      v136 = v17;
LABEL_207:
      LODWORD(v30) = v113;
      v34 = v112;
LABEL_220:
      v27 = v116;
      goto LABEL_32;
    }
    DCOBJ::DCOBJ((DCOBJ *)&v126, (HDC)a1);
    if ( !v126 || !(unsigned int)DC::bIsCMYKColor(v126) )
    {
      EngSetLastError(0x57u);
      v90 = v126;
      v26 = 0;
    }
    if ( v90 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v126);
    if ( v26 )
    {
      LODWORD(v29) = v120;
      goto LABEL_215;
    }
    LODWORD(v30) = v113;
    v34 = v112;
LABEL_219:
    v36 = 0;
    goto LABEL_220;
  }
  DCOBJ::DCOBJ((DCOBJ *)&v126, (HDC)a1);
  if ( !v126 || !(unsigned int)DC::bIsCMYKColor(v126) )
    goto LABEL_181;
  switch ( v120 )
  {
    case 1u:
      v110 = 2;
      LODWORD(v129) = 1;
      v17 = 1;
      goto LABEL_173;
    case 4u:
      LODWORD(v129) = 2;
      v110 = 16;
      goto LABEL_171;
    case 8u:
      LODWORD(v129) = 3;
      v110 = 256;
LABEL_171:
      v17 = 1;
LABEL_173:
      v28 = 1024;
      goto LABEL_174;
  }
  if ( v120 != 32 )
  {
LABEL_181:
    EngSetLastError(0x57u);
    LODWORD(v30) = v113;
    v26 = 0;
    v84 = v126;
    v34 = v112;
    goto LABEL_182;
  }
  LODWORD(v129) = 6;
  v17 = 16;
  v110 = 0;
  v28 = 512;
LABEL_174:
  LODWORD(v30) = v113;
  v111 = v17;
  v85 = v120 * (unsigned __int64)v113;
  if ( v85 <= 0xFFFFFFFF && (int)v85 + 31 >= (unsigned int)v85 )
  {
    v34 = v112;
    v86 = v112 * (unsigned __int64)(((unsigned int)(v85 + 31) >> 3) & 0x1FFFFFFC);
    if ( v86 <= 0xFFFFFFFF )
    {
      HIDWORD(v129) = v86;
LABEL_182:
      if ( v84 )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)&v126);
        LODWORD(v30) = v113;
      }
      v36 = v110;
      goto LABEL_220;
    }
    HIDWORD(v129) = -1;
  }
  EngSetLastError(0x216u);
  if ( v126 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v126);
  if ( v123[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v123);
  return 0LL;
}
