/*
 * XREFs of NtGdiTransparentBlt @ 0x1C0297970
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C026F280 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C001D2A8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001D35C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001DF10 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001EF80 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00F3FD0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F8B40 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FA390 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0101D80 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C01026C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C014E7F8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C02394BC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0266478 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ @ 0x1C0270484 (-bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C02704B0 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     EngPlgBlt @ 0x1C028F8F0 (EngPlgBlt.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02C06A4 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        LONG a8,
        int a9,
        int a10,
        unsigned int a11)
{
  int v14; // ecx
  unsigned int v15; // r12d
  FIX x; // r9d
  FIX v17; // r8d
  FIX y; // r11d
  FIX v19; // ecx
  int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  struct DC *v25; // r8
  struct SURFACE *v26; // rsi
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // r13
  int v30; // ebx
  __int64 v31; // rdi
  LONG v32; // ecx
  LONG v33; // edx
  bool v34; // cc
  int v35; // eax
  int v36; // ebx
  __int64 v37; // rbx
  __int64 v38; // rsi
  struct REGION *v39; // rax
  struct ECLIPOBJ *v40; // rdx
  struct DC *v41; // r8
  __int64 ThreadWin32Thread; // rax
  int v43; // eax
  __int64 *v44; // rax
  bool v45; // zf
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v47; // edx
  __int64 v48; // rdi
  unsigned int v49; // edx
  int *v50; // rdi
  unsigned int v51; // edx
  __int64 k; // rcx
  _BYTE *v53; // r8
  _BYTE *j; // r9
  _BYTE *v55; // rdx
  unsigned __int64 v56; // rcx
  _BYTE *v57; // rdx
  unsigned int v58; // edx
  _WORD *v59; // rdi
  __int64 i; // rcx
  size_t v61; // r8
  int v62; // edx
  Gre::Base *v63; // rcx
  struct Gre::Base::SESSION_GLOBALS *v64; // rax
  SURFOBJ *v65; // rcx
  int inited; // eax
  Gre::Base *v67; // rbx
  struct SURFACE *v69; // rdi
  BOOL (__stdcall *v70)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  __int64 v71; // rdx
  int v72; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  Gre::Base *v74; // [rsp+68h] [rbp-98h] BYREF
  __int64 v75; // [rsp+70h] [rbp-90h] BYREF
  char v76; // [rsp+78h] [rbp-88h]
  int v77; // [rsp+7Ch] [rbp-84h]
  HDC v78; // [rsp+80h] [rbp-80h] BYREF
  __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  char v80; // [rsp+90h] [rbp-70h]
  int v81; // [rsp+94h] [rbp-6Ch]
  DC *v82[2]; // [rsp+98h] [rbp-68h] BYREF
  char v83[32]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v84[2]; // [rsp+C8h] [rbp-38h] BYREF
  char v85[40]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v86; // [rsp+100h] [rbp+0h]
  float *v87[2]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v88[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v89; // [rsp+130h] [rbp+30h]
  __int64 v90; // [rsp+138h] [rbp+38h]
  struct SURFACE *v91; // [rsp+140h] [rbp+40h]
  _DWORD v92[4]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v93; // [rsp+158h] [rbp+58h]
  int v94; // [rsp+160h] [rbp+60h]
  int v95; // [rsp+164h] [rbp+64h]
  float *v96[3]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v97[288]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v98; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL prcl; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v100[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  RECTL v101; // [rsp+2C4h] [rbp+1C4h] BYREF
  __int64 v102; // [rsp+2F8h] [rbp+1F8h]
  __int64 v103; // [rsp+310h] [rbp+210h]
  int v104; // [rsp+318h] [rbp+218h]
  int v105; // [rsp+340h] [rbp+240h]
  __int64 v106; // [rsp+350h] [rbp+250h]
  struct _POINTFIX v107; // [rsp+360h] [rbp+260h] BYREF
  FIX v108; // [rsp+368h] [rbp+268h]
  int v109; // [rsp+36Ch] [rbp+26Ch]
  int v110; // [rsp+370h] [rbp+270h]
  FIX v111; // [rsp+374h] [rbp+274h]
  FIX v112; // [rsp+378h] [rbp+278h]
  int v113; // [rsp+37Ch] [rbp+27Ch]
  RECTL v114; // [rsp+380h] [rbp+280h] BYREF
  LONG v115; // [rsp+390h] [rbp+290h]
  int v116; // [rsp+394h] [rbp+294h]
  POINTFIX pptfx; // [rsp+3A0h] [rbp+2A0h] BYREF
  Gre::Base *v118; // [rsp+3A8h] [rbp+2A8h]
  Gre::Base *v119; // [rsp+3B0h] [rbp+2B0h]

  v78 = a6;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v82, a1);
    DCOBJ::DCOBJ((DCOBJ *)v84, v78);
    if ( !v82[0]
      || (*((_DWORD *)v82[0] + 9) & 0x10000) != 0
      || !v84[0]
      || (bSpDwmValidateSurface((struct XDCOBJ *)v84, a7, a8, a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)v82, a2, a3, a4, a5),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v87, (struct XDCOBJ *)v82, 516),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v96, (struct XDCOBJ *)v84, 516),
          (unsigned int)EXFORMOBJ::bRotationOrMirroring(v96)) )
    {
      EngSetLastError(0x57u);
      v15 = 0;
      goto LABEL_127;
    }
    prcl.right = a9 + a7;
    prcl.top = a8;
    prcl.left = a7;
    prcl.bottom = a10 + a8;
    EXFORMOBJ::bXform((EXFORMOBJ *)v96, (struct _POINTL *)&prcl);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'((char *)&v107, 8LL, 4LL, (void (__fastcall *)(char *))EPOINTFIX::EPOINTFIX);
    LODWORD(v74) = EXFORMOBJ::bRotationOrMirroring(v87);
    v14 = a2 + a4;
    v15 = 1;
    if ( (_DWORD)v74 )
    {
      v116 = a5 + a3;
      v114.left = a2;
      *(_QWORD *)&v114.top = __PAIR64__(v14, a3);
      v114.bottom = a3;
      v115 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)v87, (struct _POINTL *)&v114, &v107, 3uLL);
      x = v107.x;
      v17 = v108;
      if ( ((_DWORD)v87[0][8] & 1) != 0 )
      {
        if ( v107.x > v108 )
        {
          x = v107.x + 16;
          v17 = v108 + 16;
          v110 += 16;
          v107.x += 16;
          v108 += 16;
        }
        y = v107.y;
        v19 = v111;
        v20 = v109;
        if ( v107.y > v111 )
        {
          y = v107.y + 16;
          v20 = v109 + 16;
          v19 = v111 + 16;
          v107.y += 16;
          v111 += 16;
          v109 += 16;
        }
      }
      else
      {
        v19 = v111;
        v20 = v109;
        y = v107.y;
      }
      v112 = v17 + v110 - x;
      v113 = v19 + v20 - y;
      v21 = (v17 <= v112) ^ (unsigned int)(v17 > x);
      v22 = (unsigned int)v21;
      v23 = (v20 > y) ^ (unsigned int)(v20 <= v113);
      if ( *(&v107.x + 2 * v21) > *(&v107.x + 2 * ((unsigned int)v21 ^ 3LL)) )
        v22 = (unsigned int)v21 ^ 3;
      if ( *(&v107.y + 2 * v23) > *(&v107.y + 2 * ((unsigned int)v23 ^ 3LL)) )
        v23 = (unsigned int)v23 ^ 3;
      LODWORD(v98) = (*(&v107.x + 2 * v22) + 15) >> 4;
      DWORD1(v98) = (*(&v107.y + 2 * v23) + 15) >> 4;
      DWORD2(v98) = (*(&v107.x + 2 * ((unsigned int)v22 ^ 3LL)) + 15) >> 4;
      HIDWORD(v98) = (*(&v107.y + 2 * (v23 ^ 3)) + 15) >> 4;
    }
    else
    {
      HIDWORD(v98) = a5 + a3;
      LODWORD(v98) = a2;
      *(_QWORD *)((char *)&v98 + 4) = __PAIR64__(v14, a3);
      EXFORMOBJ::bXform((EXFORMOBJ *)v87, (struct _POINTL *)&v98);
      ERECTL::vOrder((ERECTL *)&v98);
    }
    if ( ERECTL::bEmpty((ERECTL *)&v98) )
    {
LABEL_125:
      `vector destructor iterator'((char *)&v107, 8LL, 4LL, (void (__fastcall *)(char *))vSrcCopyDummy);
LABEL_127:
      if ( v84[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v84);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v85);
      if ( v82[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v82);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v83);
      return v15;
    }
    if ( (*((_DWORD *)v82[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v82, (struct ERECTL *)&v98);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v97);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v97, (struct XDCOBJ *)v82, (struct XDCOBJ *)v84) )
    {
      v72 = XDCOBJ::bFullScreen((XDCOBJ *)v84);
      v15 = XDCOBJ::bFullScreen((XDCOBJ *)v82) | v72;
      goto LABEL_124;
    }
    v26 = (struct SURFACE *)*((_QWORD *)v82[0] + 62);
    v91 = v26;
    if ( !v26 )
      goto LABEL_124;
    v27 = *((_QWORD *)v26 + 16);
    v28 = *((_QWORD *)v82[0] + 11);
    v29 = *(_QWORD *)(v84[0] + 496LL);
    if ( !v29 )
      goto LABEL_124;
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v84[0] + 496LL))
      || !(unsigned int)DestSurfaceAccessCheck(v26) )
    {
      EngSetLastError(6u);
      v15 = 0;
      goto LABEL_124;
    }
    v30 = 0;
    v86 = v98;
    if ( !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&v98,
                          (const struct _POINTL *)v82[0] + (*((_DWORD *)v82[0] + 10) & 1LL) + 127,
                          1)
      || !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&prcl,
                          (const struct _POINTL *)(v84[0] + 1016LL + 8 * (*(_DWORD *)(v84[0] + 40LL) & 1LL)),
                          1) )
    {
      v30 = 1;
    }
    v31 = *(_QWORD *)(v29 + 48);
    if ( *(_WORD *)(v29 + 100) == 1 && v31 && (*(_DWORD *)(v31 + 40) & 0x20000) != 0 )
    {
      v32 = *(_DWORD *)(v31 + 2560);
      if ( prcl.left < v32 )
        goto LABEL_46;
      v33 = *(_DWORD *)(v31 + 2564);
      if ( prcl.top < v33 || prcl.right > *(_DWORD *)(v29 + 56) + v32 )
        goto LABEL_46;
      v34 = prcl.bottom <= v33 + *(_DWORD *)(v29 + 60);
    }
    else
    {
      if ( prcl.left < 0 || prcl.top < 0 || prcl.right > *(_DWORD *)(v29 + 56) )
        goto LABEL_46;
      v34 = prcl.bottom <= *(_DWORD *)(v29 + 60);
    }
    if ( v34 )
    {
      v35 = 0;
      goto LABEL_47;
    }
LABEL_46:
    v35 = 1;
LABEL_47:
    v36 = v35 | v30;
    if ( (struct SURFACE *)v29 == v26
      && (v114 = prcl, ERECTL::operator*=(&v114.left, (int *)&v98), !ERECTL::bEmpty((ERECTL *)&v114))
      || v36 )
    {
      EngSetLastError(0x57u);
      v15 = 0;
      goto LABEL_124;
    }
    v37 = *(_QWORD *)(v29 + 128);
    v38 = *(_QWORD *)(v84[0] + 88LL);
    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v37, v38, a11, 1LL);
    v39 = XDCOBJ::prgnEffRao(v82);
    v105 = 1;
    v102 = 0LL;
    v103 = 0LL;
    v104 = 0;
    v106 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v100, v39, (struct ERECTL *)&v98, 0);
    if ( ERECTL::bEmpty((ERECTL *)&v101) )
    {
LABEL_106:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v97, (__int64)v40, v41);
      `vector destructor iterator'((char *)&v107, 8LL, 4LL, (void (__fastcall *)(char *))vSrcCopyDummy);
      DCOBJ::~DCOBJ((DCOBJ *)v84);
      DCOBJ::~DCOBJ((DCOBJ *)v82);
      return v15;
    }
    if ( (*((_DWORD *)v82[0] + 9) & 0xE0) != 0 )
    {
      v114 = v101;
      XDCOBJ::vAccumulateTight((XDCOBJ *)v82, v40, (__m128i *)&v114);
    }
    v75 = 0LL;
    v76 = 0;
    v77 = 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x8000000) != 0 )
    {
      v43 = *(_DWORD *)(*((_QWORD *)v82[0] + 122) + 108LL);
      if ( (v43 & 1) != 0 && (v43 & 9) != 9 )
      {
        v88[1] = *(_DWORD *)(v29 + 56);
        v88[2] = *(_DWORD *)(v29 + 60);
        v88[0] = *(_DWORD *)(v29 + 96);
        v44 = *(__int64 **)(v29 + 128);
        v88[3] = 0;
        v90 = 0LL;
        if ( v44 )
          v89 = *v44;
        else
          v89 = 0LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)v88, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v75
          || ((v45 = (*(_DWORD *)(v29 + 112) & 0x400) == 0,
               *(_QWORD *)&v114.right = *(_QWORD *)(v29 + 56),
               *(_QWORD *)&v114.left = 0LL,
               v78 = 0LL,
               v45)
            ? (v46 = EngCopyBits)
            : (v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v31 + 2816)),
              !((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, RECTL *, HDC *))v46)(
                 v75 + 24,
                 v29 + 24,
                 0LL,
                 0LL,
                 &v114,
                 &v78)
           || (v47 = *(_DWORD *)(v75 + 96), (unsigned int)(v47 - 1) > 5)) )
        {
LABEL_105:
          SURFMEM::~SURFMEM((SURFMEM *)&v75);
          v15 = 0;
          goto LABEL_106;
        }
        ((void (*)(void))(&apfnMirror)[v47])();
        v29 = v75;
      }
    }
    v79 = 0LL;
    v80 = 0;
    v81 = 0;
    if ( !(_DWORD)v74 )
      goto LABEL_101;
    v92[1] = DWORD2(v98) - v98;
    v92[2] = HIDWORD(v98) - DWORD1(v98);
    v92[0] = *(_DWORD *)(v29 + 96);
    v94 = *(_DWORD *)(v29 + 112) & 0x40000;
    v92[3] = 0;
    v95 = 0;
    v93 = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)v92, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      v48 = v79;
      v49 = *(_DWORD *)(v79 + 64);
      switch ( *(_DWORD *)(v29 + 96) )
      {
        case 1:
          v61 = *(unsigned int *)(v79 + 64);
          if ( NearestIndexFromColorref )
            v62 = 255;
          else
            v62 = 0;
          break;
        case 2:
          v61 = *(unsigned int *)(v79 + 64);
          v62 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
          break;
        case 3:
          v61 = *(unsigned int *)(v79 + 64);
          v62 = NearestIndexFromColorref;
          break;
        default:
          switch ( *(_DWORD *)(v29 + 96) )
          {
            case 4:
              v58 = v49 >> 1;
              v59 = *(_WORD **)(v79 + 72);
              if ( v58 )
              {
                for ( i = v58; i; --i )
                  *v59++ = NearestIndexFromColorref;
              }
              break;
            case 5:
              v53 = *(_BYTE **)(v79 + 80);
              for ( j = &v53[*(_DWORD *)(v79 + 60) * *(_DWORD *)(v79 + 88)]; v53 != j; v53 += *(int *)(v48 + 88) )
              {
                v55 = v53;
                v56 = (unsigned __int64)&v53[3 * *(_DWORD *)(v48 + 56) - 2];
                if ( (unsigned __int64)v53 < v56 )
                {
                  do
                  {
                    *v55 = NearestIndexFromColorref;
                    v57 = v55 + 1;
                    *v57++ = BYTE1(NearestIndexFromColorref);
                    *v57 = BYTE2(NearestIndexFromColorref);
                    v55 = v57 + 1;
                  }
                  while ( (unsigned __int64)v55 < v56 );
                  v48 = v79;
                }
              }
              break;
            case 6:
              v50 = *(int **)(v79 + 72);
              v51 = v49 >> 2;
              if ( v51 )
              {
                for ( k = v51; k; --k )
                  *v50++ = NearestIndexFromColorref;
              }
              break;
          }
          goto LABEL_98;
      }
      memset_0(*(void **)(v79 + 72), v62, v61);
LABEL_98:
      `vector constructor iterator'((char *)&pptfx, 8LL, 3LL, (void (__fastcall *)(char *))EPOINTFIX::EPOINTFIX);
      v63 = (Gre::Base *)(unsigned int)(16 * DWORD1(v86));
      LODWORD(v74) = v107.x - 16 * v86;
      HIDWORD(v74) = v107.y - (_DWORD)v63;
      pptfx = (POINTFIX)v74;
      LODWORD(v74) = v108 - 16 * v86;
      HIDWORD(v74) = v109 - (_DWORD)v63;
      v118 = v74;
      LODWORD(v74) = v110 - 16 * v86;
      HIDWORD(v74) = v111 - (_DWORD)v63;
      v119 = v74;
      v64 = Gre::Base::Globals(v63);
      v65 = (SURFOBJ *)v79;
      if ( v79 )
        v65 = (SURFOBJ *)(v79 + 24);
      EngPlgBlt(
        v65,
        (SURFOBJ *)(v29 + 24),
        0LL,
        0LL,
        (XLATEOBJ *)((char *)v64 + 6896),
        0LL,
        0LL,
        &pptfx,
        &prcl,
        0LL,
        3u);
      v29 = v79;
      prcl.right = DWORD2(v98) - v98;
      prcl.bottom = HIDWORD(v98) - DWORD1(v98);
      *(_QWORD *)&prcl.left = 0LL;
      `vector destructor iterator'((char *)&pptfx, 8LL, 3LL, (void (__fastcall *)(char *))vSrcCopyDummy);
LABEL_101:
      v74 = 0LL;
      if ( *(_QWORD *)(v84[0] + 496LL) == *((_QWORD *)v82[0] + 62) )
      {
        v67 = 0LL;
      }
      else
      {
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&v74,
                   0LL,
                   0,
                   v37,
                   v27,
                   v38,
                   v28,
                   *(_DWORD *)(*((_QWORD *)v82[0] + 122) + 184LL),
                   *(_DWORD *)(*((_QWORD *)v82[0] + 122) + 176LL),
                   -1,
                   0);
        v67 = v74;
        if ( !inited )
        {
          EngSetLastError(6u);
          v15 = 0;
LABEL_120:
          EXLATEOBJ::vAltUnlock(&v74);
          SURFMEM::~SURFMEM((SURFMEM *)&v79);
          SURFMEM::~SURFMEM((SURFMEM *)&v75);
LABEL_124:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v97, v24, v25);
          goto LABEL_125;
        }
      }
      v69 = v91;
      ++*((_DWORD *)v91 + 23);
      if ( *((_QWORD *)v82[0] + 6) == *(_QWORD *)(v84[0] + 48LL)
        || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v82)
        && *(_QWORD *)(*((_QWORD *)v82[0] + 6) + 3496LL) == *(_QWORD *)(v84[0] + 48LL) )
      {
        if ( (*((_DWORD *)v69 + 28) & 0x8000) != 0 )
          v70 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v69 + 6) + 3256LL);
        else
          v70 = EngTransparentBlt;
        if ( v29 )
          v71 = v29 + 24;
        else
          v71 = 0LL;
        v15 = ((__int64 (__fastcall *)(char *, __int64, _BYTE *, Gre::Base *, __int128 *, RECTL *, int, _DWORD))v70)(
                (char *)v69 + 24,
                v71,
                v100,
                v67,
                &v98,
                &prcl,
                NearestIndexFromColorref,
                0);
      }
      else
      {
        EngSetLastError(0x57u);
        v15 = 0;
      }
      goto LABEL_120;
    }
    EngSetLastError(8u);
    SURFMEM::~SURFMEM((SURFMEM *)&v79);
    goto LABEL_105;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
