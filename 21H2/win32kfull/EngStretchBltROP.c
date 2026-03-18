/*
 * XREFs of EngStretchBltROP @ 0x1C008B730
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C0127170 (NtGdiEngStretchBltROP.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C01491F0 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C029B8E0 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C008E810 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngStretchBltROP(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  SURFACE *v14; // r13
  __int64 v15; // rcx
  __int64 p_hdev; // rax
  __int64 v17; // rbx
  int v18; // edx
  __int64 v19; // rax
  BOOL (__stdcall *v20)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r15
  ULONG v22; // eax
  LONG left; // ecx
  int v24; // ebx
  LONG right; // eax
  LONG v26; // r9d
  LONG top; // ecx
  LONG bottom; // eax
  LONG v29; // r10d
  __int64 v30; // r15
  int v31; // r8d
  int v32; // r8d
  int v33; // ecx
  LONG v34; // edx
  __int64 p_iBitmapFormat; // rax
  LONG v36; // edx
  LONG v37; // ecx
  __int64 p_hsurf; // rax
  int (*v39)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v40; // r11
  LONG v41; // r9d
  LONG v42; // r10d
  SURFOBJ *v43; // r15
  __int64 v44; // rax
  LONG v45; // edx
  LONG v46; // r8d
  __int64 p_iType; // rcx
  LONG v48; // edx
  LONG v49; // r8d
  __int64 p_sizlBitmap; // rax
  __int64 p_cy; // rax
  bool v52; // cc
  __int64 v53; // rax
  __int64 v54; // rax
  SURFOBJ *v55; // r9
  int v56; // [rsp+60h] [rbp-A0h]
  int v57; // [rsp+64h] [rbp-9Ch]
  POINTL v58; // [rsp+70h] [rbp-90h] BYREF
  LONG v59; // [rsp+78h] [rbp-88h]
  LONG v60; // [rsp+7Ch] [rbp-84h]
  ULONG v61; // [rsp+80h] [rbp-80h]
  int v62; // [rsp+84h] [rbp-7Ch]
  __int64 v63; // [rsp+88h] [rbp-78h] BYREF
  char v64; // [rsp+90h] [rbp-70h]
  int v65; // [rsp+94h] [rbp-6Ch]
  __int128 v66; // [rsp+98h] [rbp-68h] BYREF
  __int128 v67; // [rsp+A8h] [rbp-58h]
  POINTL *v68; // [rsp+B8h] [rbp-48h]
  XLATEOBJ *v69; // [rsp+C0h] [rbp-40h]
  CLIPOBJ *v70; // [rsp+C8h] [rbp-38h]
  SURFOBJ *v71; // [rsp+D0h] [rbp-30h]
  BRUSHOBJ *v72; // [rsp+D8h] [rbp-28h]
  RECTL v73; // [rsp+E0h] [rbp-20h] BYREF
  RECTL psoSrca; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v75; // [rsp+100h] [rbp+0h] BYREF
  RECTL v76; // [rsp+110h] [rbp+10h] BYREF

  v69 = pxlo;
  v58 = (POINTL)pca;
  v68 = pptlHTOrg;
  *(_QWORD *)&v75.left = pptlMask;
  v72 = pbo;
  v70 = pco;
  v71 = psoDest;
  *(_QWORD *)&psoSrca.left = psoMask;
  v14 = (SURFACE *)((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL));
  if ( rop4 != 52428 && rop4 != 43724 )
  {
    v22 = 3;
    left = prclDest->left;
    if ( iMode != 4 )
      v22 = iMode;
    v24 = 0;
    v61 = v22;
    right = prclDest->right;
    v26 = right;
    v56 = 0;
    v57 = 0;
    v59 = left;
    if ( left > right )
    {
      v26 = left;
      prclDest->left = right;
      prclDest->right = left;
      v56 = 1;
      v59 = right;
    }
    top = prclDest->top;
    bottom = prclDest->bottom;
    v29 = bottom;
    v60 = top;
    if ( top > bottom )
    {
      v29 = top;
      prclDest->top = bottom;
      prclDest->bottom = top;
      v57 = 1;
      v60 = bottom;
    }
    *(_QWORD *)&v73.left = 0LL;
    LOBYTE(v73.right) = 0;
    v66 = 0LL;
    v73.bottom = 0;
    v30 = 0LL;
    v31 = (unsigned __int8)gajRop3[BYTE1(rop4)];
    v67 = 0LL;
    v63 = 0LL;
    v64 = 0;
    v32 = (unsigned __int8)gajRop3[(unsigned __int8)rop4] | v31;
    v65 = 0;
    v58 = 0LL;
    v33 = v32 | 0x10000;
    if ( (unsigned __int8)rop4 == BYTE1(rop4) )
      v33 = v32;
    v62 = v33;
    if ( (v33 & 0x10000) != 0 )
    {
      v41 = v26 - v59;
      v42 = v29 - v60;
      v43 = *(SURFOBJ **)&psoSrca.left;
      LODWORD(v66) = 1;
      *(_QWORD *)((char *)&v66 + 4) = __PAIR64__(v42, v41);
      v44 = *(_QWORD *)&psoSrca.left + 88LL;
      *(_QWORD *)&v67 = 0LL;
      if ( !*(_QWORD *)&psoSrca.left )
        v44 = 112LL;
      *(_QWORD *)&psoSrca.left = 0LL;
      psoSrca.right = v41;
      psoSrca.bottom = v42;
      DWORD2(v67) = *(_DWORD *)v44 & 0x40000;
      if ( v56 )
      {
        psoSrca.left = v41;
        psoSrca.right = 0;
      }
      if ( v57 )
      {
        psoSrca.top = v42;
        psoSrca.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v63, (struct _DEVBITMAPINFO *)&v66, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v63 )
        goto LABEL_32;
      v45 = **(_DWORD **)&v75.left;
      v46 = *(_DWORD *)(*(_QWORD *)&v75.left + 4LL);
      v76.right = **(_DWORD **)&v75.left + prclSrc->right - prclSrc->left;
      v76.bottom = v46 + prclSrc->bottom - prclSrc->top;
      v76.left = v45;
      v76.top = v46;
      if ( !EngStretchBlt((SURFOBJ *)(v63 + 24), v43, 0LL, 0LL, 0LL, 0LL, &v58, &psoSrca, &v76, 0LL, v61) )
        goto LABEL_32;
      v30 = v63;
      LOBYTE(v33) = v62;
    }
    if ( (v33 & 0xD4) != 0 )
    {
      v34 = prclDest->bottom;
      p_iBitmapFormat = (__int64)&psoSrc->iBitmapFormat;
      *(_QWORD *)&v67 = 0LL;
      *(_QWORD *)&v75.left = 0LL;
      if ( !psoSrc )
        p_iBitmapFormat = 96LL;
      v36 = v34 - prclDest->top;
      v37 = prclDest->right - prclDest->left;
      DWORD1(v66) = v37;
      LODWORD(v66) = *(_DWORD *)p_iBitmapFormat;
      p_hsurf = (__int64)&psoSrc[1].hsurf;
      if ( !psoSrc )
        p_hsurf = 112LL;
      DWORD2(v66) = v36;
      v75.right = v37;
      v75.bottom = v36;
      DWORD2(v67) = *(_DWORD *)p_hsurf & 0x40000;
      if ( v56 )
      {
        v75.left = v37;
        v75.right = 0;
      }
      if ( v57 )
      {
        v75.top = v36;
        v75.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v73, (struct _DEVBITMAPINFO *)&v66, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !*(_QWORD *)&v73.left
        || !EngStretchBlt(
              (SURFOBJ *)(*(_QWORD *)&v73.left + 24LL),
              psoSrc,
              0LL,
              0LL,
              0LL,
              0LL,
              &v58,
              &v75,
              prclSrc,
              0LL,
              v61) )
      {
        goto LABEL_32;
      }
      v30 = v63;
    }
    v39 = SURFACE::pfnBitBlt(v14);
    v24 = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))v39)(
            v71,
            (v40 + 24) & -(__int64)(v40 != 0),
            (v30 + 24) & -(__int64)(v30 != 0),
            v70,
            v69,
            prclDest,
            &v58,
            &v58,
            v72,
            v68,
            rop4);
LABEL_32:
    SURFMEM::~SURFMEM((SURFMEM *)&v63);
    SURFMEM::~SURFMEM((SURFMEM *)&v73);
    return v24;
  }
  v15 = *(_QWORD *)(((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL)) + 0x30);
  p_hdev = (__int64)&psoSrc->hdev;
  v17 = 0LL;
  if ( !psoSrc )
    p_hdev = 48LL;
  v18 = *((_DWORD *)v14 + 28);
  v19 = *(_QWORD *)p_hdev;
  ++*((_DWORD *)v14 + 23);
  if ( (v18 & 2) != 0 )
  {
    v20 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v15 + 2824);
    if ( _bittest((const signed __int32 *)(v15 + 40), 0x11u) )
      goto LABEL_6;
    if ( iMode == 4 && (*(_BYTE *)(v15 + 1792) & 0x10) == 0 )
      v20 = EngStretchBlt;
    p_iType = (__int64)&psoSrc->iType;
    if ( !psoSrc )
      p_iType = 100LL;
    if ( *(_WORD *)p_iType == 1 && v19 && _bittest((const signed __int32 *)(v19 + 40), 0x11u) )
    {
      v48 = *(_DWORD *)(v19 + 2560);
      if ( prclSrc->left < v48 )
        goto LABEL_68;
      v49 = *(_DWORD *)(v19 + 2564);
      if ( prclSrc->top < v49 )
        goto LABEL_68;
      p_sizlBitmap = (__int64)&psoSrc->sizlBitmap;
      if ( !psoSrc )
        p_sizlBitmap = 56LL;
      if ( prclSrc->right > v48 + *(_DWORD *)p_sizlBitmap )
        goto LABEL_68;
      p_cy = (__int64)&psoSrc->sizlBitmap.cy;
      if ( !psoSrc )
        p_cy = 60LL;
      v52 = prclSrc->bottom <= v49 + *(_DWORD *)p_cy;
    }
    else
    {
      if ( prclSrc->left < 0 || prclSrc->top < 0 )
        goto LABEL_68;
      v53 = (__int64)&psoSrc->sizlBitmap;
      if ( !psoSrc )
        v53 = 56LL;
      if ( prclSrc->right > *(_DWORD *)v53 )
        goto LABEL_68;
      v54 = (__int64)&psoSrc->sizlBitmap.cy;
      if ( !psoSrc )
        v54 = 60LL;
      v52 = prclSrc->bottom <= *(_DWORD *)v54;
    }
    if ( v52 )
    {
LABEL_69:
      v73 = *prclDest;
      ERECTL::vOrder((ERECTL *)&v73);
      if ( psoSrc == v55 && (unsigned int)bIntersect(prclSrc, &v73) )
        v20 = EngStretchBlt;
      goto LABEL_6;
    }
LABEL_68:
    v20 = EngStretchBlt;
    goto LABEL_69;
  }
  v20 = EngStretchBlt;
LABEL_6:
  if ( rop4 != 52428 )
    v17 = *(_QWORD *)&psoSrca.left;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v20)(
           v71,
           psoSrc,
           v17,
           v70,
           v69,
           v58,
           v68,
           prclDest,
           prclSrc,
           *(_QWORD *)&v75.left,
           iMode);
}
