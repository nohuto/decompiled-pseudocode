/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C0029B2C
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C0029900 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003BF70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C008A518 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00E3768 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     GreCreateDIBitmapComp @ 0x1C014A20C (GreCreateDIBitmapComp.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D630 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BBF08 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BBFC8 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BE5D8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02BFB00 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
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
  unsigned int v18; // r15d
  char v19; // al
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // r9
  unsigned __int8 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rdi
  signed int v26; // ecx
  int v27; // r15d
  signed int v28; // eax
  int v29; // r13d
  BOOL v30; // edi
  __int64 v31; // rcx
  int v32; // ecx
  int v33; // r10d
  __int64 v34; // rdx
  __int64 v35; // r11
  unsigned int v36; // r9d
  unsigned int v37; // r15d
  int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned __int64 v42; // r8
  unsigned int v43; // eax
  unsigned int v45; // r8d
  unsigned int v46; // eax
  int v47; // r8d
  unsigned int v48; // r12d
  int v49; // ebx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  unsigned int v52; // edi
  __int64 v53; // rax
  __int64 v54; // rsi
  BOOL v55; // eax
  int v56; // edx
  int v57; // r8d
  int v58; // r9d
  char v59; // cl
  int v60; // edx
  bool v61; // zf
  struct SURFACE *v62; // rax
  unsigned int v63; // r8d
  XLATEOBJ *v64; // r12
  __int64 v65; // rdi
  struct PALETTE *v66; // rbx
  struct SURFACE *v67; // rdi
  int v68; // r15d
  int Palette; // eax
  __int64 v70; // r8
  unsigned int v71; // r13d
  int v72; // r8d
  _DWORD *v73; // rcx
  int v74; // r9d
  int v75; // eax
  int v76; // ecx
  char v77; // bl
  int v78; // edx
  int v79; // eax
  struct REGION *v80; // rax
  int v81; // r11d
  struct ECLIPOBJ *v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // r11d
  BOOL (__stdcall *v86)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v87; // ecx
  int v88; // ecx
  __int64 v89; // r8
  unsigned int v90; // ebx
  int v91; // r13d
  int v92; // edi
  HDC CompatibleDC; // r15
  __int64 DIBitmapComp; // rax
  __int64 v95; // rsi
  int v96; // ebx
  unsigned int v97; // [rsp+80h] [rbp-80h]
  unsigned int v98; // [rsp+84h] [rbp-7Ch]
  unsigned int v99; // [rsp+88h] [rbp-78h]
  unsigned int v100; // [rsp+90h] [rbp-70h]
  unsigned int v101; // [rsp+94h] [rbp-6Ch]
  unsigned int v102; // [rsp+98h] [rbp-68h]
  char v103; // [rsp+98h] [rbp-68h]
  unsigned int v104; // [rsp+9Ch] [rbp-64h]
  unsigned int v105; // [rsp+A0h] [rbp-60h]
  unsigned int v106; // [rsp+A0h] [rbp-60h]
  unsigned int v107; // [rsp+A4h] [rbp-5Ch]
  unsigned int v108; // [rsp+A4h] [rbp-5Ch]
  __int128 v109; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v110; // [rsp+B8h] [rbp-48h]
  unsigned int v111; // [rsp+C8h] [rbp-38h]
  unsigned int v112; // [rsp+CCh] [rbp-34h]
  unsigned int v113; // [rsp+D0h] [rbp-30h]
  int v114; // [rsp+D4h] [rbp-2Ch]
  unsigned int v115; // [rsp+D8h] [rbp-28h]
  int v116; // [rsp+DCh] [rbp-24h]
  int v117; // [rsp+E0h] [rbp-20h]
  int v118; // [rsp+E4h] [rbp-1Ch]
  int v119; // [rsp+E8h] [rbp-18h]
  struct SURFACE *v120; // [rsp+F0h] [rbp-10h] BYREF
  char v121; // [rsp+F8h] [rbp-8h]
  int v122; // [rsp+FCh] [rbp-4h]
  int v123; // [rsp+100h] [rbp+0h]
  __int64 v124; // [rsp+108h] [rbp+8h] BYREF
  int v125; // [rsp+110h] [rbp+10h]
  __int64 v126; // [rsp+118h] [rbp+18h] BYREF
  char v127; // [rsp+120h] [rbp+20h]
  int v128; // [rsp+124h] [rbp+24h]
  __int128 v129; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v130[2]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v131[32]; // [rsp+148h] [rbp+48h] BYREF
  DC *v132[2]; // [rsp+168h] [rbp+68h] BYREF
  _OWORD v133[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v134; // [rsp+198h] [rbp+98h] BYREF
  int v135; // [rsp+1A4h] [rbp+A4h]
  __int64 v136[3]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v137[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v138[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v139[32]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v140; // [rsp+210h] [rbp+110h]
  int v141; // [rsp+230h] [rbp+130h] BYREF
  int v142; // [rsp+234h] [rbp+134h]
  int v143; // [rsp+238h] [rbp+138h]
  int v144; // [rsp+23Ch] [rbp+13Ch]
  struct tagRGBQUAD *v145; // [rsp+240h] [rbp+140h] BYREF
  int v146; // [rsp+248h] [rbp+148h]
  int v147; // [rsp+24Ch] [rbp+14Ch]
  RECTL prclDest; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v149[4]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v150[4]; // [rsp+264h] [rbp+164h] BYREF
  __int64 v151; // [rsp+2B0h] [rbp+1B0h]
  int v152; // [rsp+2B8h] [rbp+1B8h]
  int v153; // [rsp+2E0h] [rbp+1E0h]
  __int64 v154; // [rsp+2F0h] [rbp+1F0h]

  v16 = 0;
  v18 = 0;
  *(_QWORD *)&prclDest.left = a10;
  v115 = a15;
  *(_QWORD *)&v129 = a16;
  v119 = a2;
  v117 = a4;
  v19 = gajRop3[BYTE2(a13)];
  v118 = a3;
  v100 = a12;
  v116 = a5;
  v99 = 0;
  if ( (v19 & 0xD4) == 0 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  v130[0] = 0LL;
  v130[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v131);
  XDCOBJ::vLock((XDCOBJ *)v130, a1);
  if ( !v130[0]
    || !a11
    || !*(_QWORD *)&prclDest.left
    || a12 > 2
    || a14 < 0xC
    || (v20 = *(_DWORD *)a11, LODWORD(v120) = v20, a14 < v20)
    || v20 < 0x28
    || *(int *)(a11 + 4) <= 0
    || !*(_DWORD *)(a11 + 8) )
  {
LABEL_73:
    MDCOBJ::~MDCOBJ((MDCOBJ *)v130);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v131);
    return v18;
  }
  v114 = *(unsigned __int8 *)(*(_QWORD *)(v130[0] + 976LL) + 215LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v136, (struct XDCOBJ *)v130, 0x204u);
  v21 = *(unsigned int *)(a11 + 16);
  v22 = v136[0];
  if ( (unsigned int)(v21 - 4) > 1 )
  {
    v24 = a12;
    v25 = v129;
  }
  else
  {
    if ( !(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v130, v21) )
      goto LABEL_274;
    if ( BYTE2(a13) != 204 )
      goto LABEL_274;
    if ( ((unsigned __int8)*(_DWORD *)(v22 + 32) & v23) == 0 )
      goto LABEL_274;
    v24 = a12;
    if ( a12 )
      goto LABEL_274;
    v25 = v129;
    if ( (_QWORD)v129 )
      goto LABEL_274;
  }
  if ( v117 == a8 && (v26 = a9, v116 == a9) && a9 > 0 )
  {
    v27 = a7;
    if ( a8 > 0 && !(a7 | a6) && BYTE2(a13) == 204 && v114 != 4 && (*(_DWORD *)(v22 + 32) & 2) != 0 )
    {
      v28 = abs32(*(_DWORD *)(a11 + 8));
      if ( a9 >= v28 )
        v26 = v28;
      v16 = GreSetDIBitsToDeviceInternal(
              a1,
              v116,
              a6,
              a7,
              a7,
              v26,
              *(__int64 *)&prclDest.left,
              a11,
              v24,
              v115,
              a14,
              1,
              v25);
      goto LABEL_274;
    }
  }
  else
  {
    v27 = a7;
  }
  v29 = 1;
  v30 = 0;
  if ( (_DWORD)v24 == 1 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v138);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v137, (struct XDCOBJ *)v130, 0);
    v31 = *(_QWORD *)(v130[0] + 496LL);
    if ( v31 )
      v30 = *(_DWORD *)(v31 + 96) == 1;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v137);
    if ( v138[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v138);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v139);
    v22 = v136[0];
    v24 = a12;
  }
  if ( BYTE2(a13) != 204 || (*(_DWORD *)(v22 + 32) & 1) == 0 || v30 )
  {
    v91 = *(_DWORD *)(a11 + 8);
    if ( v91 <= 0 )
      v92 = v27;
    else
      v92 = v91 - v27 - a9;
    CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v21, v24, v22);
    if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
      DIBitmapComp = GreCreateDIBitmapComp(a1, *(__int64 *)&prclDest.left, a11, a12, a14, v115);
    else
      DIBitmapComp = GreCreateDIBitmapReal(a1, a12, a14, v115, 0LL, 0, 0LL, 0, 0LL, 0LL);
    v95 = DIBitmapComp;
    if ( CompatibleDC && DIBitmapComp )
    {
      GreSelectBitmap(CompatibleDC, DIBitmapComp);
      v96 = GreStretchBltInternal(a1, v119, v118, v116, CompatibleDC, a6, v92, a8, a9, a13, 0xFFFFFF, 1);
      bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      GreDeleteObject(v95);
      if ( v96 )
        goto LABEL_273;
    }
    else
    {
      bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      GreDeleteObject(v95);
    }
    v91 = 0;
LABEL_273:
    v16 = v91;
    goto LABEL_274;
  }
  v32 = *(_DWORD *)(a11 + 8);
  v33 = *(_DWORD *)(a11 + 16);
  v34 = *(unsigned __int16 *)(a11 + 14);
  v35 = *(unsigned int *)(a11 + 4);
  v36 = *(_DWORD *)(a11 + 32);
  v37 = 0;
  v145 = (struct tagRGBQUAD *)(a11 + (unsigned int)v120);
  v110 = 0LL;
  v102 = v34;
  v109 = 0LL;
  v123 = v33;
  v38 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  v105 = v35;
  v107 = v36;
  if ( v32 < 0 )
    v38 = 1;
  v98 = 0;
  DWORD2(v110) = v38;
  v39 = -v32;
  v97 = 0;
  v113 = 0;
  v112 = 0;
  if ( v32 >= 0 )
    v39 = v32;
  v111 = 0;
  v101 = v39;
  if ( v33 == 3 )
  {
    if ( a14 < 0x34 )
    {
      EngSetLastError(0x57u);
      v29 = 0;
LABEL_59:
      v98 = 0;
LABEL_109:
      v48 = v97;
LABEL_110:
      v49 = 0;
LABEL_138:
      if ( !v29 )
        goto LABEL_72;
      v36 = v107;
      v33 = v123;
      LODWORD(v35) = v105;
      v47 = v101;
      goto LABEL_140;
    }
    v40 = 0;
    if ( (_DWORD)v24 != 1 )
      v40 = v24;
    v100 = v40;
    if ( (_DWORD)v34 == 16 )
    {
      LODWORD(v109) = 4;
    }
    else if ( (_DWORD)v34 == 32 )
    {
      LODWORD(v109) = 6;
    }
    else
    {
      EngSetLastError(0x57u);
      LODWORD(v34) = v102;
      v29 = 0;
      LODWORD(v35) = v105;
    }
    v37 = 512;
    v113 = *(_DWORD *)(a11 + 40);
    v41 = *(_DWORD *)(a11 + 44);
    v145 = (struct tagRGBQUAD *)(a11 + 40);
    v111 = *(_DWORD *)(a11 + 48);
    v42 = (unsigned int)v34 * (unsigned __int64)(unsigned int)v35;
    v112 = v41;
    v97 = 2;
    if ( v42 > 0xFFFFFFFF || (int)v42 + 31 < (unsigned int)v42 )
      goto LABEL_61;
    if ( v101 * (((unsigned __int64)(unsigned int)(v42 + 31) >> 3) & 0x1FFFFFFC) <= 0xFFFFFFFF )
    {
      HIDWORD(v109) = v101 * (((unsigned int)(v42 + 31) >> 3) & 0x1FFFFFFC);
      goto LABEL_59;
    }
    goto LABEL_60;
  }
  if ( v33 )
  {
    if ( v33 == 10 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v132, a1);
      if ( !v132[0] || !(unsigned int)DC::bIsCMYKColor(v132[0]) )
        goto LABEL_107;
      if ( v102 == 1 )
      {
        v98 = 2;
        LODWORD(v109) = 1;
        v97 = 1;
      }
      else
      {
        switch ( v102 )
        {
          case 4u:
            LODWORD(v109) = 2;
            v98 = 16;
            break;
          case 8u:
            LODWORD(v109) = 3;
            v98 = 256;
            break;
          case 0x20u:
            LODWORD(v109) = 6;
            v37 = 512;
            v98 = 0;
            v97 = 16;
LABEL_101:
            v50 = v102 * (unsigned __int64)v105;
            if ( v50 <= 0xFFFFFFFF && (int)v50 + 31 >= (unsigned int)v50 )
            {
              v51 = v101 * (((unsigned __int64)(unsigned int)(v50 + 31) >> 3) & 0x1FFFFFFC);
              if ( v51 <= 0xFFFFFFFF )
              {
                HIDWORD(v109) = v51;
LABEL_108:
                MDCOBJ::~MDCOBJ((MDCOBJ *)v132);
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v133);
                goto LABEL_109;
              }
              HIDWORD(v109) = -1;
            }
            EngSetLastError(0x216u);
            MDCOBJ::~MDCOBJ((MDCOBJ *)v132);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v133);
            goto LABEL_274;
          default:
LABEL_107:
            EngSetLastError(0x57u);
            v29 = 0;
            goto LABEL_108;
        }
        v97 = 1;
      }
      v37 = 1024;
      goto LABEL_101;
    }
    if ( v33 != 2 )
    {
      if ( v33 != 12 )
      {
        if ( v33 == 1 )
        {
LABEL_125:
          if ( (_DWORD)v34 != 8 )
          {
            EngSetLastError(0x57u);
            v29 = 0;
          }
          LODWORD(v109) = 8;
          v98 = 256;
LABEL_137:
          v49 = 1;
          v97 = 1;
          v48 = 1;
          HIDWORD(v109) = *(_DWORD *)(a11 + 20);
          v37 = 1024;
          goto LABEL_138;
        }
        if ( v33 != 11 )
        {
          if ( v33 == 4 )
          {
            LODWORD(v109) = 9;
          }
          else
          {
            if ( v33 != 5 )
              goto LABEL_71;
            LODWORD(v109) = 10;
          }
          v48 = 8;
          v47 = v39;
          v52 = 0;
          v97 = 8;
          v37 = 512;
          v98 = 0;
          v49 = 0;
          HIDWORD(v109) = *(_DWORD *)(a11 + 20);
          goto LABEL_141;
        }
        DCOBJ::DCOBJ((DCOBJ *)v132, a1);
        if ( !v132[0] || !(unsigned int)DC::bIsCMYKColor(v132[0]) )
        {
          EngSetLastError(0x57u);
          v29 = 0;
        }
        MDCOBJ::~MDCOBJ((MDCOBJ *)v132);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v133);
        if ( v29 )
        {
          LODWORD(v34) = v102;
          goto LABEL_125;
        }
LABEL_132:
        v48 = 0;
        goto LABEL_110;
      }
      DCOBJ::DCOBJ((DCOBJ *)v132, a1);
      if ( !v132[0] || !(unsigned int)DC::bIsCMYKColor(v132[0]) )
      {
        EngSetLastError(0x57u);
        v29 = 0;
      }
      MDCOBJ::~MDCOBJ((MDCOBJ *)v132);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v133);
      if ( !v29 )
        goto LABEL_132;
      LODWORD(v34) = v102;
    }
    if ( (_DWORD)v34 != 4 )
    {
      EngSetLastError(0x57u);
      v29 = 0;
    }
    LODWORD(v109) = 7;
    v98 = 16;
    goto LABEL_137;
  }
  switch ( (_DWORD)v34 )
  {
    case 1:
      v98 = 2;
      LODWORD(v109) = 1;
      v97 = 1;
      goto LABEL_83;
    case 4:
      LODWORD(v109) = 2;
      v98 = 16;
      goto LABEL_80;
    case 8:
      LODWORD(v109) = 3;
      v98 = 256;
LABEL_80:
      v97 = 1;
LABEL_83:
      v37 = 1024;
      goto LABEL_84;
  }
  v43 = 0;
  if ( (_DWORD)v24 != 1 )
    v43 = v24;
  v100 = v43;
  if ( (_DWORD)v34 == 16 )
  {
    LODWORD(v109) = 4;
    v113 = 31744;
    v112 = 992;
    v111 = 31;
    v97 = 2;
    goto LABEL_77;
  }
  if ( (_DWORD)v34 == 24 )
  {
    LODWORD(v109) = 5;
    v97 = 8;
LABEL_77:
    v98 = 0;
    v37 = 512;
    v100 = v43;
    goto LABEL_84;
  }
  if ( (_DWORD)v34 != 32 )
  {
LABEL_71:
    EngSetLastError(0x57u);
LABEL_72:
    v18 = 0;
    goto LABEL_73;
  }
  LODWORD(v109) = 6;
  v37 = 512;
  v98 = 0;
  v97 = 8;
LABEL_84:
  v45 = v34 * v35;
  if ( (unsigned __int64)(v34 * v35) > 0xFFFFFFFF )
    goto LABEL_61;
  v46 = v45 + 31;
  if ( v45 + 31 < v45 )
    goto LABEL_61;
  v47 = v101;
  if ( v101 * (unsigned __int64)((v46 >> 3) & 0x1FFFFFFC) <= 0xFFFFFFFF )
  {
    v48 = v97;
    v49 = 0;
    HIDWORD(v109) = v101 * ((v46 >> 3) & 0x1FFFFFFC);
LABEL_140:
    v52 = v98;
LABEL_141:
    v104 = a14 - (_DWORD)v120;
    v53 = v129;
    if ( !(_QWORD)v129 )
    {
      v53 = *(_QWORD *)(*(_QWORD *)(v130[0] + 976LL) + 248LL);
      *(_QWORD *)&v129 = v53;
    }
    v106 = *(_DWORD *)(v130[0] + 120LL);
    if ( (v106 & 0x10000000) != 0 && (!v53 || (unsigned int)(v33 - 10) > 2) )
      v106 = v106 & 0xFFFFFFF | 0x20000000;
    *(_QWORD *)((char *)&v109 + 4) = __PAIR64__(v47, v35);
    if ( v36 )
    {
      if ( v36 > v52 )
        v36 = v52;
      v108 = v36;
    }
    else
    {
      v108 = v52;
    }
    if ( v115 >= HIDWORD(v109) )
    {
      v54 = *(_QWORD *)(v130[0] + 48LL);
      v141 = v119;
      v143 = v119 + v117;
      v142 = v118;
      v144 = v118 + v116;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v134, (struct XDCOBJ *)v130, 0x204u);
      v55 = (*(_BYTE *)(v134 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v134, &v141, 2LL);
      if ( v135 )
      {
        ++v141;
        ++v143;
      }
      if ( v55 )
      {
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v141) )
        {
          v18 = a9;
          goto LABEL_73;
        }
        v59 = 0;
        v103 = 0;
        if ( v57 > v56 )
        {
          v141 = v56;
          v143 = v57;
          if ( !v135 )
          {
            v141 = v58 + v56;
            v143 = v57 + 1;
          }
          v59 = v58;
          v103 = v58;
        }
        v60 = v142;
        if ( v142 > v144 )
        {
          v142 = v144 + 1;
          v103 = v59 ^ 2;
          v144 = v60 + 1;
        }
        v125 = 0;
        v124 = 0LL;
        if ( !v100 && !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v124, v48, v52, 0LL, v113, v112, v111, v37, v58) )
        {
LABEL_260:
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v124);
          v18 = v99;
          goto LABEL_73;
        }
        v138[0] = 0LL;
        v138[1] = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v139);
        v140 = 256;
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v137, (struct XDCOBJ *)v130, 0);
        DWORD2(v110) |= 8 * (*(_DWORD *)(*(_QWORD *)(v130[0] + 48LL) + 40LL) & 0x8000);
        *(_QWORD *)&v110 = 0LL;
        v126 = 0LL;
        v127 = 0;
        v128 = 0;
        if ( v49 )
        {
          v120 = 0LL;
          v121 = 0;
          *(_OWORD *)v132 = v109;
          v122 = 0;
          v133[0] = v110;
          if ( SURFMEM::bCreateDIB(
                 (SURFMEM *)&v120,
                 (struct _DEVBITMAPINFO *)v132,
                 *(void **)&prclDest.left,
                 0LL,
                 0,
                 0LL,
                 0LL,
                 0,
                 1,
                 0,
                 0)
            && (LODWORD(v109) = ((_DWORD)v109 != 7) + 2,
                SURFMEM::bCreateDIB((SURFMEM *)&v126, (struct _DEVBITMAPINFO *)&v109, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)) )
          {
            *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)&v109 + 4);
            *(_QWORD *)&prclDest.left = 0LL;
            EngCopyBits(
              (SURFOBJ *)((v126 + 24) & -(__int64)(v126 != 0)),
              (SURFOBJ *)(((unsigned __int64)v120 + 24) & -(__int64)(v120 != 0LL)),
              0LL,
              0LL,
              &prclDest,
              &gptl00);
          }
          else
          {
            v29 = 0;
          }
          SURFMEM::~SURFMEM((SURFMEM *)&v120);
          v61 = v29 == 0;
        }
        else
        {
          v61 = SURFMEM::bCreateDIB(
                  (SURFMEM *)&v126,
                  (struct _DEVBITMAPINFO *)&v109,
                  *(void **)&prclDest.left,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0,
                  1,
                  0,
                  0) == 0;
        }
        if ( v61 )
        {
LABEL_257:
          SURFMEM::~SURFMEM((SURFMEM *)&v126);
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v137);
          if ( v138[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v138);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v139);
          goto LABEL_260;
        }
        v62 = XDCOBJ::pSurfaceEff((XDCOBJ *)v130);
        v64 = 0LL;
        v120 = v62;
        v65 = *((_QWORD *)v62 + 16);
        v66 = *(struct PALETTE **)(v130[0] + 88LL);
        *(_QWORD *)&prclDest.left = 0LL;
        if ( v66 != ppalDefault )
          *((_QWORD *)v62 + 22) = *(_QWORD *)v66;
        if ( v100 )
        {
          if ( v100 != 1 )
          {
            v67 = v62;
            v68 = 0;
            if ( v100 != 2 )
            {
LABEL_208:
              if ( (*(_DWORD *)(v130[0] + 36LL) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)v130, (struct ERECTL *)&v141);
              if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v130) )
              {
                v71 = v101;
              }
              else
              {
                if ( (v137[24] & 1) == 0 )
                  goto LABEL_256;
                v72 = a6;
                v73 = (_DWORD *)(v130[0] + 1024LL);
                if ( (*(_DWORD *)(v130[0] + 40LL) & 1) == 0 )
                  v73 = (_DWORD *)(v130[0] + 1016LL);
                v141 += *v73;
                v143 += *v73;
                v142 += v73[1];
                v144 += v73[1];
                LODWORD(v145) = a6;
                if ( v123 == 4 && (BYTE8(v110) & 1) != 0 )
                {
                  v74 = a7;
                  v75 = a9;
                  v71 = v101;
                }
                else
                {
                  v71 = v101;
                  v75 = a9;
                  v74 = v101 - a7 - a9;
                }
                v76 = v74 + v75;
                v77 = v103;
                v78 = a6 + a8;
                HIDWORD(v145) = v74;
                v147 = v74 + v75;
                v146 = a6 + a8;
                if ( a6 > a6 + a8 )
                {
                  v72 = v78 + 1;
                  v77 = v103 ^ 1;
                  v78 = a6 + 1;
                  LODWORD(v145) = v72;
                  v146 = a6 + 1;
                }
                if ( v74 > v76 )
                {
                  v79 = v74;
                  v77 ^= 2u;
                  v74 = v76 + 1;
                  HIDWORD(v145) = v76 + 1;
                  v76 = v79 + 1;
                  v147 = v79 + 1;
                }
                if ( v78 <= 0
                  || v76 <= 0
                  || v72 >= *(_DWORD *)(v126 + 56)
                  || v74 >= *(_DWORD *)(v126 + 60)
                  || (unsigned int)ERECTL::bEmpty((ERECTL *)&v145) )
                {
                  goto LABEL_256;
                }
                v80 = XDCOBJ::prgnEffRao((XDCOBJ *)v130);
                v151 = 0LL;
                v152 = 0;
                v153 = v81;
                v154 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)v149, v80, (struct ERECTL *)&v141, 0);
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v150) )
                {
                  if ( (*(_DWORD *)(v130[0] + 36LL) & 0xE0) != 0 )
                  {
                    v129 = v150[0];
                    XDCOBJ::vAccumulateTight((XDCOBJ *)v130, v82, (struct ERECTL *)&v129);
                  }
                  if ( v68 )
                  {
                    v83 = v124;
                    if ( v124 )
                    {
                      INC_SHARE_REF_CNT(v124);
                      v83 = v124;
                    }
                    *(_QWORD *)(v126 + 128) = v83;
                  }
                  v84 = *((_QWORD *)v67 + 6);
                  v85 = v114;
                  if ( (*((_DWORD *)v67 + 28) & 2) != 0 )
                  {
                    v86 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v84 + 2824);
                    if ( (*(_DWORD *)(v84 + 40) & 0x20000) == 0 )
                    {
                      if ( v114 == 4 && (*(_BYTE *)(v130[0] + 72LL) & 0x10) == 0 )
                        v86 = EngStretchBlt;
                      if ( (int)v145 < 0
                        || SHIDWORD(v145) < 0
                        || v146 > *(_DWORD *)(v126 + 56)
                        || v147 > *(_DWORD *)(v126 + 60) )
                      {
                        v86 = EngStretchBlt;
                      }
                    }
                  }
                  else
                  {
                    v86 = EngStretchBlt;
                  }
                  if ( (v77 & 1) != 0 )
                  {
                    v87 = v141;
                    v141 = v143;
                    v143 = v87;
                  }
                  if ( (v77 & 2) != 0 )
                  {
                    v88 = v142;
                    v142 = v144;
                    v144 = v88;
                  }
                  ++*((_DWORD *)v67 + 23);
                  v89 = 0LL;
                  if ( *(__int16 *)(v130[0] + 178LL) >= 0 )
                    v89 = v130[0] + 176LL;
                  v90 = 0;
                  if ( ((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, XLATEOBJ *, __int64, __int64, int *, struct tagRGBQUAD **, _QWORD, int))v86)(
                         (char *)v67 + 24,
                         (v126 + 24) & -(__int64)(v126 != 0),
                         0LL,
                         v149,
                         v64,
                         v89,
                         v130[0] + 1192LL,
                         &v141,
                         &v145,
                         0LL,
                         v85) )
                  {
                    v90 = v71;
                  }
                  v99 = v90;
                  goto LABEL_256;
                }
              }
              v99 = v71;
LABEL_256:
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&prclDest);
              goto LABEL_257;
            }
            v64 = xloIdent;
            if ( *((_DWORD *)v62 + 24) != (_DWORD)v109 )
              v29 = 0;
LABEL_207:
            if ( !v29 )
              goto LABEL_256;
            goto LABEL_208;
          }
          if ( v104 < 2 * (unsigned __int64)v108
            || !(unsigned int)EXLATEOBJ::bMakeXlate(&prclDest, v145, v66, v62, v108, v98) )
          {
            goto LABEL_256;
          }
          v64 = *(XLATEOBJ **)&prclDest.left;
          if ( gbMultiMonMismatchColor && (*(_DWORD *)(v54 + 40) & 1) != 0 )
          {
            Palette = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v124, v97, v98, 0LL, v113, v112, v111, v37, 1);
            v67 = v120;
            if ( Palette )
            {
              v70 = *((_QWORD *)v120 + 16);
              if ( !v70 )
                v70 = *(_QWORD *)(v54 + 1776);
              XEPALOBJ::vGetEntriesFrom(&v124, v66, v70, v145, v108);
              v68 = 1;
              goto LABEL_207;
            }
            v29 = 0;
LABEL_206:
            v68 = 0;
            goto LABEL_207;
          }
        }
        else if ( v108 )
        {
          if ( v104 < 4 * v108 )
            goto LABEL_256;
          if ( (unsigned int)(v123 - 10) <= 2 )
            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v124, (const unsigned int *)&v145->rgbBlue, v63, v108);
          else
            XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v124, v145, 0, v108);
          *(_QWORD *)&prclDest.left = CreateXlateObject(v129, v106, v124, v65, v66, v66, 0, 0, 0xFFFFFF, 0);
          v64 = *(XLATEOBJ **)&prclDest.left;
          if ( !*(_QWORD *)&prclDest.left )
            v29 = 0;
        }
        else
        {
          *(_QWORD *)&prclDest.left = CreateXlateObject(v129, v106, v124, v65, v66, v66, 0, 0, 0xFFFFFF, 0);
          v64 = *(XLATEOBJ **)&prclDest.left;
          if ( !*(_QWORD *)&prclDest.left )
          {
            v29 = 0;
            v64 = 0LL;
          }
        }
        v67 = v120;
        goto LABEL_206;
      }
      goto LABEL_72;
    }
    goto LABEL_71;
  }
LABEL_60:
  HIDWORD(v109) = -1;
LABEL_61:
  EngSetLastError(0x216u);
LABEL_274:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v130);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v131);
  return v16;
}
