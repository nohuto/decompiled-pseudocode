/*
 * XREFs of ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02A42B0
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C0004AA0 (EngGradientFill.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3984 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5660 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevGradientFill(
        struct _SURFOBJ *a1,
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
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v21; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h] BYREF
  struct SURFACE *v23; // [rsp+70h] [rbp-38h] BYREF

  v14 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v23, a1);
  if ( a1 )
  {
    v14 = EngGradientFill(a1, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    HDEV = UserGetHDEV(v15);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1768); i; i = (_QWORD *)*i )
        {
          v18 = i[6];
          v21 = v18;
          if ( v18 )
          {
            if ( (*(_DWORD *)(v18 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2096) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v18 + 1760) + 608LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v22,
                  (struct PDEVOBJ *)&v21,
                  a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v19 + 1760) + 608LL))(
                  a1,
                  pco,
                  pxlo,
                  pVertex,
                  nVertex,
                  pMesh,
                  nMesh,
                  prclExtents,
                  pptlDitherOrg,
                  ulMode);
                if ( v22 )
                  *(_WORD *)(v22 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  if ( v23 )
    bBmpMakeOpaque(v23);
  return v14;
}
