/*
 * XREFs of ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0282DD0
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0133FC4 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0134AA8 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0134BF8 (-bSubOverflow@@YAHJJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0136020 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014D744 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     EngStrokeAndFillPath @ 0x1C02856C0 (EngStrokeAndFillPath.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleStrokeAndFill(
        PATHOBJ *ppo,
        unsigned int a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  PATHOBJ v12; // r10
  MIX v13; // r15d
  struct PDEVOBJ *v16; // r13
  __int64 v17; // r10
  int v18; // ebx
  PDEVOBJ *v19; // r8
  __int64 v20; // r9
  __m128i *v21; // r10
  char v22; // r11
  int v24; // eax
  int v25; // edi
  CLIPOBJ *v26; // r14
  int v27; // r13d
  __int64 (__fastcall *v28)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v29; // r14d
  __int64 (__fastcall *v30)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v31; // r8d
  MIX v32; // ecx
  _OWORD v33[2]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v34[32]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-48h]

  v12 = ppo[1];
  v13 = mixFill;
  memset(v33, 0, sizeof(v33));
  v16 = a3;
  v18 = 0;
  if ( bSubOverflow(*(_DWORD *)(*(_QWORD *)&v12 + 56LL), *(_DWORD *)(*(_QWORD *)&v12 + 48LL))
    || bSubOverflow(*(_DWORD *)(v17 + 60), *(_DWORD *)(v17 + 52))
    || _mm_cvtsi128_si32(_mm_srli_si128(v21[3], 8)) - v21[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v21[48LL], 8).m128i_i32[1] - HIDWORD(v21[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  v24 = *(_DWORD *)(v20 + 112);
  v25 = 1;
  ++*(_DWORD *)(v20 + 92);
  if ( (v24 & 0x80u) != 0 )
  {
    v26 = pco;
    PRECOMPUTE::vInit(
      (__int64)v34,
      a4,
      v19,
      (struct EPATHOBJ *)ppo,
      (__int64)pco,
      pxo,
      plineattrs,
      mixFill,
      flOptions,
      2);
    if ( !v35 )
    {
      EngSetLastError(8u);
LABEL_33:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
      return v18;
    }
    if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
    {
      v27 = -1;
      if ( (ppo->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PushThreadGuardedObject(v33, ppo, vCleanupPathStackObj);
          v28 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2792LL);
          if ( v28 )
            v29 = v28((char *)a4 + 24, ppo, pco, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
          else
            v29 = -1;
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PopThreadGuardedObject(v33);
          if ( v29 == 1 )
            goto LABEL_31;
          if ( v29 == -1 )
            goto LABEL_33;
          v26 = pco;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
          goto LABEL_33;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PushThreadGuardedObject(v33, ppo, vCleanupPathStackObj);
      v30 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2792LL);
      if ( v30 )
        v27 = v30((char *)a4 + 24, ppo, v26, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
        PopThreadGuardedObject(v33);
      if ( v27 == 1 )
      {
LABEL_31:
        v18 = 1;
        goto LABEL_33;
      }
      if ( v27 == -1 )
        goto LABEL_33;
      v16 = a3;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v34);
    v22 = a2;
  }
  if ( (plineattrs->fl & 1) != 0
    && ((unsigned __int8)mixFill != 13 || (unsigned int)(*(_DWORD *)(*((_QWORD *)a4 + 6) + 2108LL) - 1) > 1) )
  {
    return EngStrokeAndFillPath(
             (SURFOBJ *)((char *)a4 + 24),
             ppo,
             pco,
             pxo,
             pboStroke,
             plineattrs,
             pbo,
             pptlBrushOrg,
             mixFill,
             flOptions);
  }
  v31 = (unsigned __int8)mixFill << 8;
  v32 = mixFill;
  if ( !_bittest((const signed __int32 *)&pbo[5], 0xFu) )
    v32 = v31 | (unsigned __int8)mixFill;
  if ( (pboStroke[5].iSolidColor & 0x8000) == 0 )
    v13 = v31 | (unsigned __int8)mixFill;
  if ( !EPATHOBJ::bSimpleFill(ppo, v22, v16, a4, pco, pbo, pptlBrushOrg, v32, flOptions)
    || !EPATHOBJ::bSimpleStroke(ppo, a2, v16, a4, pco, pxo, pboStroke, pptlBrushOrg, plineattrs, v13) )
  {
    return 0;
  }
  return v25;
}
