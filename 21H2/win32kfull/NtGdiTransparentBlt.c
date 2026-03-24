/*
 * XREFs of NtGdiTransparentBlt @ 0x1C0156210
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C0276D30 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087D58 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AFC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C890 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B30BC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B4C9C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00B5A00 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B61E0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B79F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00B7A24 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C010A0D0 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0156F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ @ 0x1C0156FB8 (-bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0156FE8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0157040 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0278324 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C028C5F0 (EngPlgBlt.c)
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
  __int64 v20; // r8
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // rdx
  SURFACE **v26; // r8
  __int64 v27; // r9
  HDC v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r15
  HDC v31; // r13
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  BOOL v35; // r8d
  __int64 v36; // rdi
  LONG v37; // ecx
  LONG v38; // edx
  bool v39; // cc
  int v40; // esi
  int v41; // esi
  __int64 v42; // rbx
  __int64 v43; // rsi
  struct REGION *v44; // rax
  struct ECLIPOBJ *v45; // rdx
  SURFACE **v46; // r8
  unsigned int v47; // edi
  int v48; // eax
  __int64 *v49; // rax
  bool v50; // zf
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v52; // edx
  HDC v53; // r9
  unsigned int v54; // edx
  int *v55; // rdi
  unsigned int v56; // edx
  __int64 k; // rcx
  _BYTE *v58; // r8
  _BYTE *j; // r11
  _BYTE *v60; // rdx
  unsigned __int64 v61; // rcx
  _BYTE *v62; // rdx
  unsigned int v63; // edx
  _WORD *v64; // rdi
  __int64 i; // rcx
  size_t v66; // r8
  int v67; // edx
  SURFOBJ *v68; // rcx
  POINTFIX v69; // r9
  int inited; // eax
  ULONG v71; // ecx
  HDC v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rdx
  int v76; // eax
  ULONG v77; // ecx
  int v78; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  POINTFIX v81; // [rsp+68h] [rbp-98h] BYREF
  int v82[2]; // [rsp+70h] [rbp-90h] BYREF
  HDC v83; // [rsp+78h] [rbp-88h]
  HDC v84; // [rsp+80h] [rbp-80h] BYREF
  char v85; // [rsp+88h] [rbp-78h]
  int v86; // [rsp+8Ch] [rbp-74h]
  HDC v87; // [rsp+90h] [rbp-70h] BYREF
  char v88; // [rsp+98h] [rbp-68h]
  int v89; // [rsp+9Ch] [rbp-64h]
  DC *v90[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v91[32]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v92[2]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v93[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v94; // [rsp+F0h] [rbp-10h]
  __int64 v95; // [rsp+F8h] [rbp-8h]
  _QWORD v96[2]; // [rsp+100h] [rbp+0h] BYREF
  char v97[32]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v98[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v99; // [rsp+140h] [rbp+40h]
  int v100; // [rsp+148h] [rbp+48h]
  int v101; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v102[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v103[288]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v104; // [rsp+280h] [rbp+180h] BYREF
  RECTL prcl; // [rsp+290h] [rbp+190h] BYREF
  RECTL v106; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v107[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  RECTL v108; // [rsp+2B4h] [rbp+1B4h] BYREF
  __int64 v109; // [rsp+2E8h] [rbp+1E8h]
  __int64 v110; // [rsp+300h] [rbp+200h]
  int v111; // [rsp+308h] [rbp+208h]
  int v112; // [rsp+330h] [rbp+230h]
  __int64 v113; // [rsp+340h] [rbp+240h]
  struct _POINTFIX v114; // [rsp+350h] [rbp+250h] BYREF
  FIX v115; // [rsp+358h] [rbp+258h]
  int v116; // [rsp+35Ch] [rbp+25Ch]
  int v117; // [rsp+360h] [rbp+260h]
  FIX v118; // [rsp+364h] [rbp+264h]
  FIX v119; // [rsp+368h] [rbp+268h]
  int v120; // [rsp+36Ch] [rbp+26Ch]
  __int128 v121; // [rsp+370h] [rbp+270h] BYREF
  LONG v122; // [rsp+380h] [rbp+280h]
  int v123; // [rsp+384h] [rbp+284h]
  POINTFIX pptfx; // [rsp+390h] [rbp+290h] BYREF
  POINTFIX v125; // [rsp+398h] [rbp+298h]
  POINTFIX v126; // [rsp+3A0h] [rbp+2A0h]

  v11 = 0;
  v83 = a6;
  v82[0] = a8;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v90, a1);
    DCOBJ::DCOBJ((DCOBJ *)v96, v83);
    if ( !v90[0]
      || (*((_DWORD *)v90[0] + 9) & 0x10000) != 0
      || !v96[0]
      || (bSpDwmValidateSurface((struct XDCOBJ *)v96, a7, v82[0], a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)v90, a2, a3, a4, a5),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v92, (struct XDCOBJ *)v90, 516),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v102, (struct XDCOBJ *)v96, 516),
          (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v102)) )
    {
      EngSetLastError(0x57u);
      goto LABEL_127;
    }
    prcl.left = a7;
    prcl.right = a9 + a7;
    prcl.top = v82[0];
    prcl.bottom = a10 + v82[0];
    EXFORMOBJ::bXform((EXFORMOBJ *)v102, (struct _POINTL *)&prcl);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'(&v114, 8uLL, 4uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    v81.x = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v92);
    if ( v81.x )
    {
      DWORD2(v121) = a2 + a4;
      v123 = a3 + a5;
      *(_QWORD *)&v121 = __PAIR64__(a3, a2);
      HIDWORD(v121) = a3;
      v122 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)v92, (struct _POINTL *)&v121, &v114, 3uLL);
      x = v114.x;
      v16 = v115;
      if ( (*(_DWORD *)(v92[0] + 32LL) & 1) != 0 )
      {
        if ( v114.x > v115 )
        {
          x = v114.x + 16;
          v16 = v115 + 16;
          v117 += 16;
          v114.x += 16;
          v115 += 16;
        }
        y = v114.y;
        v18 = v118;
        v19 = v116;
        if ( v114.y > v118 )
        {
          y = v114.y + 16;
          v19 = v116 + 16;
          v18 = v118 + 16;
          v114.y += 16;
          v118 += 16;
          v116 += 16;
        }
      }
      else
      {
        v18 = v118;
        v19 = v116;
        y = v114.y;
      }
      v119 = v16 + v117 - x;
      v120 = v18 + v19 - y;
      v20 = (v16 <= v119) ^ (unsigned int)(v16 > x);
      v21 = (v19 > y) ^ (unsigned int)(v19 <= v120);
      v22 = v20 ^ 3;
      if ( *(&v114.x + 2 * v20) <= *(&v114.x + 2 * ((unsigned int)v20 ^ 3LL)) )
        v22 = v20;
      v23 = v22;
      v24 = v21 ^ 3;
      if ( *(&v114.y + 2 * v21) <= *(&v114.y + 2 * ((unsigned int)v21 ^ 3LL)) )
        v24 = (v19 > y) ^ (v19 <= v120);
      LODWORD(v104) = (*(&v114.x + 2 * v23) + 15) >> 4;
      DWORD1(v104) = (*(&v114.y + 2 * v24) + 15) >> 4;
      DWORD2(v104) = (*(&v114.x + 2 * (v23 ^ 3)) + 15) >> 4;
      HIDWORD(v104) = (*(&v114.y + 2 * (v24 ^ 3LL)) + 15) >> 4;
    }
    else
    {
      DWORD2(v104) = a2 + a4;
      HIDWORD(v104) = a3 + a5;
      *(_QWORD *)&v104 = __PAIR64__(a3, a2);
      EXFORMOBJ::bXform((EXFORMOBJ *)v92, (struct _POINTL *)&v104);
      ERECTL::vOrder((ERECTL *)&v104);
    }
    if ( ERECTL::bEmpty((ERECTL *)&v104) )
    {
      v11 = 1;
      goto LABEL_125;
    }
    if ( (*((_DWORD *)v90[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v90, (struct ERECTL *)&v104);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v103);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v103, (struct XDCOBJ *)v90, (struct XDCOBJ *)v96) )
    {
      v78 = XDCOBJ::bFullScreen((XDCOBJ *)v96);
      v11 = XDCOBJ::bFullScreen((XDCOBJ *)v90) | v78;
      goto LABEL_123;
    }
    v28 = (HDC)*((_QWORD *)v90[0] + 62);
    v83 = v28;
    if ( !v28 || (v29 = *((_QWORD *)v28 + 16), v30 = *((_QWORD *)v90[0] + 11), (v31 = *(HDC *)(v96[0] + 496LL)) == 0LL) )
    {
      v11 = 1;
      goto LABEL_123;
    }
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v96[0] + 496LL), v25, (__int64)v26, v27)
      || !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v28, v32, v33, v34) )
    {
      v77 = 6;
      goto LABEL_120;
    }
    v121 = v104;
    v35 = !(unsigned int)ERECTL::bOffsetAdd(
                           (ERECTL *)&v104,
                           (const struct _POINTL *)v90[0] + (*((_DWORD *)v90[0] + 10) & 1) + 127,
                           1)
       || !(unsigned int)ERECTL::bOffsetAdd(
                           (ERECTL *)&prcl,
                           (const struct _POINTL *)(v96[0] + 1016LL + 8LL * (*(_DWORD *)(v96[0] + 40LL) & 1)),
                           1);
    v36 = *((_QWORD *)v31 + 6);
    if ( *((_WORD *)v31 + 50) == 1 && v36 && (*(_DWORD *)(v36 + 40) & 0x20000) != 0 )
    {
      v37 = *(_DWORD *)(v36 + 2584);
      if ( prcl.left >= v37 )
      {
        v38 = *(_DWORD *)(v36 + 2588);
        if ( prcl.top >= v38 && prcl.right <= *((_DWORD *)v31 + 14) + v37 )
        {
          v39 = prcl.bottom <= v38 + *((_DWORD *)v31 + 15);
          goto LABEL_45;
        }
      }
    }
    else if ( prcl.left >= 0 && prcl.top >= 0 && prcl.right <= *((_DWORD *)v31 + 14) )
    {
      v39 = prcl.bottom <= *((_DWORD *)v31 + 15);
LABEL_45:
      v40 = 0;
      if ( v39 )
        goto LABEL_47;
    }
    v40 = 1;
LABEL_47:
    v41 = v35 | v40;
    if ( v31 == v83 )
    {
      v106 = prcl;
      ERECTL::operator*=(&v106.left, (int *)&v104);
      if ( !ERECTL::bEmpty((ERECTL *)&v106) )
        v41 = 1;
    }
    if ( !v41 )
    {
      v42 = *((_QWORD *)v31 + 16);
      v43 = *(_QWORD *)(v96[0] + 88LL);
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v42, v43, a11, 1LL);
      v44 = XDCOBJ::prgnEffRao(v90);
      v109 = 0LL;
      v110 = 0LL;
      v111 = 0;
      v112 = 1;
      v113 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v107, v44, (struct ERECTL *)&v104, 0);
      if ( ERECTL::bEmpty((ERECTL *)&v108) )
      {
        v47 = 1;
LABEL_107:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v103, (__int64)v45, v46);
        `vector destructor iterator'(&v114, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_128:
        MDCOBJ::~MDCOBJ((MDCOBJ *)v96);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v97);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v90);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v91);
        return v47;
      }
      if ( (*((_DWORD *)v90[0] + 9) & 0xE0) != 0 )
      {
        v106 = v108;
        XDCOBJ::vAccumulateTight((XDCOBJ *)v90, v45, (__m128i *)&v106);
      }
      v87 = 0LL;
      v88 = 0;
      v89 = 0;
      if ( (GetAppCompatFlags2(0x400u) & 0x8000000) != 0 )
      {
        v48 = *(_DWORD *)(*((_QWORD *)v90[0] + 122) + 108LL);
        if ( (v48 & 1) != 0 && (v48 & 9) != 9 )
        {
          v93[1] = (_DWORD)v31[14];
          v93[2] = (_DWORD)v31[15];
          v93[0] = (_DWORD)v31[24];
          v49 = (__int64 *)*((_QWORD *)v31 + 16);
          v93[3] = 0;
          v95 = 0LL;
          if ( v49 )
            v94 = *v49;
          else
            v94 = 0LL;
          SURFMEM::bCreateDIB((SURFMEM *)&v87, (struct _DEVBITMAPINFO *)v93, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v87 )
            goto LABEL_106;
          v50 = ((_DWORD)v31[28] & 0x400) == 0;
          *(_QWORD *)&v106.right = *((_QWORD *)v31 + 7);
          *(_QWORD *)&v106.left = 0LL;
          *(_QWORD *)v82 = 0LL;
          v51 = v50
              ? EngCopyBits
              : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v36 + 2840);
          if ( !((unsigned int (__fastcall *)(HDC, HDC, _QWORD, _QWORD, RECTL *, int *))v51)(
                  v87 + 6,
                  v31 + 6,
                  0LL,
                  0LL,
                  &v106,
                  v82) )
            goto LABEL_106;
          v52 = *((_DWORD *)v87 + 24);
          if ( (unsigned int)(v52 - 1) > 5 )
            goto LABEL_106;
          ((void (*)(void))(&apfnMirror)[v52])();
          v31 = v87;
        }
      }
      v84 = 0LL;
      v85 = 0;
      v86 = 0;
      if ( !v81.x )
        goto LABEL_102;
      v98[1] = DWORD2(v104) - v104;
      v98[2] = HIDWORD(v104) - DWORD1(v104);
      v98[0] = (_DWORD)v31[24];
      v100 = (_DWORD)v31[28] & 0x40000;
      v98[3] = 0;
      v101 = 0;
      v99 = 0LL;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)v98, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v53 = v84;
        v54 = *((_DWORD *)v84 + 16);
        switch ( *((_DWORD *)v31 + 24) )
        {
          case 1:
            v66 = *((unsigned int *)v84 + 16);
            if ( NearestIndexFromColorref )
              v67 = 255;
            else
              v67 = 0;
            break;
          case 2:
            v66 = *((unsigned int *)v84 + 16);
            v67 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
            break;
          case 3:
            v66 = *((unsigned int *)v84 + 16);
            v67 = NearestIndexFromColorref;
            break;
          default:
            switch ( *((_DWORD *)v31 + 24) )
            {
              case 4:
                v63 = v54 >> 1;
                v64 = (_WORD *)*((_QWORD *)v84 + 9);
                if ( v63 )
                {
                  for ( i = v63; i; --i )
                    *v64++ = NearestIndexFromColorref;
                }
                break;
              case 5:
                v58 = (_BYTE *)*((_QWORD *)v84 + 10);
                for ( j = &v58[*((_DWORD *)v84 + 15) * *((_DWORD *)v84 + 22)]; v58 != j; v58 += *((int *)v53 + 22) )
                {
                  v60 = v58;
                  v61 = (unsigned __int64)&v58[3 * *((_DWORD *)v53 + 14) - 2];
                  if ( (unsigned __int64)v58 < v61 )
                  {
                    do
                    {
                      *v60 = NearestIndexFromColorref;
                      v62 = v60 + 1;
                      *v62++ = BYTE1(NearestIndexFromColorref);
                      *v62 = BYTE2(NearestIndexFromColorref);
                      v60 = v62 + 1;
                    }
                    while ( (unsigned __int64)v60 < v61 );
                    v53 = v84;
                  }
                }
                break;
              case 6:
                v55 = (int *)*((_QWORD *)v84 + 9);
                v56 = v54 >> 2;
                if ( v56 )
                {
                  for ( k = v56; k; --k )
                    *v55++ = NearestIndexFromColorref;
                }
                break;
            }
            goto LABEL_98;
        }
        memset(*((void **)v84 + 9), v67, v66);
LABEL_98:
        `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
        v81.x = v114.x - 16 * v121;
        v81.y = v114.y - 16 * DWORD1(v121);
        pptfx = v81;
        v81.x = v115 - 16 * v121;
        v81.y = v116 - 16 * DWORD1(v121);
        v125 = v81;
        v81.x = v117 - 16 * v121;
        v81.y = v118 - 16 * DWORD1(v121);
        v126 = v81;
        if ( v84 )
          v68 = (SURFOBJ *)(v84 + 6);
        else
          v68 = 0LL;
        EngPlgBlt(v68, (SURFOBJ *)(v31 + 6), 0LL, 0LL, xloIdent, 0LL, 0LL, &pptfx, &prcl, 0LL, 3u);
        v31 = v84;
        prcl.right = DWORD2(v104) - v104;
        prcl.bottom = HIDWORD(v104) - DWORD1(v104);
        *(_QWORD *)&prcl.left = 0LL;
        `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_102:
        v69 = 0LL;
        v81 = 0LL;
        if ( *(_QWORD *)(v96[0] + 496LL) == *((_QWORD *)v90[0] + 62)
          || (inited = EXLATEOBJ::bInitXlateObj(
                         (__int64 *)&v81,
                         0LL,
                         0,
                         v42,
                         v29,
                         v43,
                         v30,
                         *(_DWORD *)(*((_QWORD *)v90[0] + 122) + 184LL),
                         *(_DWORD *)(*((_QWORD *)v90[0] + 122) + 176LL),
                         -1,
                         0),
              v69 = v81,
              inited) )
        {
          v72 = v83;
          ++*((_DWORD *)v83 + 23);
          if ( *((_QWORD *)v90[0] + 6) == *(_QWORD *)(v96[0] + 48LL)
            || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v90) && *(_QWORD *)(v73 + 3520) == v74 )
          {
            if ( ((_DWORD)v72[28] & 0x8000) != 0 )
              v76 = (*(__int64 (__fastcall **)(HDC, unsigned __int64, _BYTE *, POINTFIX, __int128 *, RECTL *, int, _DWORD))(*((_QWORD *)v72 + 6) + 3280LL))(
                      v72 + 6,
                      (unsigned __int64)(v31 + 6) & -(__int64)(v31 != 0LL),
                      v107,
                      v69,
                      &v104,
                      &prcl,
                      NearestIndexFromColorref,
                      0);
            else
              v76 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))EngTransparentBlt)(
                      v72 + 6,
                      (unsigned __int64)(v31 + 6) & -(__int64)(v31 != 0LL),
                      v107,
                      v69,
                      &v104,
                      &prcl,
                      NearestIndexFromColorref,
                      0);
            v11 = v76;
            goto LABEL_117;
          }
          v71 = 87;
        }
        else
        {
          v71 = 6;
        }
        EngSetLastError(v71);
LABEL_117:
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v81, v75);
        SURFMEM::~SURFMEM((SURFMEM *)&v84);
        SURFMEM::~SURFMEM((SURFMEM *)&v87);
LABEL_123:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v103, v25, v26);
LABEL_125:
        `vector destructor iterator'(&v114, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_127:
        v47 = v11;
        goto LABEL_128;
      }
      EngSetLastError(8u);
      SURFMEM::~SURFMEM((SURFMEM *)&v84);
LABEL_106:
      SURFMEM::~SURFMEM((SURFMEM *)&v87);
      v47 = 0;
      goto LABEL_107;
    }
    v77 = 87;
LABEL_120:
    EngSetLastError(v77);
    goto LABEL_123;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
