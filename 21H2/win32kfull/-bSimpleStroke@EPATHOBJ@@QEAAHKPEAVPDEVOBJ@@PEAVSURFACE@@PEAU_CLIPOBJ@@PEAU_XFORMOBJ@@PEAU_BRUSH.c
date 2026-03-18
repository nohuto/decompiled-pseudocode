/*
 * XREFs of ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0133FC4
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0282DD0 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C02833F0 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C029647C (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012FEB0 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngStrokePath @ 0x1C0132A40 (EngStrokePath.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0134AA8 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0134BF8 (-bSubOverflow@@YAHJJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0136020 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014D744 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

int __fastcall EPATHOBJ::bSimpleStroke(
        PATHOBJ *ppo,
        unsigned int a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  PATHOBJ v10; // r10
  unsigned int v11; // r15d
  struct PDEVOBJ *v14; // r12
  __int64 v15; // r10
  int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i *v19; // r10
  int v20; // eax
  CLIPOBJ *v21; // r15
  int v23; // r12d
  __int64 (__fastcall *v24)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  __int64 (__fastcall *v25)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  int v26; // r15d
  _OWORD v27[2]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v28[32]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v29; // [rsp+90h] [rbp-48h]

  v10 = ppo[1];
  memset(v27, 0, sizeof(v27));
  v11 = a2;
  v14 = a3;
  v16 = 0;
  if ( (unsigned int)bSubOverflow(*(_DWORD *)(*(_QWORD *)&v10 + 56LL), *(_DWORD *)(*(_QWORD *)&v10 + 48LL))
    || (unsigned int)bSubOverflow(*(_DWORD *)(v15 + 60), *(_DWORD *)(v15 + 52))
    || _mm_cvtsi128_si32(_mm_srli_si128(v19[3], 8)) - v19[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v19[48LL], 8).m128i_i32[1] - HIDWORD(v19[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( ppo->cCurves )
  {
    v20 = *(_DWORD *)(v18 + 112);
    ++*(_DWORD *)(v18 + 92);
    if ( (v20 & 0x20) == 0 )
      goto LABEL_10;
    v21 = pco;
    PRECOMPUTE::vInit(v28, a4, v17, ppo, pco, pxo, plineattrs, mix, 0, 0);
    if ( !v29 )
    {
      EngSetLastError(8u);
      goto LABEL_21;
    }
    if ( (plineattrs->fl & 1) != 0 && (a2 & 2) == 0 )
    {
LABEL_9:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
      v11 = a2;
LABEL_10:
      if ( (plineattrs->fl & 1) == 0 )
        return EngStrokePath((SURFOBJ *)((char *)a4 + 24), ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
      if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, pxo, plineattrs) )
        return EPATHOBJ::bSimpleFill(ppo, v11, v14, a4, pco, pbo, pptlBrushOrg, mix, 2u);
      return 0;
    }
    v23 = -1;
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
          PushThreadGuardedObject(v27, ppo, vCleanupPathStackObj);
        v25 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2776LL);
        if ( v25 )
          v26 = v25((char *)a4 + 24, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
        else
          v26 = -1;
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
          PopThreadGuardedObject(v27);
        if ( v26 == 1 )
          goto LABEL_20;
        if ( v26 == -1 )
          goto LABEL_21;
        v21 = pco;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_21;
    }
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
      PushThreadGuardedObject(v27, ppo, vCleanupPathStackObj);
    v24 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2776LL);
    if ( v24 )
      v23 = v24((char *)a4 + 24, ppo, v21, pxo, pbo, pptlBrushOrg, plineattrs, mix);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
      PopThreadGuardedObject(v27);
    if ( v23 != 1 )
    {
      if ( v23 != -1 )
      {
        v14 = a3;
        goto LABEL_9;
      }
LABEL_21:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
      return v16;
    }
LABEL_20:
    v16 = 1;
    goto LABEL_21;
  }
  return 1;
}
