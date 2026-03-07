__int64 __fastcall NtGdiTransparentBlt(
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
  __int64 *v43; // rax
  bool v44; // zf
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v46; // edx
  __int64 v47; // rdi
  unsigned int v48; // edx
  int *v49; // rdi
  unsigned int v50; // edx
  __int64 k; // rcx
  _BYTE *v52; // r8
  _BYTE *j; // r9
  _BYTE *v54; // rdx
  unsigned __int64 v55; // rcx
  _BYTE *v56; // rdx
  unsigned int v57; // edx
  _WORD *v58; // rdi
  __int64 i; // rcx
  size_t v60; // r8
  int v61; // edx
  Gre::Base *v62; // rcx
  struct Gre::Base::SESSION_GLOBALS *v63; // rax
  SURFOBJ *v64; // rcx
  int inited; // eax
  Gre::Base *v66; // rbx
  struct SURFACE *v68; // rdi
  BOOL (__stdcall *v69)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  __int64 v70; // rdx
  int v71; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  Gre::Base *v73; // [rsp+68h] [rbp-98h] BYREF
  DC *v74[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v75[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v76; // [rsp+90h] [rbp-70h] BYREF
  char v77; // [rsp+98h] [rbp-68h]
  int v78; // [rsp+9Ch] [rbp-64h]
  HDC v79; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-58h] BYREF
  char v81; // [rsp+B0h] [rbp-50h]
  int v82; // [rsp+B4h] [rbp-4Ch]
  __int128 v83; // [rsp+C0h] [rbp-40h]
  float *v84[2]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v85[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  struct SURFACE *v88; // [rsp+100h] [rbp+0h]
  _DWORD v89[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v90; // [rsp+118h] [rbp+18h]
  int v91; // [rsp+120h] [rbp+20h]
  int v92; // [rsp+124h] [rbp+24h]
  float *v93[3]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v94[224]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v95; // [rsp+220h] [rbp+120h] BYREF
  RECTL prcl; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v97[4]; // [rsp+240h] [rbp+140h] BYREF
  RECTL v98; // [rsp+244h] [rbp+144h] BYREF
  __int64 v99; // [rsp+290h] [rbp+190h]
  int v100; // [rsp+298h] [rbp+198h]
  int v101; // [rsp+2C0h] [rbp+1C0h]
  __int64 v102; // [rsp+2D0h] [rbp+1D0h]
  struct _POINTFIX v103; // [rsp+2E0h] [rbp+1E0h] BYREF
  FIX v104; // [rsp+2E8h] [rbp+1E8h]
  int v105; // [rsp+2ECh] [rbp+1ECh]
  int v106; // [rsp+2F0h] [rbp+1F0h]
  FIX v107; // [rsp+2F4h] [rbp+1F4h]
  FIX v108; // [rsp+2F8h] [rbp+1F8h]
  int v109; // [rsp+2FCh] [rbp+1FCh]
  RECTL v110; // [rsp+300h] [rbp+200h] BYREF
  int v111; // [rsp+310h] [rbp+210h]
  int v112; // [rsp+314h] [rbp+214h]
  POINTFIX pptfx; // [rsp+320h] [rbp+220h] BYREF
  Gre::Base *v114; // [rsp+328h] [rbp+228h]
  Gre::Base *v115; // [rsp+330h] [rbp+230h]

  v79 = a6;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v74, a1);
    DCOBJ::DCOBJ((DCOBJ *)v75, v79);
    if ( !v74[0]
      || (*((_DWORD *)v74[0] + 9) & 0x10000) != 0
      || !v75[0]
      || (bSpDwmValidateSurface((struct XDCOBJ *)v75, a7, a8, a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)v74, a2, a3, a4, a5),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v84, (struct XDCOBJ *)v74, 516),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v93, (struct XDCOBJ *)v75, 516),
          (unsigned int)EXFORMOBJ::bRotationOrMirroring(v93)) )
    {
      EngSetLastError(0x57u);
      v15 = 0;
      goto LABEL_126;
    }
    prcl.right = a9 + a7;
    prcl.top = a8;
    prcl.left = a7;
    prcl.bottom = a10 + a8;
    EXFORMOBJ::bXform((EXFORMOBJ *)v93, (struct _POINTL *)&prcl);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'((char *)&v103, 8LL, 4LL, (void (__fastcall *)(char *))EPOINTFIX::EPOINTFIX);
    LODWORD(v73) = EXFORMOBJ::bRotationOrMirroring(v84);
    v14 = a2 + a4;
    v15 = 1;
    if ( (_DWORD)v73 )
    {
      v112 = a3 + a5;
      v110.left = a2;
      *(_QWORD *)&v110.top = __PAIR64__(v14, a3);
      v110.bottom = a3;
      v111 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)v84, (struct _POINTL *)&v110, &v103, 3uLL);
      x = v103.x;
      v17 = v104;
      if ( ((_DWORD)v84[0][8] & 1) != 0 )
      {
        if ( v103.x > v104 )
        {
          x = v103.x + 16;
          v17 = v104 + 16;
          v106 += 16;
          v103.x += 16;
          v104 += 16;
        }
        y = v103.y;
        v19 = v107;
        v20 = v105;
        if ( v103.y > v107 )
        {
          y = v103.y + 16;
          v20 = v105 + 16;
          v19 = v107 + 16;
          v103.y += 16;
          v107 += 16;
          v105 += 16;
        }
      }
      else
      {
        v19 = v107;
        v20 = v105;
        y = v103.y;
      }
      v108 = v17 + v106 - x;
      v109 = v19 + v20 - y;
      v21 = (v17 <= v108) ^ (unsigned int)(v17 > x);
      v22 = (unsigned int)v21;
      v23 = (v20 > y) ^ (unsigned int)(v20 <= v109);
      if ( *(&v103.x + 2 * v21) > *(&v103.x + 2 * ((unsigned int)v21 ^ 3LL)) )
        v22 = (unsigned int)v21 ^ 3;
      if ( *(&v103.y + 2 * v23) > *(&v103.y + 2 * ((unsigned int)v23 ^ 3LL)) )
        v23 = (unsigned int)v23 ^ 3;
      LODWORD(v95) = (*(&v103.x + 2 * v22) + 15) >> 4;
      DWORD1(v95) = (*(&v103.y + 2 * v23) + 15) >> 4;
      DWORD2(v95) = (*(&v103.x + 2 * ((unsigned int)v22 ^ 3LL)) + 15) >> 4;
      HIDWORD(v95) = (*(&v103.y + 2 * (v23 ^ 3)) + 15) >> 4;
    }
    else
    {
      HIDWORD(v95) = a3 + a5;
      LODWORD(v95) = a2;
      *(_QWORD *)((char *)&v95 + 4) = __PAIR64__(v14, a3);
      EXFORMOBJ::bXform((EXFORMOBJ *)v84, (struct _POINTL *)&v95);
      ERECTL::vOrder((ERECTL *)&v95);
    }
    if ( ERECTL::bEmpty((ERECTL *)&v95) )
    {
LABEL_124:
      `vector destructor iterator'((char *)&v103, 8LL, 4LL, (void (__fastcall *)(char *))vSrcCopyDummy);
LABEL_126:
      if ( v75[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v75);
      if ( v74[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v74);
      return v15;
    }
    if ( (*((_DWORD *)v74[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v74, (struct ERECTL *)&v95);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v94);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v94, (struct XDCOBJ *)v74, (struct XDCOBJ *)v75) )
    {
      v71 = XDCOBJ::bFullScreen((XDCOBJ *)v75);
      v15 = XDCOBJ::bFullScreen((XDCOBJ *)v74) | v71;
      goto LABEL_123;
    }
    v26 = (struct SURFACE *)*((_QWORD *)v74[0] + 62);
    v88 = v26;
    if ( !v26 )
      goto LABEL_123;
    v27 = *((_QWORD *)v26 + 16);
    v28 = *((_QWORD *)v74[0] + 11);
    v29 = *(_QWORD *)(v75[0] + 496LL);
    if ( !v29 )
      goto LABEL_123;
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v75[0] + 496LL))
      || !(unsigned int)DestSurfaceAccessCheck(v26) )
    {
      EngSetLastError(6u);
      v15 = 0;
      goto LABEL_123;
    }
    v30 = 0;
    v83 = v95;
    if ( !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&v95,
                          (const struct _POINTL *)v74[0] + (*((_DWORD *)v74[0] + 10) & 1LL) + 127,
                          1)
      || !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&prcl,
                          (const struct _POINTL *)(v75[0] + 1016LL + 8 * (*(_DWORD *)(v75[0] + 40LL) & 1LL)),
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
      && (v110 = prcl, ERECTL::operator*=(&v110.left, (int *)&v95), !ERECTL::bEmpty((ERECTL *)&v110))
      || v36 )
    {
      EngSetLastError(0x57u);
      v15 = 0;
      goto LABEL_123;
    }
    v37 = *(_QWORD *)(v29 + 128);
    v38 = *(_QWORD *)(v75[0] + 88LL);
    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v37, v38, a11, 1LL);
    v39 = XDCOBJ::prgnEffRao(v74);
    v101 = 1;
    v99 = 0LL;
    v100 = 0;
    v102 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v97, v39, (struct ERECTL *)&v95, 0);
    if ( ERECTL::bEmpty((ERECTL *)&v98) )
    {
LABEL_105:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v94, (__int64)v40, v41);
      `vector destructor iterator'((char *)&v103, 8LL, 4LL, (void (__fastcall *)(char *))vSrcCopyDummy);
      DCOBJ::~DCOBJ((DCOBJ *)v75);
      DCOBJ::~DCOBJ((DCOBJ *)v74);
      return v15;
    }
    if ( (*((_DWORD *)v74[0] + 9) & 0xE0) != 0 )
    {
      v110 = v98;
      XDCOBJ::vAccumulateTight((XDCOBJ *)v74, v40, (__m128i *)&v110);
    }
    v76 = 0LL;
    v77 = 0;
    v78 = 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u
      && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x8000000) != 0
      && (*(_DWORD *)(*((_QWORD *)v74[0] + 122) + 108LL) & 9) != 9
      && (*(_DWORD *)(*((_QWORD *)v74[0] + 122) + 108LL) & 1) != 0 )
    {
      v85[1] = *(_DWORD *)(v29 + 56);
      v85[2] = *(_DWORD *)(v29 + 60);
      v85[0] = *(_DWORD *)(v29 + 96);
      v43 = *(__int64 **)(v29 + 128);
      v85[3] = 0;
      v87 = 0LL;
      if ( v43 )
        v86 = *v43;
      else
        v86 = 0LL;
      SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)v85, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v76
        || ((v44 = (*(_DWORD *)(v29 + 112) & 0x400) == 0,
             *(_QWORD *)&v110.right = *(_QWORD *)(v29 + 56),
             *(_QWORD *)&v110.left = 0LL,
             v79 = 0LL,
             v44)
          ? (v45 = EngCopyBits)
          : (v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v31 + 2816)),
            !((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, RECTL *, HDC *))v45)(
               v76 + 24,
               v29 + 24,
               0LL,
               0LL,
               &v110,
               &v79)
         || (v46 = *(_DWORD *)(v76 + 96), (unsigned int)(v46 - 1) > 5)) )
      {
LABEL_104:
        SURFMEM::~SURFMEM((SURFMEM *)&v76);
        v15 = 0;
        goto LABEL_105;
      }
      ((void (*)(void))(&apfnMirror)[v46])();
      v29 = v76;
    }
    v80 = 0LL;
    v81 = 0;
    v82 = 0;
    if ( !(_DWORD)v73 )
      goto LABEL_100;
    v89[1] = DWORD2(v95) - v95;
    v89[2] = HIDWORD(v95) - DWORD1(v95);
    v89[0] = *(_DWORD *)(v29 + 96);
    v91 = *(_DWORD *)(v29 + 112) & 0x40000;
    v89[3] = 0;
    v92 = 0;
    v90 = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v80, (struct _DEVBITMAPINFO *)v89, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      v47 = v80;
      v48 = *(_DWORD *)(v80 + 64);
      switch ( *(_DWORD *)(v29 + 96) )
      {
        case 1:
          v60 = *(unsigned int *)(v80 + 64);
          if ( NearestIndexFromColorref )
            v61 = 255;
          else
            v61 = 0;
          break;
        case 2:
          v60 = *(unsigned int *)(v80 + 64);
          v61 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
          break;
        case 3:
          v60 = *(unsigned int *)(v80 + 64);
          v61 = NearestIndexFromColorref;
          break;
        default:
          switch ( *(_DWORD *)(v29 + 96) )
          {
            case 4:
              v57 = v48 >> 1;
              v58 = *(_WORD **)(v80 + 72);
              if ( v57 )
              {
                for ( i = v57; i; --i )
                  *v58++ = NearestIndexFromColorref;
              }
              break;
            case 5:
              v52 = *(_BYTE **)(v80 + 80);
              for ( j = &v52[*(_DWORD *)(v80 + 60) * *(_DWORD *)(v80 + 88)]; v52 != j; v52 += *(int *)(v47 + 88) )
              {
                v54 = v52;
                v55 = (unsigned __int64)&v52[3 * *(_DWORD *)(v47 + 56) - 2];
                if ( (unsigned __int64)v52 < v55 )
                {
                  do
                  {
                    *v54 = NearestIndexFromColorref;
                    v56 = v54 + 1;
                    *v56++ = BYTE1(NearestIndexFromColorref);
                    *v56 = BYTE2(NearestIndexFromColorref);
                    v54 = v56 + 1;
                  }
                  while ( (unsigned __int64)v54 < v55 );
                  v47 = v80;
                }
              }
              break;
            case 6:
              v49 = *(int **)(v80 + 72);
              v50 = v48 >> 2;
              if ( v50 )
              {
                for ( k = v50; k; --k )
                  *v49++ = NearestIndexFromColorref;
              }
              break;
          }
          goto LABEL_97;
      }
      memset_0(*(void **)(v80 + 72), v61, v60);
LABEL_97:
      `vector constructor iterator'((char *)&pptfx, 8LL, 3LL, (void (__fastcall *)(char *))EPOINTFIX::EPOINTFIX);
      v62 = (Gre::Base *)(unsigned int)(16 * DWORD1(v83));
      LODWORD(v73) = v103.x - 16 * v83;
      HIDWORD(v73) = v103.y - (_DWORD)v62;
      pptfx = (POINTFIX)v73;
      LODWORD(v73) = v104 - 16 * v83;
      HIDWORD(v73) = v105 - (_DWORD)v62;
      v114 = v73;
      LODWORD(v73) = v106 - 16 * v83;
      HIDWORD(v73) = v107 - (_DWORD)v62;
      v115 = v73;
      v63 = Gre::Base::Globals(v62);
      v64 = (SURFOBJ *)v80;
      if ( v80 )
        v64 = (SURFOBJ *)(v80 + 24);
      EngPlgBlt(
        v64,
        (SURFOBJ *)(v29 + 24),
        0LL,
        0LL,
        (XLATEOBJ *)((char *)v63 + 6896),
        0LL,
        0LL,
        &pptfx,
        &prcl,
        0LL,
        3u);
      v29 = v80;
      prcl.right = DWORD2(v95) - v95;
      prcl.bottom = HIDWORD(v95) - DWORD1(v95);
      *(_QWORD *)&prcl.left = 0LL;
      `vector destructor iterator'((char *)&pptfx, 8LL, 3LL, (void (__fastcall *)(char *))vSrcCopyDummy);
LABEL_100:
      v73 = 0LL;
      if ( *(_QWORD *)(v75[0] + 496LL) == *((_QWORD *)v74[0] + 62) )
      {
        v66 = 0LL;
      }
      else
      {
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&v73,
                   0LL,
                   0,
                   v37,
                   v27,
                   v38,
                   v28,
                   *(_DWORD *)(*((_QWORD *)v74[0] + 122) + 184LL),
                   *(_DWORD *)(*((_QWORD *)v74[0] + 122) + 176LL),
                   -1,
                   0);
        v66 = v73;
        if ( !inited )
        {
          EngSetLastError(6u);
          v15 = 0;
LABEL_119:
          EXLATEOBJ::vAltUnlock(&v73);
          SURFMEM::~SURFMEM((SURFMEM *)&v80);
          SURFMEM::~SURFMEM((SURFMEM *)&v76);
LABEL_123:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v94, v24, v25);
          goto LABEL_124;
        }
      }
      v68 = v88;
      ++*((_DWORD *)v88 + 23);
      if ( *((_QWORD *)v74[0] + 6) == *(_QWORD *)(v75[0] + 48LL)
        || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v74)
        && *(_QWORD *)(*((_QWORD *)v74[0] + 6) + 3496LL) == *(_QWORD *)(v75[0] + 48LL) )
      {
        if ( (*((_DWORD *)v68 + 28) & 0x8000) != 0 )
          v69 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v68 + 6) + 3256LL);
        else
          v69 = EngTransparentBlt;
        if ( v29 )
          v70 = v29 + 24;
        else
          v70 = 0LL;
        v15 = ((__int64 (__fastcall *)(char *, __int64, _BYTE *, Gre::Base *, __int128 *, RECTL *, int, _DWORD))v69)(
                (char *)v68 + 24,
                v70,
                v97,
                v66,
                &v95,
                &prcl,
                NearestIndexFromColorref,
                0);
      }
      else
      {
        EngSetLastError(0x57u);
        v15 = 0;
      }
      goto LABEL_119;
    }
    EngSetLastError(8u);
    SURFMEM::~SURFMEM((SURFMEM *)&v80);
    goto LABEL_104;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
