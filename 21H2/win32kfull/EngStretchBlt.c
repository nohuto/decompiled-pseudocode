/*
 * XREFs of EngStretchBlt @ 0x1C00B1650
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0019280 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00AD848 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     EngStretchBltROP @ 0x1C01045D0 (EngStretchBltROP.c)
 *     NtGdiEngStretchBlt @ 0x1C013D2A0 (NtGdiEngStretchBlt.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0157AC0 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028FE10 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0295CC0 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C029CD20 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02A43A0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 * Callees:
 *     EngCopyBits @ 0x1C007EB40 (EngCopyBits.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00B174C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028E4F0 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
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
  RECTL *v12; // rcx
  RECTL *v13; // rax
  POINTL *v14; // rdx
  RECTL v16; // xmm0
  RECTL v17; // xmm1
  ULONG iBitmapFormat; // r8d
  SIZEL sizlBitmap; // rcx
  HDEV hdev; // rbx
  LONG cy; // eax
  HSURF Bitmap; // rax
  ULONG v23; // r8d
  SIZEL v24; // rcx
  HSURF v25; // rsi
  HBITMAP v26; // r13
  HBITMAP v27; // rax
  HSURF v28; // r15
  SURFOBJ *v29; // rsi
  SURFOBJ *v30; // r14
  SURFOBJ *v31; // rax
  SURFOBJ *v32; // r12
  int v33; // eax
  _BYTE *pvBits; // rdx
  __int64 v35; // r15
  _BYTE *v36; // rax
  int v37; // eax
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+64h] [rbp-9Ch]
  struct _POINTL *v41; // [rsp+68h] [rbp-98h]
  _BYTE *v42; // [rsp+70h] [rbp-90h]
  struct _RECTL *v43; // [rsp+78h] [rbp-88h]
  struct _RECTL *v44; // [rsp+80h] [rbp-80h]
  struct _POINTL *v45; // [rsp+88h] [rbp-78h]
  struct tagCOLORADJUSTMENT *v46; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v47; // [rsp+98h] [rbp-68h]
  struct _CLIPOBJ *v48; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v49; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v50; // [rsp+B0h] [rbp-50h]
  HSURF v51; // [rsp+B8h] [rbp-48h]
  _BYTE *v52; // [rsp+C0h] [rbp-40h]
  HSURF hsurf; // [rsp+C8h] [rbp-38h]
  RECTL v54; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v55; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v56; // [rsp+F0h] [rbp-10h] BYREF

  v12 = prclSrc;
  v47 = pxlo;
  v46 = pca;
  v45 = pptlHTOrg;
  v13 = prclDest;
  v50 = psoSrc;
  v14 = pptlMask;
  v43 = prclDest;
  v48 = pco;
  v49 = psoMask;
  v44 = prclSrc;
  v41 = pptlMask;
  if ( dword_1C0341AD4 )
  {
    v16 = *prclDest;
    v17 = *prclSrc;
    iBitmapFormat = psoDest->iBitmapFormat;
    sizlBitmap = psoDest->sizlBitmap;
    hdev = psoDest->hdev;
    v54.right = psoDest->sizlBitmap.cx;
    cy = psoDest->sizlBitmap.cy;
    v56 = v16;
    v54.bottom = cy;
    v55 = v17;
    *(_QWORD *)&v54.left = 0LL;
    Bitmap = (HSURF)EngCreateBitmap(sizlBitmap, 0, iBitmapFormat, 0, 0LL);
    v23 = psoDest->iBitmapFormat;
    v24 = psoDest->sizlBitmap;
    v25 = Bitmap;
    hsurf = Bitmap;
    v26 = EngCreateBitmap(v24, 0, v23, 0, 0LL);
    v27 = EngCreateBitmap(psoDest->sizlBitmap, 0, psoDest->iBitmapFormat, 0, 0LL);
    v51 = (HSURF)v27;
    v28 = (HSURF)v27;
    if ( !v25 || !v26 || !v27 )
      DbgPrint("hsurf1 == 0 || hsurf2 == 0 || hsurf3 == 0\n");
    v29 = EngLockSurface(v25);
    v30 = EngLockSurface((HSURF)v26);
    v31 = EngLockSurface(v28);
    v40 = 0;
    v32 = v31;
    if ( v29 )
    {
      if ( v30 )
      {
        if ( v31 )
        {
          EngCopyBits(v31, psoDest, 0LL, xloIdent, &v54, &gptlZero);
          memset(v29->pvBits, 0, v29->cjBits);
          memset(v30->pvBits, 0, v29->cjBits);
          v39 = 0;
          LODWORD(v42) = EngStretchBltOld(psoDest, v50, v49, v48, v47, v46, v45, v43, v44, v41, iMode, &v39);
          if ( v39 )
          {
            v43 = &v56;
            v44 = &v55;
LABEL_12:
            EngCopyBits(v29, psoDest, 0LL, 0LL, &v54, &gptlZero);
            if ( ((__int64)psoDest[1].hsurf & 0x400) != 0 )
              (*((void (__fastcall **)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, POINTL *))hdev + 355))(
                psoDest,
                v32,
                0LL,
                xloIdent,
                &v54,
                &gptlZero);
            else
              ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, POINTL *))EngCopyBits)(
                psoDest,
                v32,
                0LL,
                xloIdent,
                &v54,
                &gptlZero);
            v33 = EngStretchBltNew(psoDest, v50, v49, v48, v47, v46, v45, &v56, &v55, v41, iMode);
            if ( (unsigned int)v42 != v33 )
              DbgPrint("bOld ^ bNew\n");
            EngCopyBits(v30, psoDest, 0LL, xloIdent, &v54, &gptlZero);
            pvBits = v29->pvBits;
            v35 = 0LL;
            v36 = v30->pvBits;
            v42 = pvBits;
            v52 = v36;
            while ( (unsigned int)v35 < v29->cjBits )
            {
              if ( pvBits[v35] != v36[v35] )
              {
                DbgPrint("memcmp failed\n");
                v37 = v40 + 1;
                v40 = v37;
                if ( v37 == 1 )
                {
                  __debugbreak();
                  if ( ((__int64)psoDest[1].hsurf & 0x400) != 0 )
                    v38 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 355);
                  else
                    v38 = EngCopyBits;
                  ((void (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, POINTL *))v38)(
                    psoDest,
                    v32,
                    0LL,
                    xloIdent,
                    &v54,
                    &gptlZero);
                  memset(v29->pvBits, 0, v29->cjBits);
                  memset(v30->pvBits, 0, v29->cjBits);
                  v39 = 0;
                  LODWORD(v42) = EngStretchBltOld(psoDest, v50, v49, v48, v47, v46, v45, &v56, &v55, v41, iMode, &v39);
                  if ( v39 )
                    goto LABEL_12;
                  break;
                }
                if ( v37 == 2 )
                {
                  __debugbreak();
                  break;
                }
                pvBits = v42;
              }
              v36 = v52;
              v35 = (unsigned int)(v35 + 1);
            }
            v28 = v51;
          }
        }
      }
      EngUnlockSurface(v29);
    }
    if ( v30 )
      EngUnlockSurface(v30);
    if ( v32 )
      EngUnlockSurface(v32);
    if ( hsurf )
      EngDeleteSurface(hsurf);
    if ( v26 )
      EngDeleteSurface((HSURF)v26);
    if ( v28 )
      EngDeleteSurface(v28);
    v14 = v41;
    v12 = v44;
    v13 = v43;
  }
  return EngStretchBltNew(psoDest, v50, v49, v48, v47, v46, v45, v13, v12, v14, iMode);
}
