/*
 * XREFs of EngTextOut @ 0x1C0006070
 * Callers:
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0293D20 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0299370 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029C060 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A2FB0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0006B30 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C000710C (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C008E810 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C013A078 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C013A2C0 (STROBJ_bEnum.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015E008 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015E084 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C028DCD8 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
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
  STROBJ *v10; // rdi
  SURFOBJ *v11; // r12
  LONG left; // r15d
  LONG top; // esi
  LONG right; // r14d
  LONG bottom; // ebx
  int v16; // r13d
  struct _GLYPHPOS *pgp; // r12
  ULONG cGlyphs; // r11d
  ULONG i; // edi
  struct _GLYPHPOS *v20; // r8
  GLYPHBITS *pgb; // rax
  LONG v22; // r9d
  LONG v23; // r10d
  LONG v24; // r8d
  LONG v25; // eax
  signed __int16 *p_pvScan0; // r12
  FLONG flFontType; // eax
  int iSolidColor; // r13d
  LONG v29; // ecx
  unsigned int v30; // r8d
  int v31; // edi
  unsigned int v32; // edx
  unsigned int v33; // edi
  unsigned int v34; // edx
  unsigned __int64 v35; // r15
  _DWORD *v36; // rax
  _DWORD *v37; // r14
  STROBJ *v38; // r11
  __int64 v39; // rbx
  FLONG flAccel; // edi
  __int64 v41; // rax
  unsigned int v42; // esi
  unsigned __int8 *v43; // rbx
  int v44; // ecx
  int v45; // eax
  bool v46; // zf
  RECTL *v47; // rdi
  __int64 *v48; // rax
  struct _SURFOBJ *v49; // r9
  __int64 v50; // rax
  __int64 v51; // rcx
  struct _BRUSHOBJ *v52; // rax
  LONG v53; // ecx
  LONG v54; // r9d
  LONG v55; // r8d
  int v56; // eax
  LONG v57; // ecx
  struct _RECTL *v58; // r10
  LONG v59; // edx
  LONG v60; // ecx
  LONG v61; // edi
  LONG v62; // ecx
  void *v63; // r8
  unsigned __int64 v64; // rdx
  int v65; // r12d
  struct _GLYPHPOS *v66; // rsi
  unsigned int v67; // r15d
  int v68; // r13d
  struct _GLYPHPOS *v69; // r8
  struct SURFACE *v70; // rsi
  BOOL v71; // r14d
  bool v72; // sf
  int j; // eax
  void *v75; // r8
  unsigned __int64 v76; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // ecx
  FLONG v81; // eax
  int v82; // edx
  LONG v83; // ecx
  BOOL v84; // eax
  int v85; // eax
  LONG v86; // edx
  CLIPOBJ *v87; // rdi
  struct SURFACE *v88; // r14
  ULONG v89; // r13d
  int v90; // edi
  struct _FONTOBJ *v91; // rdx
  __int64 v92; // rcx
  LONG v93; // ecx
  unsigned int v94; // r15d
  struct SURFACE *v95; // rsi
  unsigned int v96; // r15d
  unsigned int v97; // eax
  int v98; // eax
  int v99; // eax
  __int64 v100; // rdi
  LONG v101; // ecx
  LONG v102; // r10d
  LONG v103; // edx
  LONG v104; // r9d
  LONG v105; // r8d
  int v106; // ecx
  LONG v107; // ecx
  LONG v108; // r10d
  int v109; // eax
  BOOL (__stdcall *v110)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  struct _GLYPHPOS *v111; // rcx
  __int64 v112; // rdi
  int v113; // eax
  BOOL (__stdcall *v114)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  struct _GLYPHPOS *v115; // rdx
  int v116; // eax
  char *v117; // rbx
  _DWORD *v118; // rdi
  int (*k)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  unsigned __int8 *v120; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v121; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v122; // [rsp+40h] [rbp-E0h]
  struct _POINTL *v123; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v124; // [rsp+50h] [rbp-D0h]
  unsigned int v125; // [rsp+60h] [rbp-C0h]
  unsigned int v126; // [rsp+80h] [rbp-A0h]
  char v127; // [rsp+A0h] [rbp-80h]
  int v128; // [rsp+A4h] [rbp-7Ch]
  int v129; // [rsp+A8h] [rbp-78h]
  int v130; // [rsp+A8h] [rbp-78h]
  ULONG pc; // [rsp+ACh] [rbp-74h] BYREF
  STROBJ *pstroa; // [rsp+B0h] [rbp-70h]
  struct _BRUSHOBJ *v133; // [rsp+B8h] [rbp-68h]
  ULONG v134; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v135; // [rsp+C4h] [rbp-5Ch]
  struct _FONTOBJ *v136; // [rsp+C8h] [rbp-58h]
  CLIPOBJ *v137; // [rsp+D0h] [rbp-50h]
  int iDComplexity; // [rsp+D8h] [rbp-48h]
  LONG v139; // [rsp+DCh] [rbp-44h]
  struct SURFACE *v140; // [rsp+E0h] [rbp-40h]
  PGLYPHPOS ppgpos; // [rsp+E8h] [rbp-38h] BYREF
  PGLYPHPOS v142; // [rsp+F0h] [rbp-30h] BYREF
  unsigned __int64 v143; // [rsp+F8h] [rbp-28h]
  struct _RECTL *v144; // [rsp+100h] [rbp-20h] BYREF
  struct SURFACE *v145; // [rsp+108h] [rbp-18h]
  struct _POINTL *v146; // [rsp+110h] [rbp-10h]
  struct _BRUSHOBJ *v147; // [rsp+118h] [rbp-8h]
  SURFOBJ *v148; // [rsp+120h] [rbp+0h]
  struct _RECTL *p_rclBkGround; // [rsp+128h] [rbp+8h]
  struct _GLYPHPOS *v150; // [rsp+130h] [rbp+10h] BYREF
  char v151; // [rsp+138h] [rbp+18h]
  int v152; // [rsp+13Ch] [rbp+1Ch]
  RECTL *v153; // [rsp+140h] [rbp+20h]
  _DWORD *v154; // [rsp+148h] [rbp+28h]
  __int128 v155; // [rsp+150h] [rbp+30h] BYREF
  __int128 v156; // [rsp+160h] [rbp+40h]
  _OWORD v157[21]; // [rsp+170h] [rbp+50h] BYREF
  struct _RECTL v158; // [rsp+2C0h] [rbp+1A0h] BYREF
  __int128 v159; // [rsp+2D0h] [rbp+1B0h] BYREF
  struct _RECTL v160; // [rsp+2E0h] [rbp+1C0h] BYREF
  SURFACE *v161; // [rsp+2F0h] [rbp+1D0h]
  __int64 v162; // [rsp+2F8h] [rbp+1D8h]
  struct _CLIPOBJ *v163; // [rsp+300h] [rbp+1E0h]
  struct _BRUSHOBJ *v164; // [rsp+308h] [rbp+1E8h]
  int v165; // [rsp+310h] [rbp+1F0h]
  _DWORD v166[17]; // [rsp+314h] [rbp+1F4h] BYREF
  struct _FONTOBJ *v167; // [rsp+358h] [rbp+238h]
  _BYTE v168[80]; // [rsp+360h] [rbp+240h] BYREF
  _BYTE v169[80]; // [rsp+3B0h] [rbp+290h] BYREF
  _BYTE v170[80]; // [rsp+400h] [rbp+2E0h] BYREF
  struct _RECTL si128; // [rsp+450h] [rbp+330h] BYREF
  int v172; // [rsp+46Ch] [rbp+34Ch]

  v10 = pstro;
  v144 = prclExtra;
  v11 = pso;
  v147 = pboFore;
  v136 = pfo;
  v133 = pboOpaque;
  pstroa = pstro;
  v148 = pso;
  v153 = prclOpaque;
  v146 = pptlOrg;
  v137 = pco;
  memset(v157, 0, 0x144uLL);
  left = v10->rclBkGround.left;
  top = v10->rclBkGround.top;
  right = v10->rclBkGround.right;
  bottom = v10->rclBkGround.bottom;
  v16 = 0;
  v158.left = left;
  v158.top = top;
  v158.right = right;
  v158.bottom = bottom;
  v142 = 0LL;
  v134 = 0;
  v135 = 0;
  v128 = 0;
  v159 = 0LL;
  v145 = 0LL;
  v160 = 0LL;
  p_rclBkGround = &v10->rclBkGround;
  if ( !v10->ulCharInc )
  {
    pgp = v10->pgp;
    cGlyphs = v10->cGlyphs;
    ppgpos = pgp;
    pc = cGlyphs;
    if ( !pgp )
    {
      *(_QWORD *)&v10[1].cGlyphs = 0LL;
      v16 = 1;
    }
    if ( v16 )
      goto LABEL_98;
    while ( 1 )
    {
      for ( i = 0; i < cGlyphs; ++i )
      {
        v20 = &pgp[i];
        pgb = v20->pgdf->pgb;
        if ( !pgb )
          goto LABEL_18;
        v22 = pgb->ptlOrigin.x + v20->ptl.x;
        v23 = v22 + pgb->sizlBitmap.cx;
        v24 = pgb->ptlOrigin.y + v20->ptl.y;
        v25 = v24 + pgb->sizlBitmap.cy;
        if ( left == right || top == bottom )
        {
          left = v22;
          v158.left = v22;
          top = v24;
          v158.top = v24;
          right = v23;
          v158.right = v23;
        }
        else
        {
          if ( v22 < left )
          {
            left = v22;
            v158.left = v22;
          }
          if ( v24 < top )
          {
            top = v24;
            v158.top = v24;
          }
          if ( v23 > right )
          {
            right = v23;
            v158.right = v23;
          }
          if ( v25 <= bottom )
            continue;
        }
        v158.bottom = v25;
        bottom = v25;
      }
      v10 = pstroa;
      if ( !v16 )
        break;
LABEL_98:
      v84 = STROBJ_bEnum(v10, &pc, &ppgpos);
      cGlyphs = pc;
      v16 = v84;
      pgp = ppgpos;
    }
LABEL_18:
    v10 = pstroa;
    v16 = 0;
    v11 = v148;
  }
  if ( v11 )
    p_pvScan0 = (signed __int16 *)&v11[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  v140 = (struct SURFACE *)p_pvScan0;
  ppgpos = (PGLYPHPOS)p_pvScan0;
  if ( (v136->flFontType & 0x10000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v78 = *ThreadWin32Thread) != 0 )
      v79 = *(_QWORD *)(v78 + 304);
    else
      v79 = *((_QWORD *)p_pvScan0 + 13);
    if ( v79 )
      v145 = *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v79 + 48LL) + 2528LL);
    else
      v145 = (struct SURFACE *)p_pvScan0;
    if ( p_pvScan0[50] )
    {
      v16 = 16;
      v128 = 16;
    }
    bottom = v158.bottom;
    right = v158.right;
    top = v158.top;
    left = v158.left;
    if ( _bittest16(p_pvScan0 + 51, 8u) )
      v128 = v16 | 0x80;
  }
  flFontType = v136->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v137 )
    iDComplexity = v137->iDComplexity;
  else
    iDComplexity = 0;
  v129 = -1;
  iSolidColor = -1;
  pc = v147->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *((_DWORD *)p_pvScan0 + 24) != 3 )
      goto LABEL_91;
    if ( (unsigned int)bUMPDSecurityGateEx() && !v133 )
    {
      if ( gfUMPDDebug )
        DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 639);
      return 0;
    }
    if ( v133->iSolidColor != -1 )
    {
LABEL_91:
      v80 = v128 | 8;
      v128 |= 8u;
      v81 = v136->flFontType;
      if ( (v81 & 0x10000000) == 0 )
      {
        if ( (v81 & 0x20000000) == 0 )
        {
          v30 = 4;
          v86 = v10->rclBkGround.right;
          v31 = v10->rclBkGround.left;
          v32 = (((v86 + 8) >> 1) & 0xFFFFFFFC) - ((v31 >> 1) & 0xFFFFFFFC);
          v29 = pstroa->rclBkGround.right;
          goto LABEL_27;
        }
        v32 = v135;
        v30 = v135;
        goto LABEL_95;
      }
      v82 = v10->rclBkGround.right;
      v128 = v80 | 0x20;
      v30 = 8;
      if ( v82 <= 2147483643 )
      {
        v83 = v10->rclBkGround.left;
        if ( (unsigned int)(v82 - v83 + 4) < 0x7FFFFFFF )
        {
          v32 = ((v82 + 4) & 0xFFFFFFFC) - (v83 & 0xFFFFFFFC);
LABEL_95:
          v31 = v10->rclBkGround.left;
          v29 = pstroa->rclBkGround.right;
          goto LABEL_27;
        }
      }
    }
    return 0;
  }
  v29 = v10->rclBkGround.right;
  v30 = 1;
  v31 = v10->rclBkGround.left;
  v32 = (int)(((v29 + 32) & 0xFFFFFFE0) - (v31 & 0xFFFFFFE0)) >> 3;
LABEL_27:
  v33 = ((v30 * (v31 - left) + 31) >> 3) & 0x1FFFFFFC;
  v34 = v33 + (((v30 * (right - v29) + 31) >> 3) & 0x1FFFFFFC) + v32;
  v35 = v34 * (unsigned __int64)(unsigned int)(bottom - top);
  v135 = v34;
  v143 = v35;
  if ( v35 > 0xFFFFFFFF )
    return 0;
  if ( (unsigned int)v35 >= 0x10000 )
  {
    v127 = 0;
    v36 = EngAllocUserMem((unsigned int)v35, 0x6F746547u);
  }
  else
  {
    v127 = 1;
    v36 = (_DWORD *)AllocThreadBufferWithTag((unsigned int)v35, 1869899079LL, 32LL);
  }
  v154 = v36;
  v37 = v36;
  if ( !v36 )
    return 0;
  v38 = pstroa;
  v39 = v33;
  flAccel = pstroa->flAccel;
  v41 = v135 * (pstroa->rclBkGround.top - top);
  v42 = v128;
  v43 = (unsigned __int8 *)v37 + v41 + v39;
  if ( (flAccel & 0xA) == 2 )
  {
    v44 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v44 = 4;
    v45 = 0;
    if ( (flAccel & 0x11) != 0x11 )
      v45 = 2;
    v42 = (pstroa->ulCharInc != 0) | v45 | v44 | v128;
    v128 = v42;
  }
  v46 = p_pvScan0[50] == 0;
  v161 = (SURFACE *)p_pvScan0;
  if ( v46 )
    v162 = *((_QWORD *)p_pvScan0 + 9);
  else
    v162 = 0LL;
  v47 = v153;
  v164 = v133;
  v167 = v136;
  v163 = v137;
  v165 = 0;
  if ( v153 )
  {
    v48 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v48 && (v50 = *v48) != 0 )
    {
      v51 = *(_QWORD *)(v50 + 40);
      v46 = v51 == v50 + 40;
      v52 = v133;
      if ( !v46 )
      {
        v92 = v51 - 40;
        if ( v92 )
        {
          if ( (*(_DWORD *)(v92 + 412) & 0x100) != 0 && *(_DWORD *)(v92 + 420) && !v133 )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n",
                857);
            if ( v127 )
              FreeThreadBufferWithTag(v37);
            else
              EngFreeUserMem(v37);
            v71 = 0;
            goto LABEL_72;
          }
        }
      }
    }
    else
    {
      v52 = v133;
    }
    iSolidColor = v52->iSolidColor;
    v129 = v52->iSolidColor;
    if ( v52->iSolidColor == -1 || pc == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)p_pvScan0,
        v136,
        v42,
        v49,
        (struct _SURFOBJ *)v120,
        v137,
        v121,
        v47,
        v122,
        v123,
        v52,
        v146,
        v125);
      v38 = pstroa;
      v58 = p_rclBkGround;
    }
    else
    {
      v38 = pstroa;
      v53 = v47->top;
      v54 = v47->left;
      v55 = pstroa->rclBkGround.top;
      if ( v55 > v53 )
      {
        v166[4 * v165] = v54;
        v166[4 * v165 + 1] = v53;
        v166[4 * v165 + 2] = v47->right;
        v166[4 * v165 + 3] = v55;
        v56 = ++v165;
      }
      else
      {
        v56 = v165;
      }
      v57 = v38->rclBkGround.left;
      v58 = &v38->rclBkGround;
      v59 = v38->rclBkGround.bottom;
      if ( v57 > v54 )
      {
        v166[4 * v56] = v54;
        v166[4 * v165 + 1] = v55;
        v166[4 * v165 + 2] = v57;
        v166[4 * v165 + 3] = v59;
        v56 = ++v165;
      }
      v60 = v38->rclBkGround.right;
      v61 = v47->right;
      if ( v60 < v61 )
      {
        v166[4 * v56] = v60;
        v166[4 * v165 + 1] = v55;
        v166[4 * v165 + 2] = v61;
        v166[4 * v165 + 3] = v59;
        v56 = ++v165;
      }
      v62 = v153->bottom;
      if ( v59 < v62 )
      {
        v166[4 * v56] = v54;
        v166[4 * v165 + 1] = v59;
        v166[4 * v165 + 2] = v61;
        v166[4 * v165++ + 3] = v62;
      }
    }
  }
  else
  {
    v58 = &pstroa->rclBkGround;
  }
  v150 = 0LL;
  v151 = 0;
  v152 = 0;
  LODWORD(v133) = v42 & 0x10;
  v155 = 0LL;
  v156 = 0LL;
  if ( (v42 & 0x10) != 0 )
  {
    v93 = v38->rclBkGround.top;
    v94 = v42;
    v95 = v140;
    LODWORD(v155) = *((_DWORD *)v140 + 24);
    v96 = v58->left & ((v94 >> 3) & 4 | 0xFFFFFFF8);
    v97 = v38->rclBkGround.right - v96;
    v139 = v93;
    DWORD1(v155) = v97;
    v98 = v38->rclBkGround.bottom - v93;
    *(_QWORD *)&v156 = 0LL;
    v46 = (*((_DWORD *)v140 + 28) & 0x40000) == 0;
    DWORD2(v155) = v98;
    v99 = 1;
    if ( !v46 )
      v99 = 262145;
    DWORD2(v156) = v99;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v150, (struct _DEVBITMAPINFO *)&v155, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v127 )
        FreeThreadBufferWithTag(v37);
      else
        EngFreeUserMem(v37);
      v71 = 0;
      goto LABEL_71;
    }
    v100 = *((_QWORD *)v95 + 6);
    ppgpos = v150;
    v101 = 0;
    v102 = 0;
    if ( v95 == *(struct SURFACE **)(v100 + 2528) && (*(_DWORD *)(v100 + 40) & 0x20000) != 0 )
    {
      v101 = *(_DWORD *)(v100 + 2560);
      v102 = *(_DWORD *)(v100 + 2564);
    }
    v38 = pstroa;
    v103 = p_rclBkGround->left;
    if ( v101 > p_rclBkGround->left )
      v103 = v101;
    v104 = pstroa->rclBkGround.top;
    v105 = pstroa->rclBkGround.right;
    if ( v102 > v104 )
      v104 = v102;
    v160 = *p_rclBkGround;
    v106 = v148->sizlBitmap.cx + v101;
    LODWORD(v159) = v103;
    if ( v106 < v105 )
      v105 = v106;
    *(_QWORD *)((char *)&v159 + 4) = __PAIR64__(v105, v104);
    v107 = v102 + v148->sizlBitmap.cy;
    v108 = pstroa->rclBkGround.bottom;
    if ( v107 < v108 )
      v108 = v107;
    HIDWORD(v159) = v108;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v159, &v137->rclBounds) )
      {
        if ( v127 )
          goto LABEL_69;
        goto LABEL_160;
      }
      v108 = HIDWORD(v159);
      v105 = DWORD2(v159);
      v104 = DWORD1(v159);
      v103 = v159;
      v38 = pstroa;
    }
    v160.right = DWORD2(v159) - v96;
    v160.left = v103 - v96;
    v160.top = DWORD1(v159) - v139;
    v160.bottom = HIDWORD(v159) - v139;
    if ( iSolidColor == -1 && v103 < v105 && v104 < v108 )
    {
      v109 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v168, v95, v136, v109);
      if ( (*((_DWORD *)v95 + 28) & 0x400) != 0 )
        v110 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v100 + 2816);
      else
        v110 = EngCopyBits;
      v111 = v150 + 1;
      if ( !v150 )
        v111 = 0LL;
      ((void (__fastcall *)(struct _GLYPHPOS *, char *, _QWORD, XLATEOBJ *const, struct _RECTL *, __int128 *))v110)(
        v111,
        (char *)v95 + 24,
        0LL,
        xloIdent,
        &v160,
        &v159);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v168);
      v38 = pstroa;
      LODWORD(v35) = v143;
      *(_QWORD *)&pstroa[1].cGlyphs = 0LL;
      goto LABEL_59;
    }
    LODWORD(v35) = v143;
  }
  *(_QWORD *)&v38[1].cGlyphs = 0LL;
  if ( iSolidColor != -1 )
  {
    v63 = v37;
    v64 = (unsigned __int64)(unsigned int)v35 >> 2;
    if ( v64 )
    {
      if ( ((unsigned __int8)v37 & 4) == 0 )
        goto LABEL_57;
      *v37 = 0;
      if ( --v64 )
      {
        v63 = v37 + 1;
LABEL_57:
        memset(v63, 0, 8 * (v64 >> 1));
        if ( (v64 & 1) != 0 )
          *((_DWORD *)v63 + v64 - 1) = 0;
      }
    }
  }
LABEL_59:
  v65 = v129;
  do
  {
    if ( v65 == -1 )
    {
      v75 = v37;
      v76 = (unsigned __int64)(unsigned int)v35 >> 2;
      if ( v76 )
      {
        if ( ((unsigned __int8)v37 & 4) != 0 )
        {
          *v37 = 0;
          if ( !--v76 )
            goto LABEL_61;
          v75 = v37 + 1;
        }
        memset(v75, 0, 8 * (v76 >> 1));
        if ( (v76 & 1) != 0 )
          *((_DWORD *)v75 + v76 - 1) = 0;
      }
    }
LABEL_61:
    v66 = v38->pgp;
    if ( v66 )
    {
      v67 = v38->cGlyphs;
      v68 = 0;
      v134 = v38->cGlyphs;
      v142 = v66;
      v130 = 0;
    }
    else
    {
      if ( ((__int64)v38[4].pwszOrg & 2) != 0 )
        v85 = STROBJ_bEnum(v38, &v134, &v142);
      else
        v85 = STROBJ_bEnumCheckBounds(v38, &v134, &v142, &v158);
      v38 = pstroa;
      v67 = v134;
      v68 = v85;
      v66 = v142;
      v130 = v85;
    }
    if ( v67 )
    {
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v172 = 0;
      switch ( iDComplexity )
      {
        case 0:
          goto LABEL_65;
        case 1:
          si128 = v137->rclBounds;
LABEL_65:
          v69 = v66;
          v70 = v140;
          vExpandAndCopyText(
            v140,
            v136,
            v69,
            v67,
            v43,
            v135,
            v38->ulCharInc,
            (struct SURFACE *)ppgpos,
            v145,
            &v38->rclBkGround,
            v124,
            pc,
            v65,
            v128,
            &si128,
            v144,
            v126,
            v147,
            v146);
          goto LABEL_66;
        case 3:
          v87 = v137;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v137, 0, 0, 4u, 0);
          v88 = v140;
          v89 = pc;
          do
          {
            v90 = XCLIPOBJ::bEnum((XCLIPOBJ *)v87, 0x134u, v157, 0LL);
            v91 = v136;
            LODWORD(v157[LODWORD(v157[0]) + 1]) = 0;
            vExpandAndCopyText(
              v88,
              v91,
              v66,
              v67,
              v43,
              v135,
              pstroa->ulCharInc,
              (struct SURFACE *)ppgpos,
              v145,
              p_rclBkGround,
              v124,
              v89,
              v65,
              v128,
              (struct _RECTL *)((char *)v157 + 4),
              v144,
              v126,
              v147,
              v146);
            v46 = v90 == 0;
            v87 = v137;
          }
          while ( !v46 );
          v37 = v154;
          v68 = v130;
          break;
      }
    }
    v70 = v140;
LABEL_66:
    LODWORD(v35) = v143;
    v38 = pstroa;
  }
  while ( v68 );
  if ( (_DWORD)v133 )
  {
    v112 = *((_QWORD *)v70 + 6);
    v113 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v169, v70, v136, v113);
    if ( (*((_DWORD *)v70 + 28) & 0x400) != 0 )
      v114 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v112 + 2816);
    else
      v114 = EngCopyBits;
    v115 = v150 + 1;
    if ( !v150 )
      v115 = 0LL;
    ((void (__fastcall *)(char *, struct _GLYPHPOS *, CLIPOBJ *, _QWORD, __int128 *, struct _RECTL *))v114)(
      (char *)v70 + 24,
      v115,
      v137,
      0LL,
      &v159,
      &v160);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v169);
  }
  if ( v127 )
  {
LABEL_69:
    FreeThreadBufferWithTag(v37);
    goto LABEL_70;
  }
LABEL_160:
  EngFreeUserMem(v37);
LABEL_70:
  v71 = 1;
LABEL_71:
  SURFMEM::~SURFMEM((SURFMEM *)&v150);
LABEL_72:
  if ( v162 )
  {
    v72 = v165 - 1 < 0;
    for ( j = --v165; !v72; --v165 )
    {
      vDIBSolidBlt(v161, (struct _RECTL *)&v166[4 * j], v163, v164->iSolidColor, 0);
      v72 = v165 - 1 < 0;
      j = v165 - 1;
    }
    return v71;
  }
  else
  {
    v116 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v170, v161, v167, v116);
    v144 = 0LL;
    v117 = (char *)v161 + 24;
    if ( !v161 )
      v117 = 0LL;
    v118 = v166;
    for ( k = SURFACE::pfnBitBlt(v161); v118 < &v166[4 * v165]; v118 += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _RECTL **, int))k)(
        v117,
        0LL,
        0LL,
        v163,
        0LL,
        v118,
        0LL,
        0LL,
        v164,
        &v144,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v170);
    return v71;
  }
}
