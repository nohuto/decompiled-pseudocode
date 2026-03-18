/*
 * XREFs of NtGdiTransparentBlt @ 0x1C0148400
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C02745B0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002C6F4 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C002C7C4 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C002F5F0 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0088D44 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C008A13C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ @ 0x1C014910C (-bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C014913C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0149194 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0275B34 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C028A2A0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  int v11; // r12d
  FIX x; // r9d
  FIX v16; // r8d
  FIX y; // r11d
  FIX v18; // ecx
  int v19; // r10d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  HDC v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r15
  HDC v26; // r13
  int v27; // esi
  __int64 v28; // rdi
  LONG v29; // ecx
  LONG v30; // edx
  bool v31; // cc
  int v32; // eax
  int v33; // esi
  __int64 v34; // rbx
  __int64 v35; // rsi
  struct REGION *v36; // rax
  struct ECLIPOBJ *v37; // rdx
  unsigned int v38; // edi
  __int64 ThreadWin32Thread; // rax
  int v40; // eax
  __int64 *v41; // rax
  bool v42; // zf
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v44; // edx
  HDC v45; // r9
  unsigned int v46; // edx
  int *v47; // rdi
  unsigned int v48; // edx
  __int64 k; // rcx
  _BYTE *v50; // r8
  _BYTE *j; // r10
  _BYTE *v52; // rdx
  unsigned __int64 v53; // rcx
  _BYTE *v54; // rdx
  unsigned int v55; // edx
  _WORD *v56; // rdi
  __int64 i; // rcx
  size_t v58; // r8
  int v59; // edx
  SURFOBJ *v60; // rcx
  POINTFIX v61; // r9
  int inited; // eax
  ULONG v63; // ecx
  HDC v64; // r8
  __int64 v65; // rdi
  __int64 v66; // rdx
  BOOL (__stdcall *v67)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  HDC v68; // rdx
  ULONG v69; // ecx
  int v70; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  int v73[2]; // [rsp+68h] [rbp-98h] BYREF
  HDC v74; // [rsp+70h] [rbp-90h]
  HDC v75; // [rsp+78h] [rbp-88h] BYREF
  char v76; // [rsp+80h] [rbp-80h]
  int v77; // [rsp+84h] [rbp-7Ch]
  HDC v78; // [rsp+88h] [rbp-78h] BYREF
  char v79; // [rsp+90h] [rbp-70h]
  int v80; // [rsp+94h] [rbp-6Ch]
  DC *v81[2]; // [rsp+98h] [rbp-68h] BYREF
  char v82[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v84[2]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v85[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  _QWORD v88[2]; // [rsp+100h] [rbp+0h] BYREF
  char v89[32]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v90[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v91; // [rsp+140h] [rbp+40h]
  int v92; // [rsp+148h] [rbp+48h]
  int v93; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v94[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v95[288]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v96; // [rsp+280h] [rbp+180h] BYREF
  RECTL prcl; // [rsp+290h] [rbp+190h] BYREF
  RECTL v98; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v99[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  RECTL v100; // [rsp+2B4h] [rbp+1B4h] BYREF
  __int64 v101; // [rsp+300h] [rbp+200h]
  int v102; // [rsp+308h] [rbp+208h]
  int v103; // [rsp+330h] [rbp+230h]
  __int64 v104; // [rsp+340h] [rbp+240h]
  struct _POINTFIX v105; // [rsp+350h] [rbp+250h] BYREF
  FIX v106; // [rsp+358h] [rbp+258h]
  int v107; // [rsp+35Ch] [rbp+25Ch]
  int v108; // [rsp+360h] [rbp+260h]
  FIX v109; // [rsp+364h] [rbp+264h]
  FIX v110; // [rsp+368h] [rbp+268h]
  int v111; // [rsp+36Ch] [rbp+26Ch]
  __int128 v112; // [rsp+370h] [rbp+270h] BYREF
  LONG v113; // [rsp+380h] [rbp+280h]
  int v114; // [rsp+384h] [rbp+284h]
  POINTFIX pptfx; // [rsp+390h] [rbp+290h] BYREF
  POINTFIX v116; // [rsp+398h] [rbp+298h]
  POINTFIX v117; // [rsp+3A0h] [rbp+2A0h]

  v11 = 0;
  v74 = a6;
  v73[0] = a8;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v81, a1);
    DCOBJ::DCOBJ((DCOBJ *)v88, v74);
    if ( !v81[0]
      || (*((_DWORD *)v81[0] + 9) & 0x10000) != 0
      || !v88[0]
      || (bSpDwmValidateSurface((struct XDCOBJ *)v88, a7, v73[0], a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)v81, a2, a3, a4, a5),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v84, (struct XDCOBJ *)v81, 516),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v94, (struct XDCOBJ *)v88, 516),
          (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v94)) )
    {
      EngSetLastError(0x57u);
      goto LABEL_128;
    }
    prcl.left = a7;
    prcl.right = a9 + a7;
    prcl.top = v73[0];
    prcl.bottom = a10 + v73[0];
    EXFORMOBJ::bXform((EXFORMOBJ *)v94, (struct _POINTL *)&prcl);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'(&v105, 8uLL, 4uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    v73[0] = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v84);
    if ( v73[0] )
    {
      DWORD2(v112) = a2 + a4;
      v114 = a5 + a3;
      *(_QWORD *)&v112 = __PAIR64__(a3, a2);
      HIDWORD(v112) = a3;
      v113 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)v84, (struct _POINTL *)&v112, &v105, 3uLL);
      x = v105.x;
      v16 = v106;
      if ( (*(_DWORD *)(v84[0] + 32LL) & 1) != 0 )
      {
        if ( v105.x > v106 )
        {
          x = v105.x + 16;
          v16 = v106 + 16;
          v108 += 16;
          v105.x += 16;
          v106 += 16;
        }
        y = v105.y;
        v18 = v109;
        v19 = v107;
        if ( v105.y > v109 )
        {
          y = v105.y + 16;
          v19 = v107 + 16;
          v18 = v109 + 16;
          v105.y += 16;
          v109 += 16;
          v107 += 16;
        }
      }
      else
      {
        v18 = v109;
        v19 = v107;
        y = v105.y;
      }
      v110 = v16 + v108 - x;
      v111 = v18 + v19 - y;
      v20 = (v16 <= v110) ^ (unsigned int)(v16 > x);
      v21 = (unsigned int)v20;
      v22 = (v19 > y) ^ (unsigned int)(v19 <= v111);
      if ( *(&v105.x + 2 * v20) > *(&v105.x + 2 * ((unsigned int)v20 ^ 3LL)) )
        v21 = (unsigned int)v20 ^ 3;
      if ( *(&v105.y + 2 * v22) > *(&v105.y + 2 * ((unsigned int)v22 ^ 3LL)) )
        v22 = (unsigned int)v22 ^ 3;
      LODWORD(v96) = (*(&v105.x + 2 * v21) + 15) >> 4;
      DWORD1(v96) = (*(&v105.y + 2 * v22) + 15) >> 4;
      DWORD2(v96) = (*(&v105.x + 2 * ((unsigned int)v21 ^ 3LL)) + 15) >> 4;
      HIDWORD(v96) = (*(&v105.y + 2 * (v22 ^ 3)) + 15) >> 4;
    }
    else
    {
      DWORD2(v96) = a2 + a4;
      HIDWORD(v96) = a5 + a3;
      *(_QWORD *)&v96 = __PAIR64__(a3, a2);
      EXFORMOBJ::bXform((EXFORMOBJ *)v84, (struct _POINTL *)&v96);
      ERECTL::vOrder((ERECTL *)&v96);
    }
    if ( ERECTL::bEmpty((ERECTL *)&v96) )
    {
      v11 = 1;
      goto LABEL_126;
    }
    if ( (*((_DWORD *)v81[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v81, (struct ERECTL *)&v96);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v95);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v95, (struct XDCOBJ *)v81, (struct XDCOBJ *)v88) )
    {
      v70 = XDCOBJ::bFullScreen((XDCOBJ *)v88);
      v11 = XDCOBJ::bFullScreen((XDCOBJ *)v81) | v70;
      goto LABEL_124;
    }
    v23 = (HDC)*((_QWORD *)v81[0] + 62);
    v74 = v23;
    if ( !v23 || (v24 = *((_QWORD *)v23 + 16), v25 = *((_QWORD *)v81[0] + 11), (v26 = *(HDC *)(v88[0] + 496LL)) == 0LL) )
    {
      v11 = 1;
      goto LABEL_124;
    }
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v88[0] + 496LL))
      || !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v23) )
    {
      v69 = 6;
      goto LABEL_121;
    }
    v27 = 0;
    v112 = v96;
    if ( !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&v96,
                          (const struct _POINTL *)v81[0] + (*((_DWORD *)v81[0] + 10) & 1) + 127,
                          1)
      || !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&prcl,
                          (const struct _POINTL *)(v88[0] + 1016LL + 8LL * (*(_DWORD *)(v88[0] + 40LL) & 1)),
                          1) )
    {
      v27 = 1;
    }
    v28 = *((_QWORD *)v26 + 6);
    if ( *((_WORD *)v26 + 50) == 1 && v28 && (*(_DWORD *)(v28 + 40) & 0x20000) != 0 )
    {
      v29 = *(_DWORD *)(v28 + 2560);
      if ( prcl.left < v29 )
        goto LABEL_45;
      v30 = *(_DWORD *)(v28 + 2564);
      if ( prcl.top < v30 || prcl.right > *((_DWORD *)v26 + 14) + v29 )
        goto LABEL_45;
      v31 = prcl.bottom <= v30 + *((_DWORD *)v26 + 15);
    }
    else
    {
      if ( prcl.left < 0 || prcl.top < 0 || prcl.right > *((_DWORD *)v26 + 14) )
        goto LABEL_45;
      v31 = prcl.bottom <= *((_DWORD *)v26 + 15);
    }
    v32 = 0;
    if ( v31 )
    {
LABEL_46:
      v33 = v32 | v27;
      if ( v26 != v74 || (v98 = prcl, ERECTL::operator*=(&v98.left, (int *)&v96), ERECTL::bEmpty((ERECTL *)&v98)) )
      {
        if ( !v33 )
        {
          v34 = *((_QWORD *)v26 + 16);
          v35 = *(_QWORD *)(v88[0] + 88LL);
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(v34, v35, a11, 1LL);
          v36 = XDCOBJ::prgnEffRao(v81);
          v101 = 0LL;
          v102 = 0;
          v103 = 1;
          v104 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v99, v36, (struct ERECTL *)&v96, 0);
          if ( ERECTL::bEmpty((ERECTL *)&v100) )
          {
            v38 = 1;
LABEL_106:
            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v95);
            `vector destructor iterator'(&v105, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_129:
            MDCOBJ::~MDCOBJ((MDCOBJ *)v88);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v89);
            MDCOBJ::~MDCOBJ((MDCOBJ *)v81);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v82);
            return v38;
          }
          if ( (*((_DWORD *)v81[0] + 9) & 0xE0) != 0 )
          {
            v98 = v100;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v81, v37, (__m128i *)&v98);
          }
          v78 = 0LL;
          v79 = 0;
          v80 = 0;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x8000000) != 0 )
          {
            v40 = *(_DWORD *)(*((_QWORD *)v81[0] + 122) + 108LL);
            if ( (v40 & 1) != 0 && (v40 & 9) != 9 )
            {
              v85[1] = (_DWORD)v26[14];
              v85[2] = (_DWORD)v26[15];
              v85[0] = (_DWORD)v26[24];
              v41 = (__int64 *)*((_QWORD *)v26 + 16);
              v85[3] = 0;
              v87 = 0LL;
              if ( v41 )
                v86 = *v41;
              else
                v86 = 0LL;
              SURFMEM::bCreateDIB((SURFMEM *)&v78, (struct _DEVBITMAPINFO *)v85, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( !v78 )
                goto LABEL_105;
              v42 = ((_DWORD)v26[28] & 0x400) == 0;
              *(_QWORD *)&v98.right = *((_QWORD *)v26 + 7);
              *(_QWORD *)&v98.left = 0LL;
              v83 = 0LL;
              v43 = v42
                  ? EngCopyBits
                  : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v28 + 2816);
              if ( !((unsigned int (__fastcall *)(HDC, HDC, _QWORD, _QWORD, RECTL *, __int64 *))v43)(
                      v78 + 6,
                      v26 + 6,
                      0LL,
                      0LL,
                      &v98,
                      &v83) )
                goto LABEL_105;
              v44 = *((_DWORD *)v78 + 24);
              if ( (unsigned int)(v44 - 1) > 5 )
                goto LABEL_105;
              ((void (*)(void))(&apfnMirror)[v44])();
              v26 = v78;
            }
          }
          v75 = 0LL;
          v76 = 0;
          v77 = 0;
          if ( !v73[0] )
            goto LABEL_101;
          v90[1] = DWORD2(v96) - v96;
          v90[2] = HIDWORD(v96) - DWORD1(v96);
          v90[0] = (_DWORD)v26[24];
          v92 = (_DWORD)v26[28] & 0x40000;
          v90[3] = 0;
          v93 = 0;
          v91 = 0LL;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)v90, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            v45 = v75;
            v46 = *((_DWORD *)v75 + 16);
            switch ( *((_DWORD *)v26 + 24) )
            {
              case 1:
                v58 = *((unsigned int *)v75 + 16);
                if ( NearestIndexFromColorref )
                  v59 = 255;
                else
                  v59 = 0;
                break;
              case 2:
                v58 = *((unsigned int *)v75 + 16);
                v59 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
                break;
              case 3:
                v58 = *((unsigned int *)v75 + 16);
                v59 = NearestIndexFromColorref;
                break;
              default:
                switch ( *((_DWORD *)v26 + 24) )
                {
                  case 4:
                    v55 = v46 >> 1;
                    v56 = (_WORD *)*((_QWORD *)v75 + 9);
                    if ( v55 )
                    {
                      for ( i = v55; i; --i )
                        *v56++ = NearestIndexFromColorref;
                    }
                    break;
                  case 5:
                    v50 = (_BYTE *)*((_QWORD *)v75 + 10);
                    for ( j = &v50[*((_DWORD *)v75 + 15) * *((_DWORD *)v75 + 22)]; v50 != j; v50 += *((int *)v45 + 22) )
                    {
                      v52 = v50;
                      v53 = (unsigned __int64)&v50[3 * *((_DWORD *)v45 + 14) - 2];
                      if ( (unsigned __int64)v50 < v53 )
                      {
                        do
                        {
                          *v52 = NearestIndexFromColorref;
                          v54 = v52 + 1;
                          *v54++ = BYTE1(NearestIndexFromColorref);
                          *v54 = BYTE2(NearestIndexFromColorref);
                          v52 = v54 + 1;
                        }
                        while ( (unsigned __int64)v52 < v53 );
                        v45 = v75;
                      }
                    }
                    break;
                  case 6:
                    v47 = (int *)*((_QWORD *)v75 + 9);
                    v48 = v46 >> 2;
                    if ( v48 )
                    {
                      for ( k = v48; k; --k )
                        *v47++ = NearestIndexFromColorref;
                    }
                    break;
                }
                goto LABEL_97;
            }
            memset(*((void **)v75 + 9), v59, v58);
LABEL_97:
            `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
            v73[0] = v105.x - 16 * v112;
            v73[1] = v105.y - 16 * DWORD1(v112);
            pptfx = *(POINTFIX *)v73;
            v73[0] = v106 - 16 * v112;
            v73[1] = v107 - 16 * DWORD1(v112);
            v116 = *(POINTFIX *)v73;
            v73[0] = v108 - 16 * v112;
            v73[1] = v109 - 16 * DWORD1(v112);
            v117 = *(POINTFIX *)v73;
            if ( v75 )
              v60 = (SURFOBJ *)(v75 + 6);
            else
              v60 = 0LL;
            EngPlgBlt(v60, (SURFOBJ *)(v26 + 6), 0LL, 0LL, xloIdent, 0LL, 0LL, &pptfx, &prcl, 0LL, 3u);
            v26 = v75;
            prcl.right = DWORD2(v96) - v96;
            prcl.bottom = HIDWORD(v96) - DWORD1(v96);
            *(_QWORD *)&prcl.left = 0LL;
            `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_101:
            v61 = 0LL;
            *(_QWORD *)v73 = 0LL;
            if ( *(_QWORD *)(v88[0] + 496LL) == *((_QWORD *)v81[0] + 62)
              || (inited = EXLATEOBJ::bInitXlateObj(
                             (__int64 *)v73,
                             0LL,
                             0,
                             v34,
                             v24,
                             v35,
                             v25,
                             *(_DWORD *)(*((_QWORD *)v81[0] + 122) + 184LL),
                             *(_DWORD *)(*((_QWORD *)v81[0] + 122) + 176LL),
                             -1,
                             0),
                  v61 = *(POINTFIX *)v73,
                  inited) )
            {
              v64 = v74;
              ++*((_DWORD *)v74 + 23);
              v65 = *(_QWORD *)(v88[0] + 48LL);
              if ( *((_QWORD *)v81[0] + 6) == v65
                || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v81) && *(_QWORD *)(v66 + 3496) == v65 )
              {
                if ( ((_DWORD)v64[28] & 0x8000) != 0 )
                  v67 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v64 + 6) + 3256LL);
                else
                  v67 = EngTransparentBlt;
                v68 = v26 + 6;
                if ( !v26 )
                  v68 = 0LL;
                v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))v67)(
                        v64 + 6,
                        v68,
                        v99,
                        v61,
                        &v96,
                        &prcl,
                        NearestIndexFromColorref,
                        0);
                goto LABEL_118;
              }
              v63 = 87;
            }
            else
            {
              v63 = 6;
            }
            EngSetLastError(v63);
LABEL_118:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v73);
            SURFMEM::~SURFMEM((SURFMEM *)&v75);
            SURFMEM::~SURFMEM((SURFMEM *)&v78);
LABEL_124:
            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v95);
LABEL_126:
            `vector destructor iterator'(&v105, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_128:
            v38 = v11;
            goto LABEL_129;
          }
          EngSetLastError(8u);
          SURFMEM::~SURFMEM((SURFMEM *)&v75);
LABEL_105:
          SURFMEM::~SURFMEM((SURFMEM *)&v78);
          v38 = 0;
          goto LABEL_106;
        }
      }
      v69 = 87;
LABEL_121:
      EngSetLastError(v69);
      goto LABEL_124;
    }
LABEL_45:
    v32 = 1;
    goto LABEL_46;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
