/*
 * XREFs of EngLineTo @ 0x1C01497F0
 * Callers:
 *     W32kCddLineTo @ 0x1C014C460 (W32kCddLineTo.c)
 *     OffLineTo @ 0x1C01516AC (OffLineTo.c)
 *     ?BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0299DB0 (-BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C029C5A0 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A3DB0 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     NtGdiEngLineTo @ 0x1C02B3520 (NtGdiEngLineTo.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CFBA8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C014611C (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C0149910 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C014A2CC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C015AA94 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     EngCreatePath @ 0x1C0286A10 (EngCreatePath.c)
 *     EngDeletePath @ 0x1C0286AA0 (EngDeletePath.c)
 */

BOOL __stdcall EngLineTo(
        SURFOBJ *pso,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  unsigned __int64 v11; // r14
  int v12; // ebx
  PATHOBJ *v14; // rax
  PATHOBJ *v15; // rsi
  int v16; // eax
  PATHOBJ *Path; // rax
  POINTFIX ptfx; // [rsp+50h] [rbp-B0h] BYREF
  POINTFIX pptfx; // [rsp+58h] [rbp-A8h] BYREF
  SURFOBJ *v20; // [rsp+60h] [rbp-A0h] BYREF
  struct REGION *v21[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS v23; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-38h]
  _BYTE v26[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v27; // [rsp+108h] [rbp+8h]
  __int64 v28; // [rsp+120h] [rbp+20h]
  int v29; // [rsp+128h] [rbp+28h]
  int v30; // [rsp+150h] [rbp+50h]
  __int64 v31; // [rsp+160h] [rbp+60h]

  v20 = pso;
  ptfx.y = 16 * y1;
  v11 = (unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL);
  v12 = 0;
  pptfx.x = 16 * x2;
  ptfx.x = 16 * x1;
  pptfx.y = 16 * y2;
  if ( !*(_WORD *)(v11 + 0x64) )
  {
    v20 = *(SURFOBJ **)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30);
    PDEVOBJ::vSync((PDEVOBJ *)&v20, pso, 0LL, 0);
    if ( (!pco || pco->iDComplexity != 3) && mix == 3341 )
    {
      vSolidLine((struct SURFACE *)v11, 0LL, &ptfx, pco, pbo->iSolidColor);
      return 1;
    }
    memset(&v23, 0, sizeof(v23));
    Path = EngCreatePath();
    v15 = Path;
    if ( !Path )
      return v12;
    if ( PATHOBJ_bMoveTo(Path, ptfx) )
    {
      if ( PATHOBJ_bPolyLineTo(v15, &pptfx, 1u) )
        v12 = bStrokeCosmetic((struct SURFACE *)v11, v15, pco, pbo, &v23, mix);
    }
LABEL_30:
    EngDeletePath(v15);
    return v12;
  }
  memset(&v23, 0, sizeof(v23));
  v23.elWidth.l = 1;
  v14 = EngCreatePath();
  v15 = v14;
  if ( !v14 )
    return v12;
  if ( !PATHOBJ_bMoveTo(v14, ptfx) || !PATHOBJ_bPolyLineTo(v15, &pptfx, 1u) )
    goto LABEL_30;
  v22 = *(_QWORD *)(v11 + 48);
  v28 = 0LL;
  v29 = 0;
  v30 = 1;
  v31 = 0LL;
  v27 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v21);
  if ( pco )
    goto LABEL_19;
  if ( !v21[0] )
  {
LABEL_25:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
    goto LABEL_30;
  }
  if ( !bUMPDSecurityGateEx() || prclBounds )
  {
    RGNOBJ::vSet((RGNOBJ *)v21, prclBounds);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v26, v21[0], (struct ERECTL *)prclBounds, 0);
    pco = (CLIPOBJ *)v26;
LABEL_19:
    PRECOMPUTE::vInit(v24, v11, &v22, v15, pco, 0LL, &v23, mix, 0, 0);
    if ( v25 )
    {
      if ( (*(_DWORD *)(v11 + 112) & 0x20) != 0 )
        v16 = (*(__int64 (__fastcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))(v22 + 2800))(
                v20,
                v15,
                pco,
                0LL,
                pbo,
                0LL,
                &v23,
                mix);
      else
        v16 = ((__int64 (__fastcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))EngStrokePath)(
                v20,
                v15,
                pco,
                0LL,
                pbo,
                0LL,
                &v23,
                mix);
      v12 = v16;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
    goto LABEL_25;
  }
  if ( gfUMPDDebug )
    DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:EngLineTo:prclBounds == NULL\n", 732);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
  return 0;
}
