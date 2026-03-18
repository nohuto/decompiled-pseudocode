/*
 * XREFs of EngGradientFill @ 0x1C00093E0
 * Callers:
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0293210 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0298460 (-BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RE.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C029AC40 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02A1830 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     NtGdiEngGradientFill @ 0x1C02B18D0 (NtGdiEngGradientFill.c)
 * Callees:
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0009660 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C0009C88 (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0288570 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
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
  struct SURFACE *v15; // rax
  struct SURFACE *v16; // r13
  int v17; // eax
  unsigned __int64 v18; // rcx
  BOOL v19; // r12d
  LONG left; // eax
  LONG right; // ecx
  LONG v23; // eax
  LONG top; // ecx
  LONG v25; // eax
  LONG v26; // edx
  LONG v27; // r8d
  TRIVERTEX *v28; // rax
  __int64 v29; // rcx
  bool v30; // zf
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  LONG v32; // ecx
  LONG v33; // edx
  __int64 v34; // rax
  size_t Size; // [rsp+28h] [rbp-99h]
  int v36; // [rsp+50h] [rbp-71h]
  struct _XLATEOBJ *v37; // [rsp+58h] [rbp-69h] BYREF
  struct _GRADIENT_RECT *v38; // [rsp+60h] [rbp-61h]
  struct _RECTL v39; // [rsp+70h] [rbp-51h] BYREF
  __int64 v40; // [rsp+80h] [rbp-41h] BYREF
  char v41; // [rsp+88h] [rbp-39h]
  int v42; // [rsp+8Ch] [rbp-35h]
  __int64 v43; // [rsp+90h] [rbp-31h] BYREF
  struct _RECTL *v44; // [rsp+98h] [rbp-29h]
  RECTL v45; // [rsp+A0h] [rbp-21h] BYREF

  v38 = (struct _GRADIENT_RECT *)pMesh;
  v37 = pxlo;
  v44 = prclExtents;
  v12 = (unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL);
  v36 = 0;
  v40 = 0LL;
  v41 = 0;
  v42 = 0;
  v13 = 0;
  v43 = *(_QWORD *)(v12 + 0x30);
  PDEVOBJ::vSync((PDEVOBJ *)&v43, psoDest, 0LL, 0);
  v14 = *prclExtents;
  v45 = *prclExtents;
  if ( !pco || !pco->iDComplexity )
  {
LABEL_3:
    v39 = v14;
    if ( !pco )
      goto LABEL_6;
    goto LABEL_4;
  }
  left = v45.left;
  if ( v45.left < pco->rclBounds.left )
    left = pco->rclBounds.left;
  right = pco->rclBounds.right;
  v45.left = left;
  v23 = v45.right;
  if ( v45.right > right )
    v23 = right;
  top = pco->rclBounds.top;
  v45.right = v23;
  v25 = v45.top;
  if ( v45.top < top )
    v25 = top;
  v45.top = v25;
  if ( v45.bottom <= pco->rclBounds.bottom )
  {
    v14 = v45;
    goto LABEL_3;
  }
  v45.bottom = pco->rclBounds.bottom;
  v39 = v45;
LABEL_4:
  if ( pco->iDComplexity >= 2u )
    v13 = 1;
LABEL_6:
  v15 = psSetupDstSurface((struct SURFACE *)v12, &v39, (struct SURFMEM *)&v40, v13, ulMode > 1);
  v16 = v15;
  if ( v15 )
  {
    if ( v15 != (struct SURFACE *)v12 )
    {
      v26 = v45.top;
      v27 = v45.left;
      v36 = 1;
      if ( nVertex )
      {
        v28 = pVertex;
        v29 = nVertex;
        do
        {
          v28->x -= v27;
          v28->y -= v26;
          ++v28;
          --v29;
        }
        while ( v29 );
      }
      pptlDitherOrg->x += v27;
      pptlDitherOrg->y += v26;
    }
    if ( ulMode == 2 )
    {
      LODWORD(Size) = nMesh;
      v17 = bTriangleMesh(
              v16,
              v37,
              pVertex,
              nVertex,
              (struct _GRADIENT_TRIANGLE *)v38,
              Size,
              2u,
              &v39,
              v44,
              pptlDitherOrg);
    }
    else
    {
      v17 = bRectangleMesh(v16, v37, pVertex, nVertex, v38, nMesh, ulMode, &v39, pptlDitherOrg);
    }
    v18 = 0LL;
    v19 = v17;
    if ( v36 )
    {
      v30 = (*(_DWORD *)(v12 + 112) & 0x400) == 0;
      v37 = 0LL;
      if ( v30 )
        v31 = EngCopyBits;
      else
        v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v12 + 48) + 2816LL);
      if ( v12 )
        v18 = v12 + 24;
      ((void (__fastcall *)(unsigned __int64, char *, CLIPOBJ *, XLATEOBJ *const, RECTL *, struct _XLATEOBJ **))v31)(
        v18,
        (char *)v16 + 24,
        pco,
        xloIdent,
        &v45,
        &v37);
      v32 = v45.top;
      v33 = v45.left;
      if ( nVertex )
      {
        v34 = nVertex;
        do
        {
          pVertex->x += v33;
          pVertex->y += v32;
          ++pVertex;
          --v34;
        }
        while ( v34 );
      }
      pptlDitherOrg->x -= v33;
      pptlDitherOrg->y -= v32;
    }
  }
  else
  {
    EngSetLastError(8u);
    v19 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v40);
  return v19;
}
