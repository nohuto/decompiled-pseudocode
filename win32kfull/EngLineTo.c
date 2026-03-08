/*
 * XREFs of EngLineTo @ 0x1C028FDB0
 * Callers:
 *     W32kCddLineTo @ 0x1C0272D60 (W32kCddLineTo.c)
 *     ?BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A44B0 (-BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A76B0 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02B2700 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     NtGdiEngLineTo @ 0x1C02CC710 (NtGdiEngLineTo.c)
 *     OffLineTo @ 0x1C02EA5E4 (OffLineTo.c)
 * Callees:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C000C938 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     EngDeletePath @ 0x1C014D9C0 (EngDeletePath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0287744 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0289008 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEB.c)
 *     EngCreatePath @ 0x1C0289A20 (EngCreatePath.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C02FF1A8 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
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
  PATHOBJ *Path; // rax
  PATHOBJ *v14; // rsi
  int v16; // eax
  PATHOBJ *v17; // rax
  struct REGION *v18; // [rsp+50h] [rbp-B0h] BYREF
  POINTFIX ptfx; // [rsp+58h] [rbp-A8h] BYREF
  POINTFIX pptfx; // [rsp+60h] [rbp-A0h] BYREF
  SURFOBJ *v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  struct _LINEATTRS v23; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v24[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-40h]
  _BYTE v26[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v27; // [rsp+108h] [rbp+8h]
  __int64 v28; // [rsp+120h] [rbp+20h]
  int v29; // [rsp+128h] [rbp+28h]
  int v30; // [rsp+150h] [rbp+50h]
  __int64 v31; // [rsp+160h] [rbp+60h]

  v21 = pso;
  ptfx.y = 16 * y1;
  v11 = (unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL);
  v12 = 0;
  pptfx.x = 16 * x2;
  ptfx.x = 16 * x1;
  pptfx.y = 16 * y2;
  if ( *(_WORD *)(v11 + 0x64) )
  {
    memset(&v23, 0, sizeof(v23));
    v23.elWidth.l = 1;
    Path = EngCreatePath();
    v14 = Path;
    if ( Path )
    {
      if ( !PATHOBJ_bMoveTo(Path, ptfx) || !PATHOBJ_bPolyLineTo(v14, &pptfx, 1u) )
        goto LABEL_26;
      v22 = *(_QWORD *)(v11 + 48);
      v28 = 0LL;
      v29 = 0;
      v30 = 1;
      v31 = 0LL;
      v27 = 0LL;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v18);
      if ( !pco )
      {
        if ( !v18 )
        {
LABEL_17:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
LABEL_26:
          EngDeletePath(v14);
          return v12;
        }
        if ( (unsigned int)bUMPDSecurityGateEx() && !prclBounds )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
          return 0;
        }
        RGNOBJ::vSet((RGNOBJ *)&v18, prclBounds);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v26, v18, (struct ERECTL *)prclBounds, 0);
        pco = (CLIPOBJ *)v26;
      }
      PRECOMPUTE::vInit(
        (__int64)v24,
        (SURFACE *)v11,
        (PDEVOBJ *)&v22,
        (struct EPATHOBJ *)v14,
        (__int64)pco,
        0LL,
        &v23,
        mix,
        0,
        0);
      if ( v25 )
      {
        if ( (*(_DWORD *)(v11 + 112) & 0x20) != 0 )
          v16 = (*(__int64 (__fastcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))(v22 + 2776))(
                  v21,
                  v14,
                  pco,
                  0LL,
                  pbo,
                  0LL,
                  &v23,
                  mix);
        else
          v16 = ((__int64 (__fastcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))EngStrokePath)(
                  v21,
                  v14,
                  pco,
                  0LL,
                  pbo,
                  0LL,
                  &v23,
                  mix);
        v12 = v16;
      }
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
      goto LABEL_17;
    }
  }
  else
  {
    v21 = *(SURFOBJ **)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30);
    PDEVOBJ::vSync((PDEVOBJ *)&v21, pso, 0LL, 0);
    if ( pco && pco->iDComplexity == 3 || mix != 3341 )
    {
      memset(&v23, 0, sizeof(v23));
      v17 = EngCreatePath();
      v14 = v17;
      if ( v17 )
      {
        if ( PATHOBJ_bMoveTo(v17, ptfx) && PATHOBJ_bPolyLineTo(v14, &pptfx, 1u) )
          v12 = bStrokeCosmetic((struct SURFACE *)v11, v14, pco, pbo, &v23, mix);
        goto LABEL_26;
      }
    }
    else
    {
      vSolidLine((struct SURFACE *)v11, 0LL, &ptfx, pco, pbo->iSolidColor);
      return 1;
    }
  }
  return v12;
}
