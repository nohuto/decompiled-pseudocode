/*
 * XREFs of EngStretchBltROP @ 0x1C01045D0
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C013B380 (NtGdiEngStretchBltROP.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0157660 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C029CFF0 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 * Callees:
 *     EngStretchBlt @ 0x1C00B1650 (EngStretchBlt.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B79F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00BA100 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
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
  SURFOBJ *v17; // rbx
  int v18; // edx
  _DWORD *v19; // rax
  int v20; // edx
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r15
  ULONG v23; // eax
  LONG left; // ecx
  int v25; // ebx
  LONG right; // eax
  LONG v27; // r11d
  LONG top; // ecx
  LONG bottom; // eax
  LONG v30; // r15d
  int v31; // r8d
  int v32; // r8d
  int v33; // ecx
  ULONG v34; // r15d
  LONG v35; // edx
  __int64 p_iBitmapFormat; // rax
  LONG v37; // edx
  LONG v38; // ecx
  __int64 v39; // rax
  int (*v40)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  LONG v43; // r11d
  LONG v44; // r15d
  __int64 p_hsurf; // rax
  LONG x; // edx
  LONG y; // r8d
  __int64 p_iType; // rcx
  LONG v49; // edx
  LONG v50; // r8d
  __int64 p_sizlBitmap; // rax
  __int64 p_cy; // rax
  bool v53; // cc
  __int64 v54; // rax
  __int64 v55; // rax
  SURFOBJ *v56; // r9
  int v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+64h] [rbp-9Ch]
  POINTL v59; // [rsp+70h] [rbp-90h] BYREF
  LONG v60; // [rsp+78h] [rbp-88h]
  LONG v61; // [rsp+7Ch] [rbp-84h]
  ULONG v62; // [rsp+80h] [rbp-80h]
  int v63; // [rsp+84h] [rbp-7Ch]
  SURFOBJ *psoSrca; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  char v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+9Ch] [rbp-64h]
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v69; // [rsp+B0h] [rbp-50h]
  POINTL *v70; // [rsp+C0h] [rbp-40h]
  POINTL *v71; // [rsp+C8h] [rbp-38h]
  XLATEOBJ *v72; // [rsp+D0h] [rbp-30h]
  CLIPOBJ *v73; // [rsp+D8h] [rbp-28h]
  SURFOBJ *v74; // [rsp+E0h] [rbp-20h]
  BRUSHOBJ *v75; // [rsp+E8h] [rbp-18h]
  RECTL v76; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v77; // [rsp+100h] [rbp+0h] BYREF
  RECTL v78; // [rsp+110h] [rbp+10h] BYREF

  v72 = pxlo;
  v59 = (POINTL)pca;
  v71 = pptlHTOrg;
  v70 = pptlMask;
  v75 = pbo;
  v73 = pco;
  v74 = psoDest;
  psoSrca = psoMask;
  v14 = (SURFACE *)((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL));
  if ( rop4 != 52428 && rop4 != 43724 )
  {
    v23 = 3;
    left = prclDest->left;
    if ( iMode != 4 )
      v23 = iMode;
    v25 = 0;
    v62 = v23;
    right = prclDest->right;
    v27 = right;
    v57 = 0;
    v58 = 0;
    v60 = left;
    if ( left > right )
    {
      v27 = left;
      prclDest->left = right;
      prclDest->right = left;
      v57 = 1;
      v60 = right;
    }
    top = prclDest->top;
    bottom = prclDest->bottom;
    v30 = bottom;
    v61 = top;
    if ( top > bottom )
    {
      v30 = top;
      prclDest->top = bottom;
      prclDest->bottom = top;
      v58 = 1;
      v61 = bottom;
    }
    *(_QWORD *)&v77.left = 0LL;
    LOBYTE(v77.right) = 0;
    v68 = 0LL;
    v77.bottom = 0;
    v31 = (unsigned __int8)gajRop3[BYTE1(rop4)];
    v69 = 0LL;
    v65 = 0LL;
    v66 = 0;
    v32 = (unsigned __int8)gajRop3[(unsigned __int8)rop4] | v31;
    v67 = 0;
    v59 = 0LL;
    v33 = v32 | 0x10000;
    if ( (unsigned __int8)rop4 == BYTE1(rop4) )
      v33 = v32;
    v63 = v33;
    if ( (v33 & 0x10000) != 0 )
    {
      v43 = v27 - v60;
      v44 = v30 - v61;
      LODWORD(v68) = 1;
      *(_QWORD *)((char *)&v68 + 4) = __PAIR64__(v44, v43);
      p_hsurf = (__int64)&psoSrca[1].hsurf;
      *(_QWORD *)&v69 = 0LL;
      if ( !psoSrca )
        p_hsurf = 112LL;
      *(_QWORD *)&v76.left = 0LL;
      v76.right = v43;
      v76.bottom = v44;
      DWORD2(v69) = *(_DWORD *)p_hsurf & 0x40000;
      if ( v57 )
      {
        v76.left = v43;
        v76.right = 0;
      }
      if ( v58 )
      {
        v76.top = v44;
        v76.bottom = 0;
      }
      SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)&v68, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v65 )
        goto LABEL_33;
      v34 = v62;
      x = v70->x;
      y = v70->y;
      v78.right = v70->x + prclSrc->right - prclSrc->left;
      v78.bottom = y + prclSrc->bottom - prclSrc->top;
      v78.left = x;
      v78.top = y;
      if ( !EngStretchBlt((SURFOBJ *)(v65 + 24), psoSrca, 0LL, 0LL, 0LL, 0LL, &v59, &v76, &v78, 0LL, v62) )
        goto LABEL_33;
      LOBYTE(v33) = v63;
    }
    else
    {
      v34 = v62;
    }
    if ( (v33 & 0xD4) == 0 )
      goto LABEL_32;
    v35 = prclDest->bottom;
    p_iBitmapFormat = (__int64)&psoSrc->iBitmapFormat;
    *(_QWORD *)&v69 = 0LL;
    *(_QWORD *)&v76.left = 0LL;
    if ( !psoSrc )
      p_iBitmapFormat = 96LL;
    v37 = v35 - prclDest->top;
    v38 = prclDest->right - prclDest->left;
    DWORD1(v68) = v38;
    LODWORD(v68) = *(_DWORD *)p_iBitmapFormat;
    v39 = (__int64)&psoSrc[1].hsurf;
    if ( !psoSrc )
      v39 = 112LL;
    DWORD2(v68) = v37;
    v76.right = v38;
    v76.bottom = v37;
    DWORD2(v69) = *(_DWORD *)v39 & 0x40000;
    if ( v57 )
    {
      v76.left = v38;
      v76.right = 0;
    }
    if ( v58 )
    {
      v76.top = v37;
      v76.bottom = 0;
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v77, (struct _DEVBITMAPINFO *)&v68, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( *(_QWORD *)&v77.left )
    {
      if ( EngStretchBlt(
             (SURFOBJ *)(*(_QWORD *)&v77.left + 24LL),
             psoSrc,
             0LL,
             0LL,
             0LL,
             0LL,
             &v59,
             &v76,
             prclSrc,
             0LL,
             v34) )
      {
LABEL_32:
        v40 = SURFACE::pfnBitBlt(v14);
        v25 = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))v40)(
                v74,
                v41,
                v42,
                v73,
                v72,
                prclDest,
                &v59,
                &v59,
                v75,
                v71,
                rop4);
      }
    }
LABEL_33:
    SURFMEM::~SURFMEM((SURFMEM *)&v65);
    SURFMEM::~SURFMEM((SURFMEM *)&v77);
    return v25;
  }
  v15 = *(_QWORD *)(((unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL)) + 0x30);
  p_hdev = (__int64)&psoSrc->hdev;
  v17 = 0LL;
  if ( !psoSrc )
    p_hdev = 48LL;
  v18 = *((_DWORD *)v14 + 28);
  v19 = *(_DWORD **)p_hdev;
  ++*((_DWORD *)v14 + 23);
  v20 = v18 & 2;
  if ( v20 )
    v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v15 + 2848);
  else
    v21 = EngStretchBlt;
  if ( v20 && (*(_DWORD *)(v15 + 40) & 0x20000) == 0 )
  {
    if ( iMode == 4 && (*(_BYTE *)(v15 + 1824) & 0x10) == 0 )
      v21 = EngStretchBlt;
    p_iType = (__int64)&psoSrc->iType;
    if ( !psoSrc )
      p_iType = 100LL;
    if ( *(_WORD *)p_iType == 1 && v19 && (v19[10] & 0x20000) != 0 )
    {
      v49 = v19[646];
      if ( prclSrc->left < v49 )
        goto LABEL_70;
      v50 = v19[647];
      if ( prclSrc->top < v50 )
        goto LABEL_70;
      p_sizlBitmap = (__int64)&psoSrc->sizlBitmap;
      if ( !psoSrc )
        p_sizlBitmap = 56LL;
      if ( prclSrc->right > v49 + *(_DWORD *)p_sizlBitmap )
        goto LABEL_70;
      p_cy = (__int64)&psoSrc->sizlBitmap.cy;
      if ( !psoSrc )
        p_cy = 60LL;
      v53 = prclSrc->bottom <= v50 + *(_DWORD *)p_cy;
    }
    else
    {
      if ( prclSrc->left < 0 || prclSrc->top < 0 )
        goto LABEL_70;
      v54 = (__int64)&psoSrc->sizlBitmap;
      if ( !psoSrc )
        v54 = 56LL;
      if ( prclSrc->right > *(_DWORD *)v54 )
        goto LABEL_70;
      v55 = (__int64)&psoSrc->sizlBitmap.cy;
      if ( !psoSrc )
        v55 = 60LL;
      v53 = prclSrc->bottom <= *(_DWORD *)v55;
    }
    if ( v53 )
    {
LABEL_71:
      v77 = *prclDest;
      ERECTL::vOrder((ERECTL *)&v77);
      if ( psoSrc == v56 && (unsigned int)bIntersect(prclSrc, &v77) )
        v21 = EngStretchBlt;
      goto LABEL_7;
    }
LABEL_70:
    v21 = EngStretchBlt;
    goto LABEL_71;
  }
LABEL_7:
  if ( rop4 != 52428 )
    v17 = psoSrca;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v21)(
           v74,
           psoSrc,
           v17,
           v73,
           v72,
           v59,
           v71,
           prclDest,
           prclSrc,
           v70,
           iMode);
}
