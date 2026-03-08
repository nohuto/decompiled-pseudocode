/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C000C938
 * Callers:
 *     EngStrokePath @ 0x1C000C6E0 (EngStrokePath.c)
 *     EngLineTo @ 0x1C028FDB0 (EngLineTo.c)
 * Callees:
 *     ?bLines@@YAHPEBU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEBQ6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C000CC04 (-bLines@@YAHPEBU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEBQ6AXPEAU_STRI.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C02DAFFC (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02DB378 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
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
  unsigned int v11; // edi
  unsigned int v12; // r8d
  ULONG iSolidColor; // ecx
  const struct _BMINFO *v14; // r15
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  void (*const near *const *v20)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *); // rcx
  void (*const *v21)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *); // r13
  struct _PATHOBJ v22; // rcx
  int v23; // eax
  int v24; // r10d
  int v25; // r12d
  unsigned int v26; // r8d
  char v27; // r9
  struct _POINTFIX *v28; // rdx
  struct _POINTFIX *v29; // r11
  struct _POINTFIX *v30; // rcx
  unsigned int v31; // eax
  unsigned int v33; // eax
  _DWORD *v34; // rcx
  ULONG cstyle; // ecx
  PFLOAT_LONG pstyle; // rdx
  int v37; // r9d
  BOOL v38; // eax
  int *v39; // r8
  _BYTE *v40; // rcx
  int v41; // eax
  int v42; // r9d
  unsigned int v43; // ecx
  int e_low; // eax
  int v45; // eax
  unsigned int v46; // edi
  int v47; // ebx
  int v48; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX v49; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v50; // [rsp+70h] [rbp-90h]
  _DWORD v51[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v52[16]; // [rsp+88h] [rbp-78h] BYREF
  int v53; // [rsp+98h] [rbp-68h]
  int v54; // [rsp+9Ch] [rbp-64h]
  unsigned int v55; // [rsp+A0h] [rbp-60h]
  int v56; // [rsp+A4h] [rbp-5Ch]
  _DWORD *v57; // [rsp+C0h] [rbp-40h]
  _BYTE *v58; // [rsp+C8h] [rbp-38h]
  BOOL v59; // [rsp+D4h] [rbp-2Ch]
  int v60; // [rsp+D8h] [rbp-28h]
  int v61; // [rsp+DCh] [rbp-24h]
  unsigned int v62; // [rsp+E0h] [rbp-20h]
  int v63; // [rsp+E4h] [rbp-1Ch]
  struct _POINTFIX v64; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-8h]
  struct _CLIPLINE v66[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTFIX *v67[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v68[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v69[64]; // [rsp+210h] [rbp+110h] BYREF

  v49.x = a6;
  memset_0(v52, 0, 0x60uLL);
  fl = a5->fl;
  v65 = 0LL;
  v11 = 0;
  if ( (fl & 2) != 0 )
  {
    v63 = 1;
    v57 = &unk_1C032A2DC;
    v11 = 1024;
    v58 = &unk_1C032A2DC;
    v33 = HIWORD(a5->elStyleState.l) & 1;
    v60 = 1;
    v55 = v33;
    v61 = 1;
    v53 = 1;
    v54 = 2;
    v62 = 1;
  }
  else if ( a5->pstyle )
  {
    v34 = (_DWORD *)*((_QWORD *)a1 + 6);
    if ( v34 )
    {
      v60 = v34[545];
      v61 = v34[546];
      v62 = v34[547];
    }
    else
    {
      v60 = 1;
      v61 = 1;
      v62 = 3;
    }
    v11 = 1024;
    if ( !(unsigned int)bUMPDSecurityGateEx() || (cstyle = 16, a5->cstyle <= 0x10) )
      cstyle = a5->cstyle;
    pstyle = a5->pstyle;
    v37 = 0;
    v38 = (a5->fl & 4) != 0;
    v63 = cstyle;
    v59 = v38;
    v53 = 0;
    if ( cstyle )
    {
      v39 = &v68[cstyle - 1];
      if ( v39 >= v68 )
      {
        v40 = (_BYTE *)(v69 - (_BYTE *)pstyle);
        do
        {
          v41 = pstyle->l * v62;
          v37 += v41;
          *v39 = v41;
          *(LONG *)((char *)&pstyle->l + (_QWORD)v40) = v41;
          --v39;
          ++pstyle;
          v53 = v37;
        }
        while ( v39 >= v68 );
      }
    }
    v42 = 2 * v37;
    v57 = v68;
    v58 = v69;
    v43 = v62 * HIWORD(a5->elStyleState.l);
    e_low = LOWORD(a5->elStyleState.e);
    v54 = v42;
    v45 = v43 + e_low;
    if ( v45 < 0 )
      v45 = 0;
    v55 = v45;
    if ( v45 >= v42 )
      v55 = v45 % v42;
  }
  v12 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v48 = *((_DWORD *)a1 + 22) / 4;
  v50 = (unsigned int *)*((_QWORD *)a1 + 10);
  v14 = (const struct _BMINFO *)((char *)&gabminfo + 32 * v12);
  if ( v12 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_45;
  }
  if ( v12 == 2 )
  {
LABEL_45:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_46;
  }
  if ( v12 != 3 )
  {
    if ( v12 != 4 )
      goto LABEL_7;
    goto LABEL_47;
  }
LABEL_46:
  iSolidColor |= iSolidColor << 8;
LABEL_47:
  iSolidColor |= iSolidColor << 16;
LABEL_7:
  HIDWORD(v67[1]) = -1;
  HIDWORD(v67[0]) = iSolidColor;
  LODWORD(v67[0]) = 0;
  LODWORD(v67[1]) = ~iSolidColor;
  v15 = dword_1C0318460[v49.x & 0xF];
  v16 = *((_DWORD *)v67 + (unsigned __int8)v15);
  v17 = *((_DWORD *)v67 + (v15 >> 8));
  v18 = 8LL;
  if ( v12 != 5 )
    v18 = 0LL;
  v51[0] = v16;
  v51[1] = v17;
  v19 = (v11 != 0 ? 4 : 0) | (unsigned __int64)v18;
  v20 = &gapfnStripCddCallback;
  if ( !*((_QWORD *)a1 + 79) )
    v20 = &gapfnStrip;
  v21 = (void (*const *)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *))&v20[v19];
  if ( this && this->iDComplexity )
  {
    memset_0(v66, 0, 0xB8uLL);
    v46 = v11 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v47 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[9], a2, 0xB8u, v66, 1);
      if ( v66[0].c )
      {
        if ( (v46 & 0x400) != 0 )
          v56 = LOWORD(v66[0].lStyleState) + v62 * HIWORD(v66[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v14,
                              &v66[0].ptfxA,
                              &v66[0].ptfxB,
                              v66[0].arun,
                              v66[0].c,
                              (struct _LINESTATE *)v51,
                              0LL,
                              v21,
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
    v22 = a2[1];
    a2->fl &= ~8u;
    *(_OWORD *)v67 = 0LL;
    v64 = 0LL;
    v49 = 0LL;
    *(_QWORD *)(*(_QWORD *)&v22 + 72LL) = *(_QWORD *)(*(_QWORD *)&v22 + 32LL);
    do
    {
      v23 = EPATHOBJ::bEnum((EPATHOBJ *)a2, (struct _PATHDATA *)v67);
      v24 = HIDWORD(v67[0]);
      v25 = v23;
      v26 = HIDWORD(v67[0]);
      if ( !HIDWORD(v67[0]) )
        break;
      v27 = (char)v67[0];
      v28 = v67[1];
      if ( ((__int64)v67[0] & 1) != 0 )
      {
        v29 = v67[1] + 1;
        v64 = *v67[1];
        v26 = HIDWORD(v67[0]) - 1;
        v30 = v67[1];
      }
      else
      {
        v30 = &v49;
        v29 = v67[1];
      }
      v31 = v55;
      if ( ((__int64)v67[0] & 4) != 0 )
        v31 = v65;
      v55 = v31;
      if ( v26 )
      {
        if ( !(unsigned int)bLines(
                              v14,
                              v30,
                              v29,
                              0LL,
                              v26,
                              (struct _LINESTATE *)v51,
                              0LL,
                              v21,
                              v11,
                              v50,
                              v48,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          return 0LL;
        v28 = v67[1];
        v24 = HIDWORD(v67[0]);
        v27 = (char)v67[0];
      }
      v49 = v28[v24 - 1];
      if ( (v27 & 8) != 0
        && !(unsigned int)bLines(
                            v14,
                            &v49,
                            &v64,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v51,
                            0LL,
                            v21,
                            v11,
                            v50,
                            v48,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
      {
        return 0LL;
      }
    }
    while ( v25 );
    if ( v11 )
      a5->elStyleState.l = (unsigned __int16)(v55 % v62) | ((unsigned __int16)(v55 / v62) << 16);
    return 1LL;
  }
}
