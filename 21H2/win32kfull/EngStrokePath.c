/*
 * XREFs of EngStrokePath @ 0x1C0132A40
 * Callers:
 *     W32kCddStrokePath @ 0x1C01329D0 (W32kCddStrokePath.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0133FC4 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     OffStrokePath @ 0x1C0138BB8 (OffStrokePath.c)
 *     EngStrokeAndFillPath @ 0x1C02856C0 (EngStrokeAndFillPath.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02939D0 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02991B0 (-BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PE.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C029BE30 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02A2C30 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     NtGdiEngStrokePath @ 0x1C02B2830 (NtGdiEngStrokePath.c)
 * Callees:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012FEB0 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0132BBC (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C0132CB4 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C01339D0 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     EngFillPath @ 0x1C0134C30 (EngFillPath.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  BOOL v11; // ebx
  unsigned __int64 v12; // rdi
  FLONG fl; // eax
  int v14; // eax
  __int64 (__fastcall *v16)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  POINTL *v17; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *pcoa; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v19[152]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *v20; // [rsp+F8h] [rbp-8h]
  int v21; // [rsp+100h] [rbp+0h]

  pcoa = pco;
  v17 = pptlBrushOrg;
  BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v19, pso, &pcoa);
  v11 = 0;
  if ( v21 )
  {
    v12 = (unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL);
    fl = ppo->fl;
    if ( (plineattrs->fl & 1) != 0 )
    {
      if ( (fl & 0x10) != 0 || (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, pxo, plineattrs) )
      {
        v14 = EngFillPath((SURFOBJ *)((v12 + 24) & -(__int64)(v12 != 0)), ppo, pcoa, pbo, v17, mix, 2u);
        goto LABEL_14;
      }
    }
    else if ( (fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
    {
      if ( *(_WORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x64) )
      {
        v16 = *(__int64 (__fastcall **)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30) + 2776LL);
        if ( !v16 )
          goto LABEL_15;
        v14 = v16((v12 + 24) & -(__int64)(v12 != 0), ppo, pcoa, pxo, pbo, v17, plineattrs, mix);
        goto LABEL_14;
      }
      v17 = *(POINTL **)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30);
      PDEVOBJ::vSync((PDEVOBJ *)&v17, pso, 0LL, 0);
      if ( (_BYTE)mix != 13
        || pcoa && pcoa->iDComplexity == 3
        || plineattrs->pstyle
        || (plineattrs->fl & 2) != 0
        || (*(_DWORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x70) & 0x200) != 0
        && (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30) + 40LL) & 0x8000) == 0 )
      {
        v14 = bStrokeCosmetic(
                (struct SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)),
                ppo,
                pcoa,
                pbo,
                plineattrs,
                mix);
LABEL_14:
        v11 = v14;
        goto LABEL_15;
      }
      vSolidLine(
        (struct SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)),
        ppo,
        0LL,
        pcoa,
        pbo->iSolidColor);
      v11 = 1;
    }
  }
LABEL_15:
  v17 = v20;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
  return v11;
}
