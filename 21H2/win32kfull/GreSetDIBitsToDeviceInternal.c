/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C002E3F0
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C002D140 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreSetDIBitsInternal @ 0x1C014A310 (GreSetDIBitsInternal.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C002F598 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C002F5F0 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C0030EE4 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003BF70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0043D24 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C008A518 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00E3768 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C011A1AC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D630 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015D9B0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026C90C (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BBF08 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BBFC8 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BE5D8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02BFB00 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02BFB38 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        unsigned int a4,
        unsigned int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        __int64 a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  int v19; // ebx
  int v20; // r14d
  unsigned int v21; // r12d
  __int64 v22; // r13
  __int64 v23; // r9
  int v24; // edx
  unsigned int v25; // ecx
  __int64 v26; // rdi
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // esi
  unsigned int v30; // ecx
  unsigned int v31; // edi
  unsigned __int64 v32; // rcx
  unsigned int v33; // ebx
  unsigned int v34; // eax
  ULONG v35; // ecx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  ULONG v38; // ecx
  unsigned int v39; // eax
  int v40; // ecx
  DC *v41; // r8
  unsigned int v42; // edx
  LONG v43; // ebx
  LONG left; // r13d
  __int64 v45; // rsi
  __int64 v46; // rcx
  int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // r15
  __int64 v52; // rax
  unsigned int v53; // r13d
  __int64 v54; // rdi
  struct PALETTE *v55; // rbx
  int v56; // r12d
  int v57; // eax
  HDC v58; // r13
  int v59; // ebx
  DC *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rbx
  struct REGION *v63; // rax
  struct ECLIPOBJ *v64; // rdx
  __int64 v65; // rax
  __int16 v66; // r8
  __int64 v67; // r8
  unsigned int v68; // r8d
  HDC XlateObject; // rax
  LONG v70; // esi
  int v71; // ecx
  int v72; // edx
  int v73; // eax
  int v74; // r9d
  int v75; // r10d
  LONG v76; // r8d
  LONG v77; // ecx
  int v78; // r9d
  struct REGION *v79; // rax
  struct ECLIPOBJ *v80; // rdx
  __int64 v81; // rax
  int v82; // ecx
  int v83; // ecx
  int v84; // eax
  struct _CLIPOBJ *v86; // [rsp+20h] [rbp-E0h]
  int v87; // [rsp+60h] [rbp-A0h]
  LONG v88; // [rsp+64h] [rbp-9Ch]
  unsigned int v89; // [rsp+68h] [rbp-98h]
  unsigned int v90; // [rsp+6Ch] [rbp-94h]
  unsigned int v91; // [rsp+70h] [rbp-90h]
  unsigned int v92; // [rsp+74h] [rbp-8Ch]
  HDC v93; // [rsp+78h] [rbp-88h] BYREF
  int v94; // [rsp+80h] [rbp-80h]
  unsigned int v95; // [rsp+84h] [rbp-7Ch]
  __int64 v96; // [rsp+90h] [rbp-70h] BYREF
  int v97; // [rsp+98h] [rbp-68h]
  int v98; // [rsp+9Ch] [rbp-64h]
  int v99; // [rsp+A0h] [rbp-60h]
  unsigned int v100; // [rsp+A4h] [rbp-5Ch]
  unsigned int v101; // [rsp+A8h] [rbp-58h]
  unsigned int v102; // [rsp+ACh] [rbp-54h]
  unsigned int v103; // [rsp+B0h] [rbp-50h]
  __int64 v104; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v105; // [rsp+C0h] [rbp-40h]
  __int64 v106; // [rsp+C8h] [rbp-38h]
  __int64 v107; // [rsp+D0h] [rbp-30h]
  struct _RECTL v108; // [rsp+E0h] [rbp-20h] BYREF
  int v109; // [rsp+F0h] [rbp-10h]
  __int64 v110; // [rsp+F8h] [rbp-8h] BYREF
  int v111; // [rsp+100h] [rbp+0h]
  __m128i v112; // [rsp+108h] [rbp+8h] BYREF
  __int64 v113; // [rsp+118h] [rbp+18h] BYREF
  char v114; // [rsp+120h] [rbp+20h]
  int v115; // [rsp+124h] [rbp+24h]
  unsigned int v116; // [rsp+128h] [rbp+28h]
  DC *v117[2]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v118[32]; // [rsp+140h] [rbp+40h] BYREF
  DC *v119[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v120[32]; // [rsp+170h] [rbp+70h] BYREF
  LONG v121; // [rsp+190h] [rbp+90h]
  _BYTE v122[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v123[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v124[32]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v125; // [rsp+1F0h] [rbp+F0h]
  struct _RECTL v126; // [rsp+210h] [rbp+110h] BYREF
  struct _RECTL v127; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v128[4]; // [rsp+230h] [rbp+130h] BYREF
  __m128i v129; // [rsp+234h] [rbp+134h] BYREF
  __int64 v130; // [rsp+280h] [rbp+180h]
  int v131; // [rsp+288h] [rbp+188h]
  int v132; // [rsp+2B0h] [rbp+1B0h]
  __int64 v133; // [rsp+2C0h] [rbp+1C0h]
  unsigned int v134; // [rsp+388h] [rbp+288h]

  v121 = a6;
  LOBYTE(v19) = -1;
  v93 = a1;
  v96 = a16;
  v116 = a4;
  v108.left = a3;
  v88 = a2;
  v112.m128i_i64[0] = a10;
  v119[0] = 0LL;
  v119[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v120);
  XDCOBJ::vLock((XDCOBJ *)v119, a1);
  if ( v119[0] )
    v19 = *(_DWORD *)(*((_QWORD *)v119[0] + 122) + 108LL);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v119);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v120);
  v20 = 1;
  if ( (v19 & 1) != 0 )
    v88 = a4 + a2 - 1;
  if ( !a11 )
    goto LABEL_218;
  if ( !a10 )
    goto LABEL_218;
  v21 = a12;
  if ( a12 > 2 )
    goto LABEL_218;
  if ( a14 < 0x28 )
    goto LABEL_218;
  v22 = *a11;
  if ( (unsigned int)v22 < 0x28 )
    goto LABEL_218;
  v23 = a11[1];
  v92 = v23;
  if ( (int)v23 <= 0 )
    goto LABEL_218;
  v24 = a11[2];
  v99 = v24;
  if ( !v24 )
    goto LABEL_218;
  v25 = a11[4];
  v26 = *((unsigned __int16 *)a11 + 7);
  v95 = a11[8];
  *(_QWORD *)&v126.left = (char *)a11 + v22;
  v104 = 0LL;
  v105 = 0LL;
  v107 = 0LL;
  v106 = 0LL;
  v103 = v25;
  if ( v24 < 0 )
  {
    LODWORD(v107) = 1;
    if ( v25 > 0xC )
      goto LABEL_218;
    v27 = 7225;
    if ( !_bittest(&v27, v25) )
      goto LABEL_218;
    v24 = -v24;
    v99 = v24;
  }
  v102 = 0;
  v101 = 0;
  v100 = 0;
  v109 = 0;
  if ( v25 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      v28 = 0;
      if ( a12 != 1 )
        v28 = a12;
      v21 = v28;
      a12 = v28;
      if ( (_DWORD)v26 == 16 )
      {
        LODWORD(v104) = 4;
        goto LABEL_24;
      }
      if ( (_DWORD)v26 == 32 )
      {
        LODWORD(v104) = 6;
LABEL_24:
        v91 = 0;
        v29 = 0;
        v102 = a11[10];
        v101 = a11[11];
        v100 = a11[12];
        *(_QWORD *)&v126.left = a11 + 10;
        v89 = 2;
        v90 = 512;
LABEL_25:
        v30 = v26 * v23;
        if ( (unsigned __int64)(v26 * v23) <= 0xFFFFFFFF && v30 + 31 >= v30 )
        {
          v31 = a9;
          v87 = a9;
          v32 = a9 * (unsigned __int64)(((v30 + 31) >> 3) & 0x1FFFFFFC);
          if ( v32 <= 0xFFFFFFFF )
          {
            v33 = v23;
            v94 = a8;
LABEL_90:
            HIDWORD(v105) = v32;
LABEL_91:
            v134 = a14 - v22;
            v39 = v95;
            if ( v95 )
            {
              if ( v95 > v29 )
                v39 = v29;
              v95 = v39;
            }
            else
            {
              v95 = v29;
            }
            if ( a13 >= (unsigned int)v32 )
            {
              v40 = v24;
              HIDWORD(v104) = v33;
              v117[0] = 0LL;
              v117[1] = 0LL;
              if ( v103 - 4 > 1 )
                v40 = v31;
              LODWORD(v105) = v40;
              UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v118);
              XDCOBJ::vLock((XDCOBJ *)v117, v93);
              v41 = v117[0];
              if ( !v117[0] || (*((_DWORD *)v117[0] + 9) & 0x10000) != 0 )
              {
                EngSetLastError(0x57u);
                v31 = 0;
LABEL_217:
                MDCOBJ::~MDCOBJ((MDCOBJ *)v117);
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v118);
                return v31;
              }
              v42 = a11[4];
              v43 = v88;
              left = v108.left;
              v45 = *((_QWORD *)v117[0] + 6);
              v93 = (HDC)__PAIR64__(v108.left, v88);
              if ( v42 - 4 <= 1 && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v117, v42) || v21 || v96) )
              {
                v31 = 0;
                v87 = 0;
              }
              if ( a15 )
              {
                EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v110, (struct XDCOBJ *)v117, 0x204u);
                v46 = v110;
                if ( (*(_BYTE *)(v110 + 32) & 0x43) != 0x43 )
                {
                  bCvtPts1(v110, &v93, 1LL);
                  v46 = v110;
                  left = HIDWORD(v93);
                  v43 = (int)v93;
                }
                if ( v31 && a11[4] - 4 <= 1 )
                {
                  v31 &= -((*(_BYTE *)(v46 + 32) & 1) != 0);
                  v87 = v31;
                }
                v41 = v117[0];
              }
              v47 = *((_DWORD *)v41 + 130);
              v48 = v116;
              v49 = a5;
              v93 = (HDC)__PAIR64__(a5, v116);
              if ( (v47 & 1) != 0 && (v47 & 2) == 0 )
              {
                *(_QWORD *)&v108.left = *(_QWORD *)((char *)v41 + 524);
                EPOINTL::vScale((EPOINTL *)&v93, (const struct POINTFL *)&v108);
                v49 = HIDWORD(v93);
                v48 = (unsigned int)v93;
              }
              v127.left = v43;
              v127.right = v43 + v48;
              v127.bottom = v49 + left;
              v127.top = left;
              ERECTL::vOrder((ERECTL *)&v127);
              if ( v127.left == v127.right || v127.top == v127.bottom || !v31 )
                goto LABEL_217;
              if ( (*(_DWORD *)(v50 + 36) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)v117, (struct ERECTL *)&v127);
              v123[1] = 0LL;
              v123[0] = 0LL;
              UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v124);
              v125 = 256;
              DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v122, (struct XDCOBJ *)v117, 0);
              v51 = *((_QWORD *)v117[0] + 62);
              if ( !v51 )
              {
LABEL_177:
                DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v122);
                if ( v123[0] )
                {
                  if ( (_BYTE)v125 )
                  {
                    *(_DWORD *)(v123[0] + 40LL) &= ~2u;
                    LOBYTE(v125) = 0;
                  }
                  XDCOBJ::vUnlock((XDCOBJ *)v123);
                }
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v124);
                goto LABEL_217;
              }
              v52 = v96;
              if ( !v96 )
              {
                v52 = *(_QWORD *)(*((_QWORD *)v117[0] + 122) + 248LL);
                v96 = v52;
              }
              v53 = *((_DWORD *)v117[0] + 30);
              if ( (v53 & 0x10000000) != 0 && (!v52 || v103 - 10 > 2) )
                v53 = v53 & 0xFFFFFFF | 0x20000000;
              v54 = *(_QWORD *)(v51 + 128);
              v111 = 0;
              v110 = 0LL;
              v55 = (struct PALETTE *)*((_QWORD *)v117[0] + 11);
              if ( v55 != ppalDefault )
                *(_QWORD *)(v51 + 176) = *(_QWORD *)v55;
              v56 = 1;
              *(_QWORD *)&v108.left = 0LL;
              v93 = 0LL;
              if ( a12 )
              {
                if ( a12 != 1 )
                {
                  v57 = *(_DWORD *)(v51 + 96);
                  if ( v57 == (_DWORD)v104 || v57 == 2 && (_DWORD)v104 == 7 || v57 == 3 && (_DWORD)v104 == 8 )
                  {
                    v58 = (HDC)xloIdent;
                    goto LABEL_139;
                  }
                  goto LABEL_137;
                }
                if ( v134 >= 2 * (unsigned __int64)v95 )
                {
                  if ( !(unsigned int)EXLATEOBJ::bMakeXlate(&v93, *(_QWORD *)&v126.left, v55, v51, v95, v91) )
                    goto LABEL_138;
                  v58 = v93;
                  if ( !gbMultiMonMismatchColor
                    || (*(_DWORD *)(v45 + 40) & 1) == 0
                    || !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v110, v89, v91, 0LL, v102, v101, v100, v90, 1) )
                  {
                    goto LABEL_139;
                  }
                  v67 = *(_QWORD *)(v51 + 128);
                  if ( !v67 )
                    v67 = *(_QWORD *)(v45 + 1776);
                  XEPALOBJ::vGetEntriesFrom(&v110, v55, v67, *(_QWORD *)&v126.left, v95);
                  v59 = 1;
LABEL_140:
                  v113 = 0LL;
                  v115 = 0;
                  v114 = 0;
                  SURFMEM::bCreateDIB(
                    (SURFMEM *)&v113,
                    (struct _DEVBITMAPINFO *)&v104,
                    (void *)v112.m128i_i64[0],
                    0LL,
                    0,
                    0LL,
                    0LL,
                    0,
                    1,
                    0,
                    0);
                  if ( v56 && v113 )
                  {
                    *(_DWORD *)(v113 + 92) = 0;
                    if ( (v122[24] & 1) == 0
                      || (v60 = v117[0],
                          !(unsigned int)ERECTL::bOffsetAdd(
                                           (ERECTL *)&v127,
                                           (const struct _POINTL *)v117[0] + (*((_DWORD *)v117[0] + 10) & 1LL) + 127,
                                           1)) )
                    {
LABEL_175:
                      v31 = v87;
LABEL_176:
                      SURFMEM::~SURFMEM((SURFMEM *)&v113);
                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v93);
                      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v110);
                      goto LABEL_177;
                    }
                    if ( v59 )
                    {
                      v61 = v110;
                      if ( v110 )
                      {
                        INC_SHARE_REF_CNT(v110);
                        v61 = v110;
                      }
                      *(_QWORD *)(v113 + 128) = v61;
                      v60 = v117[0];
                    }
                    v62 = *(_QWORD *)(v51 + 48);
                    v126.right = v121 + v116;
                    v126.left = v121;
                    v126.top = v99 - a5 - a7;
                    v126.bottom = v99 - a7;
                    if ( v109 )
                    {
                      v63 = XDCOBJ::prgnEffRao((XDCOBJ *)v117);
                      v130 = 0LL;
                      v131 = 0;
                      v132 = 1;
                      v133 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)v128, v63, (struct ERECTL *)&v127, 0);
                      if ( !ERECTL::bEmpty((ERECTL *)&v129) )
                      {
                        if ( (*((_DWORD *)v117[0] + 9) & 0xE0) != 0 )
                        {
                          v112 = v129;
                          XDCOBJ::vAccumulateTight((XDCOBJ *)v117, v64, &v112);
                        }
                        v65 = v113;
                        ++*(_DWORD *)(v51 + 92);
                        if ( bClipSrcDstRectsAndValidate(
                               (struct _SURFOBJ *)(v51 + 24),
                               (struct _SURFOBJ *)((v65 + 24) & -(__int64)(v65 != 0)),
                               (struct DCOBJ *)v117,
                               0LL,
                               v86,
                               &v127,
                               &v126) )
                        {
                          if ( (unsigned int)DC::bDpiScaleTransform(v117[0]) )
                          {
                            if ( (v66 & 2) != 0 )
                              (*(void (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, HDC, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))(v62 + 2824))(
                                v51 + 24,
                                (v113 + 24) & -(__int64)(v113 != 0),
                                0LL,
                                v128,
                                v58,
                                0LL,
                                0LL,
                                &v127,
                                &v126,
                                0LL,
                                3);
                            else
                              ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, HDC, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))EngStretchBlt)(
                                v51 + 24,
                                (v113 + 24) & -(__int64)(v113 != 0),
                                0LL,
                                v128,
                                v58,
                                0LL,
                                0LL,
                                &v127,
                                &v126,
                                0LL,
                                3);
                          }
                          else
                          {
                            v96 = *(_QWORD *)&v126.left;
                            if ( (v66 & 0x400) != 0 )
                              (*(void (__fastcall **)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, __int64 *))(v62 + 2816))(
                                v51 + 24,
                                (v113 + 24) & -(__int64)(v113 != 0),
                                v128,
                                v58,
                                &v127,
                                &v96);
                            else
                              ((void (__fastcall *)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, __int64 *))EngCopyBits)(
                                v51 + 24,
                                (v113 + 24) & -(__int64)(v113 != 0),
                                v128,
                                v58,
                                &v127,
                                &v96);
                          }
                        }
                      }
                      goto LABEL_175;
                    }
                    v70 = v99 - v94 - v87;
                    *(__int64 *)((char *)v112.m128i_i64 + 4) = __PAIR64__(v92, v70);
                    v112.m128i_i32[0] = 0;
                    v112.m128i_i32[3] = v99 - v94;
                    v108 = v126;
                    ERECTL::operator*=(&v126, &v112);
                    if ( v126.left == v126.right || v126.top == v126.bottom )
                      goto LABEL_175;
                    v71 = v126.left - v108.left;
                    v72 = *((_DWORD *)v60 + 130);
                    v73 = v126.right - v108.right;
                    v74 = v126.top - v108.top;
                    v75 = v126.bottom - v108.bottom;
                    LODWORD(v96) = v126.left - v108.left;
                    v97 = v126.right - v108.right;
                    HIDWORD(v96) = v126.top - v108.top;
                    v98 = v126.bottom - v108.bottom;
                    if ( (v72 & 1) != 0 && (v72 & 2) == 0 )
                    {
                      v112.m128i_i64[0] = *(_QWORD *)((char *)v60 + 524);
                      ERECTL::vScale((ERECTL *)&v96, (const struct POINTFL *)&v112);
                      v75 = v98;
                      v73 = v97;
                      v74 = HIDWORD(v96);
                      v71 = v96;
                      v60 = v117[0];
                    }
                    v76 = v71 + v127.left;
                    v77 = v74 + v127.top;
                    v127.left = v76;
                    v78 = v75 + v127.bottom;
                    v127.right += v73;
                    v127.top = v77;
                    v127.bottom += v75;
                    if ( v76 == v127.right || v77 == v78 )
                      goto LABEL_175;
                    v79 = DC::prgnRao(v60) ? DC::prgnRao(v60) : DC::prgnVisSnap(v60);
                    v130 = 0LL;
                    v131 = 0;
                    v132 = 1;
                    v133 = 0LL;
                    XCLIPOBJ::vSetup((XCLIPOBJ *)v128, v79, (struct ERECTL *)&v127, 0);
                    if ( v129.m128i_i32[0] == v129.m128i_i32[2] || v129.m128i_i32[1] == v129.m128i_i32[3] )
                      goto LABEL_175;
                    if ( (*((_DWORD *)v117[0] + 9) & 0xE0) != 0 )
                    {
                      v112 = v129;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)v117, v80, &v112);
                    }
                    if ( v103 - 4 <= 1 )
                    {
                      v126.bottom += v70 - v126.top;
                      v126.top = v70;
                    }
                    else
                    {
                      v126.bottom -= v70;
                      v126.top -= v70;
                    }
                    v81 = v113;
                    ++*(_DWORD *)(v51 + 92);
                    if ( !bClipSrcDstRectsAndValidate(
                            (struct _SURFOBJ *)(v51 + 24),
                            (struct _SURFOBJ *)((v81 + 24) & -(__int64)(v81 != 0)),
                            (struct DCOBJ *)v117,
                            0LL,
                            v86,
                            &v127,
                            &v126) )
                      goto LABEL_175;
                    v82 = *((_DWORD *)v117[0] + 130);
                    if ( (v82 & 1) == 0 || (v82 & 2) != 0 )
                      v20 = 0;
                    v83 = *(_DWORD *)(v51 + 112);
                    if ( v20 )
                    {
                      v84 = (v83 & 2) != 0
                          ? (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, HDC, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))(v62 + 2824))(
                              v51 + 24,
                              (v113 + 24) & -(__int64)(v113 != 0),
                              0LL,
                              v128,
                              v58,
                              0LL,
                              0LL,
                              &v127,
                              &v126,
                              0LL,
                              3)
                          : ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, HDC, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))EngStretchBlt)(
                              v51 + 24,
                              (v113 + 24) & -(__int64)(v113 != 0),
                              0LL,
                              v128,
                              v58,
                              0LL,
                              0LL,
                              &v127,
                              &v126,
                              0LL,
                              3);
                    }
                    else
                    {
                      v96 = *(_QWORD *)&v126.left;
                      v84 = (v83 & 0x400) != 0
                          ? (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, __int64 *))(v62 + 2816))(
                              v51 + 24,
                              (v113 + 24) & -(__int64)(v113 != 0),
                              v128,
                              v58,
                              &v127,
                              &v96)
                          : ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, __int64 *))EngCopyBits)(
                              v51 + 24,
                              (v113 + 24) & -(__int64)(v113 != 0),
                              v128,
                              v58,
                              &v127,
                              &v96);
                    }
                    if ( v84 )
                      goto LABEL_175;
                  }
                  v31 = 0;
                  goto LABEL_176;
                }
LABEL_137:
                EngSetLastError(0x57u);
LABEL_138:
                v56 = 0;
                v58 = *(HDC *)&v108.left;
LABEL_139:
                v59 = 0;
                goto LABEL_140;
              }
              if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v110, v89, v91, 0LL, v102, v101, v100, v90, 1) )
                goto LABEL_138;
              if ( v95 )
              {
                if ( v134 < 4 * v95 )
                  goto LABEL_137;
                if ( v103 - 10 <= 2 )
                  XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v110, *(const unsigned int **)&v126.left, v68, v95);
                else
                  XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v110, *(struct tagRGBQUAD **)&v126.left, 0, v95);
              }
              XlateObject = (HDC)CreateXlateObject(v96, v53, v110, v54, v55, v55, 0, 0, 0xFFFFFF, 0);
              v59 = 0;
              v93 = XlateObject;
              if ( XlateObject )
              {
                v58 = XlateObject;
              }
              else
              {
                v58 = *(HDC *)&v108.left;
                v56 = 0;
              }
              goto LABEL_140;
            }
            goto LABEL_218;
          }
          HIDWORD(v105) = -1;
        }
        v35 = 534;
LABEL_219:
        EngSetLastError(v35);
        return 0LL;
      }
    }
LABEL_218:
    v35 = 87;
    goto LABEL_219;
  }
  if ( !v25 )
  {
    if ( (_DWORD)v26 == 1 )
    {
      LODWORD(v104) = 1;
      v29 = 2;
      v91 = 2;
    }
    else
    {
      if ( (_DWORD)v26 == 4 )
      {
        LODWORD(v104) = 2;
        v29 = 16;
      }
      else
      {
        if ( (_DWORD)v26 != 8 )
        {
          v91 = 0;
          v34 = 0;
          v29 = 0;
          if ( a12 != 1 )
            v34 = a12;
          v21 = v34;
          a12 = v34;
          v90 = 512;
          switch ( (_DWORD)v26 )
          {
            case 0x10:
              LODWORD(v104) = 4;
              v102 = 31744;
              v101 = 992;
              v100 = 31;
              v89 = 2;
              break;
            case 0x18:
              LODWORD(v104) = 5;
              v89 = 8;
              break;
            case 0x20:
              LODWORD(v104) = 6;
              v89 = 8;
              goto LABEL_25;
            default:
              goto LABEL_218;
          }
          a12 = v34;
          goto LABEL_25;
        }
        LODWORD(v104) = 3;
        v29 = 256;
      }
      v91 = v29;
    }
    v89 = 1;
    v90 = 1024;
    goto LABEL_25;
  }
  if ( v25 != 10 )
  {
    if ( v25 != 2 )
    {
      if ( v25 != 12 )
      {
        if ( v25 != 1 )
        {
          if ( v25 != 11 )
          {
            if ( v25 == 4 )
            {
              LODWORD(v104) = 9;
            }
            else
            {
              if ( v25 != 5 )
                goto LABEL_218;
              LODWORD(v104) = 10;
            }
            v31 = a9;
            v29 = 0;
            v94 = 0;
            v91 = 0;
            v90 = 512;
            v33 = v23;
            v89 = 8;
            v87 = a9;
LABEL_89:
            LODWORD(v32) = a11[5];
            goto LABEL_90;
          }
          DCOBJ::DCOBJ((DCOBJ *)v119, a1);
          if ( !v119[0] || !(unsigned int)DC::bIsCMYKColor(v119[0]) )
            goto LABEL_67;
          MDCOBJ::~MDCOBJ((MDCOBJ *)v119);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v120);
          v24 = v99;
        }
        if ( (_DWORD)v26 != 8 )
          goto LABEL_218;
        v29 = 256;
        LODWORD(v104) = 8;
        v91 = 256;
        v94 = 0;
LABEL_88:
        v33 = v92;
        v31 = v24;
        v109 = 1;
        v87 = v24;
        v90 = 1024;
        v89 = 1;
        goto LABEL_89;
      }
      DCOBJ::DCOBJ((DCOBJ *)v119, a1);
      if ( !v119[0] || !(unsigned int)DC::bIsCMYKColor(v119[0]) )
        goto LABEL_67;
      MDCOBJ::~MDCOBJ((MDCOBJ *)v119);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v120);
      v24 = v99;
    }
    if ( (_DWORD)v26 != 4 )
      goto LABEL_218;
    v94 = 0;
    v29 = 16;
    v91 = 16;
    LODWORD(v104) = 7;
    goto LABEL_88;
  }
  DCOBJ::DCOBJ((DCOBJ *)v119, a1);
  if ( !v119[0] || !(unsigned int)DC::bIsCMYKColor(v119[0]) )
    goto LABEL_67;
  switch ( (_DWORD)v26 )
  {
    case 1:
      LODWORD(v104) = 1;
      v29 = 2;
      break;
    case 4:
      LODWORD(v104) = 2;
      v29 = 16;
      break;
    case 8:
      LODWORD(v104) = 3;
      v29 = 256;
      break;
    case 0x20:
      v29 = 0;
      LODWORD(v104) = 6;
      v89 = 16;
      v90 = 512;
      goto LABEL_61;
    default:
LABEL_67:
      v38 = 87;
      goto LABEL_68;
  }
  v89 = 1;
  v90 = 1024;
LABEL_61:
  v33 = v92;
  v91 = v29;
  v36 = v26 * v92;
  if ( v36 <= 0xFFFFFFFF && (int)v36 + 31 >= (unsigned int)v36 )
  {
    v31 = a9;
    v87 = a9;
    v37 = a9 * (unsigned __int64)(((unsigned int)(v36 + 31) >> 3) & 0x1FFFFFFC);
    if ( v37 <= 0xFFFFFFFF )
    {
      HIDWORD(v105) = v37;
      MDCOBJ::~MDCOBJ((MDCOBJ *)v119);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v120);
      LODWORD(v32) = HIDWORD(v105);
      v24 = v99;
      v94 = a8;
      goto LABEL_91;
    }
    HIDWORD(v105) = -1;
  }
  v38 = 534;
LABEL_68:
  EngSetLastError(v38);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v119);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v120);
  return 0LL;
}
