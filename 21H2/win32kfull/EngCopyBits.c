/*
 * XREFs of EngCopyBits @ 0x1C0028BB0
 * Callers:
 *     EngBitBlt @ 0x1C0005C00 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0007458 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0028378 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C008E868 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0091710 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     GreGetBitmapBits @ 0x1C00E67A4 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00E6BE0 (GreSetBitmapBits.c)
 *     NtGdiEngCopyBits @ 0x1C0125BC0 (NtGdiEngCopyBits.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01524D0 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026C464 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0271228 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C027F188 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     LongLongToLong @ 0x1C010EC34 (LongLongToLong.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C011E4BC (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  __int64 p_iBitmapFormat; // rax
  PVOID *p_pvScan0; // r15
  int v12; // r13d
  int v13; // r9d
  int v14; // r8d
  unsigned int v15; // ebx
  int v16; // eax
  LONG lDelta; // eax
  XCLIPOBJ *v18; // r10
  RECTL v19; // xmm0
  ULONG iBitmapFormat; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rcx
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
  int v34; // r15d
  int v35; // eax
  LONG v36; // edx
  char *pvScan0; // r9
  LONG v38; // r8d
  char *v39; // r11
  _QWORD *v41; // rbx
  __int64 (__fastcall *v42)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  LONG x; // ecx
  LONG y; // edx
  int v45; // eax
  int v46; // ebx
  LONG v47; // ecx
  LONG top; // edx
  int v49; // r14d
  int v50; // r9d
  int v51; // r10d
  __int64 (__fastcall *v52)(XLATEOBJ **); // r11
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  XCLIPOBJ *v55; // r15
  unsigned int j; // ebx
  LONG v57; // r9d
  LONG v58; // eax
  LONG v59; // r10d
  LONG v60; // eax
  LONG v61; // edx
  LONG v62; // eax
  int v63; // eax
  LONG v64; // r8d
  __int64 v65; // r13
  LONG plResult; // [rsp+60h] [rbp-2E8h] BYREF
  int v67; // [rsp+64h] [rbp-2E4h]
  int v68; // [rsp+68h] [rbp-2E0h]
  LONG v69; // [rsp+70h] [rbp-2D8h] BYREF
  LONG v70; // [rsp+74h] [rbp-2D4h]
  XLATEOBJ *RLESrcCopy; // [rsp+78h] [rbp-2D0h] BYREF
  XCLIPOBJ *v72; // [rsp+80h] [rbp-2C8h]
  POINTL *v73; // [rsp+88h] [rbp-2C0h]
  int v74; // [rsp+90h] [rbp-2B8h]
  RECTL *v75; // [rsp+98h] [rbp-2B0h]
  void (* near *v76)(struct BLTINFO *); // [rsp+A0h] [rbp-2A8h]
  CLIPOBJ *v77; // [rsp+A8h] [rbp-2A0h]
  HDEV hdev; // [rsp+B0h] [rbp-298h] BYREF
  _QWORD v79[5]; // [rsp+B8h] [rbp-290h] BYREF
  _BYTE v80[32]; // [rsp+E0h] [rbp-268h] BYREF
  __int64 v81; // [rsp+100h] [rbp-248h]
  XLATEOBJ *v82; // [rsp+110h] [rbp-238h] BYREF
  char *v83; // [rsp+118h] [rbp-230h]
  char *v84; // [rsp+120h] [rbp-228h]
  LONG v85; // [rsp+128h] [rbp-220h]
  int v86; // [rsp+12Ch] [rbp-21Ch]
  int v87; // [rsp+130h] [rbp-218h]
  LONG v88; // [rsp+134h] [rbp-214h]
  int v89; // [rsp+138h] [rbp-210h]
  LONG v90; // [rsp+13Ch] [rbp-20Ch]
  int v91; // [rsp+140h] [rbp-208h]
  int v92; // [rsp+144h] [rbp-204h]
  LONG v93; // [rsp+148h] [rbp-200h]
  LONG v94; // [rsp+14Ch] [rbp-1FCh]
  int v95; // [rsp+150h] [rbp-1F8h]
  PVOID *v96; // [rsp+158h] [rbp-1F0h]
  POINTL v97; // [rsp+160h] [rbp-1E8h]
  __int128 v98; // [rsp+168h] [rbp-1E0h]
  char *v99; // [rsp+178h] [rbp-1D0h]
  char *v100; // [rsp+180h] [rbp-1C8h]
  int v101; // [rsp+188h] [rbp-1C0h]
  int v102; // [rsp+18Ch] [rbp-1BCh]
  LONG v103; // [rsp+190h] [rbp-1B8h]
  unsigned int v104; // [rsp+194h] [rbp-1B4h]
  LONG v105; // [rsp+198h] [rbp-1B0h]
  _DWORD v106[84]; // [rsp+1B0h] [rbp-198h] BYREF

  v72 = (XCLIPOBJ *)pco;
  v7 = psoSrc;
  v79[1] = psoDest;
  v79[2] = psoSrc;
  v77 = pco;
  v75 = prclDest;
  v9 = pptlSrc;
  v73 = pptlSrc;
  v79[4] = pptlSrc;
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
    v41 = p_pvScan0[6];
    v42 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v41[352];
    RLESrcCopy = 0LL;
    x = pptlSrc->x;
    v69 = pptlSrc->x;
    y = pptlSrc->y;
    v70 = y;
    v45 = *((_DWORD *)p_pvScan0 + 28);
    if ( (v45 & 0x80000) != 0 )
    {
      if ( v41 != (_QWORD *)v41[3] )
      {
        if ( v45 < 0 )
        {
          v69 = *((_DWORD *)v41 + 640) + x;
          v70 = y + *((_DWORD *)v41 + 641);
          v73 = (POINTL *)&v69;
        }
        v65 = v41[3];
        SURFREF::SURFREF((SURFREF *)v80, (HSURF)p_pvScan0[18]);
        if ( !v81
          || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              &RLESrcCopy,
                              0LL,
                              0LL,
                              *(_QWORD *)(v65 + 1776),
                              v41[222],
                              ppalDefault,
                              ppalDefault,
                              0,
                              0,
                              0,
                              0x2000) )
        {
          SURFREF::~SURFREF((SURFREF *)v80);
LABEL_107:
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&RLESrcCopy);
          return 0;
        }
        pxlo = RLESrcCopy;
        v7 = (SURFOBJ *)v81;
        if ( v81 )
          v7 = (SURFOBJ *)(v81 + 24);
        v42 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v65 + 2816);
        SURFREF::~SURFREF((SURFREF *)v80);
        v9 = v73;
      }
      pco = (CLIPOBJ *)v72;
    }
    if ( v42 )
    {
      v46 = v42(psoDest, v7, pco, pxlo, prclDest, v9);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&RLESrcCopy);
      return v46;
    }
    goto LABEL_107;
  }
  if ( (*((_DWORD *)p_pvScan0 + 24) > 8u || *(_DWORD *)p_iBitmapFormat > 8u) && bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 470);
    return 0;
  }
  hdev = psoDest->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
  v79[0] = v7->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)v79, v7, 0LL, 0);
  v12 = 0;
  v67 = 0;
  v68 = 0;
  v95 = 0;
  v13 = 1;
  v69 = 1;
  v14 = 1;
  plResult = 1;
  if ( v7->iBitmapFormat - 7 <= 1 )
  {
    v15 = 2;
    v69 = 1;
    plResult = -1;
    lDelta = psoDest->lDelta;
    v89 = 0;
    v68 = 1;
LABEL_60:
    lDelta = -lDelta;
    goto LABEL_14;
  }
  if ( v7->pvScan0 == psoDest->pvScan0 )
  {
    v47 = v73->y;
    top = prclDest->top;
    if ( v73->x < prclDest->left )
    {
      v13 = -1;
      v69 = -1;
      if ( v47 >= top )
      {
        v15 = 1;
      }
      else
      {
        v14 = -1;
        plResult = -1;
        v15 = 3;
      }
    }
    else if ( v47 < top )
    {
      v14 = -1;
      plResult = -1;
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
  v89 = v16;
  lDelta = psoDest->lDelta;
  if ( v14 <= 0 )
    goto LABEL_60;
LABEL_14:
  v90 = lDelta;
  LODWORD(RLESrcCopy) = v13;
  memset(v106, 0, 0x144uLL);
  v18 = v72;
  if ( !v72 || !*((_BYTE *)v72 + 20) )
  {
    v19 = *prclDest;
LABEL_16:
    v67 = 0;
    v106[0] = 1;
    *(RECTL *)&v106[1] = v19;
    goto LABEL_17;
  }
  if ( *((_BYTE *)v72 + 20) == 1 )
  {
    v19 = *(RECTL *)((char *)v72 + 4);
    goto LABEL_16;
  }
  if ( *((_BYTE *)v72 + 20) == 3 )
  {
    v12 = 1;
    v67 = 1;
    XCLIPOBJ::cEnumStart(v72, 0, 0, v15, 0x14u);
    v18 = v72;
  }
LABEL_17:
  if ( !pxlo )
    pxlo = xloIdent;
  v82 = pxlo;
  v85 = v69;
  v88 = plResult;
  iBitmapFormat = psoDest->iBitmapFormat;
  v21 = v7->iBitmapFormat;
  if ( !v68 )
  {
    v22 = 4 * (v21 | (8 * iBitmapFormat));
    v23 = v22 + 2;
    if ( v69 >= 0 )
      v23 = v22;
    if ( (pxlo->flXlate & 1) != 0 )
    {
      v23 = (unsigned int)(v23 + 1);
      if ( (v7->fjBitmap & 0x20) != 0 )
        v95 = 1;
    }
    v76 = (&SrcCopyFunctionTable)[v23];
    v79[3] = v76;
    if ( v12 )
      goto LABEL_58;
    while ( 1 )
    {
      for ( i = 0; ; ++i )
      {
        v68 = i;
        if ( i >= v106[0] )
          break;
        v25 = v106[4 * i + 1];
        left = prclDest->left;
        if ( v25 < prclDest->left )
        {
          v106[4 * i + 1] = left;
          v25 = left;
        }
        v27 = v106[4 * i + 3];
        right = prclDest->right;
        if ( v27 > right )
        {
          v106[4 * i + 3] = right;
          v27 = right;
        }
        v29 = v106[4 * i + 2];
        v30 = prclDest->top;
        if ( v29 < v30 )
        {
          v106[4 * i + 2] = v30;
          v29 = v30;
        }
        v31 = v106[4 * i + 4];
        bottom = prclDest->bottom;
        if ( v31 > bottom )
        {
          v106[4 * i + 4] = bottom;
          v31 = bottom;
        }
        if ( v29 < v31 && v25 < v27 )
        {
          v33 = v25 + v73->x - left;
          v34 = v29 + v73->y - v30;
          v35 = v27 - v25;
          v86 = v27 - v25;
          v87 = v31 - v29;
          if ( v69 <= 0 )
            v33 = v35 + v33 - 1;
          v91 = v33;
          v92 = v33 + (_DWORD)RLESrcCopy * v35;
          if ( v69 <= 0 )
            v93 = v27 - 1;
          else
            v93 = v25;
          v94 = v29;
          v36 = v7->lDelta;
          pvScan0 = (char *)v7->pvScan0;
          v38 = psoDest->lDelta;
          v39 = (char *)psoDest->pvScan0;
          if ( plResult <= 0 )
          {
            v83 = &pvScan0[v36 * (v31 - v29 + v34 - 1)];
            v84 = &v39[v38 * (v31 - 1)];
          }
          else
          {
            v83 = &pvScan0[v34 * v36];
            v84 = &v39[v29 * v38];
          }
          ((void (__fastcall *)(XLATEOBJ **))v76)(&v82);
        }
      }
      v18 = v72;
      if ( !v12 )
        break;
LABEL_58:
      v12 = XCLIPOBJ::bEnum(v18, 0x144u, (char *)v106, 0LL);
      v67 = v12;
    }
    return 1;
  }
  RLESrcCopy = (XLATEOBJ *)pfnGetRLESrcCopy(v21, iBitmapFormat);
  if ( !RLESrcCopy )
    return 0;
  v49 = 1;
  v74 = 1;
  v97 = *v73;
  v96 = p_pvScan0;
  plResult = 0;
  if ( LongLongToLong(prclDest->top + (__int64)v7->sizlBitmap.cy, &plResult) < 0 )
    return 0;
  if ( LongLongToLong(plResult - (__int64)v50, &plResult) < 0 )
    return 0;
  if ( LongLongToLong(plResult - 1LL, &plResult) < 0 )
    return 0;
  v94 = plResult;
  v93 = prclDest->left - v51;
  v103 = v93;
  v83 = (char *)v7->pvScan0;
  v69 = 0;
  if ( LongLongToLong(plResult * (__int64)psoDest->lDelta, &v69) < 0 )
    return 0;
  v53 = (unsigned __int64)psoDest->pvScan0;
  if ( v69 >= 0 )
  {
    v54 = v53 + v69;
    if ( v54 >= v53 )
      goto LABEL_75;
    return 0;
  }
  if ( v53 < (unsigned int)-v69 )
    return 0;
  v54 = v53 - (unsigned int)-v69;
LABEL_75:
  v84 = (char *)v54;
  v101 = 0;
  DWORD1(v98) = 0;
  v55 = v72;
  if ( v12 )
    goto LABEL_113;
  while ( 2 )
  {
    for ( j = 0; ; ++j )
    {
      v68 = j;
      if ( j >= v106[0] )
        break;
      v57 = v106[4 * j + 1];
      v58 = prclDest->left;
      if ( v57 < prclDest->left )
      {
        v106[4 * j + 1] = v58;
        v57 = v58;
      }
      v59 = v106[4 * j + 3];
      v60 = prclDest->right;
      if ( v59 > v60 )
      {
        v106[4 * j + 3] = v60;
        v59 = v60;
      }
      v61 = v106[4 * j + 2];
      v62 = prclDest->top;
      if ( v61 < v62 )
      {
        v106[4 * j + 2] = v62;
        v61 = v62;
      }
      v63 = v106[4 * j + 4];
      v64 = prclDest->bottom;
      if ( v63 > v64 )
      {
        v106[4 * j + 4] = v64;
        v63 = v64;
      }
      if ( v61 < v63 && v57 < v59 )
      {
        if ( v63 > SDWORD1(v98) )
          goto LABEL_89;
        if ( v61 <= v104 )
        {
          if ( !v49 )
            return 1;
          v83 = v99;
          v84 = v100;
          v94 = v104;
          v103 = v105;
          v101 = v102;
LABEL_89:
          v98 = *(_OWORD *)&v106[4 * j + 1];
          v49 = v52(&v82);
          v74 = v49;
          v52 = (__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy;
          continue;
        }
      }
    }
    if ( v12 )
    {
LABEL_113:
      v12 = XCLIPOBJ::bEnum(v55, 0x144u, (char *)v106, 0LL);
      v67 = v12;
      v52 = (__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy;
      continue;
    }
    return 1;
  }
}
