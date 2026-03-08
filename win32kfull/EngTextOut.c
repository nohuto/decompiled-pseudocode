/*
 * XREFs of EngTextOut @ 0x1C001A540
 * Callers:
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029F4D0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A51C0 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A8890 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02B3BA0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     NtGdiEngTextOut @ 0x1C02CE030 (NtGdiEngTextOut.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C001ACB0 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0088F60 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00EA13C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C012FEE8 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C012FF64 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1C0296028 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0296190 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C02DB668 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C02DD9A0 (STROBJ_bEnum.c)
 */

BOOL __stdcall EngTextOut(
        SURFOBJ *pso,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
{
  FONTOBJ *v10; // r12
  STROBJ *v11; // rdi
  SURFOBJ *v12; // r13
  LONG left; // r15d
  LONG top; // r14d
  LONG right; // esi
  LONG bottom; // ebx
  struct _GLYPHPOS *pgp; // r12
  int v18; // r13d
  ULONG cGlyphs; // r11d
  ULONG i; // edi
  struct _GLYPHPOS *v21; // r8
  GLYPHBITS *pgb; // rax
  LONG v23; // r9d
  LONG v24; // r10d
  LONG v25; // r8d
  LONG v26; // eax
  PVOID *p_pvScan0; // r13
  bool v28; // zf
  __int64 *ThreadWin32Thread; // rax
  __int64 v30; // rax
  PVOID v31; // rax
  int v32; // ecx
  FLONG flFontType; // eax
  ULONG v34; // r12d
  int v35; // ecx
  FLONG v36; // eax
  int v37; // edx
  unsigned int v38; // r8d
  LONG v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // edi
  unsigned int v42; // edx
  unsigned __int64 v43; // rbx
  char v44; // si
  _DWORD *v45; // rax
  _DWORD *v46; // r15
  STROBJ *v47; // r11
  __int64 v48; // r9
  FLONG flAccel; // edi
  __int64 v50; // rax
  unsigned int v51; // r14d
  unsigned __int8 *v52; // r9
  int v53; // ecx
  int v54; // eax
  struct _FONTOBJ *v55; // rdi
  __int64 *v56; // rax
  struct _SURFOBJ *v57; // r9
  __int64 v58; // rax
  __int64 v59; // rcx
  int v60; // r10d
  RECTL *v61; // rsi
  LONG v62; // r8d
  LONG v63; // edx
  int v64; // eax
  LONG v65; // edx
  LONG v66; // r9d
  LONG v67; // ecx
  LONG v68; // edx
  LONG v69; // edi
  LONG v70; // edx
  int v71; // r11d
  STROBJ *v72; // rsi
  void *v73; // r8
  unsigned __int64 v74; // rdx
  ULONG v75; // r14d
  struct _GLYPHPOS *v76; // rbx
  ULONG v77; // esi
  ULONG v78; // r12d
  bool v79; // sf
  int j; // eax
  void *v82; // r8
  unsigned __int64 v83; // rdx
  BOOL v84; // eax
  __int64 v85; // rcx
  LONG v86; // ecx
  LONG v87; // eax
  unsigned int v88; // esi
  int v89; // eax
  LONG v90; // ecx
  LONG v91; // r10d
  PVOID v92; // rdi
  LONG v93; // r9d
  LONG v94; // edx
  LONG v95; // r8d
  struct _RECTL v96; // xmm0
  int v97; // ecx
  LONG v98; // ecx
  LONG v99; // r10d
  int v100; // eax
  Gre::Base *v101; // rcx
  struct Gre::Base::SESSION_GLOBALS *v102; // r9
  BOOL (__stdcall *v103)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v104; // r9
  struct _GLYPHPOS *v105; // rcx
  ULONG v106; // eax
  CLIPOBJ *v107; // rdi
  unsigned __int8 *v108; // r15
  int v109; // edi
  struct _FONTOBJ *v110; // rdx
  PVOID v111; // rdi
  int v112; // eax
  BOOL (__stdcall *v113)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  struct _GLYPHPOS *v114; // rdx
  int v115; // eax
  char *v116; // rbx
  _DWORD *v117; // rdi
  int (*k)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  unsigned __int8 *v119; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v120; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v121; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v122; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v123; // [rsp+50h] [rbp-D0h]
  unsigned int v124; // [rsp+60h] [rbp-C0h]
  unsigned int v125; // [rsp+80h] [rbp-A0h]
  char v126; // [rsp+A0h] [rbp-80h]
  unsigned int v127; // [rsp+A4h] [rbp-7Ch]
  ULONG iSolidColor; // [rsp+A8h] [rbp-78h]
  ULONG pc; // [rsp+ACh] [rbp-74h] BYREF
  int iDComplexity; // [rsp+B0h] [rbp-70h]
  STROBJ *pstroa; // [rsp+B8h] [rbp-68h]
  ULONG v132; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v133; // [rsp+C4h] [rbp-5Ch]
  unsigned __int8 *v134; // [rsp+C8h] [rbp-58h]
  CLIPOBJ *v135; // [rsp+D0h] [rbp-50h]
  LONG v136; // [rsp+D8h] [rbp-48h]
  struct _BRUSHOBJ *v137; // [rsp+E0h] [rbp-40h]
  struct _FONTOBJ *v138; // [rsp+E8h] [rbp-38h]
  PGLYPHPOS ppgpos; // [rsp+F0h] [rbp-30h] BYREF
  PGLYPHPOS v140; // [rsp+F8h] [rbp-28h] BYREF
  struct _RECTL *v141; // [rsp+100h] [rbp-20h] BYREF
  struct _RECTL *p_rclBkGround; // [rsp+108h] [rbp-18h]
  struct SURFACE *v143; // [rsp+110h] [rbp-10h]
  struct _GLYPHPOS *v144; // [rsp+118h] [rbp-8h] BYREF
  char v145; // [rsp+120h] [rbp+0h]
  int v146; // [rsp+124h] [rbp+4h]
  struct _BRUSHOBJ *v147; // [rsp+128h] [rbp+8h]
  RECTL *v148; // [rsp+130h] [rbp+10h]
  SURFOBJ *v149; // [rsp+138h] [rbp+18h]
  struct _POINTL *v150; // [rsp+140h] [rbp+20h]
  _DWORD *v151; // [rsp+148h] [rbp+28h]
  unsigned __int64 v152; // [rsp+150h] [rbp+30h]
  __int128 v153; // [rsp+158h] [rbp+38h] BYREF
  __int128 v154; // [rsp+168h] [rbp+48h]
  int v155; // [rsp+180h] [rbp+60h] BYREF
  struct _RECTL v156[20]; // [rsp+184h] [rbp+64h] BYREF
  struct _RECTL v157; // [rsp+2D0h] [rbp+1B0h] BYREF
  __int128 v158; // [rsp+2E0h] [rbp+1C0h] BYREF
  struct _RECTL v159; // [rsp+2F0h] [rbp+1D0h] BYREF
  SURFACE *v160; // [rsp+300h] [rbp+1E0h] BYREF
  PVOID v161; // [rsp+308h] [rbp+1E8h]
  struct _CLIPOBJ *v162; // [rsp+310h] [rbp+1F0h]
  struct _BRUSHOBJ *v163; // [rsp+318h] [rbp+1F8h]
  int v164; // [rsp+320h] [rbp+200h]
  _DWORD v165[17]; // [rsp+324h] [rbp+204h] BYREF
  struct _FONTOBJ *v166; // [rsp+368h] [rbp+248h]
  _BYTE v167[80]; // [rsp+370h] [rbp+250h] BYREF
  _BYTE v168[80]; // [rsp+3C0h] [rbp+2A0h] BYREF
  _BYTE v169[80]; // [rsp+410h] [rbp+2F0h] BYREF
  struct _RECTL si128; // [rsp+460h] [rbp+340h] BYREF
  int v171; // [rsp+47Ch] [rbp+35Ch]

  v10 = pfo;
  v141 = prclExtra;
  v11 = pstro;
  v12 = pso;
  v148 = prclOpaque;
  v147 = pboFore;
  v137 = pboOpaque;
  v138 = pfo;
  pstroa = pstro;
  v149 = pso;
  v150 = pptlOrg;
  v135 = pco;
  memset_0(&v155, 0, 0x144uLL);
  left = v11->rclBkGround.left;
  top = v11->rclBkGround.top;
  right = v11->rclBkGround.right;
  bottom = v11->rclBkGround.bottom;
  p_rclBkGround = &v11->rclBkGround;
  v140 = 0LL;
  v132 = 0;
  v133 = 0;
  v127 = 0;
  v158 = 0LL;
  v143 = 0LL;
  v159 = 0LL;
  v157.left = left;
  v157.top = top;
  v157.right = right;
  v157.bottom = bottom;
  if ( !v11->ulCharInc )
  {
    pgp = v11->pgp;
    v18 = 0;
    cGlyphs = v11->cGlyphs;
    ppgpos = pgp;
    pc = cGlyphs;
    if ( !pgp )
    {
      *(_QWORD *)&v11[1].cGlyphs = 0LL;
      v18 = 1;
    }
    if ( v18 )
      goto LABEL_98;
    while ( 1 )
    {
      for ( i = 0; i < cGlyphs; ++i )
      {
        v21 = &pgp[i];
        pgb = v21->pgdf->pgb;
        if ( !pgb )
          goto LABEL_18;
        v23 = pgb->ptlOrigin.x + v21->ptl.x;
        v24 = v23 + pgb->sizlBitmap.cx;
        v25 = pgb->ptlOrigin.y + v21->ptl.y;
        v26 = v25 + pgb->sizlBitmap.cy;
        if ( left == right || top == bottom )
        {
          left = v23;
          v157.left = v23;
          top = v25;
          v157.top = v25;
          right = v24;
          v157.right = v24;
        }
        else
        {
          if ( v23 < left )
          {
            left = v23;
            v157.left = v23;
          }
          if ( v25 < top )
          {
            top = v25;
            v157.top = v25;
          }
          if ( v24 > right )
          {
            right = v24;
            v157.right = v24;
          }
          if ( v26 <= bottom )
            continue;
        }
        v157.bottom = v26;
        bottom = v26;
      }
      v11 = pstroa;
      if ( !v18 )
        break;
LABEL_98:
      v84 = STROBJ_bEnum(v11, &pc, &ppgpos);
      cGlyphs = pc;
      v18 = v84;
      pgp = ppgpos;
    }
LABEL_18:
    v11 = pstroa;
    v10 = v138;
    v12 = v149;
  }
  if ( v12 )
    p_pvScan0 = &v12[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  v28 = (v10->flFontType & 0x10000) == 0;
  ppgpos = (PGLYPHPOS)p_pvScan0;
  if ( !v28 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v30 = *ThreadWin32Thread) != 0 )
      v31 = *(PVOID *)(v30 + 304);
    else
      v31 = p_pvScan0[13];
    v143 = v31 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v31 + 48LL) + 2528LL) : (struct SURFACE *)p_pvScan0;
    if ( *((_WORD *)p_pvScan0 + 50) )
    {
      v32 = 16;
      v127 = 16;
    }
    else
    {
      v32 = 0;
    }
    bottom = v157.bottom;
    right = v157.right;
    top = v157.top;
    left = v157.left;
    if ( _bittest16((const signed __int16 *)p_pvScan0 + 51, 8u) )
      v127 = v32 | 0x80;
  }
  flFontType = v10->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v135 )
    iDComplexity = v135->iDComplexity;
  else
    iDComplexity = 0;
  pc = -1;
  v34 = -1;
  iSolidColor = v147->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *((_DWORD *)p_pvScan0 + 24) == 3 && ((unsigned int)bUMPDSecurityGateEx() && !v137 || v137->iSolidColor == -1) )
      return 0;
    v35 = v127 | 8;
    v127 |= 8u;
    v36 = v138->flFontType;
    if ( (v36 & 0x10000000) != 0 )
    {
      v37 = v11->rclBkGround.right;
      v127 = v35 | 0x20;
      v38 = 8;
      if ( v37 > 2147483643 )
        return 0;
      v39 = v11->rclBkGround.left;
      if ( (unsigned int)(v37 - v39 + 4) >= 0x7FFFFFFF )
        return 0;
      v40 = ((v37 + 4) & 0xFFFFFFFC) - (v39 & 0xFFFFFFFC);
    }
    else if ( (v36 & 0x20000000) != 0 )
    {
      v40 = v133;
      v38 = v133;
    }
    else
    {
      v38 = 4;
      v40 = (((v11->rclBkGround.right + 8) >> 1) & 0xFFFFFFFC) - ((v11->rclBkGround.left >> 1) & 0xFFFFFFFC);
    }
  }
  else
  {
    v38 = 1;
    v40 = (int)(((v11->rclBkGround.right + 32) & 0xFFFFFFE0) - (v11->rclBkGround.left & 0xFFFFFFE0)) >> 3;
  }
  v41 = ((v38 * (p_rclBkGround->left - left) + 31) >> 3) & 0x1FFFFFFC;
  v42 = v41 + (((v38 * (right - pstroa->rclBkGround.right) + 31) >> 3) & 0x1FFFFFFC) + v40;
  v43 = v42 * (unsigned __int64)(unsigned int)(bottom - top);
  v133 = v42;
  v152 = v43;
  if ( v43 > 0xFFFFFFFF )
    return 0;
  if ( (unsigned int)v43 >= 0x10000 )
  {
    v44 = 0;
    v126 = 0;
    v45 = EngAllocUserMem((unsigned int)v43, 0x6F746547u);
  }
  else
  {
    v44 = 1;
    v126 = 1;
    v45 = (_DWORD *)AllocThreadBufferWithTag((unsigned int)v43, 1869899079LL, 32LL);
  }
  v151 = v45;
  v46 = v45;
  if ( !v45 )
    return 0;
  v47 = pstroa;
  v48 = v41;
  flAccel = pstroa->flAccel;
  v50 = v133 * (pstroa->rclBkGround.top - top);
  v51 = v127;
  v52 = (unsigned __int8 *)v46 + v50 + v48;
  v134 = v52;
  if ( (flAccel & 0xA) == 2 )
  {
    v53 = 0;
    v54 = 0;
    if ( (flAccel & 0x11) != 0x11 )
      v53 = 2;
    if ( (flAccel & 0x51) == 0x51 )
      v54 = 4;
    v51 = v53 | v54 | (pstroa->ulCharInc != 0) | v127;
    v127 = v51;
  }
  v28 = *((_WORD *)p_pvScan0 + 50) == 0;
  v160 = (SURFACE *)p_pvScan0;
  if ( v28 )
    v161 = p_pvScan0[9];
  else
    v161 = 0LL;
  v55 = v138;
  v162 = v135;
  v163 = v137;
  v166 = v138;
  v164 = 0;
  if ( !v148 )
    goto LABEL_89;
  v56 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v56 )
  {
    v58 = *v56;
    if ( v58 )
    {
      v59 = *(_QWORD *)(v58 + 40);
      if ( v59 != v58 + 40 )
      {
        v85 = v59 - 40;
        if ( v85 )
        {
          if ( _bittest((const signed __int32 *)(v85 + 412), 8u) && *(_DWORD *)(v85 + 420) && !v137 )
          {
            if ( v44 )
              FreeThreadBufferWithTag(v46);
            else
              EngFreeUserMem(v46);
LABEL_120:
            FRINGERECT::~FRINGERECT((FRINGERECT *)&v160);
            return 0;
          }
        }
      }
    }
  }
  v34 = v137->iSolidColor;
  pc = v34;
  if ( v34 == -1 || (v60 = iSolidColor, iSolidColor == -1) )
  {
    EngTextOutBitBlt(
      (struct SURFACE *)p_pvScan0,
      v55,
      v51,
      v57,
      (struct _SURFOBJ *)v119,
      v135,
      v120,
      v148,
      v121,
      (struct _POINTL *)v122,
      v137,
      v150,
      v124);
    v52 = v134;
    v47 = pstroa;
LABEL_89:
    v60 = iSolidColor;
    goto LABEL_67;
  }
  v47 = pstroa;
  v61 = v148;
  v62 = pstroa->rclBkGround.top;
  v63 = v148->top;
  if ( v62 > v63 )
  {
    v165[4 * v164] = v148->left;
    v165[4 * v164 + 1] = v63;
    v165[4 * v164 + 2] = v61->right;
    v165[4 * v164 + 3] = v62;
    v64 = ++v164;
  }
  else
  {
    v64 = v164;
  }
  v65 = v47->rclBkGround.left;
  v66 = v61->left;
  v67 = v47->rclBkGround.bottom;
  if ( v65 > v61->left )
  {
    v165[4 * v64] = v66;
    v165[4 * v164 + 1] = v62;
    v165[4 * v164 + 2] = v65;
    v165[4 * v164 + 3] = v67;
    v64 = ++v164;
  }
  v68 = v47->rclBkGround.right;
  v69 = v61->right;
  if ( v68 < v69 )
  {
    v165[4 * v64] = v68;
    v165[4 * v164 + 1] = v62;
    v165[4 * v164 + 2] = v69;
    v165[4 * v164 + 3] = v67;
    v64 = ++v164;
  }
  v70 = v61->bottom;
  if ( v67 < v70 )
  {
    v165[4 * v64] = v66;
    v165[4 * v164 + 1] = v67;
    v165[4 * v164 + 2] = v69;
    v165[4 * v164++ + 3] = v70;
  }
  v52 = v134;
LABEL_67:
  v144 = 0LL;
  LODWORD(v137) = v51 & 0x10;
  v145 = 0;
  v146 = 0;
  v153 = 0LL;
  v154 = 0LL;
  if ( (v51 & 0x10) != 0 )
  {
    v86 = v47->rclBkGround.top;
    LODWORD(v153) = *((_DWORD *)p_pvScan0 + 24);
    v87 = v47->rclBkGround.right;
    v136 = v86;
    v88 = v47->rclBkGround.left & ((v127 >> 3) & 4 | 0xFFFFFFF8);
    DWORD1(v153) = v87 - v88;
    v28 = ((_DWORD)p_pvScan0[14] & 0x40000) == 0;
    DWORD2(v153) = v47->rclBkGround.bottom - v86;
    v89 = 1;
    if ( !v28 )
      v89 = 262145;
    *(_QWORD *)&v154 = 0LL;
    DWORD2(v154) = v89;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v144, (struct _DEVBITMAPINFO *)&v153, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v126 )
        FreeThreadBufferWithTag(v46);
      else
        EngFreeUserMem(v46);
      SURFMEM::~SURFMEM((SURFMEM *)&v144);
      goto LABEL_120;
    }
    v90 = 0;
    v91 = 0;
    ppgpos = v144;
    v92 = p_pvScan0[6];
    if ( p_pvScan0 == *((PVOID **)v92 + 316) && (*((_DWORD *)v92 + 10) & 0x20000) != 0 )
    {
      v90 = *((_DWORD *)v92 + 640);
      v91 = *((_DWORD *)v92 + 641);
    }
    v93 = pstroa->rclBkGround.top;
    v94 = p_rclBkGround->left;
    v95 = pstroa->rclBkGround.right;
    v96 = *p_rclBkGround;
    if ( v90 > p_rclBkGround->left )
      v94 = v90;
    LODWORD(v158) = v94;
    v159 = v96;
    if ( v91 > v93 )
      v93 = v91;
    v97 = v149->sizlBitmap.cx + v90;
    DWORD1(v158) = v93;
    if ( v97 < v95 )
      v95 = v97;
    v98 = v91 + v149->sizlBitmap.cy;
    DWORD2(v158) = v95;
    v99 = pstroa->rclBkGround.bottom;
    v71 = iDComplexity;
    if ( v98 < v99 )
      v99 = v98;
    HIDWORD(v158) = v99;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v158, &v135->rclBounds) )
      {
        if ( v126 )
          FreeThreadBufferWithTag(v46);
        else
          EngFreeUserMem(v46);
        SURFMEM::~SURFMEM((SURFMEM *)&v144);
        FRINGERECT::~FRINGERECT((FRINGERECT *)&v160);
        return 1;
      }
      v99 = HIDWORD(v158);
      v95 = DWORD2(v158);
      v93 = DWORD1(v158);
      v94 = v158;
      v71 = iDComplexity;
    }
    v159.right = DWORD2(v158) - v88;
    v159.left = v94 - v88;
    v159.top = DWORD1(v158) - v136;
    v159.bottom = HIDWORD(v158) - v136;
    if ( v34 == -1 && v94 < v95 && v93 < v99 )
    {
      v100 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        (UMPDReleaseAcquireRFONTSem *)v167,
        (struct SURFACE *)p_pvScan0,
        v138,
        v100);
      v102 = Gre::Base::Globals(v101);
      if ( ((_DWORD)p_pvScan0[14] & 0x400) != 0 )
        v103 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v92 + 352);
      else
        v103 = EngCopyBits;
      v104 = (char *)v102 + 6896;
      v105 = v144 + 1;
      if ( !v144 )
        v105 = 0LL;
      ((void (__fastcall *)(struct _GLYPHPOS *, PVOID *, _QWORD, char *, struct _RECTL *, __int128 *))v103)(
        v105,
        p_pvScan0 + 3,
        0LL,
        v104,
        &v159,
        &v158);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v167);
      v72 = pstroa;
      v52 = v134;
      v71 = iDComplexity;
      v60 = iSolidColor;
      *(_QWORD *)&pstroa[1].cGlyphs = 0LL;
      goto LABEL_74;
    }
    v52 = v134;
    v60 = iSolidColor;
  }
  else
  {
    v71 = iDComplexity;
  }
  v72 = pstroa;
  *(_QWORD *)&pstroa[1].cGlyphs = 0LL;
  if ( v34 != -1 )
  {
    v73 = v46;
    v74 = (unsigned __int64)(unsigned int)v43 >> 2;
    if ( v74 )
    {
      if ( ((unsigned __int8)v46 & 4) == 0 )
        goto LABEL_72;
      *v46 = 0;
      if ( --v74 )
      {
        v73 = v46 + 1;
LABEL_72:
        memset(v73, 0, 8 * (v74 >> 1));
        if ( (v74 & 1) != 0 )
          *((_DWORD *)v73 + v74 - 1) = 0;
      }
    }
  }
LABEL_74:
  v75 = pc;
  do
  {
    if ( v75 == -1 )
    {
      v82 = v46;
      v83 = (unsigned __int64)(unsigned int)v43 >> 2;
      if ( v83 )
      {
        if ( ((unsigned __int8)v46 & 4) != 0 )
        {
          *v46 = 0;
          if ( !--v83 )
            goto LABEL_76;
          v82 = v46 + 1;
        }
        memset(v82, 0, 8 * (v83 >> 1));
        if ( (v83 & 1) != 0 )
          *((_DWORD *)v82 + v83 - 1) = 0;
      }
    }
LABEL_76:
    v76 = v72->pgp;
    if ( v76 )
    {
      v77 = v72->cGlyphs;
      v78 = 0;
      v132 = v77;
      v140 = v76;
      pc = 0;
    }
    else
    {
      if ( ((__int64)v72[4].pwszOrg & 2) != 0 )
        v106 = STROBJ_bEnum(v72, &v132, &v140);
      else
        v106 = STROBJ_bEnumCheckBounds(v72, &v132, &v140, &v157);
      v60 = iSolidColor;
      v78 = v106;
      v71 = iDComplexity;
      v52 = v134;
      v77 = v132;
      v76 = v140;
      pc = v106;
    }
    if ( v77 )
    {
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v171 = 0;
      switch ( v71 )
      {
        case 1:
          si128 = v135->rclBounds;
LABEL_81:
          vExpandAndCopyText(
            (struct SURFACE *)p_pvScan0,
            v138,
            v76,
            v77,
            v52,
            v133,
            pstroa->ulCharInc,
            (struct SURFACE *)ppgpos,
            v143,
            p_rclBkGround,
            v123,
            v60,
            v75,
            v127,
            &si128,
            v141,
            v125,
            v147,
            v150);
          break;
        case 0:
          goto LABEL_81;
        case 3:
          v107 = v135;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v135, 0, 0, 4u, 0);
          v108 = v134;
          do
          {
            v109 = XCLIPOBJ::bEnum((XCLIPOBJ *)v107, 0x134u, (char *)&v155, 0LL);
            v110 = v138;
            v156[v155].bottom = 0;
            vExpandAndCopyText(
              (struct SURFACE *)p_pvScan0,
              v110,
              v76,
              v77,
              v108,
              v133,
              pstroa->ulCharInc,
              (struct SURFACE *)ppgpos,
              v143,
              p_rclBkGround,
              v123,
              iSolidColor,
              v75,
              v127,
              v156,
              v141,
              v125,
              v147,
              v150);
            v28 = v109 == 0;
            v107 = v135;
          }
          while ( !v28 );
          v46 = v151;
          v78 = pc;
          break;
      }
    }
    LODWORD(v43) = v152;
    v52 = v134;
    v71 = iDComplexity;
    v60 = iSolidColor;
    v72 = pstroa;
  }
  while ( v78 );
  if ( (_DWORD)v137 )
  {
    v111 = p_pvScan0[6];
    v112 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v168,
      (struct SURFACE *)p_pvScan0,
      v138,
      v112);
    if ( ((_DWORD)p_pvScan0[14] & 0x400) != 0 )
      v113 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v111 + 352);
    else
      v113 = EngCopyBits;
    v114 = v144 + 1;
    if ( !v144 )
      v114 = 0LL;
    ((void (__fastcall *)(PVOID *, struct _GLYPHPOS *, CLIPOBJ *, _QWORD, __int128 *, struct _RECTL *))v113)(
      p_pvScan0 + 3,
      v114,
      v135,
      0LL,
      &v158,
      &v159);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v168);
  }
  if ( v126 )
    FreeThreadBufferWithTag(v46);
  else
    EngFreeUserMem(v46);
  SURFMEM::~SURFMEM((SURFMEM *)&v144);
  if ( v161 )
  {
    v79 = v164 - 1 < 0;
    for ( j = --v164; !v79; --v164 )
    {
      vDIBSolidBlt(v160, (struct _RECTL *)&v165[4 * j], v162, v163->iSolidColor, 0);
      v79 = v164 - 1 < 0;
      j = v164 - 1;
    }
  }
  else
  {
    v115 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v169, v160, v166, v115);
    v141 = 0LL;
    v116 = (char *)v160 + 24;
    if ( !v160 )
      v116 = 0LL;
    v117 = v165;
    for ( k = SURFACE::pfnBitBlt(v160); v117 < &v165[4 * v164]; v117 += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _RECTL **, int))k)(
        v116,
        0LL,
        0LL,
        v162,
        0LL,
        v117,
        0LL,
        0LL,
        v163,
        &v141,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v169);
  }
  return 1;
}
