/*
 * XREFs of EngGradientFill @ 0x1C00CEFD0
 * Callers:
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02951C0 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0299580 (-BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RE.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C029BD20 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02A3450 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     NtGdiEngGradientFill @ 0x1C02B27D0 (NtGdiEngGradientFill.c)
 * Callees:
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00CF270 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00CF3C0 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C014C640 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngGradientFill(
        SURFOBJ *psoDest,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  unsigned __int64 v12; // rsi
  int v13; // r14d
  RECTL v14; // xmm0
  LONG left; // eax
  LONG right; // ecx
  LONG v17; // eax
  LONG top; // ecx
  LONG v19; // eax
  LONG bottom; // ecx
  LONG v21; // eax
  struct SURFACE *v22; // rax
  struct SURFACE *v23; // r13
  int v24; // eax
  unsigned __int64 v25; // rcx
  BOOL v26; // r15d
  LONG v28; // edx
  LONG v29; // r8d
  TRIVERTEX *v30; // rax
  __int64 v31; // rcx
  bool v32; // zf
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  LONG v34; // ecx
  LONG v35; // edx
  __int64 v36; // rax
  size_t Size; // [rsp+28h] [rbp-99h]
  int v38; // [rsp+50h] [rbp-71h]
  struct _XLATEOBJ *v39; // [rsp+58h] [rbp-69h] BYREF
  struct _GRADIENT_RECT *v40; // [rsp+60h] [rbp-61h]
  __int64 v41; // [rsp+68h] [rbp-59h] BYREF
  char v42; // [rsp+70h] [rbp-51h]
  int v43; // [rsp+74h] [rbp-4Dh]
  __int64 v44; // [rsp+78h] [rbp-49h] BYREF
  struct _RECTL *v45; // [rsp+80h] [rbp-41h]
  struct _RECTL v46; // [rsp+90h] [rbp-31h] BYREF
  RECTL v47; // [rsp+A0h] [rbp-21h] BYREF

  v40 = (struct _GRADIENT_RECT *)pMesh;
  v39 = pxlo;
  v45 = prclExtents;
  v12 = (unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL);
  v38 = 0;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v13 = 0;
  v44 = *(_QWORD *)(v12 + 0x30);
  PDEVOBJ::vSync((PDEVOBJ *)&v44, psoDest, 0LL, 0);
  v14 = *prclExtents;
  v47 = *prclExtents;
  if ( pco && pco->iDComplexity )
  {
    left = v47.left;
    if ( v47.left < pco->rclBounds.left )
      left = pco->rclBounds.left;
    right = pco->rclBounds.right;
    v47.left = left;
    v17 = v47.right;
    if ( v47.right > right )
      v17 = right;
    top = pco->rclBounds.top;
    v47.right = v17;
    v19 = v47.top;
    if ( v47.top < top )
      v19 = top;
    bottom = pco->rclBounds.bottom;
    v47.top = v19;
    v21 = v47.bottom;
    if ( v47.bottom > bottom )
      v21 = bottom;
    v47.bottom = v21;
    v14 = v47;
  }
  v46 = v14;
  if ( pco && pco->iDComplexity >= 2u )
    v13 = 1;
  v22 = psSetupDstSurface((struct SURFACE *)v12, &v46, (struct SURFMEM *)&v41, v13, ulMode > 1);
  v23 = v22;
  if ( v22 )
  {
    if ( v22 != (struct SURFACE *)v12 )
    {
      v28 = v47.top;
      v29 = v47.left;
      v38 = 1;
      if ( nVertex )
      {
        v30 = pVertex;
        v31 = nVertex;
        do
        {
          v30->x -= v29;
          v30->y -= v28;
          ++v30;
          --v31;
        }
        while ( v31 );
      }
      pptlDitherOrg->x += v29;
      pptlDitherOrg->y += v28;
    }
    if ( ulMode == 2 )
    {
      LODWORD(Size) = nMesh;
      v24 = bTriangleMesh(
              v23,
              v39,
              pVertex,
              nVertex,
              (struct _GRADIENT_TRIANGLE *)v40,
              Size,
              2u,
              &v46,
              v45,
              pptlDitherOrg);
    }
    else
    {
      v24 = bRectangleMesh(v23, v39, pVertex, nVertex, v40, nMesh, ulMode, &v46, pptlDitherOrg);
    }
    v25 = 0LL;
    v26 = v24;
    if ( v38 )
    {
      v32 = (*(_DWORD *)(v12 + 112) & 0x400) == 0;
      v39 = 0LL;
      if ( v32 )
        v33 = EngCopyBits;
      else
        v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v12 + 48) + 2840LL);
      if ( v12 )
        v25 = v12 + 24;
      ((void (__fastcall *)(unsigned __int64, char *, CLIPOBJ *, XLATEOBJ *const, RECTL *, struct _XLATEOBJ **))v33)(
        v25,
        (char *)v23 + 24,
        pco,
        xloIdent,
        &v47,
        &v39);
      v34 = v47.top;
      v35 = v47.left;
      if ( nVertex )
      {
        v36 = nVertex;
        do
        {
          pVertex->x += v35;
          pVertex->y += v34;
          ++pVertex;
          --v36;
        }
        while ( v36 );
      }
      pptlDitherOrg->x -= v35;
      pptlDitherOrg->y -= v34;
    }
  }
  else
  {
    EngSetLastError(8u);
    v26 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v41);
  return v26;
}
