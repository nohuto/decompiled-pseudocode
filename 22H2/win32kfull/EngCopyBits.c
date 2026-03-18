/*
 * XREFs of EngCopyBits @ 0x1C0030980
 * Callers:
 *     EngBitBlt @ 0x1C002D4C0 (EngBitBlt.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C00300D0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00551B0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0090588 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngStretchBlt @ 0x1C00D7260 (EngStretchBlt.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1C00E0D68 (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C0131CD0 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01322E8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C0266740 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C026BB6C (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C027EAFC (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1C02ADF94 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     NtGdiEngCopyBits @ 0x1C02C8FB0 (NtGdiEngCopyBits.c)
 *     EngHTBlt @ 0x1C02DECB0 (EngHTBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0003828 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     LongLongToLong @ 0x1C00149AC (LongLongToLong.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001EF80 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00541A0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0087EAC (--1SURFREF@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0091438 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FA390 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C0284640 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  void *v7; // r10
  SURFOBJ *v8; // rsi
  __int64 p_iBitmapFormat; // rax
  PVOID *p_pvScan0; // r13
  int v12; // edi
  int v13; // r9d
  int v14; // r8d
  unsigned int v15; // ebx
  int v16; // eax
  LONG lDelta; // eax
  unsigned __int64 v18; // rcx
  RECTL v19; // xmm0
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  ULONG iBitmapFormat; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rcx
  void (*const near *v25)(struct BLTINFO *); // r13
  unsigned int j; // ebx
  LONG v27; // edx
  LONG v28; // r11d
  LONG v29; // r9d
  LONG v30; // ecx
  LONG v31; // ecx
  LONG v32; // r15d
  LONG v33; // r10d
  LONG v34; // r8d
  int v35; // r8d
  int v36; // edi
  int v37; // eax
  LONG v38; // edx
  char *v39; // r9
  LONG v40; // r8d
  char *v41; // r11
  LONG v43; // ecx
  LONG top; // edx
  PVOID v45; // rbx
  __int64 (__fastcall *v46)(SURFOBJ *, SURFOBJ *, void *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  POINTL *v47; // rax
  LONG x; // edx
  LONG y; // r8d
  int v50; // ecx
  __int64 v51; // rdi
  Gre::Base *v52; // rcx
  struct Gre::Base::SESSION_GLOBALS *v53; // rcx
  int v54; // ebx
  __int64 v55; // rcx
  Gre::Base *RLESrcCopy; // r15
  int v57; // edi
  __int64 cy; // rcx
  LONG *p_top; // r12
  int v60; // r9d
  int v61; // r10d
  RECTL *v62; // r13
  char *v63; // rdx
  char *v64; // rcx
  unsigned __int64 v65; // r8
  unsigned int i; // ebx
  LONG left; // r9d
  LONG v68; // eax
  LONG right; // r10d
  LONG v70; // eax
  LONG v71; // edx
  LONG v72; // eax
  int bottom; // eax
  int v74; // r8d
  LONG plResult; // [rsp+60h] [rbp-2D8h] BYREF
  int v76; // [rsp+64h] [rbp-2D4h]
  int v77; // [rsp+68h] [rbp-2D0h]
  LONG v78; // [rsp+70h] [rbp-2C8h] BYREF
  LONG v79; // [rsp+74h] [rbp-2C4h]
  XLATEOBJ *v80; // [rsp+78h] [rbp-2C0h] BYREF
  POINTL *v81; // [rsp+80h] [rbp-2B8h]
  XCLIPOBJ *v82; // [rsp+88h] [rbp-2B0h]
  int v83; // [rsp+90h] [rbp-2A8h]
  RECTL *v84; // [rsp+98h] [rbp-2A0h]
  CLIPOBJ *v85; // [rsp+A0h] [rbp-298h]
  RECTL *v86; // [rsp+A8h] [rbp-290h]
  SURFOBJ *v87; // [rsp+B0h] [rbp-288h]
  SURFOBJ *v88; // [rsp+B8h] [rbp-280h]
  POINTL *v89; // [rsp+C0h] [rbp-278h]
  HDEV hdev; // [rsp+C8h] [rbp-270h] BYREF
  HDEV v91; // [rsp+D0h] [rbp-268h] BYREF
  _BYTE v92[32]; // [rsp+D8h] [rbp-260h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-240h]
  XLATEOBJ *v94; // [rsp+100h] [rbp-238h] BYREF
  char *pvScan0; // [rsp+108h] [rbp-230h]
  char *v96; // [rsp+110h] [rbp-228h]
  LONG v97; // [rsp+118h] [rbp-220h]
  int v98; // [rsp+11Ch] [rbp-21Ch]
  int v99; // [rsp+120h] [rbp-218h]
  LONG v100; // [rsp+124h] [rbp-214h]
  int v101; // [rsp+128h] [rbp-210h]
  LONG v102; // [rsp+12Ch] [rbp-20Ch]
  int v103; // [rsp+130h] [rbp-208h]
  int v104; // [rsp+134h] [rbp-204h]
  LONG v105; // [rsp+138h] [rbp-200h]
  LONG v106; // [rsp+13Ch] [rbp-1FCh]
  int v107; // [rsp+140h] [rbp-1F8h]
  PVOID *v108; // [rsp+148h] [rbp-1F0h]
  POINTL v109; // [rsp+150h] [rbp-1E8h]
  RECTL v110; // [rsp+158h] [rbp-1E0h]
  char *v111; // [rsp+168h] [rbp-1D0h]
  char *v112; // [rsp+170h] [rbp-1C8h]
  int v113; // [rsp+178h] [rbp-1C0h]
  int v114; // [rsp+17Ch] [rbp-1BCh]
  LONG v115; // [rsp+180h] [rbp-1B8h]
  unsigned int v116; // [rsp+184h] [rbp-1B4h]
  LONG v117; // [rsp+188h] [rbp-1B0h]
  unsigned int v118; // [rsp+1A0h] [rbp-198h] BYREF
  RECTL v119[20]; // [rsp+1A4h] [rbp-194h]

  v7 = pco;
  v82 = (XCLIPOBJ *)pco;
  v8 = psoSrc;
  v87 = psoDest;
  v88 = psoSrc;
  v85 = pco;
  v84 = prclDest;
  v86 = prclDest;
  v81 = pptlSrc;
  v89 = pptlSrc;
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
    v45 = p_pvScan0[6];
    v46 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, void *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v45 + 352);
    v80 = 0LL;
    v47 = v81;
    x = v81->x;
    v78 = v81->x;
    y = v81->y;
    v79 = y;
    v50 = *((_DWORD *)p_pvScan0 + 28);
    if ( (v50 & 0x80000) != 0 && v45 != *((PVOID *)v45 + 3) )
    {
      if ( v50 < 0 )
      {
        v78 = x + *((_DWORD *)v45 + 640);
        v79 = y + *((_DWORD *)v45 + 641);
        v81 = (POINTL *)&v78;
      }
      v51 = *((_QWORD *)v45 + 3);
      SURFREF::SURFREF((SURFREF *)v92, (HSURF)p_pvScan0[18]);
      v53 = Gre::Base::Globals(v52);
      if ( !v93
        || (v89 = (POINTL *)*((_QWORD *)v53 + 750),
            v88 = (SURFOBJ *)v89,
            v87 = (SURFOBJ *)*((_QWORD *)v45 + 222),
            v84 = *(RECTL **)(v51 + 1776),
            !(unsigned int)EXLATEOBJ::bInitXlateObj(&v80, 0LL, 0LL, v84, v87, v89, v89, 0, 0, 0, 0x2000)) )
      {
        SURFREF::~SURFREF((SURFREF *)v92);
LABEL_75:
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v80);
        return 0;
      }
      pxlo = v80;
      v8 = (SURFOBJ *)v93;
      if ( v93 )
        v8 = (SURFOBJ *)(v93 + 24);
      v46 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, void *, XLATEOBJ *, RECTL *, POINTL *))(v51 + 2816);
      SURFREF::~SURFREF((SURFREF *)v92);
      v7 = v82;
      v47 = v81;
    }
    if ( v46 )
    {
      v54 = v46(psoDest, v8, v7, pxlo, prclDest, v47);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v80);
      return v54;
    }
    goto LABEL_75;
  }
  if ( (*((_DWORD *)p_pvScan0 + 24) > 8u || *(_DWORD *)p_iBitmapFormat > 8u) && (unsigned int)bUMPDSecurityGateEx() )
  {
    SGDGetSessionState(v55);
    return 0;
  }
  hdev = psoDest->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
  v91 = v8->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&v91, v8, 0LL, 0);
  v12 = 0;
  v76 = 0;
  v77 = 0;
  v107 = 0;
  v13 = 1;
  v78 = 1;
  v14 = 1;
  plResult = 1;
  if ( v8->iBitmapFormat - 7 <= 1 )
  {
    v15 = 2;
    v78 = 1;
    plResult = -1;
    lDelta = psoDest->lDelta;
    v101 = 0;
    v77 = 1;
LABEL_56:
    lDelta = -lDelta;
    goto LABEL_14;
  }
  if ( v8->pvScan0 == psoDest->pvScan0 )
  {
    v43 = pptlSrc->y;
    top = prclDest->top;
    if ( pptlSrc->x >= prclDest->left )
    {
      if ( v43 >= top )
      {
        v15 = 0;
      }
      else
      {
        v14 = -1;
        plResult = -1;
        v15 = 2;
      }
    }
    else
    {
      v13 = -1;
      v78 = -1;
      if ( v43 >= top )
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
  }
  else
  {
    v15 = 4;
  }
  v16 = v8->lDelta;
  if ( v14 <= 0 )
    v16 = -v16;
  v101 = v16;
  lDelta = psoDest->lDelta;
  if ( v14 <= 0 )
    goto LABEL_56;
LABEL_14:
  v102 = lDelta;
  LODWORD(v80) = v13;
  memset_0(&v118, 0, 0x144uLL);
  if ( !v82 || (v18 = *((unsigned __int8 *)v82 + 20), !*((_BYTE *)v82 + 20)) )
  {
    v19 = *prclDest;
LABEL_17:
    v76 = 0;
    v118 = 1;
    v119[0] = v19;
    goto LABEL_18;
  }
  v18 = (unsigned int)(v18 - 1);
  if ( !(_DWORD)v18 )
  {
    v19 = *(RECTL *)((char *)v82 + 4);
    goto LABEL_17;
  }
  if ( (_DWORD)v18 == 2 )
  {
    v12 = 1;
    v76 = 1;
    XCLIPOBJ::cEnumStart(v82, 0, 0, v15, 0x14u);
  }
LABEL_18:
  v20 = Gre::Base::Globals((Gre::Base *)v18);
  if ( !pxlo )
    pxlo = (XLATEOBJ *)((char *)v20 + 6896);
  v94 = pxlo;
  v97 = v78;
  v100 = plResult;
  iBitmapFormat = psoDest->iBitmapFormat;
  v22 = v8->iBitmapFormat;
  if ( v77 )
  {
    RLESrcCopy = (Gre::Base *)pfnGetRLESrcCopy(v22, iBitmapFormat);
    v80 = (XLATEOBJ *)RLESrcCopy;
    if ( RLESrcCopy )
    {
      v57 = 1;
      v83 = 1;
      v109 = *v81;
      v108 = p_pvScan0;
      plResult = 0;
      cy = v8->sizlBitmap.cy;
      p_top = &prclDest->top;
      v81 = (POINTL *)&prclDest->top;
      if ( LongLongToLong(prclDest->top + cy, &plResult) >= 0
        && LongLongToLong(plResult - (__int64)v60, &plResult) >= 0
        && LongLongToLong(plResult - 1LL, &plResult) >= 0 )
      {
        v106 = plResult;
        v62 = v84;
        v105 = v84->left - v61;
        v115 = v105;
        pvScan0 = (char *)v8->pvScan0;
        v78 = 0;
        if ( LongLongToLong(plResult * (__int64)psoDest->lDelta, &v78) >= 0 )
        {
          v63 = (char *)psoDest->pvScan0;
          if ( v78 < 0 )
          {
            v65 = (unsigned int)-v78;
            if ( (unsigned __int64)v63 >= v65 )
            {
              v64 = &v63[-v65];
              goto LABEL_93;
            }
          }
          else
          {
            v64 = &v63[v78];
            if ( v64 >= v63 )
            {
LABEL_93:
              v96 = v64;
              v113 = 0;
              v110.top = 0;
              if ( v76 )
                goto LABEL_94;
              while ( 1 )
              {
                for ( i = 0; ; ++i )
                {
                  v77 = i;
                  if ( i >= v118 )
                    break;
                  left = v119[i].left;
                  v68 = v62->left;
                  if ( left < v62->left )
                  {
                    v119[i].left = v68;
                    left = v68;
                  }
                  right = v119[i].right;
                  v70 = v62->right;
                  if ( right > v70 )
                  {
                    v119[i].right = v70;
                    right = v70;
                  }
                  v71 = v119[i].top;
                  v72 = *p_top;
                  if ( v71 < *p_top )
                  {
                    v119[i].top = v72;
                    v71 = v72;
                  }
                  bottom = v119[i].bottom;
                  v74 = v62->bottom;
                  if ( bottom > v74 )
                  {
                    v119[i].bottom = v74;
                    bottom = v74;
                  }
                  if ( v71 < bottom && left < right )
                  {
                    if ( bottom <= v110.top )
                    {
                      if ( v71 > v116 )
                        continue;
                      if ( !v57 )
                        return 1;
                      pvScan0 = v111;
                      v96 = v112;
                      v106 = v116;
                      v115 = v117;
                      v113 = v114;
                    }
                    v110 = v119[i];
                    v57 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v94);
                    v83 = v57;
                  }
                }
                if ( !v76 )
                  return 1;
LABEL_94:
                v76 = XCLIPOBJ::bEnum(v82, 0x144u, (char *)&v118, 0LL);
              }
            }
          }
        }
      }
    }
    return 0;
  }
  v23 = 4 * (v22 | (8 * iBitmapFormat));
  v24 = v23 + 2;
  if ( v78 >= 0 )
    v24 = v23;
  if ( (pxlo->flXlate & 1) != 0 )
  {
    v24 = (unsigned int)(v24 + 1);
    if ( (v8->fjBitmap & 0x20) != 0 )
      v107 = 1;
  }
  v25 = (&SrcCopyFunctionTable)[v24];
  v84 = (RECTL *)v25;
  if ( v12 )
    goto LABEL_52;
  while ( 1 )
  {
    for ( j = 0; ; ++j )
    {
      v77 = j;
      if ( j >= v118 )
        break;
      v27 = v119[j].left;
      v28 = prclDest->left;
      if ( v27 < prclDest->left )
      {
        v119[j].left = v28;
        v27 = v28;
      }
      v29 = v119[j].right;
      v30 = prclDest->right;
      if ( v29 > v30 )
      {
        v119[j].right = v30;
        v29 = v30;
      }
      v31 = v119[j].top;
      v32 = prclDest->top;
      if ( v31 < v32 )
      {
        v119[j].top = v32;
        v31 = v32;
      }
      v33 = v119[j].bottom;
      v34 = prclDest->bottom;
      if ( v33 > v34 )
      {
        v119[j].bottom = v34;
        v33 = v34;
      }
      if ( v27 < v29 && v31 < v33 )
      {
        v35 = v27 + v81->x - v28;
        v36 = v31 + v81->y - v32;
        v37 = v29 - v27;
        v98 = v29 - v27;
        v99 = v33 - v31;
        if ( v78 <= 0 )
          v35 = v37 + v35 - 1;
        v103 = v35;
        v104 = v35 + (_DWORD)v80 * v37;
        if ( v78 <= 0 )
          v105 = v29 - 1;
        else
          v105 = v27;
        v106 = v31;
        v38 = v8->lDelta;
        v39 = (char *)v8->pvScan0;
        v40 = psoDest->lDelta;
        v41 = (char *)psoDest->pvScan0;
        if ( plResult <= 0 )
        {
          pvScan0 = &v39[v38 * (v33 - v31 + v36 - 1)];
          v96 = &v41[v40 * (v33 - 1)];
        }
        else
        {
          pvScan0 = &v39[v36 * v38];
          v96 = &v41[v31 * v40];
        }
        ((void (__fastcall *)(XLATEOBJ **))v25)(&v94);
      }
    }
    if ( !v76 )
      break;
LABEL_52:
    v76 = XCLIPOBJ::bEnum(v82, 0x144u, (char *)&v118, 0LL);
  }
  return 1;
}
