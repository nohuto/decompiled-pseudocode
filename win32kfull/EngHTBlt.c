__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        __int64 *a7,
        Gre::Base *a8,
        int *a9,
        __int64 *a10,
        int a11,
        Gre::Base *a12)
{
  struct SURFACE *v15; // r8
  struct SURFACE *v16; // r13
  Gre::Base *v17; // rcx
  unsigned int v18; // r14d
  unsigned int v19; // r15d
  __int64 result; // rax
  bool v21; // zf
  int v22; // esi
  struct Gre::Base::SESSION_GLOBALS *v23; // rax
  int v24; // r12d
  int v25; // r12d
  int v26; // r15d
  char v27; // bl
  void *v28; // rax
  struct tagCOLORADJUSTMENT *v29; // rbx
  Gre::Base *v30; // rcx
  ULONG iBitmapFormat; // ecx
  int v32; // eax
  struct Gre::Base::SESSION_GLOBALS *v33; // rax
  struct Gre::Base::SESSION_GLOBALS *v34; // rax
  struct SURFACE *v35; // rdx
  struct XLATE *v36; // r8
  struct PALETTE *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdi
  int v40; // eax
  int v41; // r12d
  __int16 v42; // dx
  int iUniq; // eax
  int v44; // r9d
  char v45; // cl
  int v46; // eax
  _DWORD *v47; // rax
  __int16 v48; // r8
  __int128 v49; // xmm0
  int v50; // eax
  struct SURFACE *v51; // rcx
  BYTE iDComplexity; // bl
  CLIPOBJ *v53; // rdx
  struct SURFACE *v54; // r13
  int v55; // r11d
  Gre::Base *p_rclBounds; // r15
  CLIPOBJ *v57; // rax
  int *v58; // rax
  LONG v59; // ecx
  LONG v60; // r9d
  int v61; // edx
  LONG v62; // ecx
  int v63; // r10d
  LONG v64; // eax
  LONG v65; // edx
  int v66; // ecx
  LONG v67; // eax
  int v68; // ecx
  int v69; // eax
  XLATEOBJ *v70; // r15
  Gre::Base *v71; // r12
  HPALETTE *v72; // rax
  __int64 *v73; // r15
  __int64 v74; // rbx
  SURFOBJ *v75; // rdi
  Gre::Base *v76; // rcx
  LONG v77; // eax
  BOOL (__stdcall *v78)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  struct Gre::Base::SESSION_GLOBALS *v79; // rax
  struct Gre::Base::SESSION_GLOBALS *v80; // rax
  SURFOBJ *v81; // rdi
  int v82; // ebx
  __int64 v83; // rcx
  struct _SURFOBJ *v84; // rcx
  __int64 v85; // rax
  _OWORD *v86; // r12
  __int16 v87; // dx
  unsigned int v88; // eax
  unsigned int cEntries; // ecx
  _BYTE *v90; // r8
  __int64 v91; // r10
  __int64 v92; // r9
  char v93; // cl
  __int64 v94; // rax
  char *v95; // rdi
  int v96; // esi
  CLIPOBJ *v97; // r13
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // r8
  unsigned int v101; // r15d
  int v102; // r13d
  Gre::Base *v103; // rcx
  struct SURFACE *v104; // rax
  BOOL (__stdcall *v105)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v106; // rdx
  int v107; // eax
  SURFOBJ *v108; // rdx
  struct Gre::Base::SESSION_GLOBALS *v109; // rax
  int v110; // [rsp+60h] [rbp-A0h]
  BYTE v111; // [rsp+64h] [rbp-9Ch]
  char v112; // [rsp+68h] [rbp-98h]
  __int64 v113; // [rsp+70h] [rbp-90h] BYREF
  Gre::Base *v114; // [rsp+78h] [rbp-88h] BYREF
  int v115; // [rsp+80h] [rbp-80h] BYREF
  XLATEOBJ *v116; // [rsp+88h] [rbp-78h]
  __int64 v117; // [rsp+90h] [rbp-70h] BYREF
  CLIPOBJ *pco; // [rsp+98h] [rbp-68h]
  XLATEOBJ *v119; // [rsp+A0h] [rbp-60h] BYREF
  POINTL pptlSrc; // [rsp+A8h] [rbp-58h] BYREF
  struct SURFACE *v121; // [rsp+B0h] [rbp-50h]
  __int64 v122; // [rsp+B8h] [rbp-48h] BYREF
  char v123; // [rsp+C0h] [rbp-40h]
  int v124; // [rsp+C4h] [rbp-3Ch]
  __int64 *v125; // [rsp+C8h] [rbp-38h]
  struct tagCOLORADJUSTMENT *v126; // [rsp+D0h] [rbp-30h]
  __int64 v127; // [rsp+D8h] [rbp-28h] BYREF
  int v128; // [rsp+E0h] [rbp-20h]
  struct SURFACE *v129; // [rsp+E8h] [rbp-18h] BYREF
  char v130; // [rsp+F0h] [rbp-10h]
  int v131; // [rsp+F4h] [rbp-Ch]
  struct XLATE *v132; // [rsp+F8h] [rbp-8h]
  __int64 v133; // [rsp+100h] [rbp+0h]
  struct SURFACE *v134; // [rsp+108h] [rbp+8h] BYREF
  int v135; // [rsp+110h] [rbp+10h]
  SURFOBJ *psoDest; // [rsp+118h] [rbp+18h]
  SURFOBJ *v137; // [rsp+120h] [rbp+20h]
  __int64 v138; // [rsp+128h] [rbp+28h] BYREF
  __int128 v139; // [rsp+130h] [rbp+30h] BYREF
  __int128 v140; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v141; // [rsp+150h] [rbp+50h]
  __int64 *v142; // [rsp+158h] [rbp+58h]
  __int64 v143; // [rsp+160h] [rbp+60h]
  _DWORD v144[4]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v145; // [rsp+178h] [rbp+78h]
  int v146; // [rsp+180h] [rbp+80h]
  int v147; // [rsp+184h] [rbp+84h]
  struct PALETTE *v148; // [rsp+188h] [rbp+88h]
  _DWORD v149[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v150; // [rsp+1A0h] [rbp+A0h]
  int v151; // [rsp+1A8h] [rbp+A8h]
  int v152; // [rsp+1ACh] [rbp+ACh]
  _OWORD v153[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v154; // [rsp+1D0h] [rbp+D0h]
  _OWORD v155[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int128 *v156; // [rsp+1F8h] [rbp+F8h]
  _OWORD v157[2]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v158; // [rsp+220h] [rbp+120h]
  __int16 v159; // [rsp+230h] [rbp+130h] BYREF
  char v160; // [rsp+233h] [rbp+133h]
  __int128 *v161; // [rsp+238h] [rbp+138h]
  __int128 v162; // [rsp+240h] [rbp+140h]
  __int128 v163; // [rsp+250h] [rbp+150h]
  RECTL rclBounds; // [rsp+260h] [rbp+160h]
  RECTL v165; // [rsp+270h] [rbp+170h] BYREF
  __int64 v166; // [rsp+280h] [rbp+180h]
  __int64 v167; // [rsp+288h] [rbp+188h]
  RECTL prclTrg; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL prclDest; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v170[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v132 = a5;
  v126 = a6;
  v125 = a7;
  v114 = a8;
  v116 = (XLATEOBJ *)a9;
  v142 = a10;
  v119 = (XLATEOBJ *)a12;
  pco = a4;
  v138 = a3;
  v137 = a2;
  psoDest = a1;
  pptlSrc = (POINTL)Gre::Base::Globals((Gre::Base *)a1);
  v15 = (struct SURFACE *)((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL));
  v121 = v15;
  v16 = (struct SURFACE *)((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL));
  v17 = (Gre::Base *)-a3;
  memset(v155, 0, sizeof(v155));
  v18 = 0;
  v19 = 0;
  v133 = (a3 - 24) & -(__int64)(a3 != 0);
  v156 = 0LL;
  v154 = 0LL;
  v158 = 0LL;
  v141 = 0LL;
  memset(v153, 0, sizeof(v153));
  memset(v157, 0, sizeof(v157));
  v140 = 0LL;
  if ( !v15 )
    return 0xFFFFFFFFLL;
  result = *(_QWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x30);
  v113 = result;
  if ( result )
  {
    v21 = (*(_DWORD *)(result + 40) & 1) == 0;
    v22 = *(_DWORD *)(result + 40) & 1;
    v135 = v22;
    v115 = v22;
    if ( !v21 )
    {
      v23 = Gre::Base::Globals(v17);
      GreAcquireSemaphore(*((_QWORD *)v23 + 17));
      result = v113;
      v15 = v121;
    }
    if ( a1->iType )
    {
      v24 = *(_DWORD *)(result + 2344);
      if ( v24 )
      {
        switch ( v24 )
        {
          case 2:
            v110 = 2;
            v112 = 2;
            break;
          case 3:
            v112 = -1;
            v110 = 2;
            break;
          case 4:
            v112 = -2;
            v110 = 3;
            break;
          case 5:
            v112 = -3;
            v110 = 4;
            break;
          case 6:
            v112 = 5;
            v110 = 5;
            break;
          case 7:
            v112 = 6;
            v110 = 6;
            break;
          default:
            goto LABEL_57;
        }
        goto LABEL_23;
      }
    }
    else
    {
      if ( *((_DWORD *)v15 + 24) != 1 )
      {
        switch ( *((_DWORD *)v15 + 24) )
        {
          case 2:
            v25 = 0;
            v26 = a1->sizlBitmap.cx + 7;
            v110 = 2;
            v27 = 2;
            v19 = (v26 >> 1) & 0xFFFFFFFC;
            if ( *(_DWORD *)(result + 2344) != 2 )
              v27 = -1;
            LOBYTE(v25) = *(_DWORD *)(result + 2344) != 2;
            v112 = v27;
            v24 = v25 + 2;
            break;
          case 3:
            v24 = 4;
            v112 = -2;
            v19 = (a1->sizlBitmap.cx + 3) & 0xFFFFFFFC;
            v110 = 3;
            break;
          case 4:
            v24 = 5;
            v112 = -3;
            v110 = 4;
            v19 = (2 * a1->sizlBitmap.cx + 2) & 0xFFFFFFFC;
            break;
          case 5:
            v24 = 6;
            v112 = 5;
            v110 = 5;
            v19 = (3 * (a1->sizlBitmap.cx + 1)) & 0xFFFFFFFC;
            break;
          case 6:
            v24 = 7;
            v19 = 4 * a1->sizlBitmap.cx;
            v112 = 6;
            v110 = 6;
            break;
          default:
LABEL_57:
            HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v115);
            return v18;
        }
        goto LABEL_23;
      }
      v24 = 0;
      v19 = ((a1->sizlBitmap.cx + 31) >> 3) & 0xFFFFFFFC;
    }
    v112 = 1;
    v110 = 1;
LABEL_23:
    prclDest.right = a2->sizlBitmap.cx;
    prclDest.bottom = a2->sizlBitmap.cy;
    *(_QWORD *)&prclDest.left = 0LL;
    ERECTL::operator*=(&prclDest.left, (int *)v116);
    if ( ERECTL::bEmpty((ERECTL *)&prclDest) )
    {
      v18 = 1;
      goto LABEL_57;
    }
    v28 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v113);
    v29 = v126;
    if ( !v28 && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v113, v126) )
    {
LABEL_56:
      v18 = -1;
      goto LABEL_57;
    }
    v122 = 0LL;
    v123 = 0;
    v124 = 0;
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v115);
    if ( !v16 )
      goto LABEL_55;
    if ( (*(_DWORD *)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x70) & 0x1000) != 0 )
    {
      v134 = *(struct SURFACE **)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x30);
      PDEVOBJ::vSync((PDEVOBJ *)&v134, a2, 0LL, 0);
    }
    if ( a2->iType || a2->iBitmapFormat - 7 <= 1 )
    {
      iBitmapFormat = a2->iBitmapFormat;
      v144[1] = a2->sizlBitmap.cx;
      v144[2] = a2->sizlBitmap.cy;
      v32 = *(_DWORD *)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x70) & 0x40000;
      v144[3] = 0;
      v146 = v32;
      v147 = 0;
      v145 = 0LL;
      if ( iBitmapFormat == 7 )
      {
        v144[0] = 2;
      }
      else if ( iBitmapFormat == 8 )
      {
        v144[0] = 3;
      }
      else
      {
        v144[0] = iBitmapFormat;
      }
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v122, (struct _DEVBITMAPINFO *)v144, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
        || !EngCopyBits(
              (SURFOBJ *)(-(__int64)(v122 != 0) & (v122 + 24)),
              a2,
              0LL,
              (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 6896LL),
              &prclDest,
              (POINTL *)&prclDest) )
      {
        if ( v22 )
        {
          v33 = Gre::Base::Globals(v30);
          GreAcquireSemaphore(*((_QWORD *)v33 + 17));
        }
        goto LABEL_55;
      }
      v143 = v122;
    }
    else
    {
      v143 = (unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL);
    }
    if ( v22 )
    {
      v34 = Gre::Base::Globals(v30);
      GreAcquireSemaphore(*((_QWORD *)v34 + 17));
    }
    if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v113) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v113, v29) )
    {
LABEL_55:
      SURFMEM::~SURFMEM((SURFMEM *)&v122);
      goto LABEL_56;
    }
    v148 = ppalGetFromXlate(
             (struct SURFACE *)((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)),
             v121,
             v132,
             1,
             1);
    if ( !v148 )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v122);
      goto LABEL_57;
    }
    v37 = ppalGetFromXlate(
            (struct SURFACE *)((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)),
            v35,
            v36,
            2,
            1);
    v38 = v113;
    v39 = (__int64)v37;
    v128 = 0;
    v127 = 0LL;
    *(_QWORD *)&prclTrg.left = 0LL;
    if ( v24 == *(_DWORD *)(v113 + 2344) )
    {
      v41 = *(_DWORD *)(v113 + 40) & 0x200;
    }
    else
    {
      if ( !PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v127, v24, (struct _GDIINFO *)(v113 + 2104)) )
      {
LABEL_74:
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v127);
        goto LABEL_55;
      }
      *(_QWORD *)&prclTrg.left = &v127;
      v40 = XEPALOBJ::bEqualEntries(&v127, v39);
      v38 = v113;
      v41 = v40;
    }
    LODWORD(v117) = v41;
    memset_0(&v159, 0, 0x68uLL);
    v42 = a11;
    v139 = 0LL;
    if ( a11 == 512 )
    {
      iUniq = v119->iUniq;
      if ( (unsigned __int8)v119->iUniq )
      {
        v42 = 0;
        a11 = 0;
      }
      else
      {
        v44 = 255;
        BYTE1(v139) = BYTE2(v119->iUniq);
        if ( HIBYTE(iUniq) == 1 && BYTE2(iUniq) == 0xFF )
        {
          if ( !(unsigned int)bIsSourceBGRA(v16) )
            goto LABEL_74;
          v42 = 512;
          v45 = 4;
        }
        else
        {
          v45 = 1;
        }
        LOBYTE(v139) = v45;
        if ( v39 )
        {
          *((_QWORD *)&v139 + 1) = *(_QWORD *)(v39 + 112);
          WORD1(v139) = *(_WORD *)(v39 + 28);
          v46 = *(_DWORD *)(v39 + 24);
          if ( (v46 & 8) != 0
            || (v46 & 2) != 0 && (v47 = *(_DWORD **)(v39 + 112), *v47 == 16711680) && v47[1] == 65280 && v47[2] == v44 )
          {
            LOBYTE(v139) = v45 | 2;
          }
        }
        v161 = &v139;
      }
    }
    v48 = v42;
    v159 = v42;
    v49 = *(_OWORD *)&v116->iUniq;
    v163 = *(_OWORD *)v114;
    v166 = *v125;
    v162 = v49;
    v160 = *(_BYTE *)(v38 + 2336);
    if ( v132 )
    {
      v50 = *((_DWORD *)v132 + 18);
      if ( (v50 & 4) != 0 || (v50 & 0x20) == 0 && (v50 & 3) != 0 )
      {
        v48 = v42 | 0x80;
        v159 = v42 | 0x80;
      }
    }
    v51 = v121;
    iDComplexity = 0;
    v53 = pco;
    v54 = v121;
    v134 = v121;
    v129 = 0LL;
    v130 = 0;
    v131 = 0;
    LODWORD(v125) = 0;
    if ( pco )
      iDComplexity = pco->iDComplexity;
    v55 = v110;
    v111 = iDComplexity;
    if ( !psoDest->iType && psoDest->lDelta == v19 && (v110 == 3 || v41) && iDComplexity != 3 )
    {
      if ( psoDest != v137 )
        goto LABEL_123;
      p_rclBounds = v114;
      if ( !(unsigned int)bIntersect(v116, v114) )
        goto LABEL_123;
      v48 = v159;
      v51 = v54;
      v55 = v110;
      v53 = pco;
    }
    else
    {
      p_rclBounds = v114;
    }
    LODWORD(v125) = 1;
    if ( iDComplexity )
    {
      v111 = 0;
      v57 = 0LL;
      p_rclBounds = (Gre::Base *)&v53->rclBounds;
      if ( iDComplexity != 1 )
        v57 = v53;
      pco = v57;
    }
    v58 = (int *)*((_QWORD *)v51 + 7);
    v59 = *((_DWORD *)p_rclBounds + 2);
    v60 = v59;
    v61 = *(_DWORD *)p_rclBounds;
    v116 = (XLATEOBJ *)v58;
    if ( v59 <= v61 )
    {
      v60 = v61;
      v61 = v59;
    }
    v62 = 0;
    if ( v61 >= 0 )
      v62 = v61;
    if ( v60 > (int)v58 )
      v60 = (int)v58;
    v63 = v60 - v62;
    if ( v60 - v62 <= 0 )
      goto LABEL_211;
    v64 = *((_DWORD *)p_rclBounds + 3);
    v65 = v64;
    v165.left = v62;
    v66 = *((_DWORD *)p_rclBounds + 1);
    v165.right = v60;
    if ( v64 <= v66 )
    {
      v65 = v66;
      v66 = v64;
    }
    v67 = 0;
    if ( v66 >= 0 )
      v67 = v66;
    if ( v65 > SHIDWORD(v116) )
      v65 = HIDWORD(v116);
    v68 = v65 - v67;
    if ( v65 - v67 <= 0 )
    {
LABEL_211:
      SURFMEM::~SURFMEM((SURFMEM *)&v129);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v127);
      SURFMEM::~SURFMEM((SURFMEM *)&v122);
      v18 = 1;
      goto LABEL_57;
    }
    v165.top = v67;
    v69 = *((_DWORD *)v54 + 28) & 0x40000;
    v165.bottom = v65;
    v159 = v48 | 0x10;
    v149[2] = v68;
    v149[3] = 0;
    v152 = 0;
    v149[1] = v63;
    v150 = 0LL;
    v151 = v69;
    v149[0] = v55;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v129, (struct _DEVBITMAPINFO *)v149, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_121;
    v54 = v129;
    v134 = v129;
LABEL_123:
    v119 = 0LL;
    v70 = (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 6896LL);
    v116 = (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 6896LL);
    v71 = (Gre::Base *)(*(_QWORD *)&pptlSrc + 6896LL);
    v114 = 0LL;
    v72 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v113);
    if ( !(_DWORD)v117 )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v117, *v72);
      v73 = &v117;
      if ( *(_QWORD *)&prclTrg.left )
        v73 = *(__int64 **)&prclTrg.left;
      if ( !v132 || (v74 = *((_QWORD *)v132 + 7)) == 0 )
        v74 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 6000LL);
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (Gre::Base *)&v119,
                            0LL,
                            0,
                            *v73,
                            v39,
                            v74,
                            v74,
                            0,
                            0xFFFFFF,
                            0xFFFFFF,
                            0) )
      {
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v117);
LABEL_131:
        EXLATEOBJ::~EXLATEOBJ(&v114);
        EXLATEOBJ::~EXLATEOBJ((Gre::Base **)&v119);
LABEL_121:
        SURFMEM::~SURFMEM((SURFMEM *)&v129);
        goto LABEL_74;
      }
      v116 = v119;
      if ( (v133 || a11 == 512) && (_DWORD)v125 )
      {
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              (Gre::Base *)&v114,
                              0LL,
                              0,
                              v39,
                              *v73,
                              v74,
                              v74,
                              0,
                              0xFFFFFF,
                              0xFFFFFF,
                              0) )
        {
          if ( v117 )
            DEC_SHARE_REF_CNT(v117);
          goto LABEL_131;
        }
        v71 = v114;
      }
      if ( v117 )
        DEC_SHARE_REF_CNT(v117);
      v70 = v116;
    }
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v115);
    v75 = psoDest;
    PDEVOBJ::vSync((PDEVOBJ *)&v113, psoDest, 0LL, 0);
    if ( v133 || a11 == 512 )
    {
      if ( (_DWORD)v125 )
      {
        v77 = *((_DWORD *)v54 + 14);
        ++*((_DWORD *)v54 + 23);
        prclTrg.right = v77;
        prclTrg.bottom = *((_DWORD *)v54 + 15);
        *(_QWORD *)&prclTrg.left = 0LL;
        v78 = (*((_DWORD *)v121 + 28) & 0x400) != 0
            ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v113 + 2816)
            : EngCopyBits;
        if ( !((unsigned int (__fastcall *)(unsigned __int64, SURFOBJ *, _QWORD, Gre::Base *, RECTL *, RECTL *))v78)(
                ((unsigned __int64)v54 + 24) & -(__int64)(v54 != 0LL),
                v75,
                0LL,
                v71,
                &prclTrg,
                &v165)
          && !EngBitBlt(
                (SURFOBJ *)(((unsigned __int64)v54 + 24) & -(__int64)(v54 != 0LL)),
                0LL,
                0LL,
                0LL,
                0LL,
                &prclTrg,
                0LL,
                0LL,
                0LL,
                0LL,
                0xFFFFu) )
        {
          if ( v22 )
          {
            v79 = Gre::Base::Globals(v76);
            GreAcquireSemaphore(*((_QWORD *)v79 + 17));
          }
          goto LABEL_131;
        }
      }
    }
    if ( v22 )
    {
      v80 = Gre::Base::Globals(v76);
      GreAcquireSemaphore(*((_QWORD *)v80 + 17));
    }
    if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v113) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v113, v126) )
      goto LABEL_131;
    v81 = (SURFOBJ *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v113);
    v137 = v81;
    v82 = 0;
    v154 = 0LL;
    v83 = v143 + 24;
    if ( !v143 )
      v83 = 0LL;
    if ( !(unsigned int)bSetHTSrcSurfInfo(v83, (__int64)v148, (__int64)v153, (__int64)v132) )
      goto LABEL_208;
    v84 = (struct _SURFOBJ *)((char *)v54 + 24);
    if ( !v54 )
      v84 = 0LL;
    if ( !(unsigned int)bSetHTSurfInfo(v84, (struct _HTSURFACEINFO *)v155, v112) )
      goto LABEL_208;
    v85 = v133;
    if ( v133 )
    {
      if ( !(unsigned int)bSetHTSurfInfo(
                            (struct _SURFOBJ *)(v133 + 24),
                            (struct _HTSURFACEINFO *)v157,
                            *(_DWORD *)(v138 + 72)) )
      {
LABEL_208:
        if ( v154 )
          FreeThreadBufferWithTag(v154);
        EXLATEOBJ::vAltUnlock(&v114);
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v119);
        SURFMEM::~SURFMEM((SURFMEM *)&v129);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v127);
        SURFMEM::~SURFMEM((SURFMEM *)&v122);
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v115);
        return v82 != 0 ? 1 : -1;
      }
      v85 = v133;
    }
    v86 = 0LL;
    if ( v85 )
    {
      if ( (unsigned int)bUMPDSecurityGateEx() && !v142 )
      {
        if ( v154 )
          FreeThreadBufferWithTag(v154);
        goto LABEL_131;
      }
      v86 = v157;
      v167 = *v142;
    }
    v87 = v159;
    v88 = 256;
    if ( (*(_DWORD *)(v113 + 2348) & 0x100) == 0 )
    {
      v87 = v159 | 2;
      v159 |= 2u;
    }
    v82 = 1;
    if ( v110 == 3 )
    {
      *(_QWORD *)&v140 = 0xFF00010100LL;
      v156 = &v140;
      v141 = v170;
      DWORD2(v140) = 256;
      cEntries = v70->cEntries;
      if ( cEntries > 0x100 || (v88 = v70->cEntries, cEntries) )
      {
        v90 = v170;
        v91 = v88;
        v92 = 0LL;
        do
        {
          v93 = v70->pulXlate[v92++];
          *v90++ = v93;
          --v91;
        }
        while ( v91 );
      }
      v70 = (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 6896LL);
      v116 = (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 6896LL);
    }
    if ( v111 )
    {
      v159 = v87 | 1;
      if ( v111 != 1 )
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
        v94 = AllocFreeTmpBuffer(324LL);
        v95 = (char *)v94;
        if ( v94 )
        {
          v96 = (int)v137;
          v97 = pco;
          v138 = v94;
          do
          {
            v98 = XCLIPOBJ::bEnum((XCLIPOBJ *)v97, 0x144u, v95, 0LL);
            v101 = 0;
            LODWORD(v117) = v98;
            if ( *(_DWORD *)v95 )
            {
              v102 = (int)v126;
              do
              {
                rclBounds = *(RECTL *)&v95[16 * v101++ + 4];
                v82 = ((int)HT_HalftoneBitmap(v96, v102, (__int64)v153, (__int64)v86, (__int64)v155, &v159) >= 0) & (unsigned __int8)v82;
              }
              while ( v101 < *(_DWORD *)v95 );
              v98 = v117;
              v97 = pco;
            }
          }
          while ( v98 && v82 );
          AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v138, v99, v100);
          v22 = v135;
          v54 = v134;
          v70 = v116;
        }
        else
        {
          v82 = 0;
        }
        goto LABEL_193;
      }
      rclBounds = pco->rclBounds;
    }
    v82 = (int)HT_HalftoneBitmap((int)v81, (int)v126, (__int64)v153, (__int64)v86, (__int64)v155, &v159) >= 0;
LABEL_193:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v115);
    if ( (_DWORD)v125 && v82 )
    {
      v104 = v121;
      pptlSrc = 0LL;
      ++*((_DWORD *)v121 + 23);
      if ( psoDest->iType )
      {
        if ( (*((_DWORD *)v104 + 28) & 0x400) != 0 )
          v105 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v113 + 2816);
        else
          v105 = EngCopyBits;
        v106 = (char *)v54 + 24;
        if ( !v54 )
          v106 = 0LL;
        v107 = ((__int64 (__fastcall *)(SURFOBJ *, char *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v105)(
                 psoDest,
                 v106,
                 pco,
                 v70,
                 &v165,
                 &pptlSrc);
      }
      else
      {
        v108 = (SURFOBJ *)((char *)v54 + 24);
        if ( !v54 )
          v108 = 0LL;
        v107 = EngCopyBits(psoDest, v108, pco, v70, &v165, &pptlSrc);
      }
      v82 = v107;
    }
    if ( v22 )
    {
      v109 = Gre::Base::Globals(v103);
      GreAcquireSemaphore(*((_QWORD *)v109 + 17));
    }
    goto LABEL_208;
  }
  return result;
}
