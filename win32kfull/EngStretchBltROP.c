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
  ULONG v15; // ecx
  LONG right; // eax
  LONG v17; // r9d
  BOOL v18; // ebx
  LONG left; // r11d
  LONG bottom; // eax
  LONG v21; // r10d
  LONG top; // r14d
  int v23; // r8d
  int v24; // r8d
  int v25; // ecx
  int v26; // r14d
  LONG v27; // edx
  __int64 p_iBitmapFormat; // rax
  LONG v29; // edx
  LONG v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  LONG v35; // r9d
  LONG v36; // r10d
  __int64 v37; // rax
  LONG x; // edx
  LONG y; // r8d
  LONG v40; // ecx
  __int64 v41; // rax
  SURFOBJ *v42; // rbx
  __int64 p_hdev; // rax
  __int64 v44; // rcx
  __int64 p_iUniq; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 p_hsurf; // rdx
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r14
  __int64 p_iType; // rcx
  int v51; // r10d
  LONG v52; // edx
  LONG v53; // r9d
  __int64 p_sizlBitmap; // rax
  __int64 p_cy; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+64h] [rbp-9Ch]
  POINTL v60; // [rsp+70h] [rbp-90h] BYREF
  ULONG v61; // [rsp+78h] [rbp-88h]
  int v62; // [rsp+7Ch] [rbp-84h]
  SURFOBJ *psoSrca; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  char v65; // [rsp+90h] [rbp-70h]
  int v66; // [rsp+94h] [rbp-6Ch]
  __int128 v67; // [rsp+98h] [rbp-68h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-58h]
  POINTL *v69; // [rsp+B8h] [rbp-48h]
  POINTL *v70; // [rsp+C0h] [rbp-40h]
  XLATEOBJ *v71; // [rsp+C8h] [rbp-38h]
  CLIPOBJ *v72; // [rsp+D0h] [rbp-30h]
  BRUSHOBJ *v73; // [rsp+D8h] [rbp-28h]
  RECTL v74; // [rsp+E0h] [rbp-20h] BYREF
  RECTL v75; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v76; // [rsp+100h] [rbp+0h] BYREF

  v71 = pxlo;
  v60 = (POINTL)pca;
  v70 = pptlHTOrg;
  v69 = pptlMask;
  v73 = pbo;
  v72 = pco;
  psoSrca = psoMask;
  if ( rop4 == 52428 || rop4 == 43724 )
  {
    v42 = 0LL;
    p_hdev = (__int64)&psoSrc->hdev;
    v44 = (__int64)&psoDest->hdev;
    if ( !psoDest )
      v44 = 48LL;
    if ( !psoSrc )
      p_hdev = 48LL;
    p_iUniq = (__int64)&psoDest->iUniq;
    v46 = *(_QWORD *)v44;
    if ( !psoDest )
      p_iUniq = 92LL;
    v47 = *(_QWORD *)p_hdev;
    ++*(_DWORD *)p_iUniq;
    p_hsurf = (__int64)&psoDest[1].hsurf;
    if ( !psoDest )
      p_hsurf = 112LL;
    if ( (*(_DWORD *)p_hsurf & 2) != 0 )
    {
      v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v46 + 2824);
      if ( !_bittest((const signed __int32 *)(v46 + 40), 0x11u) )
      {
        if ( iMode == 4 && (*(_BYTE *)(v46 + 1792) & 0x10) == 0 )
          v49 = EngStretchBlt;
        p_iType = (__int64)&psoSrc->iType;
        v51 = 0;
        if ( !psoSrc )
          p_iType = 100LL;
        if ( *(_WORD *)p_iType == 1 && v47 && _bittest((const signed __int32 *)(v47 + 40), 0x11u) )
        {
          v52 = *(_DWORD *)(v47 + 2560);
          if ( prclSrc->left < v52 )
            goto LABEL_69;
          v53 = *(_DWORD *)(v47 + 2564);
          if ( prclSrc->top < v53 )
            goto LABEL_69;
          p_sizlBitmap = (__int64)&psoSrc->sizlBitmap;
          if ( !psoSrc )
            p_sizlBitmap = 56LL;
          if ( prclSrc->right > v52 + *(_DWORD *)p_sizlBitmap )
            goto LABEL_69;
          p_cy = (__int64)&psoSrc->sizlBitmap.cy;
          if ( !psoSrc )
            p_cy = 60LL;
          if ( prclSrc->bottom > v53 + *(_DWORD *)p_cy )
LABEL_69:
            v51 = 1;
          if ( !v51 )
            goto LABEL_81;
        }
        else if ( prclSrc->left >= 0 && prclSrc->top >= 0 )
        {
          v56 = (__int64)&psoSrc->sizlBitmap;
          if ( !psoSrc )
            v56 = 56LL;
          if ( prclSrc->right <= *(_DWORD *)v56 )
          {
            v57 = (__int64)&psoSrc->sizlBitmap.cy;
            if ( !psoSrc )
              v57 = 60LL;
            if ( prclSrc->bottom <= *(_DWORD *)v57 )
              goto LABEL_81;
          }
        }
        v49 = EngStretchBlt;
LABEL_81:
        v75 = *prclDest;
        ERECTL::vOrder((ERECTL *)&v75);
        if ( psoSrc == psoDest && (unsigned int)bIntersect(prclSrc, &v75) )
          v49 = EngStretchBlt;
      }
    }
    else
    {
      v49 = EngStretchBlt;
    }
    if ( rop4 != 52428 )
      v42 = psoSrca;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v49)(
             psoDest,
             psoSrc,
             v42,
             v72,
             v71,
             v60,
             v70,
             prclDest,
             prclSrc,
             v69,
             iMode);
  }
  v15 = 3;
  right = prclDest->right;
  v17 = right;
  if ( iMode != 4 )
    v15 = iMode;
  v18 = 0;
  left = prclDest->left;
  v61 = v15;
  v59 = 0;
  v58 = 0;
  if ( left > right )
  {
    v17 = left;
    prclDest->right = left;
    left = right;
    prclDest->left = right;
    v59 = 1;
  }
  bottom = prclDest->bottom;
  v21 = bottom;
  top = prclDest->top;
  if ( top > bottom )
  {
    v21 = prclDest->top;
    prclDest->bottom = top;
    top = bottom;
    prclDest->top = bottom;
    v58 = 1;
  }
  *(_QWORD *)&v75.left = 0LL;
  v67 = 0LL;
  LOBYTE(v75.right) = 0;
  v68 = 0LL;
  v23 = (unsigned __int8)gajRop3[BYTE1(rop4)];
  v75.bottom = 0;
  v64 = 0LL;
  v65 = 0;
  v24 = (unsigned __int8)gajRop3[(unsigned __int8)rop4] | v23;
  v66 = 0;
  v60 = 0LL;
  v25 = v24 | 0x10000;
  if ( (unsigned __int8)rop4 == BYTE1(rop4) )
    v25 = v24;
  v62 = v25;
  if ( (v25 & 0x10000) != 0 )
  {
    v35 = v17 - left;
    v36 = v21 - top;
    LODWORD(v67) = 1;
    *(_QWORD *)((char *)&v67 + 4) = __PAIR64__(v36, v35);
    v37 = (__int64)&psoSrca[1].hsurf;
    *(_QWORD *)&v68 = 0LL;
    if ( !psoSrca )
      v37 = 112LL;
    *(_QWORD *)&v74.left = 0LL;
    v74.right = v35;
    v74.bottom = v36;
    DWORD2(v68) = *(_DWORD *)v37 & 0x40000;
    if ( v59 )
    {
      v74.left = v35;
      v74.right = 0;
    }
    v26 = v58;
    if ( v58 )
    {
      v74.top = v36;
      v74.bottom = 0;
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)&v67, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v64
      || (x = v69->x,
          y = v69->y,
          v76.right = v69->x + prclSrc->right - prclSrc->left,
          v40 = y + prclSrc->bottom - prclSrc->top,
          v76.left = x,
          v76.bottom = v40,
          v76.top = y,
          !EngStretchBlt(
             (SURFOBJ *)((v64 + 24) & -(__int64)(v64 != 0)),
             psoSrca,
             0LL,
             0LL,
             0LL,
             0LL,
             &v60,
             &v74,
             &v76,
             0LL,
             v61)) )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v64);
      SURFMEM::~SURFMEM((SURFMEM *)&v75);
      return 0;
    }
    LOBYTE(v25) = v62;
  }
  else
  {
    v26 = v58;
  }
  if ( (v25 & 0xD4) == 0 )
    goto LABEL_24;
  v27 = prclDest->bottom;
  p_iBitmapFormat = (__int64)&psoSrc->iBitmapFormat;
  *(_QWORD *)&v68 = 0LL;
  *(_QWORD *)&v74.left = 0LL;
  if ( !psoSrc )
    p_iBitmapFormat = 96LL;
  v29 = v27 - prclDest->top;
  v30 = prclDest->right - prclDest->left;
  DWORD1(v67) = v30;
  LODWORD(v67) = *(_DWORD *)p_iBitmapFormat;
  v31 = (__int64)&psoSrc[1].hsurf;
  if ( !psoSrc )
    v31 = 112LL;
  DWORD2(v67) = v29;
  v74.right = v30;
  v74.bottom = v29;
  DWORD2(v68) = *(_DWORD *)v31 & 0x40000;
  if ( v59 )
  {
    v74.left = v30;
    v74.right = 0;
  }
  if ( v26 )
  {
    v74.top = v29;
    v74.bottom = 0;
  }
  SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)&v67, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)&v75.left )
  {
    if ( EngStretchBlt(
           (SURFOBJ *)((*(_QWORD *)&v75.left + 24LL) & -(__int64)(*(_QWORD *)&v75.left != 0LL)),
           psoSrc,
           0LL,
           0LL,
           0LL,
           0LL,
           &v60,
           &v74,
           prclSrc,
           0LL,
           v61) )
    {
LABEL_24:
      v32 = (__int64)&psoDest[1].hsurf;
      if ( !psoDest )
        v32 = 112LL;
      if ( (*(_DWORD *)v32 & 1) != 0 )
      {
        v41 = (__int64)&psoDest->hdev;
        if ( !psoDest )
          v41 = 48LL;
        v33 = (*(__int64 (__fastcall **)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))(*(_QWORD *)v41 + 2808LL))(
                psoDest,
                (*(_QWORD *)&v75.left + 24LL) & -(__int64)(*(_QWORD *)&v75.left != 0LL),
                (v64 + 24) & -(__int64)(v64 != 0),
                v72,
                v71,
                prclDest,
                &v60,
                &v60,
                v73,
                v70,
                rop4);
      }
      else
      {
        v33 = ((__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, DWORD))EngBitBlt)(
                psoDest,
                (*(_QWORD *)&v75.left + 24LL) & -(__int64)(*(_QWORD *)&v75.left != 0LL),
                (v64 + 24) & -(__int64)(v64 != 0),
                v72,
                v71,
                prclDest,
                &v60,
                &v60,
                v73,
                v70,
                rop4);
      }
      v18 = v33;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v64);
  SURFMEM::~SURFMEM((SURFMEM *)&v75);
  return v18;
}
