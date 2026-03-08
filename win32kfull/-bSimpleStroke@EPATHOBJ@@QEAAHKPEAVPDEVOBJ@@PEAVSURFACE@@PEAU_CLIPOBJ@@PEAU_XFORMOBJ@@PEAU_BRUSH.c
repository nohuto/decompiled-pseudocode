/*
 * XREFs of ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEBU_LINEATTRS@@K@Z @ 0x1C0287B9C
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEBU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0287F9C (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0288DC0 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C02A2214 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     EngStrokePath @ 0x1C000C6E0 (EngStrokePath.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C014D8F6 (-bSubOverflow@@YAHJJ@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C0150DA6 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0287744 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0287840 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0289008 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEB.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleStroke(
        PATHOBJ *ppo,
        char a2,
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
  char v12; // r15
  struct PDEVOBJ *v14; // r12
  int v15; // eax
  __int64 v16; // r10
  int v17; // edi
  int v18; // eax
  __int64 v19; // r9
  __m128i *v20; // r10
  CLIPOBJ *v22; // r15
  int v23; // r12d
  __int64 (__fastcall *v24)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  int v25; // r15d
  __int64 (__fastcall *v26)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  _BYTE v27[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v28[32]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v29; // [rsp+90h] [rbp-38h]

  v10 = ppo[1];
  memset(v27, 0, sizeof(v27));
  v12 = a2;
  v14 = a3;
  LOBYTE(v15) = bSubOverflow(*(_DWORD *)(*(_QWORD *)&v10 + 56LL), *(_DWORD *)(*(_QWORD *)&v10 + 48LL));
  v17 = 0;
  if ( !v15 )
  {
    LOBYTE(v18) = bSubOverflow(*(_DWORD *)(v16 + 60), *(_DWORD *)(v16 + 52));
    if ( !v18
      && _mm_cvtsi128_si32(_mm_srli_si128(v20[3], 8)) - v20[3].m128i_i32[0] >= 0
      && (int)(_mm_srli_si128(v20[48LL], 8).m128i_i32[1] - HIDWORD(v20[3].m128i_i64[0])) >= 0 )
    {
      if ( !ppo->cCurves )
        return 1;
      ++*(_DWORD *)(v19 + 92);
      if ( (*(_DWORD *)(v19 + 112) & 0x20) != 0 )
      {
        v22 = pco;
        PRECOMPUTE::vInit(v28, a4, v14, ppo, pco, pxo, plineattrs, mix, 0, 0);
        if ( !v29 )
        {
          EngSetLastError(8u);
LABEL_33:
          PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
          return v17;
        }
        if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
        {
          v23 = -1;
          if ( (ppo->fl & 1) != 0 )
          {
            if ( (a2 & 1) != 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
                PushThreadGuardedObject(v27, ppo, vCleanupPathStackObj);
              v24 = *(__int64 (__fastcall **)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2776LL);
              if ( v24 )
                v25 = v24(
                        ((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL),
                        ppo,
                        pco,
                        pxo,
                        pbo,
                        pptlBrushOrg,
                        plineattrs,
                        mix);
              else
                v25 = -1;
              if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
                PopThreadGuardedObject(v27);
              if ( v25 == 1 )
                goto LABEL_31;
              if ( v25 == -1 )
                goto LABEL_33;
              v22 = pco;
            }
            if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
              goto LABEL_33;
          }
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PushThreadGuardedObject(v27, ppo, vCleanupPathStackObj);
          v26 = *(__int64 (__fastcall **)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a3 + 2776LL);
          if ( v26 )
            v23 = v26(
                    ((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL),
                    ppo,
                    v22,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
            PopThreadGuardedObject(v27);
          if ( v23 == 1 )
          {
LABEL_31:
            v17 = 1;
            goto LABEL_33;
          }
          if ( v23 == -1 )
            goto LABEL_33;
          v14 = a3;
        }
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v28);
        v12 = a2;
      }
      if ( (plineattrs->fl & 1) == 0 )
        return EngStrokePath(
                 (SURFOBJ *)(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL)),
                 ppo,
                 pco,
                 pxo,
                 pbo,
                 pptlBrushOrg,
                 plineattrs,
                 mix);
      if ( EPATHOBJ::bWiden((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, pxo, plineattrs) )
        return EPATHOBJ::bSimpleFill(ppo, v12, v14, a4, pco, pbo, pptlBrushOrg, mix, 2u);
    }
  }
  return 0;
}
