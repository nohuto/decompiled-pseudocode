/*
 * XREFs of EngStrokeAndFillPath @ 0x1C02856C0
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0282DD0 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0293840 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0298FB0 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C029BBE0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02A2950 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2510 (NtGdiEngStrokeAndFillPath.c)
 *     OffStrokeAndFillPath @ 0x1C02C7BF4 (OffStrokeAndFillPath.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012FEB0 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0131254 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngStrokePath @ 0x1C0132A40 (EngStrokePath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0132BBC (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     EngFillPath @ 0x1C0134C30 (EngFillPath.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C01350E4 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C0135128 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     EngPaint @ 0x1C0135200 (EngPaint.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

BOOL __stdcall EngStrokeAndFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  BOOL v10; // ebx
  MIX v11; // r12d
  BOOL v14; // esi
  MIX v15; // r13d
  ULONG iSolidColor; // eax
  BOOL v17; // edi
  PATHOBJ *v18; // rdx
  struct _CLIPOBJ *v19; // r14
  __int128 v20; // xmm0
  POINTL *v21; // r12
  BRUSHOBJ *v22; // r8
  __int64 p_iUniq; // rax
  POINTL *v24; // r9
  __int128 v25; // xmm0
  BRUSHOBJ *v26; // r8
  __int64 v27; // rax
  MIX mix; // [rsp+20h] [rbp-E0h]
  BRUSHOBJ *pbo; // [rsp+40h] [rbp-C0h] BYREF
  XFORMOBJ *pxoa; // [rsp+48h] [rbp-B8h]
  CLIPOBJ *v32[2]; // [rsp+50h] [rbp-B0h] BYREF
  FLONG v33; // [rsp+60h] [rbp-A0h]
  LINEATTRS *v34; // [rsp+68h] [rbp-98h]
  POINTL *v35; // [rsp+70h] [rbp-90h]
  _QWORD v36[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v37; // [rsp+88h] [rbp-78h] BYREF
  BRUSHOBJ *v38; // [rsp+90h] [rbp-70h]
  _QWORD v39[3]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v40[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v41[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int128 v43; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ pcoa; // [rsp+160h] [rbp+60h] BYREF
  __int64 v45; // [rsp+1B0h] [rbp+B0h]
  int v46; // [rsp+1B8h] [rbp+B8h]
  int v47; // [rsp+1E0h] [rbp+E0h]
  __int64 v48; // [rsp+1F0h] [rbp+F0h]
  _BYTE v49[152]; // [rsp+200h] [rbp+100h] BYREF
  BRUSHOBJ *v50; // [rsp+298h] [rbp+198h]
  int v51; // [rsp+2A0h] [rbp+1A0h]

  v10 = 0;
  v11 = mixFill;
  v14 = 0;
  v15 = mixFill;
  pxoa = pxo;
  v38 = pboFill;
  iSolidColor = pboFill[5].iSolidColor;
  v32[0] = pco;
  v37 = pco;
  pbo = pboStroke;
  v34 = plineattrs;
  v35 = pptlBrushOrg;
  v33 = flOptions;
  if ( (iSolidColor & 0x8000) == 0 )
    v15 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( !_bittest((const signed __int32 *)&pboStroke[5], 0xFu) )
    v11 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v17 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v41);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx() && !pxoa )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n",
            279);
        goto LABEL_45;
      }
      if ( !v42
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v41, (struct EPATHOBJ *)ppo, pxoa, v34)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v41, (struct EPATHOBJ *)ppo, pxoa, v34) )
      {
        EngSetLastError(8u);
LABEL_45:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_45;
    v18 = (PATHOBJ *)v41;
    if ( ppo[5] )
      v18 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v39, (struct EPATHOBJ *)v18, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v40, (struct EPATHOBJ *)ppo, 1, v33, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v36);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v36);
    if ( !v40[0] || !v39[0] || !v36[0] || !RGNOBJ::bMerge((RGNOBJ *)v36, (struct RGNOBJ *)v40, (struct RGNOBJ *)v39, 4u) )
      goto LABEL_43;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v49, pso, &v37);
    if ( !v51 )
    {
      pbo = v50;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pbo);
LABEL_44:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v36);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v40);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v39);
      goto LABEL_45;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v32);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v32);
    if ( v32[0] )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v39) != 1 )
      {
        v19 = v37;
        if ( RGNOBJ::bMerge((RGNOBJ *)v32, (struct RGNOBJ *)v39, (struct RGNOBJ *)&v37[2].rclBounds.top, 8u) )
        {
          v20 = *(_OWORD *)&v32[0][4].iUniq;
          v45 = 0LL;
          v46 = 0;
          v43 = v20;
          v47 = 1;
          v48 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v32[0], (struct ERECTL *)&v43, 0);
          if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
          {
            v21 = v35;
            v14 = 1;
          }
          else
          {
            v22 = pbo;
            p_iUniq = (__int64)&pso->iUniq;
            mix = v11;
            v21 = v35;
            if ( !pso )
              p_iUniq = 92LL;
            v24 = v35;
            ++*(_DWORD *)p_iUniq;
            v14 = EngPaint(pso, &pcoa, v22, v24, mix);
            if ( !v14 )
              goto LABEL_42;
          }
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v36) != 1 )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)v32, (struct RGNOBJ *)v36, (struct RGNOBJ *)&v19[2].rclBounds.top, 8u) )
            {
              v25 = *(_OWORD *)&v32[0][4].iUniq;
              v45 = 0LL;
              v46 = 0;
              v43 = v25;
              v47 = 1;
              v48 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v32[0], (struct ERECTL *)&v43, 0);
              if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
              {
                v14 = 1;
              }
              else
              {
                v26 = v38;
                v27 = (__int64)&pso->iUniq;
                if ( !pso )
                  v27 = 92LL;
                ++*(_DWORD *)v27;
                v14 = EngPaint(pso, &pcoa, v26, v21, v15);
              }
            }
            else
            {
              v14 = 0;
            }
          }
        }
      }
    }
LABEL_42:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v32);
    pbo = v50;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pbo);
LABEL_43:
    v10 = v14;
    goto LABEL_44;
  }
  if ( !EngFillPath(pso, ppo, pco, v38, pptlBrushOrg, v15, flOptions)
    || !EngStrokePath(pso, ppo, v32[0], pxoa, pbo, v35, v34, v11) )
  {
    return 0;
  }
  return v17;
}
