/*
 * XREFs of EngStretchBlt @ 0x1C004DC80
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C001A0C0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngStretchBltROP @ 0x1C0088860 (EngStretchBltROP.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00B50F8 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C027EBA0 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0295E50 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C029EE90 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02A7E30 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02B2CF0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     NtGdiEngStretchBlt @ 0x1C02CD010 (NtGdiEngStretchBlt.c)
 * Callees:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C004DE20 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     EngCopyBits @ 0x1C008AE00 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0294170 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 */

BOOL __stdcall EngStretchBlt(
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
        ULONG iMode)
{
  CLIPOBJ *v11; // r12
  XLATEOBJ *v12; // r13
  SURFOBJ *v13; // r15
  RECTL *v14; // rbx
  SURFOBJ *v15; // r14
  RECTL *v16; // rsi
  __int64 v18; // rax
  RECTL v20; // xmm0
  LONG cx; // eax
  RECTL v22; // xmm1
  ULONG iBitmapFormat; // r8d
  SIZEL sizlBitmap; // rcx
  HDEV hdev; // rbx
  LONG cy; // eax
  HSURF Bitmap; // rax
  ULONG v28; // r8d
  SIZEL v29; // rcx
  HSURF v30; // rsi
  HBITMAP v31; // r13
  HBITMAP v32; // rax
  HSURF v33; // r15
  SURFOBJ *v34; // rsi
  SURFOBJ *v35; // r14
  SURFOBJ *v36; // rax
  Gre::Base *v37; // rcx
  SURFOBJ *v38; // r12
  XLATEOBJ *v39; // r15
  int v40; // eax
  _BYTE *pvBits; // rdx
  __int64 v42; // r15
  _BYTE *v43; // rax
  int v44; // eax
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  int v47[2]; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+70h] [rbp-90h]
  POINTL pptlSrc; // [rsp+78h] [rbp-88h] BYREF
  struct _SURFOBJ *v50; // [rsp+80h] [rbp-80h]
  struct _SURFOBJ *v51; // [rsp+88h] [rbp-78h]
  struct _CLIPOBJ *v52; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v53; // [rsp+98h] [rbp-68h]
  struct _POINTL *v54; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v55; // [rsp+A8h] [rbp-58h]
  struct tagCOLORADJUSTMENT *v56; // [rsp+B0h] [rbp-50h]
  struct _RECTL *v57; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v58; // [rsp+C0h] [rbp-40h]
  HSURF v59; // [rsp+C8h] [rbp-38h]
  XLATEOBJ *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  _BYTE *v62; // [rsp+E0h] [rbp-20h]
  HSURF hsurf; // [rsp+E8h] [rbp-18h]
  RECTL v64; // [rsp+F0h] [rbp-10h] BYREF
  struct _RECTL v65; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v66; // [rsp+110h] [rbp+10h] BYREF

  v11 = pco;
  v12 = pxlo;
  v13 = psoMask;
  v14 = prclDest;
  v15 = psoSrc;
  v16 = prclSrc;
  v56 = pca;
  v55 = pptlHTOrg;
  v54 = pptlMask;
  v52 = pco;
  v51 = psoMask;
  v50 = psoSrc;
  v53 = pxlo;
  v57 = prclDest;
  v58 = prclSrc;
  v18 = *(_QWORD *)(SGDGetSessionState(psoDest) + 32);
  v61 = v18;
  if ( *(_DWORD *)(v18 + 23420) )
  {
    v20 = *prclDest;
    cx = psoDest->sizlBitmap.cx;
    v22 = *prclSrc;
    iBitmapFormat = psoDest->iBitmapFormat;
    sizlBitmap = psoDest->sizlBitmap;
    v64.left = 0;
    v64.top = 0;
    hdev = psoDest->hdev;
    v64.right = cx;
    cy = psoDest->sizlBitmap.cy;
    v66 = v20;
    v64.bottom = cy;
    v65 = v22;
    Bitmap = (HSURF)EngCreateBitmap(sizlBitmap, 0, iBitmapFormat, 0, 0LL);
    v28 = psoDest->iBitmapFormat;
    v29 = psoDest->sizlBitmap;
    v30 = Bitmap;
    hsurf = Bitmap;
    v31 = EngCreateBitmap(v29, 0, v28, 0, 0LL);
    v32 = EngCreateBitmap(psoDest->sizlBitmap, 0, psoDest->iBitmapFormat, 0, 0LL);
    v59 = (HSURF)v32;
    v33 = (HSURF)v32;
    if ( !v30 || !v31 || !v32 )
      DbgPrint("hsurf1 == 0 || hsurf2 == 0 || hsurf3 == 0\n");
    v34 = EngLockSurface(v30);
    v35 = EngLockSurface((HSURF)v31);
    v36 = EngLockSurface(v33);
    v48 = 0;
    v38 = v36;
    if ( v34 )
    {
      if ( v35 )
      {
        if ( v36 )
        {
          pptlSrc = 0LL;
          v60 = (XLATEOBJ *)((char *)Gre::Base::Globals(v37) + 6896);
          EngCopyBits(v38, psoDest, 0LL, v60, &v64, &pptlSrc);
          memset_0(v34->pvBits, 0, v34->cjBits);
          memset_0(v35->pvBits, 0, v34->cjBits);
          v46 = 0;
          v47[0] = EngStretchBltOld(psoDest, v50, v51, v52, v53, v56, v55, v57, v58, v54, iMode, &v46);
          if ( v46 )
          {
            v39 = v60;
            v57 = &v66;
            v58 = &v65;
LABEL_13:
            EngCopyBits(v34, psoDest, 0LL, 0LL, &v64, &pptlSrc);
            if ( ((__int64)psoDest[1].hsurf & 0x400) != 0 )
              (*((void (__fastcall **)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))hdev + 352))(
                psoDest,
                v38,
                0LL,
                v39,
                &v64,
                &pptlSrc);
            else
              ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                psoDest,
                v38,
                0LL,
                v39,
                &v64,
                &pptlSrc);
            v40 = EngStretchBltNew(psoDest, v50, v51, v52, v53, v56, v55, &v66, &v65, v54, iMode);
            if ( v47[0] != v40 )
              DbgPrint("bOld ^ bNew\n");
            EngCopyBits(v35, psoDest, 0LL, v39, &v64, &pptlSrc);
            pvBits = v34->pvBits;
            v42 = 0LL;
            v43 = v35->pvBits;
            *(_QWORD *)v47 = pvBits;
            v62 = v43;
            while ( (unsigned int)v42 < v34->cjBits )
            {
              if ( pvBits[v42] != v43[v42] )
              {
                DbgPrint("memcmp failed\n");
                v44 = v48 + 1;
                v48 = v44;
                if ( v44 == 1 )
                {
                  __debugbreak();
                  if ( ((__int64)psoDest[1].hsurf & 0x400) != 0 )
                    v45 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 352);
                  else
                    v45 = EngCopyBits;
                  v39 = v60;
                  ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))v45)(
                    psoDest,
                    v38,
                    0LL,
                    v60,
                    &v64,
                    &pptlSrc);
                  memset_0(v34->pvBits, 0, v34->cjBits);
                  memset_0(v35->pvBits, 0, v34->cjBits);
                  v46 = 0;
                  v47[0] = EngStretchBltOld(psoDest, v50, v51, v52, v53, v56, v55, &v66, &v65, v54, iMode, &v46);
                  if ( v46 )
                    goto LABEL_13;
                  break;
                }
                if ( v44 == 2 )
                {
                  __debugbreak();
                  break;
                }
                pvBits = *(_BYTE **)v47;
              }
              v43 = v62;
              v42 = (unsigned int)(v42 + 1);
            }
            v33 = v59;
          }
        }
      }
      EngUnlockSurface(v34);
    }
    if ( v35 )
      EngUnlockSurface(v35);
    if ( v38 )
      EngUnlockSurface(v38);
    if ( hsurf )
      EngDeleteSurface(hsurf);
    if ( v31 )
      EngDeleteSurface((HSURF)v31);
    if ( v33 )
      EngDeleteSurface(v33);
    v18 = v61;
    v12 = v53;
    v11 = v52;
    v13 = v51;
    v15 = v50;
    v16 = v58;
    v14 = v57;
  }
  if ( *(_DWORD *)(v18 + 23416) )
    return EngStretchBltNew(psoDest, v15, v13, v11, v12, v56, v55, v14, v16, v54, iMode);
  v47[0] = 0;
  return EngStretchBltOld(psoDest, v15, v13, v11, v12, v56, v55, v14, v16, v54, iMode, v47);
}
