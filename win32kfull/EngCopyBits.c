/*
 * XREFs of EngCopyBits @ 0x1C008AE00
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C001A0C0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1C002941C (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     EngStretchBlt @ 0x1C004DC80 (EngStretchBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0087124 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngBitBlt @ 0x1C0088BA0 (EngBitBlt.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C008A530 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C008C990 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C012739C (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01279B8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C02691E4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C026E61C (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0281428 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1C02B04AC (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     NtGdiEngCopyBits @ 0x1C02CB640 (NtGdiEngCopyBits.c)
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     LongLongToLong @ 0x1C0013C0C (LongLongToLong.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00834C0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C0286F50 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
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
  SURFOBJ *v8; // r14
  __int64 p_iBitmapFormat; // rax
  PVOID *p_pvScan0; // rbx
  int v12; // esi
  int v13; // r9d
  int v14; // r8d
  unsigned int v15; // edi
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
  LONG v32; // esi
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
  PVOID v45; // rdi
  __int64 (__fastcall *v46)(SURFOBJ *, SURFOBJ *, void *, XLATEOBJ *, RECTL *, POINTL *); // rsi
  POINTL *v47; // rax
  __int64 x; // rdx
  LONG y; // r8d
  int v50; // ecx
  __int64 v51; // rsi
  __int64 v52; // rbx
  Gre::Base *v53; // rcx
  struct Gre::Base::SESSION_GLOBALS *v54; // rax
  int v55; // ebx
  __int64 v56; // rcx
  Gre::Base *RLESrcCopy; // rsi
  int v58; // edi
  __int64 cy; // rcx
  LONG *p_top; // r12
  int v61; // r9d
  int v62; // r10d
  RECTL *v63; // r13
  char *v64; // rdx
  char *v65; // rcx
  unsigned __int64 v66; // r8
  unsigned int i; // ebx
  LONG left; // r9d
  LONG v69; // eax
  LONG right; // r10d
  LONG v71; // eax
  LONG v72; // edx
  LONG v73; // eax
  int bottom; // eax
  LONG v75; // r8d
  LONG plResult; // [rsp+60h] [rbp-2B8h] BYREF
  int v77; // [rsp+64h] [rbp-2B4h]
  int v78; // [rsp+68h] [rbp-2B0h]
  LONG v79; // [rsp+70h] [rbp-2A8h] BYREF
  LONG v80; // [rsp+74h] [rbp-2A4h]
  POINTL *v81; // [rsp+78h] [rbp-2A0h]
  XLATEOBJ *v82; // [rsp+80h] [rbp-298h] BYREF
  XCLIPOBJ *v83; // [rsp+88h] [rbp-290h]
  int v84; // [rsp+90h] [rbp-288h]
  RECTL *v85; // [rsp+98h] [rbp-280h]
  CLIPOBJ *v86; // [rsp+A0h] [rbp-278h]
  RECTL *v87; // [rsp+A8h] [rbp-270h]
  SURFOBJ *v88; // [rsp+B0h] [rbp-268h]
  SURFOBJ *v89; // [rsp+B8h] [rbp-260h]
  POINTL *v90; // [rsp+C0h] [rbp-258h]
  HDEV hdev; // [rsp+C8h] [rbp-250h] BYREF
  HDEV v92[2]; // [rsp+D0h] [rbp-248h] BYREF
  XLATEOBJ *v93; // [rsp+E0h] [rbp-238h] BYREF
  char *pvScan0; // [rsp+E8h] [rbp-230h]
  char *v95; // [rsp+F0h] [rbp-228h]
  LONG v96; // [rsp+F8h] [rbp-220h]
  int v97; // [rsp+FCh] [rbp-21Ch]
  int v98; // [rsp+100h] [rbp-218h]
  LONG v99; // [rsp+104h] [rbp-214h]
  int v100; // [rsp+108h] [rbp-210h]
  LONG v101; // [rsp+10Ch] [rbp-20Ch]
  int v102; // [rsp+110h] [rbp-208h]
  int v103; // [rsp+114h] [rbp-204h]
  LONG v104; // [rsp+118h] [rbp-200h]
  LONG v105; // [rsp+11Ch] [rbp-1FCh]
  int v106; // [rsp+120h] [rbp-1F8h]
  PVOID *v107; // [rsp+128h] [rbp-1F0h]
  POINTL v108; // [rsp+130h] [rbp-1E8h]
  RECTL v109; // [rsp+138h] [rbp-1E0h]
  char *v110; // [rsp+148h] [rbp-1D0h]
  char *v111; // [rsp+150h] [rbp-1C8h]
  int v112; // [rsp+158h] [rbp-1C0h]
  int v113; // [rsp+15Ch] [rbp-1BCh]
  LONG v114; // [rsp+160h] [rbp-1B8h]
  unsigned int v115; // [rsp+164h] [rbp-1B4h]
  LONG v116; // [rsp+168h] [rbp-1B0h]
  unsigned int v117; // [rsp+180h] [rbp-198h] BYREF
  RECTL v118[20]; // [rsp+184h] [rbp-194h]

  v7 = pco;
  v83 = (XCLIPOBJ *)pco;
  v8 = psoSrc;
  v88 = psoDest;
  v89 = psoSrc;
  v86 = pco;
  v85 = prclDest;
  v87 = prclDest;
  v81 = pptlSrc;
  v90 = pptlSrc;
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
    v82 = 0LL;
    v47 = v81;
    x = (unsigned int)v81->x;
    v79 = v81->x;
    y = v81->y;
    v80 = y;
    v50 = *((_DWORD *)p_pvScan0 + 28);
    if ( (v50 & 0x80000) != 0 && v45 != *((PVOID *)v45 + 3) )
    {
      if ( v50 < 0 )
      {
        v79 = x + *((_DWORD *)v45 + 640);
        v80 = y + *((_DWORD *)v45 + 641);
        v81 = (POINTL *)&v79;
      }
      v51 = *((_QWORD *)v45 + 3);
      LOBYTE(x) = 5;
      v52 = HmgShareLockCheck(p_pvScan0[18], x);
      v54 = Gre::Base::Globals(v53);
      if ( !v52
        || (v90 = (POINTL *)*((_QWORD *)v54 + 750),
            v89 = (SURFOBJ *)v90,
            v88 = (SURFOBJ *)*((_QWORD *)v45 + 222),
            v85 = *(RECTL **)(v51 + 1776),
            !(unsigned int)EXLATEOBJ::bInitXlateObj(
                             (Gre::Base *)&v82,
                             0LL,
                             0,
                             (__int64)v85,
                             (__int64)v88,
                             (__int64)v90,
                             (__int64)v90,
                             0,
                             0,
                             0,
                             0x2000)) )
      {
        if ( v52 )
          DEC_SHARE_REF_CNT(v52);
LABEL_76:
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v82);
        return 0;
      }
      pxlo = v82;
      v8 = (SURFOBJ *)(v52 + 24);
      v46 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, void *, XLATEOBJ *, RECTL *, POINTL *))(v51 + 2816);
      DEC_SHARE_REF_CNT(v52);
      v7 = v83;
      v47 = v81;
    }
    if ( v46 )
    {
      v55 = v46(psoDest, v8, v7, pxlo, prclDest, v47);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v82);
      return v55;
    }
    goto LABEL_76;
  }
  if ( (*((_DWORD *)p_pvScan0 + 24) > 8u || *(_DWORD *)p_iBitmapFormat > 8u) && (unsigned int)bUMPDSecurityGateEx() )
  {
    SGDGetSessionState(v56);
    return 0;
  }
  hdev = psoDest->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
  v92[0] = v8->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)v92, v8, 0LL, 0);
  v12 = 0;
  v77 = 0;
  v78 = 0;
  v106 = 0;
  v13 = 1;
  v79 = 1;
  v14 = 1;
  plResult = 1;
  if ( v8->iBitmapFormat - 7 <= 1 )
  {
    v15 = 2;
    v79 = 1;
    plResult = -1;
    lDelta = psoDest->lDelta;
    v100 = 0;
    v78 = 1;
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
      v79 = -1;
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
  v100 = v16;
  lDelta = psoDest->lDelta;
  if ( v14 <= 0 )
    goto LABEL_56;
LABEL_14:
  v101 = lDelta;
  LODWORD(v82) = v13;
  memset_0(&v117, 0, 0x144uLL);
  if ( !v83 || (v18 = *((unsigned __int8 *)v83 + 20), !*((_BYTE *)v83 + 20)) )
  {
    v19 = *prclDest;
LABEL_17:
    v77 = 0;
    v117 = 1;
    v118[0] = v19;
    goto LABEL_18;
  }
  v18 = (unsigned int)(v18 - 1);
  if ( !(_DWORD)v18 )
  {
    v19 = *(RECTL *)((char *)v83 + 4);
    goto LABEL_17;
  }
  if ( (_DWORD)v18 == 2 )
  {
    v12 = 1;
    v77 = 1;
    XCLIPOBJ::cEnumStart(v83, 0, 0, v15, 0x14u);
  }
LABEL_18:
  v20 = Gre::Base::Globals((Gre::Base *)v18);
  if ( !pxlo )
    pxlo = (XLATEOBJ *)((char *)v20 + 6896);
  v93 = pxlo;
  v96 = v79;
  v99 = plResult;
  iBitmapFormat = psoDest->iBitmapFormat;
  v22 = v8->iBitmapFormat;
  if ( v78 )
  {
    RLESrcCopy = (Gre::Base *)pfnGetRLESrcCopy(v22, iBitmapFormat);
    v82 = (XLATEOBJ *)RLESrcCopy;
    if ( RLESrcCopy )
    {
      v58 = 1;
      v84 = 1;
      v108 = *v81;
      v107 = p_pvScan0;
      plResult = 0;
      cy = v8->sizlBitmap.cy;
      p_top = &prclDest->top;
      v81 = (POINTL *)&prclDest->top;
      if ( LongLongToLong(prclDest->top + cy, &plResult) >= 0
        && LongLongToLong(plResult - (__int64)v61, &plResult) >= 0
        && LongLongToLong(plResult - 1LL, &plResult) >= 0 )
      {
        v105 = plResult;
        v63 = v85;
        v104 = v85->left - v62;
        v114 = v104;
        pvScan0 = (char *)v8->pvScan0;
        v79 = 0;
        if ( LongLongToLong(plResult * (__int64)psoDest->lDelta, &v79) >= 0 )
        {
          v64 = (char *)psoDest->pvScan0;
          if ( v79 < 0 )
          {
            v66 = (unsigned int)-v79;
            if ( (unsigned __int64)v64 >= v66 )
            {
              v65 = &v64[-v66];
              goto LABEL_92;
            }
          }
          else
          {
            v65 = &v64[v79];
            if ( v65 >= v64 )
            {
LABEL_92:
              v95 = v65;
              v112 = 0;
              v109.top = 0;
              if ( v77 )
                goto LABEL_93;
              while ( 1 )
              {
                for ( i = 0; ; ++i )
                {
                  v78 = i;
                  if ( i >= v117 )
                    break;
                  left = v118[i].left;
                  v69 = v63->left;
                  if ( left < v63->left )
                  {
                    v118[i].left = v69;
                    left = v69;
                  }
                  right = v118[i].right;
                  v71 = v63->right;
                  if ( right > v71 )
                  {
                    v118[i].right = v71;
                    right = v71;
                  }
                  v72 = v118[i].top;
                  v73 = *p_top;
                  if ( v72 < *p_top )
                  {
                    v118[i].top = v73;
                    v72 = v73;
                  }
                  bottom = v118[i].bottom;
                  v75 = v63->bottom;
                  if ( bottom > v75 )
                  {
                    v118[i].bottom = v75;
                    bottom = v75;
                  }
                  if ( v72 < bottom && left < right )
                  {
                    if ( bottom <= v109.top )
                    {
                      if ( v72 > v115 )
                        continue;
                      if ( !v58 )
                        return 1;
                      pvScan0 = v110;
                      v95 = v111;
                      v105 = v115;
                      v114 = v116;
                      v112 = v113;
                    }
                    v109 = v118[i];
                    v58 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v93);
                    v84 = v58;
                  }
                }
                if ( !v77 )
                  return 1;
LABEL_93:
                v77 = XCLIPOBJ::bEnum(v83, 0x144u, (char *)&v117, 0LL);
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
  if ( v79 >= 0 )
    v24 = v23;
  if ( (pxlo->flXlate & 1) != 0 )
  {
    v24 = (unsigned int)(v24 + 1);
    if ( (v8->fjBitmap & 0x20) != 0 )
      v106 = 1;
  }
  v25 = (&SrcCopyFunctionTable)[v24];
  v85 = (RECTL *)v25;
  if ( v12 )
    goto LABEL_52;
  while ( 1 )
  {
    for ( j = 0; ; ++j )
    {
      v78 = j;
      if ( j >= v117 )
        break;
      v27 = v118[j].left;
      v28 = prclDest->left;
      if ( v27 < prclDest->left )
      {
        v118[j].left = v28;
        v27 = v28;
      }
      v29 = v118[j].right;
      v30 = prclDest->right;
      if ( v29 > v30 )
      {
        v118[j].right = v30;
        v29 = v30;
      }
      v31 = v118[j].top;
      v32 = prclDest->top;
      if ( v31 < v32 )
      {
        v118[j].top = v32;
        v31 = v32;
      }
      v33 = v118[j].bottom;
      v34 = prclDest->bottom;
      if ( v33 > v34 )
      {
        v118[j].bottom = v34;
        v33 = v34;
      }
      if ( v27 < v29 && v31 < v33 )
      {
        v35 = v27 + v81->x - v28;
        v36 = v31 + v81->y - v32;
        v37 = v29 - v27;
        v97 = v29 - v27;
        v98 = v33 - v31;
        if ( v79 <= 0 )
          v35 = v37 + v35 - 1;
        v102 = v35;
        v103 = v35 + (_DWORD)v82 * v37;
        if ( v79 <= 0 )
          v104 = v29 - 1;
        else
          v104 = v27;
        v105 = v31;
        v38 = v8->lDelta;
        v39 = (char *)v8->pvScan0;
        v40 = psoDest->lDelta;
        v41 = (char *)psoDest->pvScan0;
        if ( plResult <= 0 )
        {
          pvScan0 = &v39[v38 * (v33 - v31 + v36 - 1)];
          v95 = &v41[v40 * (v33 - 1)];
        }
        else
        {
          pvScan0 = &v39[v36 * v38];
          v95 = &v41[v31 * v40];
        }
        ((void (__fastcall *)(XLATEOBJ **))v25)(&v93);
      }
    }
    if ( !v77 )
      break;
LABEL_52:
    v77 = XCLIPOBJ::bEnum(v83, 0x144u, (char *)&v117, 0LL);
  }
  return 1;
}
