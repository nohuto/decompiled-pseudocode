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
  MIX v11; // r15d
  BOOL v13; // edi
  MIX v15; // r12d
  BOOL v16; // ebx
  PATHOBJ *v18; // rdx
  struct _CLIPOBJ *v19; // r13
  __int128 v20; // xmm0
  __int64 p_iUniq; // rsi
  POINTL *v22; // r15
  BRUSHOBJ *v23; // r8
  __int64 v24; // rax
  POINTL *v25; // r9
  __int128 v26; // xmm0
  BRUSHOBJ *v27; // r8
  MIX mix; // [rsp+20h] [rbp-E0h]
  struct REGION *v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  BRUSHOBJ *pbo; // [rsp+50h] [rbp-B0h] BYREF
  LINEATTRS *v32; // [rsp+58h] [rbp-A8h]
  POINTL *v33; // [rsp+60h] [rbp-A0h]
  _QWORD v34[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v35; // [rsp+78h] [rbp-88h] BYREF
  BRUSHOBJ *v36; // [rsp+80h] [rbp-80h]
  _QWORD v37[2]; // [rsp+88h] [rbp-78h] BYREF
  CLIPOBJ *v38; // [rsp+98h] [rbp-68h]
  _BYTE v39[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int128 v41; // [rsp+120h] [rbp+20h] BYREF
  CLIPOBJ pcoa; // [rsp+130h] [rbp+30h] BYREF
  __int64 v43; // [rsp+180h] [rbp+80h]
  int v44; // [rsp+188h] [rbp+88h]
  int v45; // [rsp+1B0h] [rbp+B0h]
  __int64 v46; // [rsp+1C0h] [rbp+C0h]
  _BYTE v47[152]; // [rsp+1D0h] [rbp+D0h] BYREF
  BRUSHOBJ *v48; // [rsp+268h] [rbp+168h]
  int v49; // [rsp+270h] [rbp+170h]

  v11 = mixFill;
  v13 = 0;
  v15 = mixFill;
  v38 = pco;
  v35 = pco;
  pbo = pboStroke;
  v32 = plineattrs;
  v36 = pboFill;
  v33 = pptlBrushOrg;
  LODWORD(v29) = flOptions;
  if ( !_bittest((const signed __int32 *)&pboFill[5], 0xFu) )
    v15 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( !_bittest((const signed __int32 *)&pboStroke[5], 0xFu) )
    v11 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v39);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( (unsigned int)bUMPDSecurityGateEx() && !pxo )
        goto LABEL_14;
      if ( !v40
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v39, (struct EPATHOBJ *)ppo, pxo, v32)
        || !EPATHOBJ::bWiden((EPATHOBJ *)v39, (struct EPATHOBJ *)ppo, pxo, v32) )
      {
        EngSetLastError(8u);
LABEL_14:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v39);
        return 0;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_14;
    v18 = (PATHOBJ *)v39;
    if ( ppo[5] )
      v18 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v34, (struct EPATHOBJ *)v18, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v37, (struct EPATHOBJ *)ppo, 1, (unsigned int)v29, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
    if ( !v37[0] || !v34[0] || !v30 || !RGNOBJ::bMerge((RGNOBJ *)&v30, (struct RGNOBJ *)v37, (struct RGNOBJ *)v34, 4u) )
      goto LABEL_41;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v47, pso, &v35);
    if ( !v49 )
    {
      pbo = v48;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pbo);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v37);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v34);
      goto LABEL_14;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
    if ( v29 )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v34) != 1 )
      {
        v19 = v35;
        if ( RGNOBJ::bMerge((RGNOBJ *)&v29, (struct RGNOBJ *)v34, (struct RGNOBJ *)&v35[2].rclBounds.top, 8u) )
        {
          v20 = *(_OWORD *)((char *)v29 + 56);
          v43 = 0LL;
          v44 = 0;
          v41 = v20;
          v45 = 1;
          v46 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, v29, (struct ERECTL *)&v41, 0);
          p_iUniq = (__int64)&pso->iUniq;
          if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
          {
            v22 = v33;
            v13 = 1;
          }
          else
          {
            v23 = pbo;
            mix = v11;
            v22 = v33;
            v24 = (__int64)&pso->iUniq;
            if ( !pso )
              v24 = 92LL;
            v25 = v33;
            ++*(_DWORD *)v24;
            v13 = EngPaint(pso, &pcoa, v23, v25, mix);
            if ( !v13 )
              goto LABEL_40;
          }
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v30) != 1 )
          {
            v13 = 0;
            if ( RGNOBJ::bMerge((RGNOBJ *)&v29, (struct RGNOBJ *)&v30, (struct RGNOBJ *)&v19[2].rclBounds.top, 8u) )
            {
              v26 = *(_OWORD *)((char *)v29 + 56);
              v43 = 0LL;
              v44 = 0;
              v41 = v26;
              v45 = 1;
              v46 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, v29, (struct ERECTL *)&v41, 0);
              if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
              {
                v13 = 1;
              }
              else
              {
                v27 = v36;
                if ( !pso )
                  p_iUniq = 92LL;
                ++*(_DWORD *)p_iUniq;
                v13 = EngPaint(pso, &pcoa, v27, v22, v15);
              }
            }
          }
        }
      }
    }
LABEL_40:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
    pbo = v48;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pbo);
LABEL_41:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
    RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v37);
    RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v34);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v39);
    return v13;
  }
  if ( !EngFillPath(pso, ppo, pco, v36, pptlBrushOrg, v15, flOptions)
    || !EngStrokePath(pso, ppo, v38, pxo, pbo, v33, v32, v11) )
  {
    return 0;
  }
  return v16;
}
