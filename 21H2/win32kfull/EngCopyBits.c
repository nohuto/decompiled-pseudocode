/*
 * XREFs of EngCopyBits @ 0x1C007EB40
 * Callers:
 *     GreGetBitmapBits @ 0x1C001842C (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C0018890 (GreSetBitmapBits.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0019280 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C0019F38 (EngHTBlt.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C007F448 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiAlphaBlend @ 0x1C00851E0 (NtGdiAlphaBlend.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     EngStretchBlt @ 0x1C00B1650 (EngStretchBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00CAB18 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00CAF40 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     EngBitBlt @ 0x1C00CB5E0 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00CD260 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     NtGdiEngCopyBits @ 0x1C013AFF0 (NtGdiEngCopyBits.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026E770 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C02733B8 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0281514 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C007F3CC (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082FC8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEEF0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CFBA8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  SURFOBJ *v7; // rdi
  POINTL *v9; // r9
  __int64 p_iBitmapFormat; // rcx
  PVOID *p_pvScan0; // r13
  int v12; // r12d
  int v13; // r9d
  int v14; // r8d
  unsigned int v15; // ebx
  int v16; // eax
  LONG lDelta; // eax
  XCLIPOBJ *v18; // r10
  RECTL rclBounds; // xmm0
  ULONG iBitmapFormat; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // ecx
  unsigned int i; // ebx
  LONG v25; // edx
  LONG left; // r11d
  LONG v27; // r9d
  LONG right; // ecx
  LONG v29; // ecx
  LONG v30; // r14d
  LONG v31; // r10d
  LONG bottom; // r8d
  int v33; // r8d
  int v34; // r13d
  int v35; // r11d
  LONG v36; // edx
  char *pvScan0; // r9
  LONG v38; // r8d
  char *v39; // r11
  XCLIPOBJ *v41; // r10
  int (*RLESrcCopy)(struct BLTINFO *); // r14
  int v43; // r11d
  unsigned __int64 v44; // r9
  __int64 v45; // r8
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  char *v50; // rdx
  char *v51; // rcx
  unsigned int j; // ebx
  LONG v53; // edx
  LONG v54; // eax
  LONG v55; // r8d
  LONG v56; // eax
  LONG v57; // r9d
  LONG v58; // eax
  int v59; // eax
  LONG v60; // r10d
  _QWORD *v61; // rbx
  __int64 (__fastcall *v62)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, struct PALETTE *, int, int, int, int); // r12
  LONG x; // ecx
  LONG y; // edx
  int v65; // eax
  int v66; // ebx
  LONG v67; // ecx
  LONG top; // edx
  unsigned __int64 v69; // rax
  __int64 v70; // r12
  struct PALETTE *v71; // [rsp+30h] [rbp-328h]
  int v72; // [rsp+38h] [rbp-320h]
  int v73; // [rsp+40h] [rbp-318h]
  int v74; // [rsp+48h] [rbp-310h]
  int v75; // [rsp+50h] [rbp-308h]
  int v76; // [rsp+64h] [rbp-2F4h]
  CLIPOBJ *v77; // [rsp+68h] [rbp-2F0h]
  int v78; // [rsp+70h] [rbp-2E8h]
  int v79; // [rsp+74h] [rbp-2E4h]
  int v80; // [rsp+78h] [rbp-2E0h]
  POINTL *v81; // [rsp+80h] [rbp-2D8h]
  XLATEOBJ *v82; // [rsp+88h] [rbp-2D0h] BYREF
  LONG v83; // [rsp+90h] [rbp-2C8h] BYREF
  LONG v84; // [rsp+94h] [rbp-2C4h]
  void (* near *v85)(struct BLTINFO *); // [rsp+98h] [rbp-2C0h]
  RECTL *v86; // [rsp+A0h] [rbp-2B8h]
  int v87; // [rsp+A8h] [rbp-2B0h]
  CLIPOBJ *v88; // [rsp+B0h] [rbp-2A8h]
  int v89; // [rsp+B8h] [rbp-2A0h]
  int v90; // [rsp+BCh] [rbp-29Ch]
  HDEV hdev; // [rsp+C0h] [rbp-298h] BYREF
  _QWORD v92[6]; // [rsp+C8h] [rbp-290h] BYREF
  _BYTE v93[32]; // [rsp+F8h] [rbp-260h] BYREF
  __int64 v94; // [rsp+118h] [rbp-240h]
  XLATEOBJ *v95; // [rsp+120h] [rbp-238h] BYREF
  char *v96; // [rsp+128h] [rbp-230h]
  char *v97; // [rsp+130h] [rbp-228h]
  int v98; // [rsp+138h] [rbp-220h]
  int v99; // [rsp+13Ch] [rbp-21Ch]
  int v100; // [rsp+140h] [rbp-218h]
  int v101; // [rsp+144h] [rbp-214h]
  int v102; // [rsp+148h] [rbp-210h]
  LONG v103; // [rsp+14Ch] [rbp-20Ch]
  int v104; // [rsp+150h] [rbp-208h]
  int v105; // [rsp+154h] [rbp-204h]
  int v106; // [rsp+158h] [rbp-200h]
  LONG v107; // [rsp+15Ch] [rbp-1FCh]
  int v108; // [rsp+160h] [rbp-1F8h]
  PVOID *v109; // [rsp+168h] [rbp-1F0h]
  POINTL v110; // [rsp+170h] [rbp-1E8h]
  __int128 v111; // [rsp+178h] [rbp-1E0h]
  char *v112; // [rsp+188h] [rbp-1D0h]
  char *v113; // [rsp+190h] [rbp-1C8h]
  int v114; // [rsp+198h] [rbp-1C0h]
  int v115; // [rsp+19Ch] [rbp-1BCh]
  int v116; // [rsp+1A0h] [rbp-1B8h]
  unsigned int v117; // [rsp+1A4h] [rbp-1B4h]
  int v118; // [rsp+1A8h] [rbp-1B0h]
  _DWORD v119[84]; // [rsp+1C0h] [rbp-198h] BYREF

  v77 = pco;
  v7 = psoSrc;
  v92[2] = psoDest;
  v92[3] = psoSrc;
  v88 = pco;
  v86 = prclDest;
  v9 = pptlSrc;
  v81 = pptlSrc;
  v92[5] = pptlSrc;
  if ( psoDest )
    p_iBitmapFormat = (__int64)&psoDest->iBitmapFormat;
  else
    p_iBitmapFormat = 96LL;
  if ( psoSrc )
    p_pvScan0 = &psoSrc[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  if ( psoSrc->iType )
  {
    v61 = p_pvScan0[6];
    v62 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, struct PALETTE *, int, int, int, int))v61[355];
    v82 = 0LL;
    x = pptlSrc->x;
    v83 = pptlSrc->x;
    y = pptlSrc->y;
    v84 = y;
    v65 = *((_DWORD *)p_pvScan0 + 28);
    if ( (v65 & 0x80000) != 0 )
    {
      if ( v61 != (_QWORD *)v61[3] )
      {
        if ( v65 < 0 )
        {
          v83 = *((_DWORD *)v61 + 646) + x;
          v84 = y + *((_DWORD *)v61 + 647);
          v81 = (POINTL *)&v83;
        }
        v70 = v61[3];
        SURFREF::SURFREF((SURFREF *)v93, (HSURF)p_pvScan0[18]);
        if ( !v94
          || (v75 = 0x2000,
              v74 = 0,
              v73 = 0,
              v72 = 0,
              v71 = ppalDefault,
              !(unsigned int)EXLATEOBJ::bInitXlateObj(&v82, 0LL, 0LL)) )
        {
          SURFREF::~SURFREF((SURFREF *)v93);
LABEL_109:
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v82);
          return 0;
        }
        pxlo = v82;
        v7 = (SURFOBJ *)v94;
        if ( v94 )
          v7 = (SURFOBJ *)(v94 + 24);
        v62 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, struct PALETTE *, int, int, int, int))(v70 + 2840);
        SURFREF::~SURFREF((SURFREF *)v93);
        v9 = v81;
      }
      pco = v77;
    }
    if ( v62 )
    {
      v66 = v62(psoDest, v7, pco, pxlo, prclDest, v9, v71, v72, v73, v74, v75);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v82);
      return v66;
    }
    goto LABEL_109;
  }
  if ( (*((_DWORD *)p_pvScan0 + 24) > 8u || *(_DWORD *)p_iBitmapFormat > 8u) && (unsigned int)bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 470);
    return 0;
  }
  hdev = psoDest->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
  v92[0] = v7->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)v92, v7, 0LL, 0);
  v12 = 0;
  v76 = 0;
  v108 = 0;
  v13 = 1;
  v78 = 1;
  v14 = 1;
  v79 = 1;
  if ( v7->iBitmapFormat - 7 <= 1 )
  {
    v15 = 2;
    v78 = 1;
    v79 = -1;
    lDelta = psoDest->lDelta;
    v102 = 0;
    v76 = 1;
LABEL_53:
    lDelta = -lDelta;
    goto LABEL_14;
  }
  if ( v7->pvScan0 == psoDest->pvScan0 )
  {
    v67 = pptlSrc->y;
    top = prclDest->top;
    if ( pptlSrc->x < prclDest->left )
    {
      v13 = -1;
      v78 = -1;
      if ( v67 >= top )
      {
        v15 = 1;
      }
      else
      {
        v14 = -1;
        v79 = -1;
        v15 = 3;
      }
    }
    else if ( v67 < top )
    {
      v14 = -1;
      v79 = -1;
      v15 = 2;
    }
    else
    {
      v15 = 0;
    }
  }
  else
  {
    v15 = 4;
  }
  v16 = v7->lDelta;
  if ( v14 <= 0 )
    v16 = -v16;
  v102 = v16;
  lDelta = psoDest->lDelta;
  if ( v14 <= 0 )
    goto LABEL_53;
LABEL_14:
  v103 = lDelta;
  v87 = v13;
  memset(v119, 0, 0x144uLL);
  v18 = (XCLIPOBJ *)v77;
  if ( !v77 || !v77->iDComplexity )
  {
    rclBounds = *prclDest;
LABEL_16:
    v119[0] = 1;
    *(RECTL *)&v119[1] = rclBounds;
    goto LABEL_17;
  }
  if ( v77->iDComplexity == 1 )
  {
    rclBounds = v77->rclBounds;
    goto LABEL_16;
  }
  if ( v77->iDComplexity == 3 )
  {
    v12 = 1;
    XCLIPOBJ::cEnumStart((XCLIPOBJ *)v77, 0, 0, v15, 0x14u);
    v18 = (XCLIPOBJ *)v77;
  }
LABEL_17:
  if ( !pxlo )
    pxlo = xloIdent;
  v95 = pxlo;
  v98 = v78;
  v101 = v79;
  iBitmapFormat = psoDest->iBitmapFormat;
  v21 = v7->iBitmapFormat;
  if ( !v76 )
  {
    v22 = 4 * (v21 | (8 * iBitmapFormat));
    v23 = v22 + 2;
    if ( v78 >= 0 )
      v23 = v22;
    if ( (pxlo->flXlate & 1) != 0 )
    {
      ++v23;
      if ( (v7->fjBitmap & 0x20) != 0 )
        v108 = 1;
    }
    v85 = (&SrcCopyFunctionTable)[v23];
    v92[4] = v85;
    if ( v12 )
      goto LABEL_87;
    while ( 1 )
    {
      for ( i = 0; i < v119[0]; ++i )
      {
        v25 = v119[4 * i + 1];
        left = prclDest->left;
        if ( v25 < prclDest->left )
        {
          v119[4 * i + 1] = left;
          v25 = left;
        }
        v27 = v119[4 * i + 3];
        right = prclDest->right;
        if ( v27 > right )
        {
          v119[4 * i + 3] = right;
          v27 = right;
        }
        v29 = v119[4 * i + 2];
        v30 = prclDest->top;
        if ( v29 < v30 )
        {
          v119[4 * i + 2] = v30;
          v29 = v30;
        }
        v31 = v119[4 * i + 4];
        bottom = prclDest->bottom;
        if ( v31 > bottom )
        {
          v119[4 * i + 4] = bottom;
          v31 = bottom;
        }
        if ( v29 < v31 && v25 < v27 )
        {
          v33 = v25 + pptlSrc->x - left;
          v34 = v29 + pptlSrc->y - v30;
          v35 = v27 - v25;
          v99 = v27 - v25;
          v100 = v31 - v29;
          if ( v78 <= 0 )
            v33 = v35 + v33 - 1;
          v104 = v33;
          v105 = v33 + v35 * v87;
          if ( v78 <= 0 )
            v106 = v27 - 1;
          else
            v106 = v25;
          v107 = v29;
          v36 = v7->lDelta;
          pvScan0 = (char *)v7->pvScan0;
          v38 = psoDest->lDelta;
          v39 = (char *)psoDest->pvScan0;
          if ( v79 <= 0 )
          {
            v96 = &pvScan0[v36 * (v34 + v31 - v29 - 1)];
            v97 = &v39[v38 * (v31 - 1)];
          }
          else
          {
            v96 = &pvScan0[v34 * v36];
            v97 = &v39[v29 * v38];
          }
          ((void (__fastcall *)(XLATEOBJ **))v85)(&v95);
        }
      }
      v18 = (XCLIPOBJ *)v77;
      if ( !v12 )
        break;
LABEL_87:
      v12 = XCLIPOBJ::bEnum(v18, 0x144u, v119, 0LL);
    }
    return 1;
  }
  RLESrcCopy = pfnGetRLESrcCopy(v21, iBitmapFormat);
  v85 = (void (* near *)(struct BLTINFO *))RLESrcCopy;
  if ( !RLESrcCopy )
    return 0;
  v43 = 1;
  v80 = 1;
  v44 = HIDWORD(*(unsigned __int64 *)pptlSrc);
  v110 = *pptlSrc;
  v109 = p_pvScan0;
  v45 = prclDest->top + (__int64)v7->sizlBitmap.cy;
  if ( (unsigned __int64)(v45 + 0x80000000LL) > 0xFFFFFFFF )
  {
    v46 = -2147024362;
    LODWORD(v45) = -1;
  }
  else
  {
    v46 = 0;
  }
  if ( v46 < 0 )
    return 0;
  v47 = (int)v45 - (__int64)(int)v44;
  if ( (unsigned __int64)(v47 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v48 = (int)v47 - 1LL;
  if ( (unsigned __int64)(v48 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v89 = v47 - 1;
  v107 = v47 - 1;
  v106 = prclDest->left - pptlSrc->x;
  v116 = v106;
  v96 = (char *)v7->pvScan0;
  v49 = (int)v48 * (__int64)psoDest->lDelta;
  if ( (unsigned __int64)(v49 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v90 = v48 * psoDest->lDelta;
  v50 = (char *)psoDest->pvScan0;
  if ( (int)v49 < 0 )
  {
    v69 = (unsigned int)-(int)v49;
    if ( (unsigned __int64)v50 >= v69 )
    {
      v51 = &v50[-v69];
      goto LABEL_63;
    }
    return 0;
  }
  v51 = &v50[(int)v49];
  if ( v51 < v50 )
    return 0;
LABEL_63:
  v92[1] = v51;
  v97 = v51;
  v114 = 0;
  DWORD1(v111) = 0;
  if ( v12 )
    goto LABEL_115;
  while ( 2 )
  {
    for ( j = 0; j < v119[0]; ++j )
    {
      v53 = v119[4 * j + 1];
      v54 = prclDest->left;
      if ( v53 < prclDest->left )
      {
        v119[4 * j + 1] = v54;
        v53 = v54;
      }
      v55 = v119[4 * j + 3];
      v56 = prclDest->right;
      if ( v55 > v56 )
      {
        v119[4 * j + 3] = v56;
        v55 = v56;
      }
      v57 = v119[4 * j + 2];
      v58 = prclDest->top;
      if ( v57 < v58 )
      {
        v119[4 * j + 2] = v58;
        v57 = v58;
      }
      v59 = v119[4 * j + 4];
      v60 = prclDest->bottom;
      if ( v59 > v60 )
      {
        v119[4 * j + 4] = v60;
        v59 = v60;
      }
      if ( v57 < v59 && v53 < v55 )
      {
        if ( v59 > SDWORD1(v111) )
          goto LABEL_77;
        if ( v57 <= v117 )
        {
          if ( !v43 )
            return 1;
          v96 = v112;
          v97 = v113;
          v107 = v117;
          v116 = v118;
          v114 = v115;
LABEL_77:
          v111 = *(_OWORD *)&v119[4 * j + 1];
          v43 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v95);
          v80 = v43;
          v41 = (XCLIPOBJ *)v77;
          continue;
        }
      }
      v41 = (XCLIPOBJ *)v77;
    }
    if ( v12 )
    {
LABEL_115:
      v12 = XCLIPOBJ::bEnum(v41, 0x144u, v119, 0LL);
      v43 = v80;
      v41 = (XCLIPOBJ *)v77;
      continue;
    }
    return 1;
  }
}
