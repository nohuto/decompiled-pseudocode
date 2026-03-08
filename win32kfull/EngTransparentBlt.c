/*
 * XREFs of EngTransparentBlt @ 0x1C00F1E60
 * Callers:
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0019240 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     EngBitBlt @ 0x1C0088BA0 (EngBitBlt.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029F640 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A8AF0 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02B3EB0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CE3E0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C0004D40 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00B50F8 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0298358 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 */

BOOL __stdcall EngTransparentBlt(
        SURFOBJ *psoDst,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  CLIPOBJ *v8; // r15
  SURFOBJ *v10; // rsi
  int v11; // edi
  HDEV hdev; // rax
  __int64 (__fastcall *v13)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int); // rax
  unsigned __int64 v15; // r13
  struct SURFACE *v16; // rcx
  struct SURFACE *v17; // rax
  int v18; // ebx
  char *v19; // r12
  unsigned __int64 iDComplexity; // rcx
  struct _RECTL rclBounds; // xmm0
  struct Gre::Base::SESSION_GLOBALS *v22; // rcx
  XLATEOBJ *v23; // rax
  unsigned int iBitmapFormat; // r10d
  unsigned int v25; // r9d
  LONG top; // r11d
  Gre::Base *left; // rcx
  unsigned int i; // r12d
  LONG right; // edx
  LONG v30; // edx
  LONG bottom; // r8d
  __int64 v32; // rbx
  struct Gre::Base::SESSION_GLOBALS *v33; // r9
  LONG v34; // [rsp+64h] [rbp-324h]
  int v35; // [rsp+68h] [rbp-320h]
  LONG v36; // [rsp+6Ch] [rbp-31Ch]
  CLIPOBJ *v38; // [rsp+78h] [rbp-310h] BYREF
  struct SURFACE *v39; // [rsp+80h] [rbp-308h]
  __int64 v40; // [rsp+88h] [rbp-300h] BYREF
  char v41; // [rsp+90h] [rbp-2F8h]
  int v42; // [rsp+94h] [rbp-2F4h]
  SURFACE *v43; // [rsp+98h] [rbp-2F0h] BYREF
  char v44; // [rsp+A0h] [rbp-2E8h]
  int v45; // [rsp+A4h] [rbp-2E4h]
  char *v46; // [rsp+A8h] [rbp-2E0h]
  SURFOBJ *v47; // [rsp+B0h] [rbp-2D8h]
  __int64 v48; // [rsp+B8h] [rbp-2D0h]
  HDEV v49; // [rsp+C0h] [rbp-2C8h] BYREF
  HDEV v50; // [rsp+C8h] [rbp-2C0h] BYREF
  _DWORD *v51; // [rsp+D0h] [rbp-2B8h]
  LONG *p_lDelta; // [rsp+D8h] [rbp-2B0h]
  __int64 v53; // [rsp+E0h] [rbp-2A8h]
  struct SURFACE *v54; // [rsp+F0h] [rbp-298h]
  CLIPOBJ *v55; // [rsp+F8h] [rbp-290h]
  _DWORD v56[2]; // [rsp+100h] [rbp-288h] BYREF
  __int64 v57; // [rsp+108h] [rbp-280h]
  int v58; // [rsp+110h] [rbp-278h]
  int v59; // [rsp+114h] [rbp-274h]
  _QWORD v60[3]; // [rsp+120h] [rbp-268h] BYREF
  int v61; // [rsp+138h] [rbp-250h]
  int v62; // [rsp+13Ch] [rbp-24Ch]
  int v63; // [rsp+140h] [rbp-248h]
  int v64; // [rsp+144h] [rbp-244h]
  int v65; // [rsp+148h] [rbp-240h]
  LONG lDelta; // [rsp+14Ch] [rbp-23Ch]
  int v67; // [rsp+150h] [rbp-238h]
  int v68; // [rsp+154h] [rbp-234h]
  int v69; // [rsp+158h] [rbp-230h]
  LONG v70; // [rsp+15Ch] [rbp-22Ch]
  int v71; // [rsp+160h] [rbp-228h]
  struct SURFACE *v72; // [rsp+168h] [rbp-220h]
  unsigned int v73; // [rsp+1ACh] [rbp-1DCh]
  unsigned int v74; // [rsp+1B0h] [rbp-1D8h]
  ULONG v75; // [rsp+1B4h] [rbp-1D4h]
  struct _RECTL v76; // [rsp+1C0h] [rbp-1C8h] BYREF
  struct _RECTL v77; // [rsp+1D0h] [rbp-1B8h] BYREF
  struct _RECTL v78; // [rsp+1E0h] [rbp-1A8h] BYREF
  unsigned int v79; // [rsp+1F0h] [rbp-198h] BYREF
  _OWORD v80[20]; // [rsp+1F4h] [rbp-194h]

  v8 = pco;
  v10 = psoDst;
  v47 = psoDst;
  v38 = pco;
  v11 = 0;
  if ( (psoDst->iType || psoSrc->iType)
    && !ulReserved
    && prclDst->right - prclDst->left == prclSrc->right - prclSrc->left
    && prclDst->bottom - prclDst->top == prclSrc->bottom - prclSrc->top )
  {
    v56[1] = 0;
    v59 = 0;
    hdev = psoDst->hdev;
    if ( !hdev )
      hdev = psoSrc->hdev;
    v56[0] = iTransColor;
    v58 = 0;
    v57 = 0LL;
    v13 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int))*((_QWORD *)hdev + 351);
    if ( v13 )
      return v13(psoDst, psoSrc, 0LL, pco, pxlo, prclDst, prclSrc, 0LL, v56, 0LL, 52394);
    return 0;
  }
  v15 = (unsigned __int64)&psoDst[-1].pvScan0 & -(__int64)(psoDst != 0LL);
  v76 = *prclDst;
  v77 = *prclSrc;
  v49 = psoDst->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&v49, psoDst, 0LL, 0);
  v50 = psoSrc->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&v50, psoSrc, 0LL, 0);
  v55 = v8;
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  v16 = psSetupTransparentSrcSurface(
          (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)),
          (struct SURFACE *)((unsigned __int64)&v10[-1].pvScan0 & -(__int64)(v10 != 0LL)),
          &v76,
          0LL,
          &v77,
          &v43,
          1u,
          iTransColor);
  v39 = v16;
  if ( v16 )
  {
    if ( v76.left == v76.right )
    {
      v11 = 1;
      goto LABEL_17;
    }
    v46 = (char *)v16 + 24;
    v40 = 0LL;
    v41 = 0;
    v42 = 0;
    v53 = (unsigned __int64)&v10[-1].pvScan0 & -(__int64)(v10 != 0LL);
    v48 = v53;
    v78 = v76;
    if ( *(_WORD *)(v53 + 0x64) && (*((_DWORD *)v10->hdev + 10) & 0x80u) != 0 )
    {
      v11 = GreTransparentBltPS(v10, (struct _SURFOBJ *)((char *)v16 + 24), v8, pxlo, &v76, &v77, iTransColor);
      SURFMEM::~SURFMEM((SURFMEM *)&v40);
      goto LABEL_17;
    }
    v17 = psSetupDstSurface(
            (__int64 **)((unsigned __int64)&v10[-1].pvScan0 & -(__int64)(v10 != 0LL)),
            &v76,
            (struct SURFMEM *)&v40,
            0,
            1);
    v54 = v17;
    if ( !v17 )
    {
LABEL_60:
      SURFMEM::~SURFMEM((SURFMEM *)&v40);
      SURFMEM::~SURFMEM((SURFMEM *)&v43);
      return 0;
    }
    if ( v17 != (struct SURFACE *)v15 )
    {
      v10 = (SURFOBJ *)((char *)v17 + 24);
      v47 = (SURFOBJ *)((char *)v17 + 24);
      v8 = 0LL;
      v38 = 0LL;
    }
    v18 = 0;
    v71 = 0;
    v75 = iTransColor;
    v19 = v46;
    v51 = v46 + 64;
    v65 = *((_DWORD *)v46 + 16);
    p_lDelta = &v10->lDelta;
    lDelta = v10->lDelta;
    v72 = v39;
    memset_0(&v79, 0, 0x144uLL);
    if ( v8 && (iDComplexity = v8->iDComplexity) != 0 )
    {
      iDComplexity = (unsigned int)(iDComplexity - 1);
      if ( (_DWORD)iDComplexity )
      {
        if ( (_DWORD)iDComplexity == 2 )
        {
          v18 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v8, 0, 0, 4u, 0x14u);
        }
        goto LABEL_29;
      }
      rclBounds = v8->rclBounds;
    }
    else
    {
      rclBounds = v76;
    }
    v79 = 1;
    v80[0] = rclBounds;
LABEL_29:
    v22 = Gre::Base::Globals((Gre::Base *)iDComplexity);
    v23 = pxlo;
    if ( !pxlo )
      v23 = (XLATEOBJ *)((char *)v22 + 6896);
    v60[0] = v23;
    v61 = 1;
    v64 = 1;
    iBitmapFormat = v10->iBitmapFormat;
    v74 = iBitmapFormat;
    v25 = *((_DWORD *)v19 + 18);
    v73 = v25;
    top = v76.top;
    left = (Gre::Base *)(unsigned int)v76.left;
    if ( !v18 )
      goto LABEL_33;
    while ( 1 )
    {
      v18 = XCLIPOBJ::bEnum((XCLIPOBJ *)v8, 0x144u, (char *)&v79, 0LL);
      top = v76.top;
      left = (Gre::Base *)(unsigned int)v76.left;
      iBitmapFormat = v74;
      v25 = v73;
LABEL_33:
      if ( (v25 > 6 || iBitmapFormat > 6) && v79 )
        break;
      for ( i = 0; i < v79; ++i )
      {
        v35 = v80[i];
        if ( v35 < (int)left )
        {
          LODWORD(v80[i]) = (_DWORD)left;
          v35 = (int)left;
        }
        v34 = DWORD2(v80[i]);
        right = v76.right;
        if ( v34 > v76.right )
        {
          DWORD2(v80[i]) = v76.right;
          v34 = right;
        }
        v30 = DWORD1(v80[i]);
        v36 = v30;
        if ( v30 < top )
        {
          DWORD1(v80[i]) = top;
          v30 = top;
          v36 = top;
        }
        bottom = HIDWORD(v80[i]);
        LODWORD(v39) = bottom;
        if ( bottom > v76.bottom )
        {
          bottom = v76.bottom;
          HIDWORD(v80[i]) = v76.bottom;
          LODWORD(v39) = bottom;
        }
        if ( v30 < bottom && v35 < v34 )
        {
          v62 = v34 - v35;
          v63 = (_DWORD)v39 - v36;
          v67 = v77.left - (_DWORD)left + v35;
          v68 = v77.left - (_DWORD)left + v34;
          v69 = v35;
          v70 = v36;
          v60[1] = *((_QWORD *)v46 + 7) + *v51 * (v36 + v77.top - top);
          v60[2] = (char *)v10->pvScan0 + *p_lDelta * v36;
          if ( (*(_DWORD *)(v60[0] + 4LL) & 1) != 0 && v25 == iBitmapFormat )
            off_1C030CB20[7 * v25 - 7]((struct BLTINFO *)v60);
          else
            (*(&off_1C030CB20[7 * v25 - 7] + iBitmapFormat))((struct BLTINFO *)v60);
          top = v76.top;
          left = (Gre::Base *)(unsigned int)v76.left;
          iBitmapFormat = v74;
          v25 = v73;
        }
      }
      if ( !v18 )
      {
        if ( (struct SURFACE *)v15 != v54 )
        {
          v32 = *(_QWORD *)(v15 + 48);
          v38 = 0LL;
          v33 = Gre::Base::Globals(left);
          if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
            (*(void (__fastcall **)(__int64, SURFOBJ *, CLIPOBJ *, __int64, struct _RECTL *, CLIPOBJ **))(v32 + 2816))(
              (v48 + 24) & -(__int64)(v48 != 0),
              v10,
              v55,
              (__int64)v33 + 6896,
              &v78,
              &v38);
          else
            ((void (__fastcall *)(__int64, SURFOBJ *, CLIPOBJ *, char *, struct _RECTL *, CLIPOBJ **))EngCopyBits)(
              (v48 + 24) & -(__int64)(v48 != 0),
              v10,
              v55,
              (char *)v33 + 6896,
              &v78,
              &v38);
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v40);
        SURFMEM::~SURFMEM((SURFMEM *)&v43);
        return 1;
      }
    }
    goto LABEL_60;
  }
LABEL_17:
  SURFMEM::~SURFMEM((SURFMEM *)&v43);
  return v11;
}
