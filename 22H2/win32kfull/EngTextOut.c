/*
 * XREFs of EngTextOut @ 0x1C00CB720
 * Callers:
 *     NtGdiEngTextOut @ 0x1C013BC80 (NtGdiEngTextOut.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0295CD0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029A470 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029D140 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A4C00 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00B9DA0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00CC220 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00CC7C4 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C00CCB34 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C00CCDA0 (STROBJ_bEnum.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE400 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CF858 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C016B0BC (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C016B13C (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C028F9AC (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
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
  PVOID *p_pvScan0; // r12
  FLONG flFontType; // eax
  ULONG v28; // r13d
  LONG v29; // ecx
  unsigned int v30; // r8d
  int v31; // edi
  unsigned int v32; // edx
  unsigned int v33; // edi
  unsigned int v34; // edx
  unsigned __int64 v35; // r15
  _DWORD *v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // r14
  STROBJ *v39; // r11
  FLONG flAccel; // edx
  unsigned __int8 *v41; // rbx
  int v42; // ecx
  int v43; // eax
  bool v44; // zf
  RECTL *v45; // rdi
  struct _KTHREAD *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 *v50; // rax
  __int64 v51; // rdx
  struct _SURFOBJ *v52; // r9
  __int64 v53; // rax
  __int64 v54; // rcx
  struct _BRUSHOBJ *v55; // rax
  LONG v56; // ecx
  LONG v57; // r9d
  LONG v58; // r8d
  int v59; // eax
  LONG v60; // ecx
  struct _RECTL *v61; // r10
  LONG v62; // edx
  LONG v63; // ecx
  LONG v64; // edi
  LONG v65; // ecx
  unsigned int v66; // r9d
  void *v67; // r8
  unsigned __int64 v68; // rdx
  ULONG v69; // r12d
  struct _GLYPHPOS *v70; // rsi
  unsigned int v71; // r15d
  ULONG v72; // r13d
  struct _GLYPHPOS *v73; // r8
  struct SURFACE *v74; // rsi
  __int64 v75; // rdx
  BOOL v76; // r14d
  bool v77; // sf
  int j; // eax
  void *v80; // r8
  unsigned __int64 v81; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v87; // rax
  PVOID v88; // rax
  int v89; // ecx
  FLONG v90; // eax
  int v91; // edx
  LONG v92; // ecx
  BOOL v93; // eax
  ULONG v94; // eax
  LONG v95; // edx
  CLIPOBJ *v96; // rdi
  struct SURFACE *v97; // r14
  int v98; // r13d
  int v99; // edi
  struct _FONTOBJ *v100; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v103; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v105; // rax
  int v106; // edi
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rcx
  LONG v110; // ecx
  struct SURFACE *v111; // rsi
  unsigned int v112; // r15d
  unsigned int v113; // eax
  int v114; // eax
  int v115; // eax
  __int64 v116; // rdx
  LONG v117; // ecx
  LONG v118; // r10d
  __int64 v119; // rdi
  LONG v120; // edx
  LONG v121; // r9d
  LONG v122; // r8d
  int v123; // ecx
  LONG v124; // ecx
  LONG v125; // r10d
  int v126; // eax
  BOOL (__stdcall *v127)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v128; // rcx
  __int64 v129; // rdi
  int v130; // eax
  BOOL (__stdcall *v131)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v132; // rdx
  int v133; // eax
  char *v134; // rbx
  _DWORD *v135; // rdi
  int (*k)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  unsigned __int8 *v137; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v138; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v139; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v140; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v141; // [rsp+50h] [rbp-D0h]
  unsigned int v142; // [rsp+60h] [rbp-C0h]
  unsigned int v143; // [rsp+80h] [rbp-A0h]
  char v144; // [rsp+A0h] [rbp-80h]
  unsigned int v145; // [rsp+A4h] [rbp-7Ch]
  ULONG pc; // [rsp+A8h] [rbp-78h] BYREF
  STROBJ *pstroa; // [rsp+B0h] [rbp-70h]
  struct _BRUSHOBJ *v148; // [rsp+B8h] [rbp-68h]
  ULONG v149; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v150; // [rsp+C4h] [rbp-5Ch]
  struct _FONTOBJ *v151; // [rsp+C8h] [rbp-58h]
  CLIPOBJ *v152; // [rsp+D0h] [rbp-50h]
  int iDComplexity; // [rsp+D8h] [rbp-48h]
  int iSolidColor; // [rsp+DCh] [rbp-44h]
  LONG v155; // [rsp+E0h] [rbp-40h]
  struct SURFACE *v156; // [rsp+E8h] [rbp-38h]
  PGLYPHPOS v157; // [rsp+F0h] [rbp-30h] BYREF
  unsigned __int64 v158; // [rsp+F8h] [rbp-28h]
  RECTL *v159; // [rsp+100h] [rbp-20h]
  struct SURFACE *v160; // [rsp+108h] [rbp-18h]
  SURFOBJ *v161; // [rsp+110h] [rbp-10h]
  struct _RECTL *p_rclBkGround; // [rsp+118h] [rbp-8h]
  struct _POINTL *v163; // [rsp+120h] [rbp+0h]
  struct _BRUSHOBJ *v164; // [rsp+128h] [rbp+8h]
  struct SURFACE *v165; // [rsp+130h] [rbp+10h]
  struct SURFACE *v166; // [rsp+138h] [rbp+18h] BYREF
  char v167; // [rsp+140h] [rbp+20h]
  int v168; // [rsp+144h] [rbp+24h]
  _DWORD *v169; // [rsp+148h] [rbp+28h]
  struct _RECTL *v170; // [rsp+150h] [rbp+30h]
  __int64 v171; // [rsp+158h] [rbp+38h] BYREF
  PGLYPHPOS ppgpos; // [rsp+160h] [rbp+40h] BYREF
  __int128 v173; // [rsp+168h] [rbp+48h] BYREF
  __int128 v174; // [rsp+178h] [rbp+58h]
  _OWORD v175[21]; // [rsp+190h] [rbp+70h] BYREF
  struct _RECTL v176; // [rsp+2E0h] [rbp+1C0h] BYREF
  __int128 v177; // [rsp+2F0h] [rbp+1D0h] BYREF
  struct _RECTL v178; // [rsp+300h] [rbp+1E0h] BYREF
  SURFACE *v179; // [rsp+310h] [rbp+1F0h]
  PVOID v180; // [rsp+318h] [rbp+1F8h]
  struct _CLIPOBJ *v181; // [rsp+320h] [rbp+200h]
  struct _BRUSHOBJ *v182; // [rsp+328h] [rbp+208h]
  int v183; // [rsp+330h] [rbp+210h]
  _DWORD v184[17]; // [rsp+334h] [rbp+214h] BYREF
  struct _FONTOBJ *v185; // [rsp+378h] [rbp+258h]
  _BYTE v186[80]; // [rsp+380h] [rbp+260h] BYREF
  _BYTE v187[80]; // [rsp+3D0h] [rbp+2B0h] BYREF
  _BYTE v188[80]; // [rsp+420h] [rbp+300h] BYREF
  struct _RECTL si128; // [rsp+470h] [rbp+350h] BYREF
  int v190; // [rsp+48Ch] [rbp+36Ch]

  v10 = pstro;
  v170 = prclExtra;
  v11 = pso;
  v164 = pboFore;
  v151 = pfo;
  v148 = pboOpaque;
  pstroa = pstro;
  v161 = pso;
  v159 = prclOpaque;
  v163 = pptlOrg;
  v152 = pco;
  memset(v175, 0, 0x144uLL);
  left = v10->rclBkGround.left;
  top = v10->rclBkGround.top;
  right = v10->rclBkGround.right;
  bottom = v10->rclBkGround.bottom;
  v16 = 0;
  v176.left = left;
  v176.top = top;
  v176.right = right;
  v176.bottom = bottom;
  v157 = 0LL;
  v149 = 0;
  v150 = 0;
  v145 = 0;
  v177 = 0LL;
  v160 = 0LL;
  v178 = 0LL;
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
      goto LABEL_100;
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
          v176.left = v22;
          top = v24;
          v176.top = v24;
          right = v23;
          v176.right = v23;
        }
        else
        {
          if ( v22 < left )
          {
            left = v22;
            v176.left = v22;
          }
          if ( v24 < top )
          {
            top = v24;
            v176.top = v24;
          }
          if ( v23 > right )
          {
            right = v23;
            v176.right = v23;
          }
          if ( v25 <= bottom )
            continue;
        }
        v176.bottom = v25;
        bottom = v25;
      }
      v10 = pstroa;
      if ( !v16 )
        break;
LABEL_100:
      v93 = STROBJ_bEnum(v10, &pc, &ppgpos);
      cGlyphs = pc;
      v16 = v93;
      pgp = ppgpos;
    }
LABEL_18:
    v10 = pstroa;
    v16 = 0;
    v11 = v161;
  }
  if ( v11 )
    p_pvScan0 = &v11[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  v156 = (struct SURFACE *)p_pvScan0;
  v165 = (struct SURFACE *)p_pvScan0;
  if ( (v151->flFontType & 0x10000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (!(unsigned __int8)KeIsAttachedProcess(0LL)
       || (CurrentProcess = PsGetCurrentProcess(v84, v83, v85),
           ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
           CurrentThreadProcess = PsGetCurrentThreadProcess(v103),
           v44 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
           v10 = pstroa,
           v44))
      && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v87 = *ThreadWin32Thread) != 0 )
    {
      v88 = *(PVOID *)(v87 + 304);
    }
    else
    {
      v88 = p_pvScan0[13];
    }
    if ( v88 )
      v160 = *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v88 + 48LL) + 2552LL);
    else
      v160 = (struct SURFACE *)p_pvScan0;
    if ( *((_WORD *)p_pvScan0 + 50) )
    {
      v16 = 16;
      v145 = 16;
    }
    bottom = v176.bottom;
    right = v176.right;
    top = v176.top;
    left = v176.left;
    if ( (*((_WORD *)p_pvScan0 + 51) & 0x100) != 0 )
      v145 = v16 | 0x80;
  }
  flFontType = v151->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v152 )
    iDComplexity = v152->iDComplexity;
  else
    iDComplexity = 0;
  pc = -1;
  v28 = -1;
  iSolidColor = v164->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *((_DWORD *)p_pvScan0 + 24) != 3 )
      goto LABEL_93;
    if ( (unsigned int)bUMPDSecurityGateEx() && !v148 )
    {
      if ( gfUMPDDebug )
        DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 639);
      return 0;
    }
    if ( v148->iSolidColor != -1 )
    {
LABEL_93:
      v89 = v145 | 8;
      v145 |= 8u;
      v90 = v151->flFontType;
      if ( (v90 & 0x10000000) == 0 )
      {
        if ( (v90 & 0x20000000) == 0 )
        {
          v30 = 4;
          v95 = v10->rclBkGround.right;
          v31 = v10->rclBkGround.left;
          v32 = (((v95 + 8) >> 1) & 0xFFFFFFFC) - ((v31 >> 1) & 0xFFFFFFFC);
          v29 = pstroa->rclBkGround.right;
          goto LABEL_27;
        }
        v32 = v150;
        v30 = v150;
        goto LABEL_97;
      }
      v91 = v10->rclBkGround.right;
      v145 = v89 | 0x20;
      v30 = 8;
      if ( v91 <= 2147483643 )
      {
        v92 = v10->rclBkGround.left;
        if ( (unsigned int)(v91 - v92 + 4) < 0x7FFFFFFF )
        {
          v32 = ((v91 + 4) & 0xFFFFFFFC) - (v92 & 0xFFFFFFFC);
LABEL_97:
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
  v150 = v34;
  v158 = v35;
  if ( v35 > 0xFFFFFFFF )
    return 0;
  if ( (unsigned int)v35 >= 0x10000 )
  {
    v144 = 0;
    v36 = EngAllocUserMem((unsigned int)v35, 0x6F746547u);
  }
  else
  {
    v144 = 1;
    v36 = (_DWORD *)AllocThreadBufferWithTag((unsigned int)v35, 1869899079LL, 32LL, 0xFFFFFFFFLL);
  }
  v169 = v36;
  v38 = v36;
  if ( !v36 )
    return 0;
  v39 = pstroa;
  flAccel = pstroa->flAccel;
  v41 = (unsigned __int8 *)v36 + v150 * (pstroa->rclBkGround.top - top) + v33;
  if ( (flAccel & 0xA) == 2 )
  {
    v42 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v42 = 4;
    v43 = 0;
    if ( (flAccel & 0x11) != 0x11 )
      v43 = 2;
    v37 = (pstroa->ulCharInc != 0) | v43 | (unsigned int)v42;
    v145 |= v37;
  }
  v44 = *((_WORD *)p_pvScan0 + 50) == 0;
  v179 = (SURFACE *)p_pvScan0;
  if ( v44 )
    v180 = p_pvScan0[9];
  else
    v180 = 0LL;
  v45 = v159;
  v182 = v148;
  v185 = v151;
  v181 = v152;
  v183 = 0;
  if ( v159 )
  {
    v46 = KeGetCurrentThread();
    if ( (!(unsigned __int8)KeIsAttachedProcess(v37)
       || (v105 = PsGetCurrentProcess(v48, v47, v49),
           v106 = PsGetProcessSessionIdEx(v105),
           v108 = PsGetCurrentThreadProcess(v107),
           v44 = v106 == (unsigned int)PsGetProcessSessionIdEx(v108),
           v45 = v159,
           v44))
      && (v50 = (__int64 *)PsGetThreadWin32Thread(v46)) != 0LL
      && (v53 = *v50) != 0 )
    {
      v54 = *(_QWORD *)(v53 + 40);
      v44 = v54 == v53 + 40;
      v55 = v148;
      if ( !v44 )
      {
        v109 = v54 - 40;
        if ( v109 )
        {
          if ( (*(_DWORD *)(v109 + 412) & 0x100) != 0 && *(_DWORD *)(v109 + 420) && !v148 )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n",
                857);
            if ( v144 )
              FreeThreadBufferWithTag(v38, v51);
            else
              EngFreeUserMem(v38);
            v76 = 0;
            goto LABEL_73;
          }
        }
      }
    }
    else
    {
      v55 = v148;
    }
    v28 = v55->iSolidColor;
    pc = v28;
    if ( v28 == -1 || iSolidColor == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)p_pvScan0,
        v151,
        v145,
        v52,
        (struct _SURFOBJ *)v137,
        v152,
        v138,
        v45,
        v139,
        (struct _POINTL *)v140,
        v55,
        v163,
        v142);
      v39 = pstroa;
      v61 = p_rclBkGround;
    }
    else
    {
      v39 = pstroa;
      v56 = v45->top;
      v57 = v45->left;
      v58 = pstroa->rclBkGround.top;
      if ( v58 > v56 )
      {
        v184[4 * v183] = v57;
        v184[4 * v183 + 1] = v56;
        v184[4 * v183 + 2] = v45->right;
        v184[4 * v183 + 3] = v58;
        v59 = ++v183;
      }
      else
      {
        v59 = v183;
      }
      v60 = v39->rclBkGround.left;
      v61 = &v39->rclBkGround;
      v62 = v39->rclBkGround.bottom;
      if ( v60 > v57 )
      {
        v184[4 * v59] = v57;
        v184[4 * v183 + 1] = v58;
        v184[4 * v183 + 2] = v60;
        v184[4 * v183 + 3] = v62;
        v59 = ++v183;
      }
      v63 = v39->rclBkGround.right;
      v64 = v45->right;
      if ( v63 < v64 )
      {
        v184[4 * v59] = v63;
        v184[4 * v183 + 1] = v58;
        v184[4 * v183 + 2] = v64;
        v184[4 * v183 + 3] = v62;
        v59 = ++v183;
      }
      v65 = v159->bottom;
      if ( v62 < v65 )
      {
        v184[4 * v59] = v57;
        v184[4 * v183 + 1] = v62;
        v184[4 * v183 + 2] = v64;
        v184[4 * v183++ + 3] = v65;
      }
    }
  }
  else
  {
    v61 = &pstroa->rclBkGround;
  }
  v66 = v145;
  v166 = 0LL;
  v167 = 0;
  v168 = 0;
  LODWORD(v148) = v145 & 0x10;
  v173 = 0LL;
  v174 = 0LL;
  if ( (v145 & 0x10) != 0 )
  {
    v110 = v39->rclBkGround.top;
    v111 = v156;
    LODWORD(v173) = *((_DWORD *)v156 + 24);
    v112 = v61->left & ((v145 >> 3) & 4 | 0xFFFFFFF8);
    v113 = v39->rclBkGround.right - v112;
    v155 = v110;
    DWORD1(v173) = v113;
    v114 = v39->rclBkGround.bottom - v110;
    *(_QWORD *)&v174 = 0LL;
    v44 = (*((_DWORD *)v156 + 28) & 0x40000) == 0;
    DWORD2(v173) = v114;
    v115 = 1;
    if ( !v44 )
      v115 = 262145;
    DWORD2(v174) = v115;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v166, (struct _DEVBITMAPINFO *)&v173, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v144 )
        FreeThreadBufferWithTag(v38, v116);
      else
        EngFreeUserMem(v38);
      v76 = 0;
      goto LABEL_72;
    }
    v117 = 0;
    v118 = 0;
    v165 = v166;
    v119 = *((_QWORD *)v111 + 6);
    if ( v111 == *(struct SURFACE **)(v119 + 2552) && (*(_DWORD *)(v119 + 40) & 0x20000) != 0 )
    {
      v117 = *(_DWORD *)(v119 + 2584);
      v118 = *(_DWORD *)(v119 + 2588);
    }
    v39 = pstroa;
    v120 = p_rclBkGround->left;
    if ( v117 > p_rclBkGround->left )
      v120 = v117;
    v121 = pstroa->rclBkGround.top;
    v122 = pstroa->rclBkGround.right;
    if ( v118 > v121 )
      v121 = v118;
    v178 = *p_rclBkGround;
    v123 = v161->sizlBitmap.cx + v117;
    LODWORD(v177) = v120;
    if ( v123 < v122 )
      v122 = v123;
    *(_QWORD *)((char *)&v177 + 4) = __PAIR64__(v122, v121);
    v124 = v118 + v161->sizlBitmap.cy;
    v125 = pstroa->rclBkGround.bottom;
    if ( v124 < v125 )
      v125 = v124;
    HIDWORD(v177) = v125;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v177, &v152->rclBounds) )
        goto LABEL_69;
      v125 = HIDWORD(v177);
      v122 = DWORD2(v177);
      v121 = DWORD1(v177);
      v120 = v177;
      v39 = pstroa;
    }
    v178.right = DWORD2(v177) - v112;
    v178.left = v120 - v112;
    v178.top = DWORD1(v177) - v155;
    v178.bottom = HIDWORD(v177) - v155;
    if ( v28 == -1 && v120 < v122 && v121 < v125 )
    {
      v126 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v186, v111, v151, v126);
      if ( (*((_DWORD *)v111 + 28) & 0x400) != 0 )
        v127 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v119 + 2840);
      else
        v127 = EngCopyBits;
      v128 = (char *)v166 + 24;
      if ( !v166 )
        v128 = 0LL;
      ((void (__fastcall *)(char *, char *, _QWORD, XLATEOBJ *const, struct _RECTL *, __int128 *))v127)(
        v128,
        (char *)v111 + 24,
        0LL,
        xloIdent,
        &v178,
        &v177);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v186);
      v39 = pstroa;
    }
    v66 = v145;
    LODWORD(v35) = v158;
  }
  *(_QWORD *)&v39[1].cGlyphs = 0LL;
  if ( v28 == -1 )
    goto LABEL_60;
  v67 = v38;
  v68 = (unsigned __int64)(unsigned int)v35 >> 2;
  if ( !v68 )
    goto LABEL_60;
  if ( ((unsigned __int8)v38 & 4) == 0 )
    goto LABEL_58;
  *v38 = 0;
  if ( --v68 )
  {
    v67 = v38 + 1;
LABEL_58:
    memset(v67, 0, 8 * (v68 >> 1));
    if ( (v68 & 1) != 0 )
      *((_DWORD *)v67 + v68 - 1) = 0;
  }
LABEL_60:
  v69 = pc;
  do
  {
    if ( v69 == -1 )
    {
      v80 = v38;
      v81 = (unsigned __int64)(unsigned int)v35 >> 2;
      if ( v81 )
      {
        if ( ((unsigned __int8)v38 & 4) != 0 )
        {
          *v38 = 0;
          if ( !--v81 )
            goto LABEL_62;
          v80 = v38 + 1;
        }
        memset(v80, 0, 8 * (v81 >> 1));
        if ( (v81 & 1) != 0 )
          *((_DWORD *)v80 + v81 - 1) = 0;
      }
    }
LABEL_62:
    v70 = v39->pgp;
    if ( v70 )
    {
      v71 = v39->cGlyphs;
      v72 = 0;
      v149 = v39->cGlyphs;
      v157 = v70;
      pc = 0;
    }
    else
    {
      if ( ((__int64)v39[4].pwszOrg & 2) != 0 )
        v94 = STROBJ_bEnum(v39, &v149, &v157);
      else
        v94 = STROBJ_bEnumCheckBounds(v39, &v149, &v157, &v176);
      v66 = v145;
      v39 = pstroa;
      v72 = v94;
      v71 = v149;
      v70 = v157;
      pc = v94;
    }
    if ( v71 )
    {
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v190 = 0;
      switch ( iDComplexity )
      {
        case 0:
          goto LABEL_66;
        case 1:
          si128 = v152->rclBounds;
LABEL_66:
          v73 = v70;
          v74 = v156;
          vExpandAndCopyText(
            v156,
            v151,
            v73,
            v71,
            v41,
            v150,
            v39->ulCharInc,
            v165,
            v160,
            &v39->rclBkGround,
            v141,
            iSolidColor,
            v69,
            v66,
            &si128,
            v170,
            v143,
            v164,
            v163);
          goto LABEL_67;
        case 3:
          v96 = v152;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v152, 0, 0, 4u, 0);
          v97 = v156;
          v98 = iSolidColor;
          do
          {
            v99 = XCLIPOBJ::bEnum((XCLIPOBJ *)v96, 0x134u, v175, 0LL);
            v100 = v151;
            LODWORD(v175[LODWORD(v175[0]) + 1]) = 0;
            vExpandAndCopyText(
              v97,
              v100,
              v70,
              v71,
              v41,
              v150,
              pstroa->ulCharInc,
              v165,
              v160,
              p_rclBkGround,
              v141,
              v98,
              v69,
              v145,
              (struct _RECTL *)((char *)v175 + 4),
              v170,
              v143,
              v164,
              v163);
            v44 = v99 == 0;
            v96 = v152;
          }
          while ( !v44 );
          v38 = v169;
          v72 = pc;
          break;
      }
    }
    v74 = v156;
LABEL_67:
    LODWORD(v35) = v158;
    v75 = 0xFFFFFFFFLL;
    v39 = pstroa;
    v66 = v145;
  }
  while ( v72 );
  if ( (_DWORD)v148 )
  {
    v129 = *((_QWORD *)v74 + 6);
    v130 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v187, v74, v151, v130);
    if ( (*((_DWORD *)v74 + 28) & 0x400) != 0 )
      v131 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v129 + 2840);
    else
      v131 = EngCopyBits;
    v132 = (char *)v166 + 24;
    if ( !v166 )
      v132 = 0LL;
    ((void (__fastcall *)(char *, char *, CLIPOBJ *, _QWORD, __int128 *, struct _RECTL *))v131)(
      (char *)v74 + 24,
      v132,
      v152,
      0LL,
      &v177,
      &v178);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v187);
  }
LABEL_69:
  if ( v144 )
    FreeThreadBufferWithTag(v38, v75);
  else
    EngFreeUserMem(v38);
  v76 = 1;
LABEL_72:
  SURFMEM::~SURFMEM((SURFMEM *)&v166);
LABEL_73:
  if ( v180 )
  {
    v77 = v183 - 1 < 0;
    for ( j = --v183; !v77; --v183 )
    {
      vDIBSolidBlt(v179, (struct _RECTL *)&v184[4 * j], v181, v182->iSolidColor, 0);
      v77 = v183 - 1 < 0;
      j = v183 - 1;
    }
    return v76;
  }
  else
  {
    v133 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v188, v179, v185, v133);
    v171 = 0LL;
    v134 = (char *)v179 + 24;
    if ( !v179 )
      v134 = 0LL;
    v135 = v184;
    for ( k = SURFACE::pfnBitBlt(v179); v135 < &v184[4 * v183]; v135 += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, __int64 *, int))k)(
        v134,
        0LL,
        0LL,
        v181,
        0LL,
        v135,
        0LL,
        0LL,
        v182,
        &v171,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v188);
    return v76;
  }
}
