/*
 * XREFs of EngFillPath @ 0x1C0134C30
 * Callers:
 *     EngStrokePath @ 0x1C0132A40 (EngStrokePath.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0134AA8 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     EngStrokeAndFillPath @ 0x1C02856C0 (EngStrokeAndFillPath.c)
 *     ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02982C0 (-BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C029AA30 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A1630 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     NtGdiEngFillPath @ 0x1C02B16C0 (NtGdiEngFillPath.c)
 *     OffFillPath @ 0x1C02C7904 (OffFillPath.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C0134FF0 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0135014 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C01350E4 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C0135128 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     EngPaint @ 0x1C0135200 (EngPaint.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

BOOL __stdcall EngFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  BOOL v8; // edi
  __int64 p_hdev; // rax
  BOOL v12; // esi
  RECTL *p_rclBounds; // r15
  RECTL *v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int128 *v18; // rax
  BYTE v19; // al
  __int64 v20; // rax
  struct REGION *v22; // rbx
  BYTE iDComplexity; // al
  __int64 p_iUniq; // rax
  _QWORD v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  struct REGION *v28[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v29; // [rsp+80h] [rbp-80h]
  _DWORD v30[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-50h] BYREF
  CLIPOBJ pcoa; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+110h] [rbp+10h]
  int v35; // [rsp+118h] [rbp+18h]
  int v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+150h] [rbp+50h]
  CLIPOBJ v38; // [rsp+160h] [rbp+60h] BYREF
  __int64 v39; // [rsp+1B0h] [rbp+B0h]
  int v40; // [rsp+1B8h] [rbp+B8h]
  int v41; // [rsp+1E0h] [rbp+E0h]
  __int64 v42; // [rsp+1F0h] [rbp+F0h]

  v8 = 0;
  p_hdev = (__int64)&pso->hdev;
  if ( !pso )
    p_hdev = 48LL;
  v12 = 1;
  v27 = *(_QWORD *)p_hdev;
  if ( (ppo->fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
  {
    p_rclBounds = &pco->rclBounds;
    PDEVOBJ::vSync((PDEVOBJ *)&v27, pso, &pco->rclBounds, 0);
    if ( ((ppo->fl & 0x4000) == 0 || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo))
      && pco->iDComplexity != 3 )
    {
      v14 = 0LL;
      v15 = *(_QWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      v16 = (int)*(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL) >> 4;
      v29 = *(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      if ( p_rclBounds->left > v16
        || pco->rclBounds.right < (int)((SDWORD2(v29) + 15LL) >> 4)
        || pco->rclBounds.top > SHIDWORD(v15) >> 4
        || pco->rclBounds.bottom < (int)((SHIDWORD(v29) + 15LL) >> 4) )
      {
        v14 = &pco->rclBounds;
      }
      v17 = EngFastFill(pso, ppo, v14, pbo, pptlBrushOrg, mix, flOptions);
      if ( v17 >= 0 )
        return v17;
    }
    v31 = 0LL;
    if ( pco->iDComplexity )
    {
      DWORD1(v31) = 16 * pco->rclBounds.top;
      HIDWORD(v31) = 16 * pco->rclBounds.bottom;
      v18 = &v31;
    }
    else
    {
      v18 = 0LL;
    }
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(v28, ppo, 1LL, flOptions, v18);
    if ( v28[0] )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v28) != 1 )
      {
        v30[0] = p_rclBounds->left;
        v30[1] = pco->rclBounds.top;
        v30[2] = pco->rclBounds.right;
        v30[3] = pco->rclBounds.bottom;
        if ( (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) || pco->iDComplexity )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v26);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v26);
          if ( v26[0] )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)v26, (struct RGNOBJ *)v28, (struct RGNOBJ *)&pco[2].rclBounds.top, 8u) )
            {
              v22 = (struct REGION *)v26[0];
              v32 = *(_OWORD *)(v26[0] + 96LL);
              ERECTL::operator*=((int *)&v32, &p_rclBounds->left);
              v39 = 0LL;
              v40 = 0;
              v41 = 1;
              v42 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v38, v22, (struct ERECTL *)&v32, 0);
              if ( ERECTL::bEmpty((ERECTL *)&v38.rclBounds) )
              {
                v8 = 1;
              }
              else
              {
                iDComplexity = v38.iDComplexity;
                if ( !v38.iDComplexity )
                  iDComplexity = 1;
                v38.iDComplexity = iDComplexity;
                p_iUniq = (__int64)&pso->iUniq;
                if ( !pso )
                  p_iUniq = 92LL;
                ++*(_DWORD *)p_iUniq;
                v8 = EngPaint(pso, &v38, pbo, pptlBrushOrg, mix);
              }
            }
          }
          else
          {
            EngSetLastError(8u);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
          goto LABEL_25;
        }
        v34 = 0LL;
        v35 = 0;
        v36 = 1;
        v37 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, v28[0], (struct ERECTL *)v30, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
        {
          v19 = pcoa.iDComplexity;
          if ( !pcoa.iDComplexity )
            v19 = 1;
          pcoa.iDComplexity = v19;
          v20 = (__int64)&pso->iUniq;
          if ( !pso )
            v20 = 92LL;
          ++*(_DWORD *)v20;
          v12 = EngPaint(pso, &pcoa, pbo, pptlBrushOrg, mix);
        }
      }
    }
    else if ( ppo->cCurves >= 2 )
    {
      EngSetLastError(8u);
      v12 = 0;
    }
    v8 = v12;
LABEL_25:
    RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v28);
  }
  return v8;
}
