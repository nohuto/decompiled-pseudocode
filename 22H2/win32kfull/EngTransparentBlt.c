/*
 * XREFs of EngTransparentBlt @ 0x1C00D0490
 * Callers:
 *     EngBitBlt @ 0x1C00CB280 (EngBitBlt.c)
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C010EA40 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0295E30 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029D390 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A4F10 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B3D60 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00AD538 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE400 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00CF270 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C029107C (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
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
  XLATEOBJ *v8; // r12
  CLIPOBJ *v9; // r15
  SURFOBJ *v11; // rsi
  int v12; // ebx
  unsigned __int64 v13; // r13
  struct SURFACE *v14; // rcx
  HDEV v15; // rax
  struct SURFACE *v16; // rax
  int v17; // edi
  struct _RECTL rclBounds; // xmm0
  unsigned int iBitmapFormat; // r10d
  unsigned int v20; // r9d
  unsigned int i; // r12d
  LONG v22; // r11d
  LONG top; // ecx
  LONG v24; // ecx
  LONG bottom; // edx
  int v26; // ecx
  int v27; // eax
  __int64 (__fastcall *v28)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int); // rax
  HDEV v29; // rax
  __int64 v30; // rax
  unsigned int v32; // [rsp+64h] [rbp-314h]
  struct SURFACE *v33; // [rsp+70h] [rbp-308h] BYREF
  int v34; // [rsp+78h] [rbp-300h]
  char *v35; // [rsp+80h] [rbp-2F8h]
  __int64 v36; // [rsp+88h] [rbp-2F0h] BYREF
  char v37; // [rsp+90h] [rbp-2E8h]
  int v38; // [rsp+94h] [rbp-2E4h]
  SURFOBJ *v39; // [rsp+98h] [rbp-2E0h]
  CLIPOBJ *v40; // [rsp+A0h] [rbp-2D8h]
  __int64 v41; // [rsp+A8h] [rbp-2D0h]
  __int64 v42; // [rsp+B0h] [rbp-2C8h] BYREF
  char v43; // [rsp+B8h] [rbp-2C0h]
  int v44; // [rsp+BCh] [rbp-2BCh]
  HDEV hdev; // [rsp+C0h] [rbp-2B8h] BYREF
  HDEV v46; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-2A8h]
  struct SURFACE *v48; // [rsp+E0h] [rbp-298h]
  CLIPOBJ *v49; // [rsp+E8h] [rbp-290h]
  _DWORD v50[2]; // [rsp+F0h] [rbp-288h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-280h]
  int v52; // [rsp+100h] [rbp-278h]
  int v53; // [rsp+104h] [rbp-274h]
  HDEV v54; // [rsp+108h] [rbp-270h]
  _QWORD v55[3]; // [rsp+110h] [rbp-268h] BYREF
  int v56; // [rsp+128h] [rbp-250h]
  int v57; // [rsp+12Ch] [rbp-24Ch]
  unsigned int v58; // [rsp+130h] [rbp-248h]
  int v59; // [rsp+134h] [rbp-244h]
  int v60; // [rsp+138h] [rbp-240h]
  LONG lDelta; // [rsp+13Ch] [rbp-23Ch]
  int v62; // [rsp+140h] [rbp-238h]
  int v63; // [rsp+144h] [rbp-234h]
  int v64; // [rsp+148h] [rbp-230h]
  LONG v65; // [rsp+14Ch] [rbp-22Ch]
  int v66; // [rsp+150h] [rbp-228h]
  struct SURFACE *v67; // [rsp+158h] [rbp-220h]
  unsigned int v68; // [rsp+19Ch] [rbp-1DCh]
  unsigned int v69; // [rsp+1A0h] [rbp-1D8h]
  ULONG v70; // [rsp+1A4h] [rbp-1D4h]
  struct _RECTL v71; // [rsp+1B0h] [rbp-1C8h] BYREF
  RECTL v72; // [rsp+1C0h] [rbp-1B8h] BYREF
  struct _RECTL v73; // [rsp+1D0h] [rbp-1A8h] BYREF
  _DWORD v74[84]; // [rsp+1E0h] [rbp-198h] BYREF

  v8 = pxlo;
  v9 = pco;
  v11 = psoDst;
  v39 = psoDst;
  v40 = pco;
  v12 = 0;
  if ( !psoDst->iType && !psoSrc->iType
    || ulReserved
    || prclDst->right - prclDst->left != prclSrc->right - prclSrc->left
    || prclDst->bottom - prclDst->top != prclSrc->bottom - prclSrc->top )
  {
    v13 = (unsigned __int64)&psoDst[-1].pvScan0 & -(__int64)(psoDst != 0LL);
    v71 = *prclDst;
    v72 = *prclSrc;
    hdev = psoDst->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDst, 0LL, 0);
    v46 = psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&v46, psoSrc, 0LL, 0);
    v49 = v9;
    v42 = 0LL;
    v43 = 0;
    v44 = 0;
    v14 = psSetupTransparentSrcSurface(
            (struct SURFACE *)((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)),
            (struct SURFACE *)((unsigned __int64)&v11[-1].pvScan0 & -(__int64)(v11 != 0LL)),
            &v71,
            0LL,
            &v72,
            (struct SURFMEM *)&v42,
            1u,
            iTransColor);
    v33 = v14;
    if ( v14 )
    {
      if ( v71.left != v71.right )
      {
        v35 = (char *)v14 + 24;
        v36 = 0LL;
        v37 = 0;
        v38 = 0;
        v47 = (unsigned __int64)&v11[-1].pvScan0 & -(__int64)(v11 != 0LL);
        v41 = v47;
        v73 = v71;
        v15 = v11->hdev;
        v54 = v15;
        if ( *(_WORD *)(v47 + 0x64) && (*((_DWORD *)v15 + 10) & 0x80u) != 0 )
        {
          v12 = GreTransparentBltPS(v11, (struct _SURFOBJ *)((char *)v14 + 24), v9, v8, &v71, &v72, iTransColor);
          goto LABEL_49;
        }
        v16 = psSetupDstSurface(
                (__int64 **)((unsigned __int64)&v11[-1].pvScan0 & -(__int64)(v11 != 0LL)),
                &v71,
                (struct SURFMEM *)&v36,
                0,
                1);
        v48 = v16;
        if ( !v16 )
        {
LABEL_49:
          SURFMEM::~SURFMEM((SURFMEM *)&v36);
          goto LABEL_50;
        }
        if ( v16 != (struct SURFACE *)v13 )
        {
          v11 = (SURFOBJ *)((char *)v16 + 24);
          v39 = (SURFOBJ *)((char *)v16 + 24);
          v9 = 0LL;
          v40 = 0LL;
        }
        v17 = 0;
        v66 = 0;
        v70 = iTransColor;
        v60 = *((_DWORD *)v35 + 16);
        lDelta = v11->lDelta;
        v67 = v33;
        memset(v74, 0, 0x144uLL);
        if ( v9 && v9->iDComplexity )
        {
          if ( v9->iDComplexity != 1 )
          {
            if ( v9->iDComplexity == 3 )
            {
              v17 = 1;
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)v9, 0, 0, 4u, 0x14u);
            }
            goto LABEL_13;
          }
          rclBounds = v9->rclBounds;
        }
        else
        {
          rclBounds = v71;
        }
        v74[0] = 1;
        *(struct _RECTL *)&v74[1] = rclBounds;
LABEL_13:
        if ( !v8 )
          v8 = xloIdent;
        v55[0] = v8;
        v56 = 1;
        v59 = 1;
        iBitmapFormat = v11->iBitmapFormat;
        v69 = iBitmapFormat;
        v20 = *((_DWORD *)v35 + 18);
        v68 = v20;
        if ( v17 )
          goto LABEL_55;
        while ( v20 <= 6 && iBitmapFormat <= 6 || !v74[0] )
        {
          for ( i = 0; i < v74[0]; ++i )
          {
            if ( v74[4 * i + 1] < v71.left )
              v74[4 * i + 1] = v71.left;
            if ( v74[4 * i + 3] > v71.right )
              v74[4 * i + 3] = v71.right;
            v22 = v74[4 * i + 2];
            top = v71.top;
            if ( v22 < v71.top )
            {
              v74[4 * i + 2] = v71.top;
              v22 = top;
            }
            v24 = v74[4 * i + 4];
            v32 = v24;
            bottom = v71.bottom;
            if ( v24 > v71.bottom )
            {
              v74[4 * i + 4] = v71.bottom;
              v24 = bottom;
              v32 = bottom;
            }
            if ( v22 < v24 )
            {
              v26 = v74[4 * i + 1];
              v27 = v74[4 * i + 3];
              v34 = v27;
              if ( v26 < v27 )
              {
                v57 = v27 - v26;
                v58 = v32 - v22;
                v62 = v72.left - v71.left + v26;
                v63 = v72.left - v71.left + v34;
                v64 = v26;
                v65 = v22;
                v55[1] = *((_QWORD *)v35 + 7) + (v22 + v72.top - v71.top) * *((_DWORD *)v35 + 16);
                v55[2] = (char *)v11->pvScan0 + v22 * v11->lDelta;
                if ( (*(_DWORD *)(v55[0] + 4LL) & 1) != 0 && v20 == iBitmapFormat )
                  ((void (__fastcall *)(_QWORD *))*(&TransFunctionTable + 7 * v20 - 7))(v55);
                else
                  ((void (__fastcall *)(_QWORD *))*(&TransFunctionTable + 7 * v20 + iBitmapFormat - 7))(v55);
                iBitmapFormat = v69;
                v20 = v68;
              }
            }
          }
          if ( !v17 )
          {
            if ( (struct SURFACE *)v13 != v48 )
            {
              v30 = *(_QWORD *)(v13 + 48);
              v33 = 0LL;
              if ( (*(_DWORD *)(v13 + 112) & 0x400) != 0 )
                (*(void (__fastcall **)(__int64, SURFOBJ *, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, struct SURFACE **))(v30 + 2840))(
                  (v41 + 24) & -(__int64)(v41 != 0),
                  v11,
                  v49,
                  xloIdent,
                  &v73,
                  &v33);
              else
                ((void (__fastcall *)(__int64, SURFOBJ *, CLIPOBJ *, XLATEOBJ *const, struct _RECTL *, struct SURFACE **))EngCopyBits)(
                  (v41 + 24) & -(__int64)(v41 != 0),
                  v11,
                  v49,
                  xloIdent,
                  &v73,
                  &v33);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v36);
            SURFMEM::~SURFMEM((SURFMEM *)&v42);
            LODWORD(v28) = 1;
            return (int)v28;
          }
LABEL_55:
          v17 = XCLIPOBJ::bEnum((XCLIPOBJ *)v9, 0x144u, (char *)v74, 0LL);
          iBitmapFormat = v69;
          v20 = v68;
        }
        goto LABEL_49;
      }
      v12 = 1;
    }
LABEL_50:
    SURFMEM::~SURFMEM((SURFMEM *)&v42);
    LODWORD(v28) = v12;
    return (int)v28;
  }
  v50[1] = 0;
  v53 = 0;
  v29 = psoDst->hdev;
  if ( !v29 )
    v29 = psoSrc->hdev;
  v50[0] = iTransColor;
  v52 = 0;
  v51 = 0LL;
  v28 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, _QWORD, _DWORD *, _QWORD, int))*((_QWORD *)v29 + 354);
  if ( v28 )
    LODWORD(v28) = v28(psoDst, psoSrc, 0LL, pco, pxlo, prclDst, prclSrc, 0LL, v50, 0LL, 52394);
  return (int)v28;
}
