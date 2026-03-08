/*
 * XREFs of EngFillPath @ 0x1C028BC20
 * Callers:
 *     EngStrokePath @ 0x1C000C6E0 (EngStrokePath.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0287840 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     EngStrokeAndFillPath @ 0x1C028BFF0 (EngStrokeAndFillPath.c)
 *     ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A4110 (-BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A7240 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02B21E0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     NtGdiEngFillPath @ 0x1C02CC0E0 (NtGdiEngFillPath.c)
 *     OffFillPath @ 0x1C02EA338 (OffFillPath.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C014D858 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C02874D4 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C028BBDC (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     EngPaint @ 0x1C0291240 (EngPaint.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02F6648 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
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
  BOOL result; // eax
  RECTL *p_rclBounds; // r14
  RECTL *v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  struct _RECTL *v17; // rax
  BYTE iDComplexity; // al
  POINTL *v19; // r9
  BRUSHOBJ *v20; // r8
  __int64 p_iUniq; // rax
  struct REGION *v22; // rbx
  BYTE v23; // al
  POINTL *v24; // r9
  BRUSHOBJ *v25; // r8
  __int64 v26; // rax
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  POINTL *v28; // [rsp+48h] [rbp-B8h]
  BRUSHOBJ *pboa; // [rsp+50h] [rbp-B0h]
  struct REGION *v30[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h]
  _DWORD v33[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-60h] BYREF
  CLIPOBJ pcoa; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+40h]
  CLIPOBJ v41; // [rsp+150h] [rbp+50h] BYREF
  __int64 v42; // [rsp+1A0h] [rbp+A0h]
  int v43; // [rsp+1A8h] [rbp+A8h]
  int v44; // [rsp+1D0h] [rbp+D0h]
  __int64 v45; // [rsp+1E0h] [rbp+E0h]

  v8 = 0;
  v28 = pptlBrushOrg;
  p_hdev = (__int64)&pso->hdev;
  pboa = pbo;
  if ( !pso )
    p_hdev = 48LL;
  v31 = *(_QWORD *)p_hdev;
  if ( (ppo->fl & 1) == 0 || (result = EPATHOBJ::bFlatten((EPATHOBJ *)ppo)) )
  {
    p_rclBounds = &pco->rclBounds;
    PDEVOBJ::vSync((PDEVOBJ *)&v31, pso, &pco->rclBounds, 0);
    if ( (ppo->fl & 0x4000) != 0 )
    {
      if ( (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) )
        goto LABEL_14;
    }
    if ( pco->iDComplexity == 3 )
      goto LABEL_14;
    v14 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)&ppo[1] + 48LL);
    v16 = (int)*(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL) >> 4;
    v32 = *(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL);
    if ( p_rclBounds->left > v16
      || pco->rclBounds.right < (int)((SDWORD2(v32) + 15LL) >> 4)
      || pco->rclBounds.top > SHIDWORD(v15) >> 4
      || pco->rclBounds.bottom < (int)((SHIDWORD(v32) + 15LL) >> 4) )
    {
      v14 = &pco->rclBounds;
    }
    result = EngFastFill(pso, ppo, v14, pboa, v28, mix, flOptions);
    if ( result < 0 )
    {
LABEL_14:
      v34 = 0LL;
      if ( pco->iDComplexity )
      {
        DWORD1(v34) = 16 * pco->rclBounds.top;
        HIDWORD(v34) = 16 * pco->rclBounds.bottom;
        v17 = (struct _RECTL *)&v34;
      }
      else
      {
        v17 = 0LL;
      }
      RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v30, (struct EPATHOBJ *)ppo, 1, flOptions, v17);
      if ( v30[0] )
      {
        if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v30) != 1 )
        {
          v33[0] = p_rclBounds->left;
          v33[1] = pco->rclBounds.top;
          v33[2] = pco->rclBounds.right;
          v33[3] = pco->rclBounds.bottom;
          if ( !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) && !pco->iDComplexity )
          {
            v37 = 0LL;
            v38 = 0;
            v39 = 1;
            v40 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, v30[0], (struct ERECTL *)v33, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
            {
              iDComplexity = pcoa.iDComplexity;
              v19 = v28;
              if ( !pcoa.iDComplexity )
                iDComplexity = 1;
              v20 = pboa;
              pcoa.iDComplexity = iDComplexity;
              p_iUniq = (__int64)&pso->iUniq;
              if ( !pso )
                p_iUniq = 92LL;
              ++*(_DWORD *)p_iUniq;
              v8 = EngPaint(pso, &pcoa, v20, v19, mix);
              goto LABEL_41;
            }
            goto LABEL_21;
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27);
          if ( v27 )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)&v27, (struct RGNOBJ *)v30, (struct RGNOBJ *)&pco[2].rclBounds.top, 8u) )
            {
              v22 = (struct REGION *)v27;
              v35 = *(_OWORD *)(v27 + 56);
              ERECTL::operator*=((int *)&v35, &p_rclBounds->left);
              v42 = 0LL;
              v43 = 0;
              v44 = 1;
              v45 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v41, v22, (struct ERECTL *)&v35, 0);
              if ( ERECTL::bEmpty((ERECTL *)&v41.rclBounds) )
              {
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
                goto LABEL_21;
              }
              v23 = v41.iDComplexity;
              v24 = v28;
              if ( !v41.iDComplexity )
                v23 = 1;
              v25 = pboa;
              v41.iDComplexity = v23;
              v26 = (__int64)&pso->iUniq;
              if ( !pso )
                v26 = 92LL;
              ++*(_DWORD *)v26;
              v8 = EngPaint(pso, &v41, v25, v24, mix);
            }
          }
          else
          {
            EngSetLastError(8u);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
          goto LABEL_41;
        }
      }
      else if ( ppo->cCurves >= 2 )
      {
        EngSetLastError(8u);
LABEL_41:
        RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v30);
        return v8;
      }
LABEL_21:
      v8 = 1;
      goto LABEL_41;
    }
  }
  return result;
}
