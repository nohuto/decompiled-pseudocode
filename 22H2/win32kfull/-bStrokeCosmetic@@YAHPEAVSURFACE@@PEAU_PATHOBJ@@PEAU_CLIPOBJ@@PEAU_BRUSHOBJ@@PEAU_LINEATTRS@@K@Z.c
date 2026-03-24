/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C0149D1C
 * Callers:
 *     EngStrokePath @ 0x1C0148F20 (EngStrokePath.c)
 *     EngLineTo @ 0x1C0149240 (EngLineTo.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CF858 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C014A20C (-bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRI.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C014ABB4 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C014BC28 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall bStrokeCosmetic(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *this,
        struct _BRUSHOBJ *a4,
        struct _LINEATTRS *a5,
        FIX a6)
{
  FLONG fl; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  ULONG cstyle; // edi
  PFLOAT_LONG pstyle; // r9
  bool v15; // zf
  int v16; // r8d
  int *v17; // rdx
  int *v18; // rcx
  LONG l; // eax
  int v20; // eax
  int v21; // r8d
  unsigned int v22; // ecx
  int e_low; // eax
  int v24; // eax
  unsigned int v25; // r8d
  ULONG iSolidColor; // ecx
  struct _BMINFO *v27; // rdi
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  void (* near **v33)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // rcx
  void (**v34)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // r13
  struct _PATHOBJ v35; // rcx
  int v36; // eax
  int v37; // r10d
  int v38; // r12d
  unsigned int v39; // r8d
  char v40; // r9
  struct _POINTFIX *v41; // rdx
  struct _POINTFIX *v42; // r11
  struct _POINTFIX *v43; // rcx
  int v44; // eax
  unsigned int v46; // esi
  int v47; // ebx
  int v48; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX v49; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v50; // [rsp+70h] [rbp-90h]
  _QWORD v51[14]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTFIX v52; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v53; // [rsp+F8h] [rbp-8h]
  struct _CLIPLINE v54[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTFIX *v55[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v56[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v57[64]; // [rsp+210h] [rbp+110h] BYREF

  v49.x = a6;
  memset(&v51[1], 0, 0x60uLL);
  fl = a5->fl;
  v53 = 0LL;
  v11 = 0;
  if ( (fl & 2) != 0 )
  {
    HIDWORD(v51[10]) = 0;
    v51[8] = &gaspAlternateStyle;
    v11 = 1024;
    v51[9] = &gaspAlternateStyle;
    LODWORD(v51[4]) = HIWORD(a5->elStyleState.l) & 1;
    v51[11] = 0x100000001LL;
    v51[3] = 0x200000001LL;
    v51[12] = 0x100000001LL;
  }
  else if ( a5->pstyle )
  {
    v12 = *((_QWORD *)a1 + 6);
    if ( v12 )
    {
      v51[11] = *(_QWORD *)(v12 + 2212);
      LODWORD(v51[12]) = *(_DWORD *)(v12 + 2220);
    }
    else
    {
      v51[11] = 0x100000001LL;
      LODWORD(v51[12]) = 3;
    }
    v11 = 1024;
    if ( bUMPDSecurityGateEx() && (cstyle = 16, a5->cstyle > 0x10) )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:bStrokeCosmetic:bStorkeCosmetic's style index "
          "(pla->cstyle) is greater than STYLE_MAX_COUNT.\n",
          289);
    }
    else
    {
      cstyle = a5->cstyle;
    }
    pstyle = a5->pstyle;
    HIDWORD(v51[12]) = cstyle;
    v15 = (a5->fl & 4) == 0;
    v16 = 0;
    LODWORD(v51[3]) = 0;
    HIDWORD(v51[10]) = !v15;
    v51[8] = v56;
    v51[9] = v57;
    if ( cstyle )
    {
      v17 = &v56[cstyle - 1];
      if ( v17 >= v56 )
      {
        v18 = (int *)v57;
        do
        {
          l = pstyle->l;
          ++pstyle;
          v20 = LODWORD(v51[12]) * l;
          *v17 = v20;
          *v18++ = v20;
          v16 = *v17-- + LODWORD(v51[3]);
          LODWORD(v51[3]) = v16;
        }
        while ( (unsigned __int64)v17 >= v51[8] );
      }
    }
    v21 = 2 * v16;
    v22 = LODWORD(v51[12]) * HIWORD(a5->elStyleState.l);
    e_low = LOWORD(a5->elStyleState.e);
    HIDWORD(v51[3]) = v21;
    v24 = v22 + e_low;
    if ( v24 < 0 )
      v24 = 0;
    LODWORD(v51[4]) = v24;
    if ( v24 >= v21 )
      LODWORD(v51[4]) = v24 % v21;
  }
  v25 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v48 = *((_DWORD *)a1 + 22) / 4;
  v50 = (unsigned int *)*((_QWORD *)a1 + 10);
  v27 = (struct _BMINFO *)((char *)&gabminfo + 32 * v25);
  if ( v25 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_55;
  }
  if ( v25 == 2 )
  {
LABEL_55:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_56;
  }
  if ( v25 != 3 )
  {
    if ( v25 != 4 )
      goto LABEL_19;
    goto LABEL_57;
  }
LABEL_56:
  iSolidColor |= iSolidColor << 8;
LABEL_57:
  iSolidColor |= iSolidColor << 16;
LABEL_19:
  HIDWORD(v55[1]) = -1;
  HIDWORD(v55[0]) = iSolidColor;
  LODWORD(v55[0]) = 0;
  LODWORD(v55[1]) = ~iSolidColor;
  v28 = aiLineMix[v49.x & 0xF];
  v29 = *((_DWORD *)v55 + (unsigned __int8)v28);
  v30 = *((_DWORD *)v55 + (v28 >> 8));
  v31 = 8LL;
  if ( v25 != 5 )
    v31 = 0LL;
  v51[0] = __PAIR64__(v30, v29);
  v32 = -(__int64)(v11 != 0) & 4 | v31;
  v33 = &gapfnStripCddCallback;
  if ( !*((_QWORD *)a1 + 79) )
    v33 = &gapfnStrip;
  v34 = (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))&v33[v32];
  if ( this && this->iDComplexity )
  {
    memset(v54, 0, 0xB8uLL);
    v46 = v11 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v47 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[9], a2, 0xB8u, v54, 1);
      if ( v54[0].c )
      {
        if ( (v46 & 0x400) != 0 )
          HIDWORD(v51[4]) = LOWORD(v54[0].lStyleState) + LODWORD(v51[12]) * HIWORD(v54[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v27,
                              &v54[0].ptfxA,
                              &v54[0].ptfxB,
                              v54[0].arun,
                              v54[0].c,
                              (struct _LINESTATE *)v51,
                              0LL,
                              v34,
                              v46,
                              v50,
                              v48,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          break;
      }
      if ( !v47 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    v35 = a2[1];
    a2->fl &= ~8u;
    *(_OWORD *)v55 = 0LL;
    v52 = 0LL;
    v49 = 0LL;
    *(_QWORD *)(*(_QWORD *)&v35 + 72LL) = *(_QWORD *)(*(_QWORD *)&v35 + 32LL);
    do
    {
      v36 = EPATHOBJ::bEnum((EPATHOBJ *)a2, (struct _PATHDATA *)v55);
      v37 = HIDWORD(v55[0]);
      v38 = v36;
      v39 = HIDWORD(v55[0]);
      if ( !HIDWORD(v55[0]) )
        break;
      v40 = (char)v55[0];
      v41 = v55[1];
      if ( ((__int64)v55[0] & 1) != 0 )
      {
        v42 = v55[1] + 1;
        v52 = *v55[1];
        v39 = HIDWORD(v55[0]) - 1;
        v43 = v55[1];
      }
      else
      {
        v43 = &v49;
        v42 = v55[1];
      }
      v44 = v51[4];
      if ( ((__int64)v55[0] & 4) != 0 )
        v44 = v53;
      LODWORD(v51[4]) = v44;
      if ( v39 )
      {
        if ( !(unsigned int)bLines(
                              v27,
                              v43,
                              v42,
                              0LL,
                              v39,
                              (struct _LINESTATE *)v51,
                              0LL,
                              v34,
                              v11,
                              v50,
                              v48,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          return 0LL;
        v41 = v55[1];
        v37 = HIDWORD(v55[0]);
        v40 = (char)v55[0];
      }
      v49 = v41[v37 - 1];
      if ( (v40 & 8) != 0
        && !(unsigned int)bLines(
                            v27,
                            &v49,
                            &v52,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v51,
                            0LL,
                            v34,
                            v11,
                            v50,
                            v48,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
      {
        return 0LL;
      }
    }
    while ( v38 );
    if ( v11 )
      a5->elStyleState.l = (unsigned __int16)(LODWORD(v51[4]) % LODWORD(v51[12])) | ((unsigned __int16)(LODWORD(v51[4]) / LODWORD(v51[12])) << 16);
    return 1LL;
  }
}
